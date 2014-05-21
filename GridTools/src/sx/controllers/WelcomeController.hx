package sx.controllers;

import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.core.ClassManager;

 @:build(haxe.ui.toolkit.core.Macros.buildController ("assets/welcome.xml"))
class WelcomeController extends XMLController
{
	public function new() 
	{
		
		
	}
	
}

class WelcomeControllerComponent extends VBox
{
	public var controller (default, null): Null<WelcomeController> = null;
	public static function init (): Void
	{
		ClassManager.instance.registerComponentClass( WelcomeControllerComponent, 'welcomecontroller');
	}
	
	override public function  initialize ():Void
	{
		super.initialize();
		this.controller = new WelcomeController();
		addChild(this.controller.view);
	}
	
}