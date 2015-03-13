package com.slurm;
import openfl.text.Font;
import openfl.text.TextFormat;

import format.SVG;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TouchEvent;
import openfl.text.TextField;

@:font("assets/fonts/OpenSans-Regular.ttf") class DefaultFont extends Font { }

/**
 * ...
 * @author Ezequiel Soler
 */
class Asset extends Sprite
{
	public var type:String = "";
	private var normal:Sprite;
	private var over:Sprite;
	private var zone:Sprite;
	
	public function new(dataAsset:Xml) 
	{
		super();
		Font.registerFont (DefaultFont);
		var font = Assets.getFont("fonts/OpenSans-Regular.ttf");
		if (dataAsset.get('type') == "text") {
			var textFormat:TextFormat = new TextFormat(font.fontName, 24, 0xFFFFFF);
			var myText:TextField = new TextField();
			myText.defaultTextFormat = textFormat;
			myText.text = "Test Test";
			var propArrTxt = dataAsset.get('properties').split(',');
			addChild(myText);
		}else {
			var extensionIndex:Int = dataAsset.get('asset').lastIndexOf( '.' );
			var extension:String = dataAsset.get('asset').substr( extensionIndex + 1, dataAsset.get('asset').length );
			if (extension == "svg") {
				normal = this.addSvg(dataAsset.get('asset'), dataAsset.get('position'));
			}else if (extension == "png" || extension == "jpg") {
				normal = this.addBitmap(dataAsset.get('asset'),dataAsset.get('position'));
			}
			addChild(normal);
			if (dataAsset.get('type') == "button") {
				if (dataAsset.exists('over')) {
					extensionIndex = dataAsset.get('over').lastIndexOf( '.' );
					extension = dataAsset.get('over').substr( extensionIndex + 1, dataAsset.get('over').length );
					if (extension == "svg") {
						over = this.addSvg(dataAsset.get('over'), dataAsset.get('position'));
					}else if (extension == "png" || extension == "jpg") {
						over = this.addBitmap(dataAsset.get('over'),dataAsset.get('position'));
					}
					over.visible = false;
					addChild(over);
					zone = new Sprite();
					zone.graphics.beginFill (0x000000);
					zone.graphics.drawRect (0, 0, normal.width, normal.height);
					zone.alpha = 0;
					addChild(zone);
					#if mobile
						zone.addEventListener(TouchEvent.TOUCH_BEGIN, overMe);
						zone.addEventListener(TouchEvent.TOUCH_END, outMe);
					#else
						zone.addEventListener(MouseEvent.MOUSE_OVER, overMe);
						zone.addEventListener(MouseEvent.MOUSE_OUT, outMe);
					#end
				}
				this.buttonMode = true;
			}
		}
		var propArr = dataAsset.get('properties').split(',');
		for ( prop in propArr ) {
			var p = prop.split(':');
			Reflect.setProperty(this, p[0], Std.parseFloat(p[1]));
		}
		this.name = dataAsset.get('name');
	}
	
	public function addBitmap(nameBm:String = "img/default.png",position:String = "left"):Sprite {
		var bitmapData = Assets.getBitmapData ("img/"+nameBm);
        var bitmap = new Bitmap (bitmapData);
		var tempSprite:Sprite = new Sprite();
		if (position == "center") {
			bitmap.x = -bitmap.width / 2;
			bitmap.y = -bitmap.height / 2 ;
		}
        tempSprite.addChild (bitmap);
		return tempSprite;
	}
	
	public function addSvg(nameSvg:String = "",position:String = "left"):Sprite {
		var svg = new SVG(Assets.getText("img/"+nameSvg));
		var tempSprite :Sprite = new Sprite();
		svg.render(tempSprite.graphics, 0, 0, Std.parseInt(Std.string(svg.data.width)), Std.parseInt(Std.string(svg.data.height)));
		if (position == "center") {
			tempSprite.x = -tempSprite.width / 2;
			tempSprite.y = -tempSprite.height / 2 ;
		}
		return tempSprite;
	}
	
	private function overMe(e:Event) {
		this.normal.visible = false;
		this.over.visible = true;
	}
	
	private function outMe(e:Event) {
		this.over.visible = false;
		this.normal.visible = true;
	}
	
}