#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Button_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","new",0x29238d7a,"haxe.ui.toolkit.controls.Button.new","haxe/ui/toolkit/controls/Button.hx",44,0x493ac9f6)
{
	HX_STACK_LINE(401)
	this->dispatchChangeEvents = true;
	HX_STACK_LINE(72)
	this->_iconPosition = HX_CSTRING("left");
	HX_STACK_LINE(71)
	this->_allowSelection = true;
	HX_STACK_LINE(70)
	this->_selected = false;
	HX_STACK_LINE(69)
	this->_toggle = false;
	HX_STACK_LINE(68)
	this->_down = false;
	HX_STACK_LINE(63)
	this->_remainPressed = false;
	HX_STACK_LINE(62)
	this->_allowFocus = true;
	HX_STACK_LINE(80)
	super::__construct();
	HX_STACK_LINE(82)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(83)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(84)
	this->set_state(HX_CSTRING("normal"));
	HX_STACK_LINE(85)
	this->_layout = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();
	HX_STACK_LINE(86)
	this->set_autoSize(true);
	HX_STACK_LINE(88)
	this->_spacers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(89)
	if (((::haxe::ui::toolkit::controls::Button_obj::_groups == null()))){
		HX_STACK_LINE(90)
		::haxe::ui::toolkit::controls::Button_obj::_groups = ::haxe::ds::StringMap_obj::__new();
	}
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new()
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct();
	return result;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct();
	return result;}

hx::Object *Button_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IFocusable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IFocusable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

bool Button_obj::get_remainPressed( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_remainPressed",0x1d111087,"haxe.ui.toolkit.controls.Button.get_remainPressed","haxe/ui/toolkit/controls/Button.hx",109,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	return this->_remainPressed;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_remainPressed,return )

bool Button_obj::set_remainPressed( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_remainPressed",0x407ee893,"haxe.ui.toolkit.controls.Button.set_remainPressed","haxe/ui/toolkit/controls/Button.hx",112,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(113)
	this->_remainPressed = value;
	HX_STACK_LINE(114)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_remainPressed,return )

Dynamic Button_obj::get_icon( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_icon",0x26b827a8,"haxe.ui.toolkit.controls.Button.get_icon","haxe/ui/toolkit/controls/Button.hx",117,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	if (((this->_icon == null()))){
		HX_STACK_LINE(119)
		return null();
	}
	HX_STACK_LINE(121)
	return this->_icon->get_resource();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icon,return )

Dynamic Button_obj::set_icon( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_icon",0xd515811c,"haxe.ui.toolkit.controls.Button.set_icon","haxe/ui/toolkit/controls/Button.hx",124,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(125)
	if (((value != null()))){
		HX_STACK_LINE(126)
		if (((this->_icon == null()))){
			HX_STACK_LINE(127)
			this->_icon = ::haxe::ui::toolkit::controls::Image_obj::__new();
			HX_STACK_LINE(128)
			this->_icon->set_id(HX_CSTRING("icon"));
			HX_STACK_LINE(129)
			this->_icon->get_style()->set_padding((int)100);
		}
		HX_STACK_LINE(131)
		this->_icon->set_resource(value);
		HX_STACK_LINE(132)
		this->organiseChildren();
	}
	else{
		HX_STACK_LINE(134)
		this->_icon->set_visible(false);
	}
	HX_STACK_LINE(136)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icon,return )

Void Button_obj::organiseChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","organiseChildren",0x75dce00f,"haxe.ui.toolkit.controls.Button.organiseChildren","haxe/ui/toolkit/controls/Button.hx",139,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		if (((this->_ready == false))){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(143)
		this->removeAllChildren(false);
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			Array< ::Dynamic > _g1 = this->_spacers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(144)
			while(((_g < _g1->length))){
				HX_STACK_LINE(144)
				::haxe::ui::toolkit::controls::Spacer s = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Spacer >();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(144)
				++(_g);
				HX_STACK_LINE(145)
				s->dispose();
			}
		}
		HX_STACK_LINE(147)
		this->_spacers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(149)
		if (((bool((this->_iconPosition == HX_CSTRING("left"))) || bool((this->_iconPosition == HX_CSTRING("right")))))){
			HX_STACK_LINE(150)
			this->set_layout(::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new());
		}
		else{
			HX_STACK_LINE(151)
			if (((bool((this->_iconPosition == HX_CSTRING("top"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
				struct _Function_3_1{
					inline static bool Block( ::haxe::ui::toolkit::controls::Button_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Button.hx",152,0x493ac9f6)
						{
							HX_STACK_LINE(152)
							Float _g = __this->_label->get_width();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(152)
							return (_g < __this->_icon->get_width());
						}
						return null();
					}
				};
				HX_STACK_LINE(152)
				if (((  (((bool((this->_label != null())) && bool((this->_icon != null()))))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(153)
					this->_label->set_autoSize(false);
					HX_STACK_LINE(154)
					this->_label->set_width(this->_icon->get_width());
				}
				HX_STACK_LINE(157)
				this->set_layout(::haxe::ui::toolkit::layout::VerticalLayout_obj::__new());
				HX_STACK_LINE(158)
				if (((this->_autoSize == false))){
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
					HX_STACK_LINE(160)
					spacer->set_percentHeight((int)50);
					HX_STACK_LINE(161)
					this->addChild(spacer);
					HX_STACK_LINE(162)
					this->_spacers->push(spacer);
				}
			}
			else{
				HX_STACK_LINE(165)
				this->set_layout(::haxe::ui::toolkit::layout::BoxLayout_obj::__new());
			}
		}
		HX_STACK_LINE(168)
		if (((this->_icon != null()))){
			HX_STACK_LINE(169)
			this->_icon->set_horizontalAlign(HX_CSTRING("center"));
			HX_STACK_LINE(170)
			this->_icon->set_verticalAlign(HX_CSTRING("center"));
		}
		HX_STACK_LINE(173)
		if (((this->_label != null()))){
			HX_STACK_LINE(174)
			if (((this->get_autoSize() == false))){
				HX_STACK_LINE(175)
				this->_label->set_percentWidth((int)100);
				HX_STACK_LINE(176)
				this->_label->set_autoSize(false);
				HX_STACK_LINE(177)
				this->_label->set_textAlign(HX_CSTRING("center"));
			}
			else{
				HX_STACK_LINE(179)
				this->_label->set_percentWidth((int)-1);
				HX_STACK_LINE(181)
				this->_label->set_textAlign(HX_CSTRING("center"));
			}
		}
		HX_STACK_LINE(185)
		if (((bool((this->_iconPosition == HX_CSTRING("left"))) || bool((this->_iconPosition == HX_CSTRING("top")))))){
			HX_STACK_LINE(186)
			this->addChild(this->_icon);
			HX_STACK_LINE(187)
			this->addChild(this->_label);
		}
		else{
			HX_STACK_LINE(188)
			if (((bool((this->_iconPosition == HX_CSTRING("right"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
				HX_STACK_LINE(189)
				this->addChild(this->_label);
				HX_STACK_LINE(190)
				if (((bool((this->_autoSize == true)) && bool((this->_iconPosition == HX_CSTRING("right")))))){
					HX_STACK_LINE(191)
					::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
					HX_STACK_LINE(192)
					spacer->set_percentWidth((int)100);
					HX_STACK_LINE(193)
					this->addChild(spacer);
					HX_STACK_LINE(194)
					this->_spacers->push(spacer);
				}
				HX_STACK_LINE(196)
				this->addChild(this->_icon);
			}
			else{
				HX_STACK_LINE(198)
				this->addChild(this->_icon);
				HX_STACK_LINE(199)
				this->addChild(this->_label);
			}
		}
		HX_STACK_LINE(202)
		if (((bool((this->_iconPosition == HX_CSTRING("top"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
			HX_STACK_LINE(203)
			if (((this->_autoSize == false))){
				HX_STACK_LINE(204)
				::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
				HX_STACK_LINE(205)
				spacer->set_percentHeight((int)50);
				HX_STACK_LINE(206)
				this->addChild(spacer);
				HX_STACK_LINE(207)
				this->_spacers->push(spacer);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,organiseChildren,(void))

Void Button_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","preInitialize",0xb3f720ed,"haxe.ui.toolkit.controls.Button.preInitialize","haxe/ui/toolkit/controls/Button.hx",216,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		this->super::preInitialize();
	}
return null();
}


Void Button_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","initialize",0x192cab76,"haxe.ui.toolkit.controls.Button.initialize","haxe/ui/toolkit/controls/Button.hx",219,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		this->super::initialize();
		HX_STACK_LINE(222)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OVER,this->_onMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(223)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(224)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(225)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(226)
		this->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onMouseClick_dyn(),null(),null(),null());
		HX_STACK_LINE(228)
		this->organiseChildren();
	}
return null();
}


bool Button_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_disabled",0x8d77e89f,"haxe.ui.toolkit.controls.Button.set_disabled","haxe/ui/toolkit/controls/Button.hx",231,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	this->super::set_disabled(value);
	HX_STACK_LINE(233)
	if (((value == true))){
		HX_STACK_LINE(234)
		this->get_sprite()->buttonMode = false;
		HX_STACK_LINE(235)
		this->get_sprite()->useHandCursor = false;
	}
	else{
		HX_STACK_LINE(238)
		this->get_sprite()->buttonMode = true;
		HX_STACK_LINE(239)
		this->get_sprite()->useHandCursor = true;
	}
	HX_STACK_LINE(242)
	return value;
}


::String Button_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_text",0x2dff0cdc,"haxe.ui.toolkit.controls.Button.get_text","haxe/ui/toolkit/controls/Button.hx",248,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	if (((this->_label == null()))){
		HX_STACK_LINE(250)
		return null();
	}
	HX_STACK_LINE(252)
	return this->_label->get_text();
}


::String Button_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_text",0xdc5c6650,"haxe.ui.toolkit.controls.Button.set_text","haxe/ui/toolkit/controls/Button.hx",255,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(256)
	value = this->super::set_text(value);
	HX_STACK_LINE(258)
	if (((value != null()))){
		HX_STACK_LINE(259)
		if (((this->_label == null()))){
			HX_STACK_LINE(260)
			this->_label = ::haxe::ui::toolkit::controls::Text_obj::__new();
			HX_STACK_LINE(261)
			this->_label->set_id(HX_CSTRING("label"));
		}
		HX_STACK_LINE(263)
		this->_label->set_value(value);
		HX_STACK_LINE(264)
		this->organiseChildren();
	}
	else{
		HX_STACK_LINE(266)
		this->_label->set_visible(false);
	}
	HX_STACK_LINE(268)
	return value;
}


Void Button_obj::_onMouseOver( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOver",0xc5baaaa1,"haxe.ui.toolkit.controls.Button._onMouseOver","haxe/ui/toolkit/controls/Button.hx",275,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(275)
		if (((this->_selected == false))){
			HX_STACK_LINE(276)
			if (((bool((event->buttonDown == false)) || bool((this->_down == false))))){
				HX_STACK_LINE(277)
				this->set_state(HX_CSTRING("over"));
			}
			else{
				HX_STACK_LINE(279)
				this->set_state(HX_CSTRING("down"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOver,(void))

Void Button_obj::_onMouseOut( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOut",0x0b37efe1,"haxe.ui.toolkit.controls.Button._onMouseOut","haxe/ui/toolkit/controls/Button.hx",285,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(285)
		if (((this->_selected == false))){
			HX_STACK_LINE(286)
			if (((bool((this->_remainPressed == false)) || bool((event->buttonDown == false))))){
				HX_STACK_LINE(287)
				this->set_state(HX_CSTRING("normal"));
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOut,(void))

Void Button_obj::_onMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseDown",0xbe7011af,"haxe.ui.toolkit.controls.Button._onMouseDown","haxe/ui/toolkit/controls/Button.hx",295,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(295)
		if (((this->_allowSelection == true))){
			HX_STACK_LINE(296)
			this->_down = true;
			HX_STACK_LINE(297)
			this->set_state(HX_CSTRING("down"));
			HX_STACK_LINE(298)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseDown,(void))

Void Button_obj::_onMouseUp( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseUp",0x2031a268,"haxe.ui.toolkit.controls.Button._onMouseUp","haxe/ui/toolkit/controls/Button.hx",303,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(303)
		if (((  (((this->_allowSelection == true))) ? bool((this->get_toggle() == false)) : bool(false) ))){
			HX_STACK_LINE(304)
			this->_down = false;
			HX_STACK_LINE(305)
			if ((this->hitTest(event->stageX,event->stageY))){
				HX_STACK_LINE(307)
				this->set_state(HX_CSTRING("over"));
			}
			else{
				HX_STACK_LINE(312)
				this->set_state(HX_CSTRING("normal"));
			}
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseUp,(void))

Void Button_obj::_onMouseClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseClick",0x4e32865b,"haxe.ui.toolkit.controls.Button._onMouseClick","haxe/ui/toolkit/controls/Button.hx",321,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(322)
		if (((  (((this->_icon != null()))) ? bool(this->_icon->hitTest(event->stageX,event->stageY)) : bool(false) ))){
			HX_STACK_LINE(323)
			this->dispatchEvent(::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_glyphClick"),null(),null(),null()));
		}
		HX_STACK_LINE(325)
		if (((bool((this->_toggle == true)) && bool((this->_allowSelection == true))))){
			HX_STACK_LINE(326)
			this->set_selected(!(this->get_selected()));
			HX_STACK_LINE(328)
			if (((  (((this->get_selected() == false))) ? bool(this->hitTest(event->stageX,event->stageY)) : bool(false) ))){
				HX_STACK_LINE(329)
				this->set_state(HX_CSTRING("over"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseClick,(void))

Array< ::String > Button_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_states",0x22f4c331,"haxe.ui.toolkit.controls.Button.get_states","haxe/ui/toolkit/controls/Button.hx",339,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(339)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("over")).Add(HX_CSTRING("down")).Add(HX_CSTRING("disabled"));
}


::String Button_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_state",0x6aef4b0e,"haxe.ui.toolkit.controls.Button.set_state","haxe/ui/toolkit/controls/Button.hx",342,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(343)
	this->super::set_state(value);
	HX_STACK_LINE(344)
	if (((value == HX_CSTRING("down")))){
		HX_STACK_LINE(345)
		this->_down = true;
	}
	HX_STACK_LINE(347)
	return value;
}


bool Button_obj::get_allowFocus( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowFocus",0x223b27fe,"haxe.ui.toolkit.controls.Button.get_allowFocus","haxe/ui/toolkit/controls/Button.hx",360,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	return this->_allowFocus;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowFocus,return )

bool Button_obj::set_allowFocus( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowFocus",0x425b1072,"haxe.ui.toolkit.controls.Button.set_allowFocus","haxe/ui/toolkit/controls/Button.hx",364,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(364)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowFocus,return )

::String Button_obj::get_iconPosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_iconPosition",0x78d06c71,"haxe.ui.toolkit.controls.Button.get_iconPosition","haxe/ui/toolkit/controls/Button.hx",404,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	return this->_iconPosition;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconPosition,return )

::String Button_obj::set_iconPosition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_iconPosition",0xcf1259e5,"haxe.ui.toolkit.controls.Button.set_iconPosition","haxe/ui/toolkit/controls/Button.hx",407,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(408)
	this->_iconPosition = value;
	HX_STACK_LINE(409)
	this->organiseChildren();
	HX_STACK_LINE(410)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconPosition,return )

bool Button_obj::get_toggle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_toggle",0xac3ca983,"haxe.ui.toolkit.controls.Button.get_toggle","haxe/ui/toolkit/controls/Button.hx",414,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	return this->_toggle;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_toggle,return )

bool Button_obj::set_toggle( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_toggle",0xafba47f7,"haxe.ui.toolkit.controls.Button.set_toggle","haxe/ui/toolkit/controls/Button.hx",417,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(418)
	this->_toggle = value;
	HX_STACK_LINE(419)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_toggle,return )

bool Button_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_selected",0xade7ae0a,"haxe.ui.toolkit.controls.Button.get_selected","haxe/ui/toolkit/controls/Button.hx",423,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(423)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_selected,return )

bool Button_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_selected",0xc2e0d17e,"haxe.ui.toolkit.controls.Button.set_selected","haxe/ui/toolkit/controls/Button.hx",426,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(427)
	if (((bool((this->_toggle == true)) && bool((this->_selected != value))))){
		HX_STACK_LINE(431)
		if (((bool((this->_group != null())) && bool((value == true))))){
			HX_STACK_LINE(432)
			Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(this->_group);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(433)
			if (((arr != null()))){
				HX_STACK_LINE(434)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(434)
				while(((_g < arr->length))){
					HX_STACK_LINE(434)
					::haxe::ui::toolkit::controls::Button button = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(434)
					++(_g);
					HX_STACK_LINE(435)
					if (((button != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(436)
						button->set_selected(false);
					}
				}
			}
		}
		HX_STACK_LINE(442)
		this->_selected = value;
		HX_STACK_LINE(443)
		if (((this->dispatchChangeEvents == true))){
			HX_STACK_LINE(444)
			::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(445)
			this->dispatchEvent(event);
		}
	}
	HX_STACK_LINE(449)
	this->_selected = value;
	HX_STACK_LINE(450)
	if (((this->_selected == true))){
		HX_STACK_LINE(451)
		this->set_state(HX_CSTRING("down"));
	}
	else{
		struct _Function_2_1{
			inline static bool Block( ::haxe::ui::toolkit::controls::Button_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Button.hx",454,0x493ac9f6)
				{
					HX_STACK_LINE(454)
					::flash::geom::Point _g = __this->get_root()->get_mousePosition();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(454)
					return (__this->hitTest(_g->x,__this->get_root()->get_mousePosition()->y) == true);
				}
				return null();
			}
		};
		HX_STACK_LINE(454)
		if (((  (((this->get_root() != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(455)
			this->set_state(HX_CSTRING("over"));
		}
		else{
			HX_STACK_LINE(457)
			this->set_state(HX_CSTRING("normal"));
		}
	}
	HX_STACK_LINE(464)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_selected,return )

::String Button_obj::get_group( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_group",0x9d879c30,"haxe.ui.toolkit.controls.Button.get_group","haxe/ui/toolkit/controls/Button.hx",468,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(468)
	return this->_group;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_group,return )

::String Button_obj::set_group( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_group",0x80d8883c,"haxe.ui.toolkit.controls.Button.set_group","haxe/ui/toolkit/controls/Button.hx",471,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(472)
	if (((value != null()))){
		HX_STACK_LINE(473)
		Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(474)
		if (((arr != null()))){
			HX_STACK_LINE(475)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(479)
	this->_group = value;
	HX_STACK_LINE(480)
	if (((value == null()))){
		HX_STACK_LINE(481)
		return value;
	}
	HX_STACK_LINE(484)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(485)
	if (((arr == null()))){
		HX_STACK_LINE(486)
		arr = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(489)
	if (((::haxe::ui::toolkit::controls::Button_obj::optionInGroup(value,hx::ObjectPtr<OBJ_>(this)) == false))){
		HX_STACK_LINE(490)
		arr->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(492)
	::haxe::ui::toolkit::controls::Button_obj::_groups->set(value,arr);
	HX_STACK_LINE(494)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_group,return )

bool Button_obj::get_allowSelection( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowSelection",0xdd8acb72,"haxe.ui.toolkit.controls.Button.get_allowSelection","haxe/ui/toolkit/controls/Button.hx",499,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(499)
	return this->_allowSelection;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowSelection,return )

bool Button_obj::set_allowSelection( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowSelection",0xba39fde6,"haxe.ui.toolkit.controls.Button.set_allowSelection","haxe/ui/toolkit/controls/Button.hx",502,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(503)
	this->_allowSelection = value;
	HX_STACK_LINE(504)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowSelection,return )

Void Button_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","applyStyle",0x5be09b09,"haxe.ui.toolkit.controls.Button.applyStyle","haxe/ui/toolkit/controls/Button.hx",510,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(511)
		this->super::applyStyle();
		HX_STACK_LINE(514)
		if (((this->_label != null()))){
			HX_STACK_LINE(515)
			::haxe::ui::toolkit::style::Style labelStyle = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(516)
			if (((this->_style != null()))){
				HX_STACK_LINE(517)
				labelStyle->set_fontName(this->_style->get_fontName());
				HX_STACK_LINE(518)
				labelStyle->set_fontSize(this->_style->get_fontSize());
				HX_STACK_LINE(519)
				labelStyle->set_fontEmbedded(this->_style->get_fontEmbedded());
				HX_STACK_LINE(520)
				labelStyle->set_color(this->_style->get_color());
				HX_STACK_LINE(521)
				labelStyle->set_textAlign(this->_style->get_textAlign());
			}
			HX_STACK_LINE(523)
			this->_label->set_style(labelStyle);
		}
		HX_STACK_LINE(526)
		if (((this->_style != null()))){
			HX_STACK_LINE(527)
			if (((this->_style->get_icon() != null()))){
				HX_STACK_LINE(528)
				this->set_icon(this->_style->get_icon());
			}
			HX_STACK_LINE(531)
			if (((this->_style->get_iconPosition() != null()))){
				HX_STACK_LINE(532)
				this->set_iconPosition(this->_style->get_iconPosition());
			}
		}
	}
return null();
}


Dynamic Button_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","clone",0x126fcaf7,"haxe.ui.toolkit.controls.Button.clone","haxe/ui/toolkit/controls/Button.hx",1,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_remainPressed(this->get_remainPressed());
	HX_STACK_LINE(4)
	c->set_icon(this->get_icon());
	HX_STACK_LINE(5)
	c->set_allowFocus(this->get_allowFocus());
	HX_STACK_LINE(6)
	c->set_iconPosition(this->get_iconPosition());
	HX_STACK_LINE(7)
	c->set_toggle(this->get_toggle());
	HX_STACK_LINE(8)
	c->set_selected(this->get_selected());
	HX_STACK_LINE(9)
	c->set_group(this->get_group());
	HX_STACK_LINE(10)
	c->set_allowSelection(this->get_allowSelection());
	HX_STACK_LINE(11)
	return c;
}


Dynamic Button_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","self",0xd9464532,"haxe.ui.toolkit.controls.Button.self","haxe/ui/toolkit/controls/Button.hx",2,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Button_obj::__new();
}


::String Button_obj::STATE_NORMAL;

::String Button_obj::STATE_OVER;

::String Button_obj::STATE_DOWN;

::String Button_obj::STATE_DISABLED;

::haxe::ds::StringMap Button_obj::_groups;

bool Button_obj::optionInGroup( ::String value,::haxe::ui::toolkit::controls::Button option){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","optionInGroup",0x813b47bf,"haxe.ui.toolkit.controls.Button.optionInGroup","haxe/ui/toolkit/controls/Button.hx",540,0x493ac9f6)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(option,"option")
	HX_STACK_LINE(541)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(542)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(543)
	if (((arr != null()))){
		HX_STACK_LINE(544)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(544)
		while(((_g < arr->length))){
			HX_STACK_LINE(544)
			::haxe::ui::toolkit::controls::Button test = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(544)
			++(_g);
			HX_STACK_LINE(545)
			if (((test == option))){
				HX_STACK_LINE(546)
				exists = true;
				HX_STACK_LINE(547)
				break;
			}
		}
	}
	HX_STACK_LINE(551)
	return exists;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Button_obj,optionInGroup,return )


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_MARK_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_toggle,"_toggle");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_group,"_group");
	HX_MARK_MEMBER_NAME(_spacers,"_spacers");
	HX_MARK_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_VISIT_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_toggle,"_toggle");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	HX_VISIT_MEMBER_NAME(_spacers,"_spacers");
	HX_VISIT_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return get_icon(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"group") ) { return get_group(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return get_toggle(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return _groups; }
		if (HX_FIELD_EQ(inName,"_toggle") ) { return _toggle; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spacers") ) { return _spacers; }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return get_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return set_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		if (HX_FIELD_EQ(inName,"allowFocus") ) { return get_allowFocus(); }
		if (HX_FIELD_EQ(inName,"get_toggle") ) { return get_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toggle") ) { return set_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return _allowFocus; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return get_iconPosition(); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionInGroup") ) { return optionInGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return _iconPosition; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { return get_remainPressed(); }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { return _remainPressed; }
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return get_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return set_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return get_allowSelection(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { return _allowSelection; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"organiseChildren") ) { return organiseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return get_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return set_iconPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_remainPressed") ) { return get_remainPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_remainPressed") ) { return set_remainPressed_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowSelection") ) { return get_allowSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSelection") ) { return set_allowSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { return dispatchChangeEvents; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return set_icon(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return set_toggle(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toggle") ) { _toggle=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spacers") ) { _spacers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { return set_selected(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { return set_allowFocus(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return set_iconPosition(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { return set_remainPressed(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { _remainPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return set_allowSelection(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { _allowSelection=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { dispatchChangeEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_allowFocus"));
	outFields->push(HX_CSTRING("_remainPressed"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_icon"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("_toggle"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("_allowSelection"));
	outFields->push(HX_CSTRING("_iconPosition"));
	outFields->push(HX_CSTRING("_group"));
	outFields->push(HX_CSTRING("_spacers"));
	outFields->push(HX_CSTRING("remainPressed"));
	outFields->push(HX_CSTRING("icon"));
	outFields->push(HX_CSTRING("allowFocus"));
	outFields->push(HX_CSTRING("iconPosition"));
	outFields->push(HX_CSTRING("toggle"));
	outFields->push(HX_CSTRING("selected"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("allowSelection"));
	outFields->push(HX_CSTRING("dispatchChangeEvents"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_NORMAL"),
	HX_CSTRING("STATE_OVER"),
	HX_CSTRING("STATE_DOWN"),
	HX_CSTRING("STATE_DISABLED"),
	HX_CSTRING("_groups"),
	HX_CSTRING("optionInGroup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Button_obj,_allowFocus),HX_CSTRING("_allowFocus")},
	{hx::fsBool,(int)offsetof(Button_obj,_remainPressed),HX_CSTRING("_remainPressed")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Button_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(Button_obj,_icon),HX_CSTRING("_icon")},
	{hx::fsBool,(int)offsetof(Button_obj,_down),HX_CSTRING("_down")},
	{hx::fsBool,(int)offsetof(Button_obj,_toggle),HX_CSTRING("_toggle")},
	{hx::fsBool,(int)offsetof(Button_obj,_selected),HX_CSTRING("_selected")},
	{hx::fsBool,(int)offsetof(Button_obj,_allowSelection),HX_CSTRING("_allowSelection")},
	{hx::fsString,(int)offsetof(Button_obj,_iconPosition),HX_CSTRING("_iconPosition")},
	{hx::fsString,(int)offsetof(Button_obj,_group),HX_CSTRING("_group")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Button_obj,_spacers),HX_CSTRING("_spacers")},
	{hx::fsBool,(int)offsetof(Button_obj,dispatchChangeEvents),HX_CSTRING("dispatchChangeEvents")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_allowFocus"),
	HX_CSTRING("_remainPressed"),
	HX_CSTRING("_label"),
	HX_CSTRING("_icon"),
	HX_CSTRING("_down"),
	HX_CSTRING("_toggle"),
	HX_CSTRING("_selected"),
	HX_CSTRING("_allowSelection"),
	HX_CSTRING("_iconPosition"),
	HX_CSTRING("_group"),
	HX_CSTRING("_spacers"),
	HX_CSTRING("get_remainPressed"),
	HX_CSTRING("set_remainPressed"),
	HX_CSTRING("get_icon"),
	HX_CSTRING("set_icon"),
	HX_CSTRING("organiseChildren"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("set_disabled"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("_onMouseOver"),
	HX_CSTRING("_onMouseOut"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onMouseUp"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("get_states"),
	HX_CSTRING("set_state"),
	HX_CSTRING("get_allowFocus"),
	HX_CSTRING("set_allowFocus"),
	HX_CSTRING("dispatchChangeEvents"),
	HX_CSTRING("get_iconPosition"),
	HX_CSTRING("set_iconPosition"),
	HX_CSTRING("get_toggle"),
	HX_CSTRING("set_toggle"),
	HX_CSTRING("get_selected"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("get_group"),
	HX_CSTRING("set_group"),
	HX_CSTRING("get_allowSelection"),
	HX_CSTRING("set_allowSelection"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_MARK_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_VISIT_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#endif

Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Button"), hx::TCanCast< Button_obj> ,sStaticFields,sMemberFields,
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

void Button_obj::__boot()
{
	STATE_NORMAL= HX_CSTRING("normal");
	STATE_OVER= HX_CSTRING("over");
	STATE_DOWN= HX_CSTRING("down");
	STATE_DISABLED= HX_CSTRING("disabled");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
