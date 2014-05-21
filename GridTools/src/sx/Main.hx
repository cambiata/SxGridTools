package sx;

import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.events.UIEvent;
import haxe.ui.toolkit.themes.GradientTheme;
import sx.controllers.WelcomeController;
import sx.controllers.SQLiteController;
import sx.controllers.ConvertController;
import sx.data.Files;
 
class Main {
	public static function main() 
	{
		//Toolkit.theme = new GradientTheme();
		Toolkit.init();
		WelcomeControllerComponent.init();
		SQLiteControllerComponent.init();
		ConvertControllerComponent.init();
		Toolkit.openFullscreen(function(root:Root) 
		{
			root.addChild(Toolkit.processXmlResource('assets/controllers.xml'));
		});
		Files.notify();

	}
    
	    
}