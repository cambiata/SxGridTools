package sx.controllers;

import cx.FileTools;
import haxe.ui.toolkit.containers.ListView;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.Component;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import haxe.ui.toolkit.controls.Button;
import sx.type.TChannel;
import sx.type.TChannels;
import sx.type.TChannelsBase;
import sx.util.ScorxDb;
import sx.util.ScorxTools;
import sys.db.Sqlite;
import sys.io.Process;
import systools.Dialogs;
import sx.Files;

using cx.ArrayTools;

/**
 * ...
 * @author Jonas Nyström
 */
  @:build(haxe.ui.toolkit.core.Macros.buildController ("assets/sqlitefile.xml"))
class SQLiteController extends XMLController
{

	//var btnDirectoryMp3:Button;	
	var tiProjectName:TextInput;
	
	public function new() 
	{
		this.attachEvent('btnCreateSQLite', UIEvent.CLICK, onBtnSqliteClick);
		this.attachEvent('btnPngFiles', UIEvent.CLICK, onBtnPngFilesClick);
		this.attachEvent('btnDirectoryMp3', UIEvent.CLICK, onBtnMp3FilesClick);
	}
	
	function onProjectnameChange(e:UIEvent) 
	{
		trace('change');
		Files.projectName = this.tiProjectName.text;
		

		
		
		
	}

	
	function onBtnPngFilesClick(e:UIEvent) 
	{
		//var result = Dialogs.folder('Select PDF folder', 'additional message');
		var filters: FILEFILTERS =
		{ 
			count: 1
			, descriptions: ["PNG files"]
			, extensions: ["*.png"]	
		};	
		var result = Dialogs.openFile
		(
			"Select PNG files please!"
			, "Message"
			, filters
		);
		trace(result);
		if (result != null) Files.pngFilesNames = result;
		Files.notify();
	}	
	
	
	function onBtnMp3FilesClick(e:UIEvent) 
	{
		trace('btnDirectoryPdf click');
		//var result = Dialogs.folder('Select PDF folder', 'additional message');
		
		var filters: FILEFILTERS =
		{ 
			count: 1
			, descriptions: ["Mp3 files"]
			, extensions: ["*.mp3"]	
		};	
		var result = Dialogs.openFile
		(
			"Select Mp3 files please!"
			, "Message"
			, filters
		);
		trace(result);		
		Files.mp3FilesNames = result;
		Files.notify();
	}	
	
	function onBtnSqliteClick(e:UIEvent) 
	{
		if (Files.mp3FilesNames.length < 1 )
		{
			Dialogs.message('GridTools', 'No mp3 files selected', false);
			return;
		}
		if (Files.pngFilesNames.length < 1 )
		{
			Dialogs.message('GridTools', 'No png files selected', false);
			return;
		}
		
		//---------------------------------------------------------------------------------------------------
		
		//|| Files.pngFilesNames < 1 || Files.projectName.length < 3
		
		var filters: FILEFILTERS =
		{ 
			count: 0
			, descriptions: ["SQLite files"]
			, extensions: ["*.sqlite"]	
		};			
		var filename = Dialogs.saveFile
		(
			"Select filename for SQLite file to save"			
			, 'Select file name'
			, 'test.sqlite'
		);		
		trace(filename);
		if (filename != null) 
		{
			if (FileTools.exists(filename)) 
			{
				Dialogs.message('GridTools', 'File already exists!', false);
				return;
			}
			ScorxDb.createNew(filename);
			
			for (datafile in Files.pngFilesNames)
			{
				ScorxDb.insertPagesData(filename, datafile, FileTools.getBytes(datafile));
			}			
			
			for (datafile in Files.mp3FilesNames)
			{
				var id = FileTools.getFilename(datafile, false);
				ScorxDb.insertChannelData(filename, id, id, FileTools.getBytes(datafile));
			}
			Files.sqliteFileName = filename;
			Files.notify();
		}
		else
		{
			
			
		}
	}	
	
	public function onFilesNotify():Void
	{
		var listPngFiles:ListView = cast this.getComponent('listPngFiles');
		listPngFiles.dataSource.removeAll();
		for (filename in Files.pngFilesNames)
		{
			listPngFiles.dataSource.add( { text: filename } );
		}		
		
		var listMp3Files:ListView = cast this.getComponent('listMp3Files');
		listMp3Files.dataSource.removeAll();
		for (filename in Files.mp3FilesNames)
		{
			listMp3Files.dataSource.add( { text: filename } );
		}	
		
		var txtSqliteFile:Text = cast this.getComponent('txtSqliteFile');
		txtSqliteFile.text = Files.sqliteFileName;
	}
	
	
}

class SQLiteControllerComponent extends VBox
{
	public var controller (default, null): Null<SQLiteController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( SQLiteControllerComponent, 'sqlitefilecontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new SQLiteController();
		addChild(this.controller.view);
		Files.observers.push(this.controller.onFilesNotify);
	}	
}