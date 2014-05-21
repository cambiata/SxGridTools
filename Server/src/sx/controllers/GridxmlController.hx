package sx.controllers;

import cx.FileTools;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Files;
import sx.type.TGrid;
import sx.type.TGridItem;
import sx.type.TGridItem;
import sx.util.ScorxDb;
import systools.Dialogs;
using cx.ArrayTools;
using StringTools;
  
@:build(haxe.ui.toolkit.core.Macros.buildController ("assets/GridxmlController.xml"))
class GridxmlController extends XMLController
{

	public function new() 
	{
		this.attachEvent('btnTest', UIEvent.CLICK, onBtnTest);
		this.attachEvent('btnSelect', UIEvent.CLICK, onBtnSelect);
	}
	
	function onBtnSelect(e:UIEvent) 
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
	
	function onBtnTest(e:UIEvent) 
	{
		trace('onBtnTest');
		
		if (!FileTools.exists(Files.sqliteFileName))
		{
			Dialogs.message('No SQLite file selected to export from!', 'No SQLite file selected to export from!', false);
			return;
		}
		var items = ScorxDb.getGrid(Files.sqliteFileName);
		
		Files.xmlData = createGridXml(items);
		
		var filters: FILEFILTERS =
		{ 
			count: 1
			, descriptions: ["SQLite files"]
			, extensions: ["*.sqlite"]	
		};	
		var result = Dialogs.saveFile
		(
			"Save grid xml"
			, "Message"
			, cx.FileTools.getDirectory(Files.sqliteFileName)
		);
		
		trace(result);				

		if (result != null) FileTools.putContent(result, Files.xmlData.toString());
		
		Files.notify();			
		
		
	}
	
	function createGridXml(items:TGrid):Xml
	{
		var xml = Xml.createElement('grid');

		for (item in items)
		{
			var item:TGridItem = item;
			var xitem:Xml = Xml.createElement('item');			
			xitem.set('page', Std.string(item.page));
			xitem.set('origpos', Std.string(item.pos).replace('.', ','));
			xitem.set('pos', Std.string(item.pos).replace('.', ','));
			xitem.set('type', Std.string(item.type));
			xitem.set('x', Std.string(item.x));
			xitem.set('y', Std.string(item.y));
			xitem.set('w', Std.string(item.width));
			xitem.set('h', Std.string(item.height));
			xml.addChild(xitem);
		}
		
		trace(xml.toString());
		return xml;
	}
	
	
	
}

class GridxmlControllerComponent extends VBox
{
	public var controller (default, null): Null<GridxmlController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( GridxmlControllerComponent, 'gridxmlcontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new GridxmlController();
		addChild(this.controller.view);
	}	
}

/*

//------------------------------------------------------------------
// save as assets/GridxmlController.xml

<?xml version="1.0" encoding="utf-8" ?>
<hbox width="100%">
	<button id="btnTest" text="ThisIsATestButton" />
</hbox>


//------------------------------------------------------------------
// somewhere in application startup:
	
import sx.controllers.GridxmlController;

GridxmlControllerComponent.init();


*/