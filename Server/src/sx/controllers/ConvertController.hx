package sx.controllers;

import cx.FileTools;
import cx.StrTools;
import haxe.io.Path;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;
import haxe.ui.toolkit.events.UIEvent;
import sx.Files;
import sx.Environment;
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
		//convertPdfPageToPng( Environment.tempDir + '\\test.pdf',  Environment.tempDir + '\\testPNG.png');	
		FileTools.deleteFilesInDirectory(Environment.tempDir);
		
		try
		{
			
			var numberOfPages = getPdfNrOfPages(Files.pdfFileName);
			
			for (i in 1...numberOfPages+1)
			{
				var pdfPageName = extractPdfPage(Files.pdfFileName, Environment.tempDir, i);
				if (FileTools.exists(pdfPageName))
				{
					var pngPageName = convertPdfPageToPng(pdfPageName, Environment.tempDir + '/page' +StrTools.intWithLeadingChars(i, 3) + '.png');								
					Files.pngFilesNames.push(pngPageName);
				}
				else
				{
					trace('Pdf file does not exist');
				}
			}
			
		}
		catch (e:Dynamic)
		{
			trace(e);
		}
		
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
	
	function getPdfNrOfPages(pdfFileName:String):Int
	{
		trace(pdfFileName);
		//var exitCode = Sys.command(Environment.exePdfTk, [pdfFileName, 'dump_data']);
		//pdfFileName = path(pdfFileName);
		//var pdfTk = path(Environment.exePdfTk);
		//trace([pdfFileName, pdfTk]);
		//return 0;
		var process = new Process(path(Environment.exePdfTk), [path(pdfFileName), 'dump_data']);
		var exitCode = process.exitCode();

		if (exitCode == 0)
		{
			trace('Ok');
			//return targetFilename;
			var stdout:String = process.stdout.readAll().toString();
			trace(stdout);
			var tag = 'NumberOfPages: ';
			var tagpos = stdout.indexOf('NumberOfPages: ') + tag.length;
			trace(stdout.indexOf('NumberOfPages: '));
			trace(stdout.substr(tagpos, 3));
			var numberOfPages = Std.parseInt(stdout.substr(tagpos, 3));
			trace(numberOfPages);		
			return numberOfPages;
		}
		else
		{
			trace('Error');
			//return 'ERROR';
		}		
		return 0;

	}
	
	
	function extractPdfPage(pdfFileName:String, targetDir:String, pageIdx:Int):String
	{
		trace(pdfFileName);
		trace(targetDir);
		trace(pageIdx);
		
		var pdfPageName = targetDir + '\\page$pageIdx.pdf'; 
		trace(pdfPageName);
		
		
		var exitCode = Sys.command(Environment.exePdfTk, [pdfFileName, 'cat', '$pageIdx', 'output',  pdfPageName]);
		
		if (exitCode == 0)
		{
			trace('Ok');
			return pdfPageName;
		}
		else
		{
			trace('Error');
			return 'ERROR';				
		}
	}

	function convertPdfPageToPng(pdfPageName:String, targetFilename:String)
	{		
		pdfPageName = StringTools.replace(pdfPageName, '//', '/');
		targetFilename = StringTools.replace(targetFilename, '//', '/');
		trace(pdfPageName);
		trace(targetFilename);
		var command = Environment.exeConvert + ' -background white -mosaic +matte -resize 630x891 -density 300 $pdfPageName ' + targetFilename;
		trace(command);
		var exitCode = Sys.command(command, []);		
		if (exitCode == 0)
		{
			trace('Ok');
			return targetFilename;
		}
		else
		{
			trace('Error');
			return 'ERROR';				
		}		
	}
	
	function path(path:String):String
	{
		#if cpp
		path = StringTools.replace(path, '/', '\\');
		path = StringTools.replace(path, '\\\\', '\\');
		#end
		return path;		
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