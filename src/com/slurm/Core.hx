package com.slurm;

import openfl.Assets;
import openfl.display.Sprite;
import openfl.display.StageScaleMode;
import openfl.errors.Error;
import openfl.events.Event;
import openfl.Lib;

/**
 * ...
 * @author Ezequiel Soler
 */
class Core extends Sprite
{
	private var dataXml:Xml;
	private var debugMode:Bool = false;
	public var screen:Screen;
	private var screenXdefault:Int = 0;
	private var screenYdefault:Int = 0;
	
	public function new() 
	{
		super();
		try {
			dataXml = Xml.parse(Assets.getText("assets/script.xml")).firstElement();
			trace('Slurm status: OK');
			trace("-----------------");
			debugMode = dataXml.get("debug") == "true" ? true : false;
			if(dataXml.get("lan") != ""){
				GlobalData.lan = dataXml.get("lan");
			}
			if(debugMode){
				trace('Debug mode: ON');
				trace("-----------------");
			}else{
				trace('Debug mode: OFF');
				trace("-----------------");
			}
			trace('List of screens:');
			for( screenData in dataXml.elementsNamed("screen") ) {
				trace(screenData.get("name"));
			}
			trace("-----------------");
			trace("Screen Width: "+stage.stageWidth);
			trace("Screen Height: "+stage.stageHeight);
			trace("-----------------");
			showScreen();
			Lib.current.stage.addEventListener(Event.RESIZE, resize);
			resize(null);
		}catch (error:Error) {
			trace("ERROR #01: Archivo base Slurm mal formado o defectuoso.");
			trace('Slurm status: FATAL ERROR');
		}
	}
	
	public function showScreen(idScreen:Int = 0)
	{
		if (screen != null)
		{
			trace(screen.name+" desactive");
			trace("-----------------");
			removeChild(screen);
			screen = null;
		}
		try {
			for( screenData in dataXml.elementsNamed("screen") ) {
				if (Std.parseInt(screenData.get("id")) == idScreen) {
					var screenReference = Type.resolveClass("com." + screenData.get("name"));
					screen = Type.createInstance(screenReference,[screenData]);
					screen.x = screenXdefault;
					screen.y = screenYdefault;
					addChild(screen);
					if(debugMode){
						//addChild(slurmMonitor);
					}
				}
			}
		}catch (error:Error) {
			/*
			trace("ERROR #02: El Screen "+screensXml.screen[idScreen].@name+" no existe.");
			trace('Slurm status: FATAL ERROR');
			*/
		}
	}
	
	private function resize(E:Event)
    {
		Lib.current.scaleX = stage.stageWidth / 480;
		Lib.current.scaleY = Lib.current.scaleX;
    }
	
}