package sx.controllers;
import cx.FileTools;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Environment;

import sx.Files;
import systools.Dialogs;
using cx.ArrayTools;
/**
 * ...
 * @author Jonas Nyström
 */
 @:build(haxe.ui.toolkit.core.Macros.buildController ("assets/grideditor.xml"))
class GrideditorController extends XMLController
{

	public function new() 
	{
		this.attachEvent('btnGridedtior', UIEvent.CLICK, onBtnGrideditor);
		this.attachEvent('btnSelectSQLite', UIEvent.CLICK, onSelectSqlite);
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
	}
	
	function onBtnGrideditor(e:UIEvent) 
	{
		//var command = Environment.exeGrideditor + ' "' + Files.sqliteFileName + '" ';
		var filename = (Files.sqliteFileName != '') ? Files.sqliteFileName : Environment.exeGrideditor;
		var command = filename ;
		trace(command);
		var exitCode = Sys.command(command, []);
		trace(exitCode);
	}
	
}

class GrideditorControllerComponent extends VBox
{
	public var controller (default, null): Null<GrideditorController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( GrideditorControllerComponent, 'gridcontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new GrideditorController();
		addChild(this.controller.view);
	}	
}
