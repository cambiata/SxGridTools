package sx.controllers;

import cx.EncodeTools;
import cx.FileTools;
import cx.StrTools;
import haxe.crypto.Base64;
import haxe.Http;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Environment;
import sx.Files;
import systools.Dialogs;
  
@:build(haxe.ui.toolkit.core.Macros.buildController ("assets/playercontroller.xml"))
class PlayerController extends XMLController
{

	public function new() 
	{
		this.attachEvent('btnTest', UIEvent.CLICK, onBtnTest);
		this.attachEvent('btnSurf', UIEvent.CLICK, onBtnSurf);
	}
	
	function onBtnSurf(e) 
	{
		var filename = EncodeTools.base64Encode(Files.sqliteFileName);
		var exitCode = Sys.command('start http://localhost:2000/?data=$filename', []);		
	}
	
	function onBtnTest(e:UIEvent) 
	{
		trace('onBtnTest');
		var http = new  Http('localhost:2000');
		http.onData = function(data)
		{
			trace(data);
			var msg = 'Testserver http://localhost:2000/ seems to be running';
			Dialogs.message(msg, msg, false);
		}
		http.onError = function(error)
		{
			trace('ERROR');
			var command = Environment.exeDir + 'nekotools server -rewrite';	
			var exitCode = Sys.command(command, []);			

			var msg = 'Testserver http://localhost:2000/ should  be started now';
			Dialogs.message(msg, msg, false);			
		}
		
		http.request(false);
		
		///------------------------------------------------------------------------------------------------------------------------
		
		
		
		/*

		*/
	}
	
}

class PlayerControllerComponent extends VBox
{
	public var controller (default, null): Null<PlayerController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( PlayerControllerComponent, 'playercontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new PlayerController();
		addChild(this.controller.view);
	}	
}

/*

//------------------------------------------------------------------
// save as assets/PlayerController.xml

<?xml version="1.0" encoding="utf-8" ?>
<hbox width="100%">
	<button id="btnTest" text="ThisIsATestButton" />
</hbox>


//------------------------------------------------------------------
// somewhere in application startup:
	
import sx.controllers.PlayerController;

PlayerControllerComponent.init();

//--------------------------------------------------------------------
// somewhere in controllers.xml

	<vbox text="Gridxml">
		<PlayerController />
	</vbox>	




*/