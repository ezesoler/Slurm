package com.slurm;

import motion.easing.*;
import openfl.display.Sprite;
import openfl.utils.Object;
import motion.Actuate;

/**
 * ...
 * @author Ezequiel Soler
 */
class Screen extends Sprite
{
	public var assets:Object = { };
	private var scriptObjects:Xml = null;
	private var scriptTweens:Xml = null;
	
	public function new(script:Xml = null) 
	{
		super();
		trace(script.get('name') + " active.");
		for( screenData in script.elements() ) {
			if (screenData.nodeName == "objects") {
				scriptObjects = screenData;
			}
			else if (screenData.nodeName == "tweens") {
				scriptTweens = screenData;
			}
		}
		for ( objectData in scriptObjects.elementsNamed("object") ) {
			var asset:Asset = new Asset(objectData);
			addChild(asset);
			Reflect.setField(assets, asset.name, asset);
		}
		tweenTime("in");
	}
	
	private function tweenTime(time:String = "in") {
		var dataTw:Xml = null;
		for ( tweenData in scriptTweens.elements() ) {
			if (tweenData.nodeName == time) {
				dataTw = tweenData;
			}
		}
		for ( twData in dataTw.elementsNamed("tween") ) {
			var propTwArr = twData.get("properties").split(",");
			var propTwObj:Object = { };
			for ( propTw in propTwArr ) {
				var pTw = propTw.split(':');
				if (twData.get("destination") == "from") {
					if (pTw[0] == "x" || pTw[0] == "y") {
						Reflect.setProperty(propTwObj, pTw[0], Reflect.getProperty(getAsset(twData.get("target")),pTw[0]));
						Reflect.setProperty(getAsset(twData.get("target")), pTw[0],pTw[1]);
					}else {
						Reflect.setProperty(getAsset(twData.get("target")), pTw[0], 0);
						Reflect.setProperty(propTwObj, pTw[0], Std.parseFloat(pTw[1]));
					}
				}else {
					Reflect.setProperty(propTwObj, pTw[0], Std.parseFloat(pTw[1]));
				}
			}
			var easeArr = ["Expo","easeOut"];
			if (twData.exists('ease')) {
				easeArr = twData.get("ease").split(".");
			}
			Actuate.tween(getAsset(twData.get("target")), Std.parseFloat(twData.get("duration")), propTwObj ).delay(Std.parseFloat(twData.get("delay"))).ease (Reflect.getProperty(Type.resolveClass("motion.easing."+easeArr[0]),easeArr[1]));
		}
	}
	
	public function getAsset(name:String = ""):Asset {
		return Reflect.field(assets, name);
	}
	
}