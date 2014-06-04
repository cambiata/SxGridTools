package sx.controllers;

import cx.FileTools;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Files;
import sx.util.ScorxDb;
import systools.Dialogs;

using cx.ArrayTools;
  
@:build(haxe.ui.toolkit.core.Macros.buildController ("assets/exportcontroller.xml"))
class ExportController extends XMLController
{
	var txtMp3Files:Text;
	var txtPngFiles:Text;

	public function new() 
	{
		this.attachEvent('btnTest', UIEvent.CLICK, onBtnTest);
		this.attachEvent('btnSelectSQLite', UIEvent.CLICK, onSelectSqlite);
		this.attachEvent('btnExportMp3', UIEvent.CLICK, onExportMp3);
		this.attachEvent('btnExportPng', UIEvent.CLICK, onExportPng);
		
		txtMp3Files = cast this.getComponent('txtMp3Files');
		txtPngFiles = cast this.getComponent('txtPngFiles');
	}
	
	function onExportPng(e) 
	{
		if (!FileTools.exists(Files.sqliteFileName)) return;
		
		var msg = 'Välj målkatalog för Png-filer';
		var result = Dialogs.folder(msg, msg);
		trace(result);
		if (result == null) return;

		try
		{			
			var files = ScorxDb.getPages(Files.sqliteFileName);
			for (file in files)
			{
				var filename = result + '/' + FileTools.getFilename(file.id) + '.png';
				trace(filename);
				FileTools.putBytes(filename, file.data);			
			}
			
			this.txtPngFiles.text = files.length + ' png files exported to $result';
		}
		catch (e:Dynamic)
		{
			this.txtMp3Files.text = Std.string(e);
		}
		
		
	}
	
	function onExportMp3(e) 
	{
		if (!FileTools.exists(Files.sqliteFileName)) return;
		
		var msg = 'Välj målkatalog för Mp3-filer';
		var result = Dialogs.folder(msg, msg);
		trace(result);
		if (result == null) return;
		
		try
		{
			var files = ScorxDb.getChannels(Files.sqliteFileName);
			for (file in files)
			{
				var filename = result + '/' + FileTools.getFilename(file.id) + '.mp3';
				trace(filename);
				FileTools.putBytes(filename, file.data);			
			}	
			this.txtMp3Files.text = files.length + ' mp3 files exported to $result';
		}
		catch (e:Dynamic)
		{
			this.txtPngFiles.text = Std.string(e);
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
			"Select SQLite to export media files from!"
			, "Message"
			, filters
		);
		trace(result);		
		if (result != null) Files.sqliteFileName = result.first();
		Files.notify();
	}
	
	function onBtnTest(e:UIEvent) 
	{
		trace('onBtnTest');

	}
	
	public function onFilesNotify():Void
	{
		trace('ExportController Notify');
		
		var txtSqliteFile:Text = cast this.getComponent('txtSqliteFile');
		txtSqliteFile.text = Files.sqliteFileName;		
		
		if (!FileTools.exists(Files.sqliteFileName)) return;
		
		var mp3files = ScorxDb.getChannelsBase(Files.sqliteFileName);
		
		txtMp3Files.text = 'Mp3-files: ';
		for (file in mp3files) txtMp3Files.text += FileTools.getFilename(file.id) + '.mp3, ';

		var files = ScorxDb.getPagesBase(Files.sqliteFileName);
		
		txtPngFiles.text = 'Png-files: ';
		for (file in files) txtPngFiles.text += FileTools.getFilename(file.id)  + ', ' ;
		
	}
	
	
}

class ExportControllerComponent extends VBox
{
	public var controller (default, null): Null<ExportController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( ExportControllerComponent, 'exportcontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new ExportController();
		addChild(this.controller.view);
		
		Files.observers.push(this.controller.onFilesNotify);
	}	
}

/*

//------------------------------------------------------------------
// save as assets/ExportController.xml

<?xml version="1.0" encoding="utf-8" ?>
<hbox width="100%">
	<button id="btnTest" text="ThisIsATestButton" />
</hbox>


//------------------------------------------------------------------
// somewhere in application startup:
	
import sx.controllers.ExportController;

		ExportControllerComponent.init();

//--------------------------------------------------------------------
// somewhere in controllers.xml

	<vbox text="Gridxml">
		<ExportController />
	</vbox>	




*/