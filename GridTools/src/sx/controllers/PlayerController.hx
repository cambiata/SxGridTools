package sx.controllers;

import cx.EncodeTools;
import cx.FileTools;
import cx.StrTools;
import haxe.crypto.Base64;
import haxe.Http;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Environment;
import sx.Files;
import sx.util.ScorxDb;
import sx.util.ScorxTools;
import systools.Dialogs;

using cx.ArrayTools;
  
@:build(haxe.ui.toolkit.core.Macros.buildController ("assets/playercontroller.xml"))
class PlayerController extends XMLController
{
	var host:String;
	//var sqliteSet:Bool = false;
	var factor:Float;

	public function new() 
	{
		this.host = 'http://localhost:2000/';
		this.factor = 1.00;
		this.attachEvent('btnStart', UIEvent.CLICK, onBtnStart);
		this.attachEvent('btnSelectSQLite', UIEvent.CLICK, onSelectSqlite);
		this.attachEvent('btnSurf', UIEvent.CLICK, onBtnSurf);
		this.attachEvent('btnSurfFactor', UIEvent.CLICK, onBtnSurfFactor);
		this.attachEvent('btnExportGrid', UIEvent.CLICK, onBtnExport);
	}
	
	function getFactor()
	{
		var tiFactor:TextInput = cast this.getComponent('tiFactor');
		try
		{
			factor = Std.parseFloat(tiFactor.text);
		}
		catch (e:Dynamic)
		{
			Dialogs.message('Factor must be set to something between 0.9 to 1.1. Use dot sign, not comma for the decimal value!', 'Factor must be set to something between 0.9 to 1.1. Use dot sign, not comma for the decimal value!', false);
			return;
		}		
	}
	
	function onBtnExport(e) 
	{
		this.getFactor();
		var filters: FILEFILTERS =
		{ 
			count: 0
			, descriptions: ["XML files"]
			, extensions: ["*.xml"]	
		};			
		var filename = Dialogs.saveFile
		(
			"Select filename for grid.xml file to save"			
			, 'Select file name'
			, 'grid.xml'
		);		
		trace(filename);
		if (filename != null) 
		{		
			var grid = ScorxDb.getGrid(Files.sqliteFileName);
			var gridXml = ScorxTools.createGridXml(grid, this.factor);
			
			var txtGridXmlFilename:Text = cast this.getComponent('txtGridXmlFilename');
			try
			{
				FileTools.putContent(filename, gridXml.toString());			
				var msg = 'Gridfile saved as $filename with a playback adjustment factor of $factor';			
				txtGridXmlFilename.text = msg;
			}
			catch (e:Dynamic)
			{
				txtGridXmlFilename.text  = 'Could not save $filename';
			}
		}
	}
	
	function onBtnSurfFactor(e) 
	{
		if (Files.sqliteFileName == '' || Files.sqliteFileName == null)
		{
			Dialogs.message('No SQLite file is set', 'No SQLite file is set', false);
			return;
		}
		
		this.getFactor();
		
		var parameterFactor = StringTools.urlEncode(Std.string(factor));

		var exitCode = Sys.command('start $host?factor=$parameterFactor', []);	
		
	}
	
	function onBtnSurf(e) 
	{
		var filename = Files.sqliteFileName;
		if (filename == '' || filename == null) 
		{
			Dialogs.message('No SQLite file selected', 'No SQLite file selected', false);
			return;
		}
		
		if (!FileTools.exists(filename))
		{
			Dialogs.message('Can\'t find ${Files.sqliteFileName}', 'Can\'t find ${Files.sqliteFileName}', false);
			return;
		}
		

		
		//var urlfilename = StringTools.urlEncode(filename);
		//trace(urlfilename);
		
		var parameterData = StringTools.urlEncode('$filename');

		var and = StringTools.urlEncode('&');
		var exitCode = Sys.command('start $host?data=$parameterData ', []);		
		trace(exitCode);
		if (exitCode == 0)
		{
			
			var txtUrl:Text = cast this.getComponent('txtUrl');
			txtUrl.text = '$host?data=$parameterData';
		}
		else
		{
			Dialogs.message('Hm. Something\'s wrong...', 'Hm. Something\'s wrong...', false);
		}
	}
	
	function onSelectSqlite(e:UIEvent) 
	{
		var filters: FILEFILTERS =
		{ 
			count: 1
			, descriptions: ["SQLite files"]
			, extensions: ["*.sqlite"]	
		};	
		var result = Dialogs.openFile
		(
			"Select SQLite file for opening Grideditor!"
			, "Message"
			, filters
		);
		trace(result);		
		if (result != null) Files.sqliteFileName = result.first();
		Files.notify();
		
		var grid = ScorxDb.getGrid(Files.sqliteFileName);
		if (grid == null || grid.length < 1)
		{
			Dialogs.message('There seems to be no grid information in this SQLite file!', 'There seems to be no grid information in this SQLite file!', false);
			return;
		}		
		
	}	
	
	
	
	function onBtnStart(e:UIEvent) 
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
			//var command = Environment.exeDir + 'nekotools server -rewrite';	
			var command = 'start ' + Environment.exeDir + 'nekoserver.bat';
			var exitCode = Sys.command(command, []);			
			trace(exitCode);
			var msg = 'Testserver http://localhost:2000/ should  be started now';
			Dialogs.message(msg, msg, false);			
		}
		
		http.request(false);
		
		///------------------------------------------------------------------------------------------------------------------------
		
		
		
		/*

		*/
	}
	
	public function onFilesNotify():Void
	{
		var txtSqliteFile:Text = cast this.getComponent('txtSqliteFile');
		txtSqliteFile.text = Files.sqliteFileName;
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
		Files.observers.push(this.controller.onFilesNotify);
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