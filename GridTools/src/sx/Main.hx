package sx;

import cx.FileTools;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.events.UIEvent;
import haxe.ui.toolkit.themes.GradientTheme;
import sx.controllers.GrideditorController;
import sx.controllers.WelcomeController;
import sx.controllers.SQLiteController;
import sx.controllers.ConvertController;
import sx.controllers.GridxmlController;
import sx.controllers.PlayerController;
import sx.controllers.ExportController;
import sx.Files;
 
class Main {
	public static function main() 
	{
		
		Toolkit.init();
		
		WelcomeControllerComponent.init();
		ConvertControllerComponent.init();
		SQLiteControllerComponent.init();
		GrideditorControllerComponent.init();
		GridxmlControllerComponent.init();
		PlayerControllerComponent.init();		
		ExportControllerComponent.init();
		
		Toolkit.openFullscreen(function(root:Root) 
		{
			root.addChild(Toolkit.processXmlResource('assets/controllers.xml'));
		});
		
		Files.notify();
		
		trace(FileTools.getDirectory(Sys.executablePath()));

	}
    
	    
}