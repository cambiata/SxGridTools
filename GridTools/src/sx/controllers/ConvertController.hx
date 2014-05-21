package sx.controllers;

import cx.FileTools;
import haxe.io.Path;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.data.Files;
import sys.io.Process;
import systools.Dialogs;

using cx.ArrayTools;



/**
 * ...
 * @author Jonas Nyström
 */
  @:build(haxe.ui.toolkit.core.Macros.buildController ("assets/convert.xml"))
class ConvertController extends XMLController
{
	var btnConvert:Button;
	public function new() 
	{
		btnConvert= cast this.getComponent('btnConvert' );
		
		this.attachEvent('btnDirectoryPdf', UIEvent.CLICK, onBtnSelectPdf);
		this.attachEvent('btnConvert', UIEvent.CLICK, onBtnConvert);
	}	
	
	function onBtnConvert(e) 
	{
		if (Files.pdfFileName.length < 3)
		{
			Dialogs.message('GridTools', 'No pdf file selected!', false);
			return;
		}
		
		try 
		{
			trace(Sys.executablePath());
			var path = FileTools.getDirectory(Sys.executablePath()) + '\\tools\\convert.exe';
			trace(path);
			var exitCode = Sys.command(path, []);
			
			
			if (exitCode == 0)
			{
				trace('Ok');
			}
			else
			{
				trace('Error');
				
			}
		} 
		catch (e:Dynamic)
		{
			trace(e);
		}
		/*
		 * 
		 * 
		var exitcode = process.exitCode();
		switch exitcode
		{
			case 0: trace(process.stdout.readLine());
			default: trace(exitcode);
		}
		*/
		
	}
	
	function onBtnSelectPdf(e:UIEvent) 
	{
		var filters: FILEFILTERS =
		{ 
			count: 1
			, descriptions: ["PDF files"]
			, extensions: ["*.pdf"]	
		};	
		var result = Dialogs.openFile
		(
			"Select PDF file to convert!"
			, "Message"
			, filters
		);
		trace(result);
		if (result != null) Files.pdfFileName = result.first();
		Files.notify();
	}
	
	public function onFilesNotify():Void
	{
		trace('Convert Notify');
	}
	
	
	
}

class ConvertControllerComponent extends VBox
{
	public var controller (default, null): Null<ConvertController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( ConvertControllerComponent, 'convertcontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new ConvertController();
		addChild(this.controller.view);
		Files.observers.push(this.controller.onFilesNotify);
	}
	
}