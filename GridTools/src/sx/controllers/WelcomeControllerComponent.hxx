package sx.controllers;
import haxe.ui.toolkit.containers.VBox;
import sx.controllers.WelcomeController;
import haxe.ui.toolkit.core.ClassManager;

/**
 * ...
 * @author Jonas Nyström
 */
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