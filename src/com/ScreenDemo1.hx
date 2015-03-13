package com;

import com.slurm.Screen;
import extension.share.Share;
import format.SVG;
import openfl.Assets;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.events.TouchEvent;

/**
 * ...
 * @author Ezequiel Soler
 */
class ScreenDemo1 extends Screen
{

	public function new(script:Xml = null) 
	{
		super(script);
		#if mobile
			getAsset("demo1Btn").addEventListener(TouchEvent.TOUCH_END, sharedContent);
		#else
			getAsset("demo1Btn").addEventListener(MouseEvent.CLICK, sharedContent);
		#end
	}
	
	private function sharedContent(e:Event) {
		Share.init(Share.FACEBOOK);
		Share.facebookAppID='711338032231185';
        Share.defaultURL='http://www.puralax.com/mobile/';
        Share.defaultSubject = 'Try puralax!';
		Share.share('Hi, I\'m testing the OpenFL-Sharing extension!');
	}
	
}