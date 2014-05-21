#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout
#include <haxe/ui/toolkit/containers/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ScrollView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","new",0x13956cfe,"haxe.ui.toolkit.containers.ScrollView.new","haxe/ui/toolkit/containers/ScrollView.hx",21,0x89f00132)
{
	HX_STACK_LINE(40)
	this->_virtualScrolling = false;
	HX_STACK_LINE(39)
	this->_autoHideScrolls = false;
	HX_STACK_LINE(36)
	this->_scrollSensitivity = (int)0;
	HX_STACK_LINE(27)
	this->_showVScroll = true;
	HX_STACK_LINE(26)
	this->_showHScroll = true;
	HX_STACK_LINE(43)
	super::__construct();
	HX_STACK_LINE(44)
	this->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(45)
	this->_layout = ::haxe::ui::toolkit::containers::ScrollViewLayout_obj::__new();
	HX_STACK_LINE(46)
	this->_eventTarget = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(47)
	this->_eventTarget->set_visible(false);
	HX_STACK_LINE(49)
	this->_container = ::haxe::ui::toolkit::containers::Box_obj::__new();
	HX_STACK_LINE(50)
	this->_container->set_layout(::haxe::ui::toolkit::layout::VerticalLayout_obj::__new());
	HX_STACK_LINE(51)
	this->_container->set_id(HX_CSTRING("container"));
	HX_STACK_LINE(52)
	this->_container->set_percentWidth(this->_container->set_percentHeight((int)100));
	HX_STACK_LINE(53)
	this->addChild(this->_container);
}
;
	return null();
}

//ScrollView_obj::~ScrollView_obj() { }

Dynamic ScrollView_obj::__CreateEmpty() { return  new ScrollView_obj; }
hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__new()
{  hx::ObjectPtr< ScrollView_obj > result = new ScrollView_obj();
	result->__construct();
	return result;}

Dynamic ScrollView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollView_obj > result = new ScrollView_obj();
	result->__construct();
	return result;}

Void ScrollView_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","preInitialize",0xa7c50d71,"haxe.ui.toolkit.containers.ScrollView.preInitialize","haxe/ui/toolkit/containers/ScrollView.hx",59,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->super::preInitialize();
		HX_STACK_LINE(62)
		if (((this->_style != null()))){
			HX_STACK_LINE(63)
			this->_autoHideScrolls = this->_style->get_autoHideScrolls();
			struct _Function_2_1{
				inline static Dynamic Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",64,0x89f00132)
					{
						HX_STACK_LINE(64)
						Dynamic o = __this->_layout;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(64)
						return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("inlineScrolls"),true)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(64)
			if (((_Function_2_1::Block(this) != null()))){
				HX_STACK_LINE(65)
				Dynamic o = this->_layout;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(65)
				Dynamic value = this->_style->get_inlineScrolls();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(65)
				if (((o != null()))){
					HX_STACK_LINE(65)
					o->__SetField(HX_CSTRING("inlineScrolls"),value,true);
				}
			}
		}
	}
return null();
}


Void ScrollView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","initialize",0x3e478472,"haxe.ui.toolkit.containers.ScrollView.initialize","haxe/ui/toolkit/containers/ScrollView.hx",70,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->super::initialize();
		HX_STACK_LINE(73)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_WHEEL,this->_onMouseWheel_dyn(),null(),null(),null());
		HX_STACK_LINE(74)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(76)
		this->get_sprite()->addChild(this->_eventTarget);
	}
return null();
}


Void ScrollView_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","postInitialize",0x18cf7df2,"haxe.ui.toolkit.containers.ScrollView.postInitialize","haxe/ui/toolkit/containers/ScrollView.hx",79,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->super::postInitialize();
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(82)
		if (((content != null()))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/containers/ScrollView.hx",84,0x89f00132)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(84)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::ScrollView >()->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(83)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(content))->addEventListener(HX_CSTRING("haxeui_resize"), Dynamic(new _Function_2_1(_g)),null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","addChild",0x18e2b65d,"haxe.ui.toolkit.containers.ScrollView.addChild","haxe/ui/toolkit/containers/ScrollView.hx",89,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(90)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(91)
	if (((bool((bool((child == this->_container)) || bool((child == this->_hscroll)))) || bool((child == this->_vscroll))))){
		HX_STACK_LINE(92)
		r = this->super::addChild(child);
	}
	else{
		HX_STACK_LINE(94)
		r = this->_container->addChild(child);
	}
	HX_STACK_LINE(96)
	return r;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","addChildAt",0x1fc300b0,"haxe.ui.toolkit.containers.ScrollView.addChildAt","haxe/ui/toolkit/containers/ScrollView.hx",99,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(100)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(101)
	if (((bool((bool((child == this->_container)) || bool((child == this->_hscroll)))) || bool((child == this->_vscroll))))){
		HX_STACK_LINE(102)
		r = this->super::addChildAt(child,index);
	}
	else{
		HX_STACK_LINE(104)
		r = this->_container->addChildAt(child,index);
	}
	HX_STACK_LINE(106)
	return r;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","removeChild",0x4d29f156,"haxe.ui.toolkit.containers.ScrollView.removeChild","haxe/ui/toolkit/containers/ScrollView.hx",109,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(110)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(111)
		if (((bool((bool((child == this->_container)) || bool((child == this->_hscroll)))) || bool((child == this->_vscroll))))){
			HX_STACK_LINE(112)
			r = this->super::removeChild(child,dispose);
		}
		else{
			HX_STACK_LINE(114)
			r = this->_container->removeChild(child,dispose);
		}
		HX_STACK_LINE(116)
		return r;
	}
}


Void ScrollView_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","dispose",0x7edbc43d,"haxe.ui.toolkit.containers.ScrollView.dispose","haxe/ui/toolkit/containers/ScrollView.hx",119,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		this->get_sprite()->removeChild(this->_eventTarget);
		HX_STACK_LINE(121)
		this->super::dispose();
	}
return null();
}


bool ScrollView_obj::get_virtualScrolling( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_virtualScrolling",0xa9315a15,"haxe.ui.toolkit.containers.ScrollView.get_virtualScrolling","haxe/ui/toolkit/containers/ScrollView.hx",129,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->_virtualScrolling;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_virtualScrolling,return )

bool ScrollView_obj::set_virtualScrolling( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_virtualScrolling",0x75e91189,"haxe.ui.toolkit.containers.ScrollView.set_virtualScrolling","haxe/ui/toolkit/containers/ScrollView.hx",131,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(132)
	this->_virtualScrolling = value;
	HX_STACK_LINE(133)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_virtualScrolling,return )

bool ScrollView_obj::get_showHScroll( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_showHScroll",0xc837f04d,"haxe.ui.toolkit.containers.ScrollView.get_showHScroll","haxe/ui/toolkit/containers/ScrollView.hx",140,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	return this->_showHScroll;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_showHScroll,return )

bool ScrollView_obj::set_showHScroll( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_showHScroll",0xc4036d59,"haxe.ui.toolkit.containers.ScrollView.set_showHScroll","haxe/ui/toolkit/containers/ScrollView.hx",143,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	this->_showHScroll = value;
	HX_STACK_LINE(145)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_showHScroll,return )

bool ScrollView_obj::get_showVScroll( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_showVScroll",0x0e646edb,"haxe.ui.toolkit.containers.ScrollView.get_showVScroll","haxe/ui/toolkit/containers/ScrollView.hx",149,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return this->_showVScroll;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_showVScroll,return )

bool ScrollView_obj::set_showVScroll( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_showVScroll",0x0a2febe7,"haxe.ui.toolkit.containers.ScrollView.set_showVScroll","haxe/ui/toolkit/containers/ScrollView.hx",152,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(153)
	this->_showVScroll = value;
	HX_STACK_LINE(154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_showVScroll,return )

Float ScrollView_obj::get_hscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollPos",0xaf8eca8a,"haxe.ui.toolkit.containers.ScrollView.get_hscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",162,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	if (((this->_hscroll != null()))){
		HX_STACK_LINE(164)
		return this->_hscroll->get_pos();
	}
	HX_STACK_LINE(166)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPos,return )

Float ScrollView_obj::set_hscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollPos",0xcfaeb2fe,"haxe.ui.toolkit.containers.ScrollView.set_hscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",169,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(170)
	if (((this->_hscroll != null()))){
		HX_STACK_LINE(171)
		this->_hscroll->set_pos(value);
	}
	HX_STACK_LINE(173)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPos,return )

Float ScrollView_obj::get_hscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollMin",0xaf8c7e88,"haxe.ui.toolkit.containers.ScrollView.get_hscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",176,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	if (((this->_hscroll != null()))){
		HX_STACK_LINE(178)
		return this->_hscroll->get_min();
	}
	HX_STACK_LINE(180)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMin,return )

Float ScrollView_obj::set_hscrollMin( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollMin",0xcfac66fc,"haxe.ui.toolkit.containers.ScrollView.set_hscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",183,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(184)
	if (((this->_virtualScrolling == true))){
	}
	HX_STACK_LINE(187)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMin,return )

Float ScrollView_obj::get_hscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollMax",0xaf8c779a,"haxe.ui.toolkit.containers.ScrollView.get_hscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",190,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	if (((this->_hscroll != null()))){
		HX_STACK_LINE(192)
		return this->_hscroll->get_max();
	}
	HX_STACK_LINE(194)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMax,return )

Float ScrollView_obj::set_hscrollMax( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollMax",0xcfac600e,"haxe.ui.toolkit.containers.ScrollView.set_hscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",197,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	if (((this->_virtualScrolling == true))){
		HX_STACK_LINE(199)
		this->createHScroll(true);
		HX_STACK_LINE(200)
		this->_hscroll->set_max(value);
	}
	HX_STACK_LINE(202)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMax,return )

Float ScrollView_obj::get_hscrollPageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollPageSize",0xbe0551fa,"haxe.ui.toolkit.containers.ScrollView.get_hscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",205,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	if (((this->_hscroll != null()))){
		HX_STACK_LINE(207)
		return this->_hscroll->get_pageSize();
	}
	HX_STACK_LINE(209)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPageSize,return )

Float ScrollView_obj::set_hscrollPageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollPageSize",0xfaa24506,"haxe.ui.toolkit.containers.ScrollView.set_hscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",212,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(213)
	if (((this->_virtualScrolling == true))){
	}
	HX_STACK_LINE(216)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPageSize,return )

Float ScrollView_obj::get_vscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollPos",0x33a158bc,"haxe.ui.toolkit.containers.ScrollView.get_vscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",224,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(226)
		return this->_vscroll->get_pos();
	}
	HX_STACK_LINE(228)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPos,return )

Float ScrollView_obj::set_vscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollPos",0x53c14130,"haxe.ui.toolkit.containers.ScrollView.set_vscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",231,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(233)
		this->_vscroll->set_pos(value);
	}
	HX_STACK_LINE(235)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPos,return )

Float ScrollView_obj::get_vscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollMin",0x339f0cba,"haxe.ui.toolkit.containers.ScrollView.get_vscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",238,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(240)
		return this->_vscroll->get_min();
	}
	HX_STACK_LINE(242)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMin,return )

Float ScrollView_obj::set_vscrollMin( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollMin",0x53bef52e,"haxe.ui.toolkit.containers.ScrollView.set_vscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",245,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(246)
	if (((this->_virtualScrolling == true))){
	}
	HX_STACK_LINE(249)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMin,return )

Float ScrollView_obj::get_vscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollMax",0x339f05cc,"haxe.ui.toolkit.containers.ScrollView.get_vscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",252,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(253)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(254)
		return this->_vscroll->get_max();
	}
	HX_STACK_LINE(256)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMax,return )

Float ScrollView_obj::set_vscrollMax( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollMax",0x53beee40,"haxe.ui.toolkit.containers.ScrollView.set_vscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",259,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(260)
	if (((this->_virtualScrolling == true))){
		HX_STACK_LINE(261)
		this->createVScroll(true);
		HX_STACK_LINE(262)
		this->_vscroll->set_max(value);
	}
	HX_STACK_LINE(264)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMax,return )

Float ScrollView_obj::get_vscrollPageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollPageSize",0xe3c80e88,"haxe.ui.toolkit.containers.ScrollView.get_vscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",267,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(268)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(269)
		return this->_vscroll->get_pageSize();
	}
	HX_STACK_LINE(271)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPageSize,return )

Float ScrollView_obj::set_vscrollPageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollPageSize",0x20650194,"haxe.ui.toolkit.containers.ScrollView.set_vscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",274,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(275)
	if (((this->_virtualScrolling == true))){
	}
	HX_STACK_LINE(278)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPageSize,return )

Void ScrollView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","invalidate",0xd8b66c9d,"haxe.ui.toolkit.containers.ScrollView.invalidate","haxe/ui/toolkit/containers/ScrollView.hx",284,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(285)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(286)
			return null();
		}
		HX_STACK_LINE(289)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(290)
		this->_invalidating = true;
		HX_STACK_LINE(291)
		if (((((int(type) & int((int)256))) == (int)256))){
			HX_STACK_LINE(292)
			this->checkScrolls();
			HX_STACK_LINE(293)
			this->updateScrollRect();
			HX_STACK_LINE(294)
			this->resizeEventTarget();
		}
		HX_STACK_LINE(296)
		this->_invalidating = false;
	}
return null();
}


Void ScrollView_obj::_onHScrollChange( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onHScrollChange",0x9dc43069,"haxe.ui.toolkit.containers.ScrollView._onHScrollChange","haxe/ui/toolkit/containers/ScrollView.hx",302,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(303)
		this->updateScrollRect();
		HX_STACK_LINE(304)
		::haxe::ui::toolkit::events::UIEvent event1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_scroll"),null(),null(),null());		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(305)
		this->dispatchEvent(event1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onHScrollChange,(void))

Void ScrollView_obj::_onVScrollChange( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onVScrollChange",0x6e4b0d77,"haxe.ui.toolkit.containers.ScrollView._onVScrollChange","haxe/ui/toolkit/containers/ScrollView.hx",308,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(309)
		this->updateScrollRect();
		HX_STACK_LINE(310)
		::haxe::ui::toolkit::events::UIEvent event1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_scroll"),null(),null(),null());		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(311)
		this->dispatchEvent(event1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onVScrollChange,(void))

Void ScrollView_obj::_onMouseWheel( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onMouseWheel",0xc35c2b32,"haxe.ui.toolkit.containers.ScrollView._onMouseWheel","haxe/ui/toolkit/containers/ScrollView.hx",314,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
		struct _Function_1_1{
			inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",316,0x89f00132)
				{
					HX_STACK_LINE(316)
					Float _g = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(316)
					return (_g < __this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)());
				}
				return null();
			}
		};
		HX_STACK_LINE(316)
		if (((  ((!(event->shiftKey))) ? bool(_Function_1_1::Block(this,content)) : bool(true) ))){
			struct _Function_2_1{
				inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",317,0x89f00132)
					{
						HX_STACK_LINE(317)
						Float _g1 = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(317)
						return (_g1 > __this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)());
					}
					return null();
				}
			};
			HX_STACK_LINE(317)
			if (((  (((this->_hscroll != null()))) ? bool(_Function_2_1::Block(this,content)) : bool(false) ))){
				HX_STACK_LINE(318)
				if (((event->delta != (int)0))){
					HX_STACK_LINE(319)
					if (((event->delta < (int)0))){
						HX_STACK_LINE(320)
						this->_hscroll->incrementValue();
					}
					else{
						HX_STACK_LINE(321)
						if (((event->delta > (int)0))){
							HX_STACK_LINE(322)
							this->_hscroll->deincrementValue();
						}
					}
				}
			}
		}
		else{
			struct _Function_2_1{
				inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",327,0x89f00132)
					{
						HX_STACK_LINE(327)
						Float _g2 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(327)
						return (_g2 > __this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)());
					}
					return null();
				}
			};
			HX_STACK_LINE(327)
			if (((  (((this->_vscroll != null()))) ? bool(_Function_2_1::Block(this,content)) : bool(false) ))){
				HX_STACK_LINE(328)
				if (((event->delta != (int)0))){
					HX_STACK_LINE(329)
					if (((event->delta < (int)0))){
						HX_STACK_LINE(330)
						this->_vscroll->incrementValue();
					}
					else{
						HX_STACK_LINE(331)
						if (((event->delta > (int)0))){
							HX_STACK_LINE(332)
							this->_vscroll->deincrementValue();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseWheel,(void))

Void ScrollView_obj::_onMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onMouseDown",0x82b021ab,"haxe.ui.toolkit.containers.ScrollView._onMouseDown","haxe/ui/toolkit/containers/ScrollView.hx",339,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(340)
		bool inScroll = false;		HX_STACK_VAR(inScroll,"inScroll");
		HX_STACK_LINE(341)
		if (((  (((this->_vscroll != null()))) ? bool((this->_vscroll->get_visible() == true)) : bool(false) ))){
			HX_STACK_LINE(342)
			inScroll = this->_vscroll->hitTest(event->stageX,event->stageY);
		}
		HX_STACK_LINE(344)
		if (((  (((  (((this->_hscroll != null()))) ? bool((this->_hscroll->get_visible() == true)) : bool(false) ))) ? bool((inScroll == false)) : bool(false) ))){
			HX_STACK_LINE(345)
			inScroll = this->_hscroll->hitTest(event->stageX,event->stageY);
		}
		HX_STACK_LINE(348)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(349)
		if (((bool((bool((content != null())) && bool((inScroll == false)))) && bool((this->_virtualScrolling == false))))){
			HX_STACK_LINE(350)
			Float _g = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",350,0x89f00132)
					{
						HX_STACK_LINE(350)
						Float _g1 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(350)
						return (_g1 > __this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)());
					}
					return null();
				}
			};
			HX_STACK_LINE(350)
			if (((  ((!(((_g > this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()))))) ? bool(_Function_2_1::Block(this,content)) : bool(true) ))){
				HX_STACK_LINE(351)
				this->_downPos = ::flash::geom::Point_obj::__new(event->stageX,event->stageY);
				HX_STACK_LINE(352)
				::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
				HX_STACK_LINE(353)
				::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null(),null(),null());
			}
		}
		HX_STACK_LINE(357)
		if (((bool((this->_virtualScrolling == true)) && bool(((bool((this->_vscroll != null())) || bool((this->_hscroll != null())))))))){
			HX_STACK_LINE(358)
			this->_downPos = ::flash::geom::Point_obj::__new(event->stageX,event->stageY);
			HX_STACK_LINE(359)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
			HX_STACK_LINE(360)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseDown,(void))

Void ScrollView_obj::_onScreenMouseMove( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onScreenMouseMove",0xdd491e4e,"haxe.ui.toolkit.containers.ScrollView._onScreenMouseMove","haxe/ui/toolkit/containers/ScrollView.hx",365,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(365)
		if (((this->_downPos != null()))){
			HX_STACK_LINE(366)
			Float ypos = (event->stageY - this->_downPos->y);		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(367)
			Float xpos = (event->stageX - this->_downPos->x);		HX_STACK_VAR(xpos,"xpos");
			HX_STACK_LINE(369)
			::flash::display::DisplayObject target = event->get_target();		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(370)
			while(((  (((target != null()))) ? bool(::Std_obj::is(target,hx::ClassOf< ::flash::display::DisplayObject >())) : bool(false) ))){
				HX_STACK_LINE(372)
				hx::DivEq(xpos,target->get_scaleX());
				HX_STACK_LINE(373)
				hx::DivEq(ypos,target->get_scaleY());
				HX_STACK_LINE(374)
				target = target->get_parent();
			}
			HX_STACK_LINE(377)
			if (((  ((!(((::Math_obj::abs(xpos) >= this->_scrollSensitivity))))) ? bool((::Math_obj::abs(ypos) >= this->_scrollSensitivity)) : bool(true) ))){
				HX_STACK_LINE(378)
				this->_eventTarget->set_visible(true);
				HX_STACK_LINE(379)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
				HX_STACK_LINE(380)
				if (((content != null()))){
					struct _Function_4_1{
						inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",381,0x89f00132)
							{
								HX_STACK_LINE(381)
								Float _g = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(381)
								return (  ((!(((_g > __this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()))))) ? bool((__this->_virtualScrolling == true)) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(381)
					if (((  (((xpos != (int)0))) ? bool(_Function_4_1::Block(this,content)) : bool(false) ))){
						HX_STACK_LINE(382)
						if (((bool((this->_showHScroll == true)) && bool((this->_autoHideScrolls == true))))){
							HX_STACK_LINE(383)
							this->_hscroll->set_visible(true);
						}
						HX_STACK_LINE(385)
						if (((this->_hscroll != null()))){
							HX_STACK_LINE(386)
							::haxe::ui::toolkit::controls::HScroll _g = this->_hscroll;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(386)
							_g->set_pos((_g->get_pos() - xpos));
						}
					}
					struct _Function_4_2{
						inline static bool Block( ::haxe::ui::toolkit::containers::ScrollView_obj *__this,::haxe::ui::toolkit::core::interfaces::IDisplayObject &content){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",390,0x89f00132)
							{
								HX_STACK_LINE(390)
								Float _g1 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(390)
								return (  ((!(((_g1 > __this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()))))) ? bool((__this->_virtualScrolling == true)) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(390)
					if (((  (((ypos != (int)0))) ? bool(_Function_4_2::Block(this,content)) : bool(false) ))){
						HX_STACK_LINE(391)
						if (((bool((this->_showVScroll == true)) && bool((this->_autoHideScrolls == true))))){
							HX_STACK_LINE(392)
							this->_vscroll->set_visible(true);
						}
						HX_STACK_LINE(394)
						if (((this->_vscroll != null()))){
							HX_STACK_LINE(395)
							::haxe::ui::toolkit::controls::VScroll _g = this->_vscroll;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(395)
							_g->set_pos((_g->get_pos() - ypos));
						}
					}
					HX_STACK_LINE(399)
					this->_downPos = ::flash::geom::Point_obj::__new(event->stageX,event->stageY);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onScreenMouseMove,(void))

Void ScrollView_obj::_onScreenMouseUp( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onScreenMouseUp",0xcde66858,"haxe.ui.toolkit.containers.ScrollView._onScreenMouseUp","haxe/ui/toolkit/containers/ScrollView.hx",405,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(406)
		this->_eventTarget->set_visible(false);
		HX_STACK_LINE(407)
		this->_downPos = null();
		HX_STACK_LINE(408)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null());
		HX_STACK_LINE(409)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null());
		HX_STACK_LINE(411)
		if (((bool((bool((this->_hscroll != null())) && bool((this->_showHScroll == true)))) && bool((this->_autoHideScrolls == true))))){
			HX_STACK_LINE(412)
			this->_hscroll->set_visible(false);
		}
		HX_STACK_LINE(414)
		if (((bool((bool((this->_vscroll != null())) && bool((this->_showVScroll == true)))) && bool((this->_autoHideScrolls == true))))){
			HX_STACK_LINE(415)
			this->_vscroll->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onScreenMouseUp,(void))

Void ScrollView_obj::checkScrolls( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","checkScrolls",0x29ffcb80,"haxe.ui.toolkit.containers.ScrollView.checkScrolls","haxe/ui/toolkit/containers/ScrollView.hx",422,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		if (((this->_virtualScrolling == true))){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(427)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(428)
		if (((content != null()))){
			HX_STACK_LINE(430)
			bool invalidateLayout = false;		HX_STACK_VAR(invalidateLayout,"invalidateLayout");
			HX_STACK_LINE(431)
			Float hpos = (int)0;		HX_STACK_VAR(hpos,"hpos");
			HX_STACK_LINE(432)
			if (((this->_hscroll != null()))){
				HX_STACK_LINE(433)
				hpos = this->_hscroll->get_pos();
			}
			HX_STACK_LINE(435)
			Float _g = (content->__Field(HX_CSTRING("get_width"),true)() - hpos);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(435)
			if (((_g > this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()))){
				HX_STACK_LINE(436)
				if (((this->createHScroll(null()) == true))){
					HX_STACK_LINE(437)
					this->_hscroll->set_visible(false);
					HX_STACK_LINE(438)
					invalidateLayout = true;
				}
				HX_STACK_LINE(441)
				Float _g1 = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(441)
				this->_hscroll->set_max((_g1 - this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()));
				HX_STACK_LINE(442)
				Float _g2 = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(442)
				Float _g3 = (Float(_g2) / Float(content->__Field(HX_CSTRING("get_width"),true)()));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(442)
				this->_hscroll->set_pageSize((_g3 * this->_hscroll->get_max()));
				HX_STACK_LINE(443)
				if (((  (((  (((this->_hscroll->get_visible() == false))) ? bool((this->_showHScroll == true)) : bool(false) ))) ? bool((this->_autoHideScrolls == false)) : bool(false) ))){
					HX_STACK_LINE(444)
					this->_hscroll->set_visible(true);
					HX_STACK_LINE(445)
					invalidateLayout = true;
				}
			}
			else{
				HX_STACK_LINE(448)
				if (((this->_hscroll != null()))){
					HX_STACK_LINE(449)
					if (((this->_hscroll->get_pos() != (int)0))){
						HX_STACK_LINE(450)
						Float _g4 = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(450)
						this->_hscroll->set_pos((_g4 - this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()));
					}
					HX_STACK_LINE(453)
					if (((this->_hscroll->get_pos() == (int)0))){
						HX_STACK_LINE(454)
						if (((this->_hscroll->get_visible() == true))){
							HX_STACK_LINE(455)
							this->_hscroll->set_visible(false);
							HX_STACK_LINE(456)
							invalidateLayout = true;
						}
					}
					else{
						HX_STACK_LINE(459)
						Float _g5 = content->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(459)
						this->_hscroll->set_max((_g5 - this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)()));
						HX_STACK_LINE(460)
						Float _g6 = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(460)
						Float _g7 = (Float(_g6) / Float(content->__Field(HX_CSTRING("get_width"),true)()));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(460)
						this->_hscroll->set_pageSize((_g7 * this->_hscroll->get_max()));
					}
				}
			}
			HX_STACK_LINE(466)
			Float vpos = (int)0;		HX_STACK_VAR(vpos,"vpos");
			HX_STACK_LINE(467)
			if (((this->_vscroll != null()))){
				HX_STACK_LINE(468)
				vpos = this->_vscroll->get_pos();
			}
			HX_STACK_LINE(470)
			Float _g8 = (content->__Field(HX_CSTRING("get_height"),true)() - vpos);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(470)
			if (((_g8 > this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()))){
				HX_STACK_LINE(471)
				if (((this->createVScroll(null()) == true))){
					HX_STACK_LINE(472)
					this->_vscroll->set_visible(false);
					HX_STACK_LINE(473)
					invalidateLayout = true;
				}
				HX_STACK_LINE(476)
				Float _g9 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(476)
				this->_vscroll->set_max((_g9 - this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()));
				HX_STACK_LINE(477)
				Float _g10 = this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(477)
				Float _g11 = (Float(_g10) / Float(content->__Field(HX_CSTRING("get_height"),true)()));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(477)
				this->_vscroll->set_pageSize((_g11 * this->_vscroll->get_max()));
				HX_STACK_LINE(478)
				if (((  (((  (((this->_vscroll->get_visible() == false))) ? bool((this->_showVScroll == true)) : bool(false) ))) ? bool((this->_autoHideScrolls == false)) : bool(false) ))){
					HX_STACK_LINE(479)
					this->_vscroll->set_visible(true);
					HX_STACK_LINE(480)
					invalidateLayout = true;
				}
			}
			else{
				HX_STACK_LINE(483)
				if (((this->_vscroll != null()))){
					HX_STACK_LINE(484)
					if (((this->_vscroll->get_pos() != (int)0))){
						HX_STACK_LINE(485)
						Float _g12 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(485)
						this->_vscroll->set_pos((_g12 - this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()));
					}
					HX_STACK_LINE(488)
					if (((this->_vscroll->get_pos() == (int)0))){
						HX_STACK_LINE(489)
						if (((this->_vscroll->get_visible() == true))){
							HX_STACK_LINE(490)
							this->_vscroll->set_visible(false);
							HX_STACK_LINE(491)
							invalidateLayout = true;
						}
					}
					else{
						HX_STACK_LINE(494)
						Float _g13 = content->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(494)
						this->_vscroll->set_max((_g13 - this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()));
						HX_STACK_LINE(495)
						Float _g14 = this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(495)
						Float _g15 = (Float(_g14) / Float(content->__Field(HX_CSTRING("get_height"),true)()));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(495)
						this->_vscroll->set_pageSize((_g15 * this->_vscroll->get_max()));
					}
				}
			}
			HX_STACK_LINE(501)
			if ((invalidateLayout)){
				HX_STACK_LINE(502)
				this->_invalidating = false;
				HX_STACK_LINE(503)
				this->invalidate((int)1,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,checkScrolls,(void))

bool ScrollView_obj::createHScroll( hx::Null< bool >  __o_invalidateLayout){
bool invalidateLayout = __o_invalidateLayout.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","createHScroll",0x6a173117,"haxe.ui.toolkit.containers.ScrollView.createHScroll","haxe/ui/toolkit/containers/ScrollView.hx",508,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(invalidateLayout,"invalidateLayout")
{
		HX_STACK_LINE(509)
		bool created = false;		HX_STACK_VAR(created,"created");
		HX_STACK_LINE(510)
		if (((this->_hscroll == null()))){
			HX_STACK_LINE(511)
			this->_hscroll = ::haxe::ui::toolkit::controls::HScroll_obj::__new();
			HX_STACK_LINE(512)
			this->_hscroll->set_percentWidth((int)100);
			HX_STACK_LINE(513)
			this->_hscroll->addEventListener(::flash::events::Event_obj::CHANGE,this->_onHScrollChange_dyn(),null(),null(),null());
			HX_STACK_LINE(514)
			if (((this->_showHScroll == false))){
				HX_STACK_LINE(515)
				this->_hscroll->set_visible(false);
			}
			else{
				HX_STACK_LINE(516)
				if (((this->_autoHideScrolls == true))){
					HX_STACK_LINE(517)
					this->_hscroll->set_visible(false);
				}
				else{
					HX_STACK_LINE(519)
					this->_hscroll->set_visible(true);
				}
			}
			HX_STACK_LINE(521)
			this->addChild(this->_hscroll);
			HX_STACK_LINE(522)
			created = true;
		}
		HX_STACK_LINE(525)
		if ((invalidateLayout)){
			HX_STACK_LINE(526)
			this->_invalidating = false;
			HX_STACK_LINE(527)
			this->invalidate((int)1,null());
		}
		HX_STACK_LINE(530)
		return created;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,createHScroll,return )

bool ScrollView_obj::createVScroll( hx::Null< bool >  __o_invalidateLayout){
bool invalidateLayout = __o_invalidateLayout.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","createVScroll",0xb043afa5,"haxe.ui.toolkit.containers.ScrollView.createVScroll","haxe/ui/toolkit/containers/ScrollView.hx",533,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(invalidateLayout,"invalidateLayout")
{
		HX_STACK_LINE(534)
		bool created = false;		HX_STACK_VAR(created,"created");
		HX_STACK_LINE(535)
		if (((this->_vscroll == null()))){
			HX_STACK_LINE(536)
			this->_vscroll = ::haxe::ui::toolkit::controls::VScroll_obj::__new();
			HX_STACK_LINE(537)
			this->_vscroll->set_percentHeight((int)100);
			HX_STACK_LINE(538)
			this->_vscroll->addEventListener(::flash::events::Event_obj::CHANGE,this->_onVScrollChange_dyn(),null(),null(),null());
			HX_STACK_LINE(539)
			if (((this->_showVScroll == false))){
				HX_STACK_LINE(540)
				this->_vscroll->set_visible(false);
			}
			else{
				HX_STACK_LINE(541)
				if (((this->_autoHideScrolls == true))){
					HX_STACK_LINE(542)
					this->_vscroll->set_visible(false);
				}
				else{
					HX_STACK_LINE(544)
					this->_vscroll->set_visible(true);
				}
			}
			HX_STACK_LINE(546)
			this->addChild(this->_vscroll);
		}
		HX_STACK_LINE(549)
		if ((invalidateLayout)){
			HX_STACK_LINE(550)
			this->_invalidating = false;
			HX_STACK_LINE(551)
			this->invalidate((int)1,null());
		}
		HX_STACK_LINE(553)
		return created;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,createVScroll,return )

Void ScrollView_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","updateScrollRect",0x513903dc,"haxe.ui.toolkit.containers.ScrollView.updateScrollRect","haxe/ui/toolkit/containers/ScrollView.hx",557,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(557)
		if (((  (((this->get_numChildren() > (int)0))) ? bool((this->_virtualScrolling == false)) : bool(false) ))){
			HX_STACK_LINE(558)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject content = this->_container->getChildAt((int)0);		HX_STACK_VAR(content,"content");
			HX_STACK_LINE(559)
			if (((content != null()))){
				HX_STACK_LINE(560)
				Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(561)
				if (((this->_hscroll != null()))){
					HX_STACK_LINE(562)
					xpos = this->_hscroll->get_pos();
				}
				HX_STACK_LINE(564)
				Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(565)
				if (((this->_vscroll != null()))){
					HX_STACK_LINE(566)
					ypos = this->_vscroll->get_pos();
				}
				HX_STACK_LINE(568)
				content->__Field(HX_CSTRING("set_x"),true)(-(xpos));
				HX_STACK_LINE(569)
				content->__Field(HX_CSTRING("set_y"),true)(-(ypos));
				HX_STACK_LINE(571)
				Float _g = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(571)
				this->_container->get_sprite()->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()));
			}
		}
		else{
			HX_STACK_LINE(574)
			Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(574)
			this->_container->get_sprite()->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g1,this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,updateScrollRect,(void))

Void ScrollView_obj::resizeEventTarget( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","resizeEventTarget",0xc509ce95,"haxe.ui.toolkit.containers.ScrollView.resizeEventTarget","haxe/ui/toolkit/containers/ScrollView.hx",578,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		Float targetX = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(580)
		Float targetY = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(581)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(581)
		Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(581)
		Float targetCX = (_g - ((_g1 + this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_right"),true)())));		HX_STACK_VAR(targetCX,"targetCX");
		HX_STACK_LINE(582)
		Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(582)
		Float _g3 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(582)
		Float targetCY = (_g2 - ((_g3 + this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)())));		HX_STACK_VAR(targetCY,"targetCY");
		HX_STACK_LINE(583)
		if (((  (((this->_vscroll != null()))) ? bool((this->_vscroll->get_visible() == true)) : bool(false) ))){
			HX_STACK_LINE(584)
			hx::SubEq(targetCX,this->_vscroll->get_width());
		}
		HX_STACK_LINE(586)
		if (((  (((this->_hscroll != null()))) ? bool((this->_hscroll->get_visible() == true)) : bool(false) ))){
			HX_STACK_LINE(587)
			hx::SubEq(targetCY,this->_hscroll->get_height());
		}
		HX_STACK_LINE(590)
		this->_eventTarget->set_alpha((int)0);
		HX_STACK_LINE(591)
		this->_eventTarget->get_graphics()->clear();
		HX_STACK_LINE(592)
		this->_eventTarget->get_graphics()->beginFill((int)16711935,null());
		HX_STACK_LINE(593)
		this->_eventTarget->get_graphics()->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(594)
		this->_eventTarget->get_graphics()->drawRect(targetX,targetY,targetCX,targetCY);
		HX_STACK_LINE(595)
		this->_eventTarget->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,resizeEventTarget,(void))

Dynamic ScrollView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","clone",0xe4bb937b,"haxe.ui.toolkit.containers.ScrollView.clone","haxe/ui/toolkit/containers/ScrollView.hx",1,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ScrollView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","self",0x1277f92e,"haxe.ui.toolkit.containers.ScrollView.self","haxe/ui/toolkit/containers/ScrollView.hx",2,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ScrollView_obj::__new();
}



ScrollView_obj::ScrollView_obj()
{
}

void ScrollView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollView);
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_showHScroll,"_showHScroll");
	HX_MARK_MEMBER_NAME(_showVScroll,"_showVScroll");
	HX_MARK_MEMBER_NAME(_eventTarget,"_eventTarget");
	HX_MARK_MEMBER_NAME(_downPos,"_downPos");
	HX_MARK_MEMBER_NAME(_scrollSensitivity,"_scrollSensitivity");
	HX_MARK_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_MARK_MEMBER_NAME(_virtualScrolling,"_virtualScrolling");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_showHScroll,"_showHScroll");
	HX_VISIT_MEMBER_NAME(_showVScroll,"_showVScroll");
	HX_VISIT_MEMBER_NAME(_eventTarget,"_eventTarget");
	HX_VISIT_MEMBER_NAME(_downPos,"_downPos");
	HX_VISIT_MEMBER_NAME(_scrollSensitivity,"_scrollSensitivity");
	HX_VISIT_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_VISIT_MEMBER_NAME(_virtualScrolling,"_virtualScrolling");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ScrollView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return _hscroll; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return _vscroll; }
		if (HX_FIELD_EQ(inName,"_downPos") ) { return _downPos; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return _container; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { return get_hscrollPos(); }
		if (HX_FIELD_EQ(inName,"hscrollMin") ) { return get_hscrollMin(); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { return get_hscrollMax(); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { return get_vscrollPos(); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { return get_vscrollMin(); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return get_vscrollMax(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showHScroll") ) { return get_showHScroll(); }
		if (HX_FIELD_EQ(inName,"showVScroll") ) { return get_showVScroll(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showHScroll") ) { return _showHScroll; }
		if (HX_FIELD_EQ(inName,"_showVScroll") ) { return _showVScroll; }
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { return _eventTarget; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return checkScrolls_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"createHScroll") ) { return createHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"createVScroll") ) { return createVScroll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return get_hscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return set_hscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollMin") ) { return get_hscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollMin") ) { return set_hscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollMax") ) { return get_hscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollMax") ) { return set_hscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return get_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return set_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMin") ) { return get_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollMin") ) { return set_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return get_vscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollMax") ) { return set_vscrollMax_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_showHScroll") ) { return get_showHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showHScroll") ) { return set_showHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showVScroll") ) { return get_showVScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showVScroll") ) { return set_showVScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { return get_hscrollPageSize(); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { return get_vscrollPageSize(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { return _autoHideScrolls; }
		if (HX_FIELD_EQ(inName,"virtualScrolling") ) { return get_virtualScrolling(); }
		if (HX_FIELD_EQ(inName,"_onHScrollChange") ) { return _onHScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onVScrollChange") ) { return _onVScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_virtualScrolling") ) { return _virtualScrolling; }
		if (HX_FIELD_EQ(inName,"resizeEventTarget") ) { return resizeEventTarget_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_scrollSensitivity") ) { return _scrollSensitivity; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hscrollPageSize") ) { return get_hscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollPageSize") ) { return set_hscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollPageSize") ) { return get_vscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPageSize") ) { return set_vscrollPageSize_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_virtualScrolling") ) { return get_virtualScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"set_virtualScrolling") ) { return set_virtualScrolling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast< ::haxe::ui::toolkit::controls::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast< ::haxe::ui::toolkit::controls::VScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downPos") ) { _downPos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { return set_hscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"hscrollMin") ) { return set_hscrollMin(inValue); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { return set_hscrollMax(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { return set_vscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { return set_vscrollMin(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return set_vscrollMax(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showHScroll") ) { return set_showHScroll(inValue); }
		if (HX_FIELD_EQ(inName,"showVScroll") ) { return set_showVScroll(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showHScroll") ) { _showHScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showVScroll") ) { _showVScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { _eventTarget=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { return set_hscrollPageSize(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { return set_vscrollPageSize(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { _autoHideScrolls=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"virtualScrolling") ) { return set_virtualScrolling(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_virtualScrolling") ) { _virtualScrolling=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_scrollSensitivity") ) { _scrollSensitivity=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_hscroll"));
	outFields->push(HX_CSTRING("_vscroll"));
	outFields->push(HX_CSTRING("_container"));
	outFields->push(HX_CSTRING("_showHScroll"));
	outFields->push(HX_CSTRING("_showVScroll"));
	outFields->push(HX_CSTRING("_eventTarget"));
	outFields->push(HX_CSTRING("_downPos"));
	outFields->push(HX_CSTRING("_scrollSensitivity"));
	outFields->push(HX_CSTRING("_autoHideScrolls"));
	outFields->push(HX_CSTRING("_virtualScrolling"));
	outFields->push(HX_CSTRING("virtualScrolling"));
	outFields->push(HX_CSTRING("showHScroll"));
	outFields->push(HX_CSTRING("showVScroll"));
	outFields->push(HX_CSTRING("hscrollPos"));
	outFields->push(HX_CSTRING("hscrollMin"));
	outFields->push(HX_CSTRING("hscrollMax"));
	outFields->push(HX_CSTRING("hscrollPageSize"));
	outFields->push(HX_CSTRING("vscrollPos"));
	outFields->push(HX_CSTRING("vscrollMin"));
	outFields->push(HX_CSTRING("vscrollMax"));
	outFields->push(HX_CSTRING("vscrollPageSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::HScroll*/ ,(int)offsetof(ScrollView_obj,_hscroll),HX_CSTRING("_hscroll")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::VScroll*/ ,(int)offsetof(ScrollView_obj,_vscroll),HX_CSTRING("_vscroll")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(ScrollView_obj,_container),HX_CSTRING("_container")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_showHScroll),HX_CSTRING("_showHScroll")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_showVScroll),HX_CSTRING("_showVScroll")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(ScrollView_obj,_eventTarget),HX_CSTRING("_eventTarget")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(ScrollView_obj,_downPos),HX_CSTRING("_downPos")},
	{hx::fsInt,(int)offsetof(ScrollView_obj,_scrollSensitivity),HX_CSTRING("_scrollSensitivity")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_autoHideScrolls),HX_CSTRING("_autoHideScrolls")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_virtualScrolling),HX_CSTRING("_virtualScrolling")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_hscroll"),
	HX_CSTRING("_vscroll"),
	HX_CSTRING("_container"),
	HX_CSTRING("_showHScroll"),
	HX_CSTRING("_showVScroll"),
	HX_CSTRING("_eventTarget"),
	HX_CSTRING("_downPos"),
	HX_CSTRING("_scrollSensitivity"),
	HX_CSTRING("_autoHideScrolls"),
	HX_CSTRING("_virtualScrolling"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("postInitialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_virtualScrolling"),
	HX_CSTRING("set_virtualScrolling"),
	HX_CSTRING("get_showHScroll"),
	HX_CSTRING("set_showHScroll"),
	HX_CSTRING("get_showVScroll"),
	HX_CSTRING("set_showVScroll"),
	HX_CSTRING("get_hscrollPos"),
	HX_CSTRING("set_hscrollPos"),
	HX_CSTRING("get_hscrollMin"),
	HX_CSTRING("set_hscrollMin"),
	HX_CSTRING("get_hscrollMax"),
	HX_CSTRING("set_hscrollMax"),
	HX_CSTRING("get_hscrollPageSize"),
	HX_CSTRING("set_hscrollPageSize"),
	HX_CSTRING("get_vscrollPos"),
	HX_CSTRING("set_vscrollPos"),
	HX_CSTRING("get_vscrollMin"),
	HX_CSTRING("set_vscrollMin"),
	HX_CSTRING("get_vscrollMax"),
	HX_CSTRING("set_vscrollMax"),
	HX_CSTRING("get_vscrollPageSize"),
	HX_CSTRING("set_vscrollPageSize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("_onHScrollChange"),
	HX_CSTRING("_onVScrollChange"),
	HX_CSTRING("_onMouseWheel"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onScreenMouseMove"),
	HX_CSTRING("_onScreenMouseUp"),
	HX_CSTRING("checkScrolls"),
	HX_CSTRING("createHScroll"),
	HX_CSTRING("createVScroll"),
	HX_CSTRING("updateScrollRect"),
	HX_CSTRING("resizeEventTarget"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
};

#endif

Class ScrollView_obj::__mClass;

void ScrollView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ScrollView"), hx::TCanCast< ScrollView_obj> ,sStaticFields,sMemberFields,
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

void ScrollView_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
