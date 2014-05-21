#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuButton
#include <haxe/ui/toolkit/controls/MenuButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_MenuEvent
#include <haxe/ui/toolkit/events/MenuEvent.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void MenuButton_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","new",0x319e36f9,"haxe.ui.toolkit.controls.MenuButton.new","haxe/ui/toolkit/controls/MenuButton.hx",15,0xfd1e7557)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->set_toggle(true);
	HX_STACK_LINE(18)
	this->set_allowSelection(false);
}
;
	return null();
}

//MenuButton_obj::~MenuButton_obj() { }

Dynamic MenuButton_obj::__CreateEmpty() { return  new MenuButton_obj; }
hx::ObjectPtr< MenuButton_obj > MenuButton_obj::__new()
{  hx::ObjectPtr< MenuButton_obj > result = new MenuButton_obj();
	result->__construct();
	return result;}

Dynamic MenuButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuButton_obj > result = new MenuButton_obj();
	result->__construct();
	return result;}

Void MenuButton_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","initialize",0x214fbfd7,"haxe.ui.toolkit.controls.MenuButton.initialize","haxe/ui/toolkit/controls/MenuButton.hx",21,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::initialize();
		HX_STACK_LINE(24)
		if (((this->_menu != null()))){
			HX_STACK_LINE(25)
			this->_menu->addEventListener(::haxe::ui::toolkit::events::MenuEvent_obj::SELECT,this->_onMenuSelect_dyn(),null(),null(),null());
			HX_STACK_LINE(26)
			this->_menu->addEventListener(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,this->_onMenuOpen_dyn(),null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject MenuButton_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","addChild",0x34f4de82,"haxe.ui.toolkit.controls.MenuButton.addChild","haxe/ui/toolkit/controls/MenuButton.hx",30,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(33)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >()))){
		HX_STACK_LINE(34)
		if (((this->_menu == null()))){
			HX_STACK_LINE(35)
			this->_menu = ::haxe::ui::toolkit::controls::Menu_obj::__new();
			HX_STACK_LINE(36)
			this->_menu->set_root(this->get_root());
		}
		HX_STACK_LINE(38)
		this->_menu->addChild(child);
	}
	else{
		HX_STACK_LINE(39)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >()))){
			HX_STACK_LINE(40)
			this->_menu = hx::TCast< haxe::ui::toolkit::controls::Menu >::cast(child);
		}
		else{
			HX_STACK_LINE(42)
			r = this->super::addChild(child);
		}
	}
	HX_STACK_LINE(45)
	return r;
}


Void MenuButton_obj::_onMouseOver( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseOver",0x6c145942,"haxe.ui.toolkit.controls.MenuButton._onMouseOver","haxe/ui/toolkit/controls/MenuButton.hx",48,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(49)
		this->super::_onMouseOver(event);
		HX_STACK_LINE(50)
		if (((bool((::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton != null())) && bool((::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton != hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton->hideMenu();
			HX_STACK_LINE(52)
			this->showMenu();
		}
	}
return null();
}


Void MenuButton_obj::_onMouseClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseClick",0x3651a49a,"haxe.ui.toolkit.controls.MenuButton._onMouseClick","haxe/ui/toolkit/controls/MenuButton.hx",57,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(57)
		if (((this->get_root()->indexOfChild(this->_menu) == (int)-1))){
			HX_STACK_LINE(58)
			this->showMenu();
		}
		else{
			HX_STACK_LINE(60)
			this->hideMenu();
		}
	}
return null();
}


bool MenuButton_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","set_selected",0x693a801f,"haxe.ui.toolkit.controls.MenuButton.set_selected","haxe/ui/toolkit/controls/MenuButton.hx",64,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	this->_selected = value;
	HX_STACK_LINE(66)
	if (((this->_selected == true))){
		HX_STACK_LINE(67)
		this->set_state(HX_CSTRING("down"));
	}
	else{
		HX_STACK_LINE(69)
		this->set_state(HX_CSTRING("normal"));
	}
	HX_STACK_LINE(71)
	return value;
}


Void MenuButton_obj::_onRootMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onRootMouseDown",0x4825264e,"haxe.ui.toolkit.controls.MenuButton._onRootMouseDown","haxe/ui/toolkit/controls/MenuButton.hx",74,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(75)
		bool mouseIn = false;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(76)
		if (((this->hitTest(event->stageX,event->stageY) == true))){
			HX_STACK_LINE(77)
			mouseIn = true;
		}
		HX_STACK_LINE(79)
		if (((  (((this->_menu != null()))) ? bool((this->_menu->hitTest(event->stageX,event->stageY) == true)) : bool(false) ))){
			HX_STACK_LINE(80)
			mouseIn = true;
		}
		HX_STACK_LINE(82)
		if (((bool((this->_menu != null())) && bool((mouseIn == false))))){
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::controls::Menu menu = this->_menu->get_rootMenu();		HX_STACK_VAR(menu,"menu");
			HX_STACK_LINE(84)
			while(((menu != null()))){
				HX_STACK_LINE(85)
				if (((menu->hitTest(event->stageX,event->stageY) == true))){
					HX_STACK_LINE(86)
					mouseIn = true;
					HX_STACK_LINE(87)
					break;
				}
				HX_STACK_LINE(89)
				menu = menu->get_currentSubMenu();
			}
		}
		HX_STACK_LINE(92)
		if (((bool((this->_menu != null())) && bool((mouseIn == false))))){
			HX_STACK_LINE(93)
			this->hideMenu();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onRootMouseDown,(void))

Void MenuButton_obj::_onMenuSelect( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuSelect",0x1cdd8ab2,"haxe.ui.toolkit.controls.MenuButton._onMenuSelect","haxe/ui/toolkit/controls/MenuButton.hx",97,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(98)
		this->hideMenu();
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::SELECT,event->menuItem);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(100)
		this->dispatchEvent(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuSelect,(void))

Void MenuButton_obj::_onMenuOpen( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuOpen",0xcdcbfa00,"haxe.ui.toolkit.controls.MenuButton._onMenuOpen","haxe/ui/toolkit/controls/MenuButton.hx",103,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(104)
		::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(105)
		e->menu = event->menu;
		HX_STACK_LINE(106)
		this->dispatchEvent(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuOpen,(void))

Void MenuButton_obj::showMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","showMenu",0x25be1803,"haxe.ui.toolkit.controls.MenuButton.showMenu","haxe/ui/toolkit/controls/MenuButton.hx",109,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->set_selected(true);
		HX_STACK_LINE(111)
		Float _g1 = this->get_stageX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(111)
		this->_menu->set_x((_g1 - this->get_root()->get_stageX()));
		HX_STACK_LINE(112)
		Float _g11 = this->get_stageY();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(112)
		Float _g2 = (_g11 + this->get_height());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(112)
		this->_menu->set_y((_g2 - this->get_root()->get_stageY()));
		HX_STACK_LINE(113)
		this->get_root()->addChild(this->_menu);
		HX_STACK_LINE(114)
		this->get_root()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(117)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(118)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(119)
			this->_menu->set_clipHeight((int)0);
			HX_STACK_LINE(120)
			this->_menu->get_sprite()->set_alpha((int)1);
			HX_STACK_LINE(121)
			this->_menu->set_visible(true);
			struct _Function_2_1{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::MenuButton_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",122,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("clipHeight") , __this->_menu->get_height(),false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",123,0xfd1e7557)
				{
					HX_STACK_LINE(123)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->clearClip();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(122)
			::motion::Actuate_obj::tween(this->_menu,.1,_Function_2_1::Block(this),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(125)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(126)
				this->_menu->get_sprite()->set_alpha((int)0);
				HX_STACK_LINE(127)
				this->_menu->set_visible(true);
				HX_STACK_LINE(128)
				::flash::display::Sprite _g3 = this->_menu->get_sprite();		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",128,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",128,0xfd1e7557)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(128)
				::motion::Actuate_obj::tween(_g3,.1,_Function_3_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(131)
				this->_menu->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(132)
				this->_menu->set_visible(true);
			}
		}
		HX_STACK_LINE(135)
		::haxe::ui::toolkit::events::MenuEvent event = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(136)
		event->menu = this->_menu;
		HX_STACK_LINE(137)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,showMenu,(void))

Void MenuButton_obj::hideMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","hideMenu",0x17053e48,"haxe.ui.toolkit.controls.MenuButton.hideMenu","haxe/ui/toolkit/controls/MenuButton.hx",140,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		this->set_selected(false);
		HX_STACK_LINE(143)
		this->_menu->hideSubMenus();
		HX_STACK_LINE(144)
		this->get_root()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null());
		HX_STACK_LINE(146)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(147)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(148)
			this->_menu->get_sprite()->set_alpha((int)1);
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",149,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",149,0xfd1e7557)
				{
					HX_STACK_LINE(150)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->set_visible(false);
					HX_STACK_LINE(151)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->clearClip();
					HX_STACK_LINE(152)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->get_root()->removeChild(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu,false);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(149)
			::motion::Actuate_obj::tween(this->_menu,.1,_Function_2_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(154)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(155)
				::flash::display::Sprite _g1 = this->_menu->get_sprite();		HX_STACK_VAR(_g1,"_g1");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",155,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",155,0xfd1e7557)
					{
						HX_STACK_LINE(156)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->set_visible(false);
						HX_STACK_LINE(157)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->get_root()->removeChild(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu,false);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(155)
				::motion::Actuate_obj::tween(_g1,.1,_Function_3_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(160)
				this->_menu->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(161)
				this->_menu->set_visible(false);
				HX_STACK_LINE(162)
				this->get_root()->removeChild(this->_menu,false);
			}
		}
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = null();
		HX_STACK_LINE(166)
		this->set_selected(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,hideMenu,(void))

Dynamic MenuButton_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","clone",0x2e071236,"haxe.ui.toolkit.controls.MenuButton.clone","haxe/ui/toolkit/controls/MenuButton.hx",1,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuButton c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic MenuButton_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","self",0x3c1fead3,"haxe.ui.toolkit.controls.MenuButton.self","haxe/ui/toolkit/controls/MenuButton.hx",2,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::MenuButton_obj::__new();
}


::haxe::ui::toolkit::controls::MenuButton MenuButton_obj::_currentMenuButton;


MenuButton_obj::MenuButton_obj()
{
}

void MenuButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuButton);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return _menu; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showMenu") ) { return showMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMenu") ) { return hideMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMenuOpen") ) { return _onMenuOpen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMenuSelect") ) { return _onMenuSelect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { return _currentMenuButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { _currentMenuButton=inValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_menu"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_currentMenuButton"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(MenuButton_obj,_menu),HX_CSTRING("_menu")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_menu"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("_onMouseOver"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("_onRootMouseDown"),
	HX_CSTRING("_onMenuSelect"),
	HX_CSTRING("_onMenuOpen"),
	HX_CSTRING("showMenu"),
	HX_CSTRING("hideMenu"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#endif

Class MenuButton_obj::__mClass;

void MenuButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.MenuButton"), hx::TCanCast< MenuButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void MenuButton_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
