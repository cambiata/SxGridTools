#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","new",0x23527166,"haxe.ui.toolkit.core.DisplayObject.new","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
{
	HX_STACK_LINE(45)
	this->_valign = HX_CSTRING("top");
	HX_STACK_LINE(44)
	this->_halign = HX_CSTRING("left");
	HX_STACK_LINE(42)
	this->_invalidating = false;
	HX_STACK_LINE(41)
	this->_ready = false;
	HX_STACK_LINE(40)
	this->_percentHeight = (int)-1;
	HX_STACK_LINE(39)
	this->_percentWidth = (int)-1;
	HX_STACK_LINE(38)
	this->_height = (int)0;
	HX_STACK_LINE(37)
	this->_width = (int)0;
	HX_STACK_LINE(36)
	this->_y = (int)0;
	HX_STACK_LINE(35)
	this->_x = (int)0;
	HX_STACK_LINE(50)
	this->_sprite = ::flash::display::Sprite_obj::__new();
	HX_STACK_LINE(52)
	this->_sprite->set_tabChildren(false);
	HX_STACK_LINE(53)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->_onAddedToStage_dyn(),false,(int)100,null());
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct();
	return result;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct();
	return result;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDrawable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDrawable_obj *();
	return super::__ToInterface(inType);
}

Void DisplayObject_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","preInitialize",0x79caa3d9,"haxe.ui.toolkit.core.DisplayObject.preInitialize","haxe/ui/toolkit/core/DisplayObject.hx",59,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,preInitialize,(void))

Void DisplayObject_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","initialize",0x56715d0a,"haxe.ui.toolkit.core.DisplayObject.initialize","haxe/ui/toolkit/core/DisplayObject.hx",62,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,initialize,(void))

Void DisplayObject_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","postInitialize",0x0bad828a,"haxe.ui.toolkit.core.DisplayObject.postInitialize","haxe/ui/toolkit/core/DisplayObject.hx",65,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,postInitialize,(void))

Void DisplayObject_obj::_onAddedToStage( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","_onAddedToStage",0xd913dcc7,"haxe.ui.toolkit.core.DisplayObject._onAddedToStage","haxe/ui/toolkit/core/DisplayObject.hx",70,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(71)
		this->removeEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->_onAddedToStage_dyn(),null());
		HX_STACK_LINE(73)
		this->preInitialize();
		HX_STACK_LINE(74)
		this->_ready = true;
		HX_STACK_LINE(75)
		this->initialize();
		HX_STACK_LINE(76)
		this->postInitialize();
		HX_STACK_LINE(77)
		this->invalidate((int)273,null());
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::events::UIEvent event1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_init"),null(),null(),null());		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(80)
		this->dispatchEvent(event1);
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::events::UIEvent event2 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_ready"),null(),null(),null());		HX_STACK_VAR(event2,"event2");
		HX_STACK_LINE(83)
		this->dispatchEvent(event2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_onAddedToStage,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer DisplayObject_obj::get_parent( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_parent",0x47bba0ad,"haxe.ui.toolkit.core.DisplayObject.get_parent","haxe/ui/toolkit/core/DisplayObject.hx",116,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_parent,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer DisplayObject_obj::set_parent( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_parent",0x4b393f21,"haxe.ui.toolkit.core.DisplayObject.set_parent","haxe/ui/toolkit/core/DisplayObject.hx",119,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	this->_parent = value;
	HX_STACK_LINE(121)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_parent,return )

::haxe::ui::toolkit::core::Root DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_root",0xeae792e5,"haxe.ui.toolkit.core.DisplayObject.get_root","haxe/ui/toolkit/core/DisplayObject.hx",125,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	return this->_root;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

::haxe::ui::toolkit::core::Root DisplayObject_obj::set_root( ::haxe::ui::toolkit::core::Root value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_root",0x9944ec59,"haxe.ui.toolkit.core.DisplayObject.set_root","haxe/ui/toolkit/core/DisplayObject.hx",128,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(129)
	this->_root = value;
	HX_STACK_LINE(130)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_root,return )

::String DisplayObject_obj::get_id( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_id",0x624339de,"haxe.ui.toolkit.core.DisplayObject.get_id","haxe/ui/toolkit/core/DisplayObject.hx",134,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return this->_id;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_id,return )

::String DisplayObject_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_id",0x2e8b8e52,"haxe.ui.toolkit.core.DisplayObject.set_id","haxe/ui/toolkit/core/DisplayObject.hx",137,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	this->_id = value;
	HX_STACK_LINE(139)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_id,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_x",0x6a0e13d5,"haxe.ui.toolkit.core.DisplayObject.get_x","haxe/ui/toolkit/core/DisplayObject.hx",143,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_x",0x52dd09e1,"haxe.ui.toolkit.core.DisplayObject.set_x","haxe/ui/toolkit/core/DisplayObject.hx",146,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(147)
	this->_x = ::Std_obj::_int(value);
	HX_STACK_LINE(148)
	this->_sprite->set_x(this->_x);
	HX_STACK_LINE(149)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_y",0x6a0e13d6,"haxe.ui.toolkit.core.DisplayObject.get_y","haxe/ui/toolkit/core/DisplayObject.hx",153,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_y",0x52dd09e2,"haxe.ui.toolkit.core.DisplayObject.set_y","haxe/ui/toolkit/core/DisplayObject.hx",156,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(157)
	this->_y = ::Std_obj::_int(value);
	HX_STACK_LINE(158)
	this->_sprite->set_y(this->_y);
	HX_STACK_LINE(159)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_width",0x7cba3be3,"haxe.ui.toolkit.core.DisplayObject.get_width","haxe/ui/toolkit/core/DisplayObject.hx",163,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_width",0x600b27ef,"haxe.ui.toolkit.core.DisplayObject.set_width","haxe/ui/toolkit/core/DisplayObject.hx",166,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	value = ::Std_obj::_int(value);
	HX_STACK_LINE(168)
	if (((this->_width == value))){
		HX_STACK_LINE(169)
		return value;
	}
	HX_STACK_LINE(172)
	this->_width = value;
	HX_STACK_LINE(173)
	this->_invalidating = false;
	HX_STACK_LINE(174)
	this->invalidate((int)272,null());
	HX_STACK_LINE(175)
	if (((this->_parent != null()))){
		HX_STACK_LINE(176)
		this->_parent->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(178)
	::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_resize"),null(),null(),null());		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(179)
	this->dispatchEvent(event);
	HX_STACK_LINE(181)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_height",0x5c89a36a,"haxe.ui.toolkit.core.DisplayObject.get_height","haxe/ui/toolkit/core/DisplayObject.hx",185,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_height",0x600741de,"haxe.ui.toolkit.core.DisplayObject.set_height","haxe/ui/toolkit/core/DisplayObject.hx",188,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(189)
	value = ::Std_obj::_int(value);
	HX_STACK_LINE(190)
	if (((this->_height == value))){
		HX_STACK_LINE(191)
		return value;
	}
	HX_STACK_LINE(194)
	this->_height = value;
	HX_STACK_LINE(195)
	this->_invalidating = false;
	HX_STACK_LINE(196)
	this->invalidate((int)272,null());
	HX_STACK_LINE(197)
	if (((this->_parent != null()))){
		HX_STACK_LINE(198)
		this->_parent->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(200)
	::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_resize"),null(),null(),null());		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(201)
	this->dispatchEvent(event);
	HX_STACK_LINE(203)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

Float DisplayObject_obj::get_percentWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_percentWidth",0xea7af0c4,"haxe.ui.toolkit.core.DisplayObject.get_percentWidth","haxe/ui/toolkit/core/DisplayObject.hx",207,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return this->_percentWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_percentWidth,return )

Float DisplayObject_obj::set_percentWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_percentWidth",0x40bcde38,"haxe.ui.toolkit.core.DisplayObject.set_percentWidth","haxe/ui/toolkit/core/DisplayObject.hx",210,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	if (((this->_percentWidth == value))){
		HX_STACK_LINE(212)
		return value;
	}
	HX_STACK_LINE(215)
	this->_percentWidth = value;
	HX_STACK_LINE(216)
	this->invalidate(null(),null());
	HX_STACK_LINE(217)
	if (((this->_parent != null()))){
		HX_STACK_LINE(218)
		this->_parent->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(220)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_percentWidth,return )

Float DisplayObject_obj::get_percentHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_percentHeight",0xf7673369,"haxe.ui.toolkit.core.DisplayObject.get_percentHeight","haxe/ui/toolkit/core/DisplayObject.hx",224,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	return this->_percentHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_percentHeight,return )

Float DisplayObject_obj::set_percentHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_percentHeight",0x1ad50b75,"haxe.ui.toolkit.core.DisplayObject.set_percentHeight","haxe/ui/toolkit/core/DisplayObject.hx",227,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(228)
	if (((this->_percentHeight == value))){
		HX_STACK_LINE(229)
		return value;
	}
	HX_STACK_LINE(232)
	this->_percentHeight = value;
	HX_STACK_LINE(233)
	this->invalidate(null(),null());
	HX_STACK_LINE(234)
	if (((this->_parent != null()))){
		HX_STACK_LINE(235)
		this->_parent->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(237)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_percentHeight,return )

bool DisplayObject_obj::get_ready( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_ready",0x99122640,"haxe.ui.toolkit.core.DisplayObject.get_ready","haxe/ui/toolkit/core/DisplayObject.hx",241,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	return this->_ready;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_ready,return )

::flash::display::Sprite DisplayObject_obj::get_sprite( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_sprite",0x1dd37788,"haxe.ui.toolkit.core.DisplayObject.get_sprite","haxe/ui/toolkit/core/DisplayObject.hx",245,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	return this->_sprite;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_sprite,return )

Float DisplayObject_obj::get_stageX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_stageX",0x602f975d,"haxe.ui.toolkit.core.DisplayObject.get_stageX","haxe/ui/toolkit/core/DisplayObject.hx",249,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(250)
	c = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(251)
	Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
	HX_STACK_LINE(252)
	while(((c != null()))){
		HX_STACK_LINE(253)
		hx::AddEq(xpos,c->__Field(HX_CSTRING("get_x"),true)());
		HX_STACK_LINE(254)
		if (((c->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_scrollRect"),true)() != null()))){
			HX_STACK_LINE(255)
			hx::SubEq(xpos,c->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_scrollRect"),true)()->__Field(HX_CSTRING("get_left"),true)());
		}
		HX_STACK_LINE(257)
		c = c->__Field(HX_CSTRING("get_parent"),true)();
	}
	HX_STACK_LINE(260)
	return xpos;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stageX,return )

Float DisplayObject_obj::get_stageY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_stageY",0x602f975e,"haxe.ui.toolkit.core.DisplayObject.get_stageY","haxe/ui/toolkit/core/DisplayObject.hx",263,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(264)
	c = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(265)
	Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
	HX_STACK_LINE(266)
	while(((c != null()))){
		HX_STACK_LINE(267)
		hx::AddEq(ypos,c->__Field(HX_CSTRING("get_y"),true)());
		HX_STACK_LINE(268)
		if (((c->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_scrollRect"),true)() != null()))){
			HX_STACK_LINE(269)
			hx::SubEq(ypos,c->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_scrollRect"),true)()->__Field(HX_CSTRING("get_top"),true)());
		}
		HX_STACK_LINE(271)
		c = c->__Field(HX_CSTRING("get_parent"),true)();
	}
	HX_STACK_LINE(274)
	return ypos;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stageY,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_visible",0x3eceef8f,"haxe.ui.toolkit.core.DisplayObject.get_visible","haxe/ui/toolkit/core/DisplayObject.hx",278,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	return this->_sprite->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_visible",0x493bf69b,"haxe.ui.toolkit.core.DisplayObject.set_visible","haxe/ui/toolkit/core/DisplayObject.hx",281,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(282)
	this->_sprite->set_visible(value);
	HX_STACK_LINE(283)
	if (((this->_parent != null()))){
		HX_STACK_LINE(284)
		this->_parent->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(286)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

::String DisplayObject_obj::get_horizontalAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_horizontalAlign",0x6739eb5e,"haxe.ui.toolkit.core.DisplayObject.get_horizontalAlign","haxe/ui/toolkit/core/DisplayObject.hx",290,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return this->_halign;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_horizontalAlign,return )

::String DisplayObject_obj::set_horizontalAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_horizontalAlign",0xa3d6de6a,"haxe.ui.toolkit.core.DisplayObject.set_horizontalAlign","haxe/ui/toolkit/core/DisplayObject.hx",293,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(294)
	this->_halign = value;
	HX_STACK_LINE(295)
	if ((this->_ready)){
		HX_STACK_LINE(296)
		this->get_parent()->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(298)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_horizontalAlign,return )

::String DisplayObject_obj::get_verticalAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_verticalAlign",0xcbc8494c,"haxe.ui.toolkit.core.DisplayObject.get_verticalAlign","haxe/ui/toolkit/core/DisplayObject.hx",302,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(302)
	return this->_valign;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_verticalAlign,return )

::String DisplayObject_obj::set_verticalAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_verticalAlign",0xef362158,"haxe.ui.toolkit.core.DisplayObject.set_verticalAlign","haxe/ui/toolkit/core/DisplayObject.hx",305,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(306)
	this->_valign = value;
	HX_STACK_LINE(307)
	if ((this->_ready)){
		HX_STACK_LINE(308)
		this->get_parent()->__Field(HX_CSTRING("invalidate"),true)((int)1,null());
	}
	HX_STACK_LINE(310)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_verticalAlign,return )

bool DisplayObject_obj::hitTest( Float xpos,Float ypos){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","hitTest",0x5449fc4b,"haxe.ui.toolkit.core.DisplayObject.hitTest","haxe/ui/toolkit/core/DisplayObject.hx",313,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(314)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(315)
	Float sx = this->get_stageX();		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(316)
	Float sy = this->get_stageY();		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(317)
	if (((  (((  (((  (((xpos > sx))) ? bool((xpos < (sx + this->get_width()))) : bool(false) ))) ? bool((ypos > sy)) : bool(false) ))) ? bool((ypos < (sy + this->get_height()))) : bool(false) ))){
		HX_STACK_LINE(318)
		b = true;
	}
	HX_STACK_LINE(321)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,hitTest,return )

Void DisplayObject_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","invalidate",0xf0e04535,"haxe.ui.toolkit.core.DisplayObject.invalidate","haxe/ui/toolkit/core/DisplayObject.hx",324,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(325)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(326)
			return null();
		}
		HX_STACK_LINE(331)
		this->_invalidating = true;
		HX_STACK_LINE(332)
		if (((bool((((int(type) & int((int)16))) == (int)16)) || bool((((int(type) & int((int)4096))) == (int)4096))))){
			HX_STACK_LINE(334)
			this->paint();
		}
		HX_STACK_LINE(336)
		this->_invalidating = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,invalidate,(void))

Void DisplayObject_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","dispose",0x2d171ca5,"haxe.ui.toolkit.core.DisplayObject.dispose","haxe/ui/toolkit/core/DisplayObject.hx",341,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(341)
		this->removeAllEventListeners();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,dispose,(void))

Void DisplayObject_obj::interceptEvent( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","interceptEvent",0xa5a2b732,"haxe.ui.toolkit.core.DisplayObject.interceptEvent","haxe/ui/toolkit/core/DisplayObject.hx",344,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::events::UIEvent uiEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new((HX_CSTRING("haxeui_") + event->get_type()),null(),null(),null());		HX_STACK_VAR(uiEvent,"uiEvent");
		HX_STACK_LINE(346)
		if ((::Std_obj::is(event,hx::ClassOf< ::flash::events::MouseEvent >()))){
			HX_STACK_LINE(347)
			::flash::events::MouseEvent mouseEvent = event;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(348)
			uiEvent->stageX = mouseEvent->stageX;
			HX_STACK_LINE(349)
			uiEvent->stageY = mouseEvent->stageY;
		}
		HX_STACK_LINE(351)
		this->dispatchEvent(uiEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,interceptEvent,(void))

Void DisplayObject_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","addEventListener",0xd924bf07,"haxe.ui.toolkit.core.DisplayObject.addEventListener","haxe/ui/toolkit/core/DisplayObject.hx",357,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(358)
		if ((::StringTools_obj::startsWith(type,HX_CSTRING("haxeui_")))){
			HX_STACK_LINE(359)
			::String interceptEventType = type.substr(HX_CSTRING("haxeui_").length,type.length);		HX_STACK_VAR(interceptEventType,"interceptEventType");
			HX_STACK_LINE(360)
			if (((this->getListenerCount(interceptEventType,this->interceptEvent_dyn()) == (int)0))){
				HX_STACK_LINE(361)
				this->addEventListener(interceptEventType,this->interceptEvent_dyn(),useCapture,priority,useWeakReference);
			}
		}
		HX_STACK_LINE(365)
		if (((this->_eventListeners == null()))){
			HX_STACK_LINE(366)
			this->_eventListeners = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(369)
		::List list = this->_eventListeners->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(370)
		if (((list == null()))){
			HX_STACK_LINE(371)
			list = ::List_obj::__new();
			HX_STACK_LINE(372)
			this->_eventListeners->set(type,list);
		}
		HX_STACK_LINE(374)
		list->add(listener);
		HX_STACK_LINE(376)
		this->_sprite->addEventListener(type,listener,useCapture,priority,useWeakReference);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,addEventListener,(void))

bool DisplayObject_obj::dispatchEvent( ::flash::events::Event event){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","dispatchEvent",0xb98d2b86,"haxe.ui.toolkit.core.DisplayObject.dispatchEvent","haxe/ui/toolkit/core/DisplayObject.hx",379,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(380)
	if ((::Std_obj::is(event,hx::ClassOf< ::haxe::ui::toolkit::events::UIEvent >()))){
		HX_STACK_LINE(381)
		(hx::TCast< haxe::ui::toolkit::events::UIEvent >::cast(event))->displayObject = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(383)
	return this->_sprite->dispatchEvent(event);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,dispatchEvent,return )

bool DisplayObject_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","hasEventListener",0xf4aae22e,"haxe.ui.toolkit.core.DisplayObject.hasEventListener","haxe/ui/toolkit/core/DisplayObject.hx",387,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(387)
	return this->_sprite->hasEventListener(type);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hasEventListener,return )

Void DisplayObject_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeEventListener",0x3d3d14d0,"haxe.ui.toolkit.core.DisplayObject.removeEventListener","haxe/ui/toolkit/core/DisplayObject.hx",390,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(391)
		if ((::StringTools_obj::startsWith(type,HX_CSTRING("haxeui_")))){
			HX_STACK_LINE(392)
			::String interceptEventType = type.substr(HX_CSTRING("haxeui_").length,type.length);		HX_STACK_VAR(interceptEventType,"interceptEventType");
			HX_STACK_LINE(393)
			if (((  ((!(((this->_eventListeners->exists(type) == false))))) ? bool((this->_eventListeners->get(type)->__Field(HX_CSTRING("length"),true) <= (int)1)) : bool(true) ))){
				HX_STACK_LINE(394)
				this->removeEventListener(interceptEventType,this->interceptEvent_dyn(),useCapture);
			}
		}
		HX_STACK_LINE(398)
		if (((  (((this->_eventListeners != null()))) ? bool(this->_eventListeners->exists(type)) : bool(false) ))){
			HX_STACK_LINE(399)
			::List list = this->_eventListeners->get(type);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(400)
			if (((list != null()))){
				HX_STACK_LINE(401)
				list->remove(listener);
			}
		}
		HX_STACK_LINE(404)
		this->_sprite->removeEventListener(type,listener,useCapture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,removeEventListener,(void))

bool DisplayObject_obj::willTrigger( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","willTrigger",0xedf00b4c,"haxe.ui.toolkit.core.DisplayObject.willTrigger","haxe/ui/toolkit/core/DisplayObject.hx",408,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(408)
	return this->_sprite->willTrigger(type);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,willTrigger,return )

::flash::display::Graphics DisplayObject_obj::get_graphics( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_graphics",0xabe5bb0e,"haxe.ui.toolkit.core.DisplayObject.get_graphics","haxe/ui/toolkit/core/DisplayObject.hx",417,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	return this->_sprite->get_graphics();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_graphics,return )

Void DisplayObject_obj::paint( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","paint",0x95fc2624,"haxe.ui.toolkit.core.DisplayObject.paint","haxe/ui/toolkit/core/DisplayObject.hx",420,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(421)
		this->_sprite->get_graphics()->clear();
		HX_STACK_LINE(423)
		this->_sprite->get_graphics()->beginFill((int)13421772,null());
		HX_STACK_LINE(424)
		this->_sprite->get_graphics()->lineStyle((int)1,(int)8947848,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(425)
		this->_sprite->get_graphics()->drawRect((int)0,(int)0,this->_width,this->_height);
		HX_STACK_LINE(426)
		this->_sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,paint,(void))

Void DisplayObject_obj::removeEventListenerType( ::String eventType){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeEventListenerType",0x1e91dbaa,"haxe.ui.toolkit.core.DisplayObject.removeEventListenerType","haxe/ui/toolkit/core/DisplayObject.hx",433,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventType,"eventType")
		HX_STACK_LINE(433)
		if (((this->_eventListeners != null()))){
			HX_STACK_LINE(434)
			::List list = this->_eventListeners->get(eventType);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(435)
			if (((list != null()))){
				HX_STACK_LINE(436)
				while(((list->isEmpty() == false))){
					HX_STACK_LINE(437)
					this->removeEventListener(eventType,list->first(),null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,removeEventListenerType,(void))

Void DisplayObject_obj::removeAllEventListeners( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeAllEventListeners",0xbf172e28,"haxe.ui.toolkit.core.DisplayObject.removeAllEventListeners","haxe/ui/toolkit/core/DisplayObject.hx",444,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(444)
		if (((this->_eventListeners != null()))){
			HX_STACK_LINE(445)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_eventListeners->keys());  __it->hasNext(); ){
				::String eventType = __it->next();
				{
					HX_STACK_LINE(446)
					::List list = this->_eventListeners->get(eventType);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(447)
					while(((list->isEmpty() == false))){
						HX_STACK_LINE(448)
						this->removeEventListener(eventType,list->first(),null());
						HX_STACK_LINE(449)
						list = this->_eventListeners->get(eventType);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,removeAllEventListeners,(void))

int DisplayObject_obj::getListenerCount( ::String type,Dynamic listener){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","getListenerCount",0x6365ec7f,"haxe.ui.toolkit.core.DisplayObject.getListenerCount","haxe/ui/toolkit/core/DisplayObject.hx",455,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(456)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(457)
	if ((this->_eventListeners->exists(type))){
		HX_STACK_LINE(458)
		::List list = this->_eventListeners->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(459)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->iterator());  __it->hasNext(); ){
			Dynamic l = __it->next();
			if (((l == listener))){
				HX_STACK_LINE(461)
				(count)++;
			}
;
		}
	}
	HX_STACK_LINE(465)
	return count;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,getListenerCount,return )

Void DisplayObject_obj::_handleEvent( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","_handleEvent",0x727c2f8d,"haxe.ui.toolkit.core.DisplayObject._handleEvent","haxe/ui/toolkit/core/DisplayObject.hx",471,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(472)
		::String fnName = (HX_CSTRING("on") + ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeFirstLetter(::StringTools_obj::replace(event->get_type(),HX_CSTRING("haxeui_"),HX_CSTRING(""))));		HX_STACK_VAR(fnName,"fnName");
		HX_STACK_LINE(473)
		Dynamic fn = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),fnName);		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(474)
		if (((fn != null()))){
			HX_STACK_LINE(475)
			::String _g = (HX_CSTRING("haxeui_") + event->get_type());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(475)
			::haxe::ui::toolkit::events::UIEvent fnEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new(_g,event->get_component(),null(),null());		HX_STACK_VAR(fnEvent,"fnEvent");
			HX_STACK_LINE(476)
			fnEvent->data = event->data;
			HX_STACK_LINE(477)
			fnEvent->displayObject = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(478)
			fn(fnEvent).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_handleEvent,(void))

Dynamic DisplayObject_obj::set_onInit( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onInit",0x46007dc6,"haxe.ui.toolkit.core.DisplayObject.set_onInit","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onInit = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_init"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onInit,return )

Dynamic DisplayObject_obj::set_onResize( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onResize",0x969f362a,"haxe.ui.toolkit.core.DisplayObject.set_onResize","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onResize = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_resize"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onResize,return )

Dynamic DisplayObject_obj::set_onReady( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onReady",0x230fbced,"haxe.ui.toolkit.core.DisplayObject.set_onReady","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onReady = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_ready"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onReady,return )

Dynamic DisplayObject_obj::set_onClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onClick",0x84b398d2,"haxe.ui.toolkit.core.DisplayObject.set_onClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onClick = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_click"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onClick,return )

Dynamic DisplayObject_obj::set_onMouseDown( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseDown",0x2721dab1,"haxe.ui.toolkit.core.DisplayObject.set_onMouseDown","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseDown = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_mouseDown"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseDown,return )

Dynamic DisplayObject_obj::set_onMouseUp( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseUp",0x91afc6ea,"haxe.ui.toolkit.core.DisplayObject.set_onMouseUp","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseUp = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_mouseUp"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseUp,return )

Dynamic DisplayObject_obj::set_onMouseOver( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseOver",0x2e6c73a3,"haxe.ui.toolkit.core.DisplayObject.set_onMouseOver","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseOver = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_mouseOver"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseOver,return )

Dynamic DisplayObject_obj::set_onMouseOut( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseOut",0xe819bd1f,"haxe.ui.toolkit.core.DisplayObject.set_onMouseOut","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseOut = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_mouseOut"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseOut,return )

Dynamic DisplayObject_obj::set_onMouseMove( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseMove",0x2d14c560,"haxe.ui.toolkit.core.DisplayObject.set_onMouseMove","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseMove = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_mouseMove"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseMove,return )

Dynamic DisplayObject_obj::set_onDoubleClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onDoubleClick",0x3b1a2381,"haxe.ui.toolkit.core.DisplayObject.set_onDoubleClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onDoubleClick = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_doubleClick"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(20)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onDoubleClick,return )

Dynamic DisplayObject_obj::set_onRollOver( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRollOver",0x56a48127,"haxe.ui.toolkit.core.DisplayObject.set_onRollOver","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRollOver = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_rollOver"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRollOver,return )

Dynamic DisplayObject_obj::set_onRollOut( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRollOut",0x2e4ecc1b,"haxe.ui.toolkit.core.DisplayObject.set_onRollOut","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRollOut = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_rollOut"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRollOut,return )

Dynamic DisplayObject_obj::set_onChange( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onChange",0x45966da6,"haxe.ui.toolkit.core.DisplayObject.set_onChange","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onChange = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_change"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onChange,return )

Dynamic DisplayObject_obj::set_onScroll( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onScroll",0xd588b443,"haxe.ui.toolkit.core.DisplayObject.set_onScroll","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onScroll = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_scroll"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onScroll,return )

Dynamic DisplayObject_obj::set_onAdded( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onAdded",0x5898f14a,"haxe.ui.toolkit.core.DisplayObject.set_onAdded","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onAdded = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_added"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onAdded,return )

Dynamic DisplayObject_obj::set_onAddedToStage( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onAddedToStage",0x8e4d0b19,"haxe.ui.toolkit.core.DisplayObject.set_onAddedToStage","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onAddedToStage = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_addedToStage"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(20)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onAddedToStage,return )

Dynamic DisplayObject_obj::set_onRemoved( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRemoved",0xc43cf2aa,"haxe.ui.toolkit.core.DisplayObject.set_onRemoved","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRemoved = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_removed"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRemoved,return )

Dynamic DisplayObject_obj::set_onRemovedFromStage( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRemovedFromStage",0xc56f9cea,"haxe.ui.toolkit.core.DisplayObject.set_onRemovedFromStage","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRemovedFromStage = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_removedFromStage"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(20)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRemovedFromStage,return )

Dynamic DisplayObject_obj::set_onActivate( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onActivate",0x29a7f169,"haxe.ui.toolkit.core.DisplayObject.set_onActivate","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onActivate = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_activate"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(19)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onActivate,return )

Dynamic DisplayObject_obj::set_onDeactivate( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onDeactivate",0x56e68b6a,"haxe.ui.toolkit.core.DisplayObject.set_onDeactivate","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onDeactivate = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_deactivate"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(20)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onDeactivate,return )

Dynamic DisplayObject_obj::set_onGlyphClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onGlyphClick",0x21990e32,"haxe.ui.toolkit.core.DisplayObject.set_onGlyphClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onGlyphClick = value;
	HX_STACK_LINE(19)
	this->addEventListener(HX_CSTRING("haxeui_glyphClick"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(20)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onGlyphClick,return )

Dynamic DisplayObject_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","clone",0x211081e3,"haxe.ui.toolkit.core.DisplayObject.clone","haxe/ui/toolkit/core/DisplayObject.hx",1,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObject c = this->self();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_id(this->get_id());
	HX_STACK_LINE(4)
	c->set_x(this->get_x());
	HX_STACK_LINE(5)
	c->set_y(this->get_y());
	HX_STACK_LINE(6)
	c->set_width(this->get_width());
	HX_STACK_LINE(7)
	c->set_height(this->get_height());
	HX_STACK_LINE(8)
	c->set_percentWidth(this->get_percentWidth());
	HX_STACK_LINE(9)
	c->set_percentHeight(this->get_percentHeight());
	HX_STACK_LINE(10)
	c->set_horizontalAlign(this->get_horizontalAlign());
	HX_STACK_LINE(11)
	c->set_verticalAlign(this->get_verticalAlign());
	HX_STACK_LINE(12)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,clone,return )

Dynamic DisplayObject_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","self",0xc81ecfc6,"haxe.ui.toolkit.core.DisplayObject.self","haxe/ui/toolkit/core/DisplayObject.hx",2,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::DisplayObject_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,self,return )


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_root,"_root");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_ready,"_ready");
	HX_MARK_MEMBER_NAME(_invalidating,"_invalidating");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_halign,"_halign");
	HX_MARK_MEMBER_NAME(_valign,"_valign");
	HX_MARK_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(onInit,"onInit");
	HX_MARK_MEMBER_NAME(onResize,"onResize");
	HX_MARK_MEMBER_NAME(onReady,"onReady");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onDoubleClick,"onDoubleClick");
	HX_MARK_MEMBER_NAME(onRollOver,"onRollOver");
	HX_MARK_MEMBER_NAME(onRollOut,"onRollOut");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(onScroll,"onScroll");
	HX_MARK_MEMBER_NAME(onAdded,"onAdded");
	HX_MARK_MEMBER_NAME(onAddedToStage,"onAddedToStage");
	HX_MARK_MEMBER_NAME(onRemoved,"onRemoved");
	HX_MARK_MEMBER_NAME(onRemovedFromStage,"onRemovedFromStage");
	HX_MARK_MEMBER_NAME(onActivate,"onActivate");
	HX_MARK_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_MARK_MEMBER_NAME(onGlyphClick,"onGlyphClick");
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_root,"_root");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_ready,"_ready");
	HX_VISIT_MEMBER_NAME(_invalidating,"_invalidating");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_halign,"_halign");
	HX_VISIT_MEMBER_NAME(_valign,"_valign");
	HX_VISIT_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(onInit,"onInit");
	HX_VISIT_MEMBER_NAME(onResize,"onResize");
	HX_VISIT_MEMBER_NAME(onReady,"onReady");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onDoubleClick,"onDoubleClick");
	HX_VISIT_MEMBER_NAME(onRollOver,"onRollOver");
	HX_VISIT_MEMBER_NAME(onRollOut,"onRollOut");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(onScroll,"onScroll");
	HX_VISIT_MEMBER_NAME(onAdded,"onAdded");
	HX_VISIT_MEMBER_NAME(onAddedToStage,"onAddedToStage");
	HX_VISIT_MEMBER_NAME(onRemoved,"onRemoved");
	HX_VISIT_MEMBER_NAME(onRemovedFromStage,"onRemovedFromStage");
	HX_VISIT_MEMBER_NAME(onActivate,"onActivate");
	HX_VISIT_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_VISIT_MEMBER_NAME(onGlyphClick,"onGlyphClick");
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return get_root(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { return _root; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"ready") ) { return inCallProp ? get_ready() : ready; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_ready") ) { return _ready; }
		if (HX_FIELD_EQ(inName,"parent") ) { return get_parent(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return inCallProp ? get_sprite() : sprite; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return inCallProp ? get_stageX() : stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return inCallProp ? get_stageY() : stageY; }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_halign") ) { return _halign; }
		if (HX_FIELD_EQ(inName,"_valign") ) { return _valign; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return onReady; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick; }
		if (HX_FIELD_EQ(inName,"onAdded") ) { return onAdded; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return set_root_dyn(); }
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"onScroll") ) { return onScroll; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ready") ) { return get_ready_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"onRollOut") ) { return onRollOut; }
		if (HX_FIELD_EQ(inName,"onRemoved") ) { return onRemoved; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sprite") ) { return get_sprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageX") ) { return get_stageX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageY") ) { return get_stageY_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onInit") ) { return set_onInit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut; }
		if (HX_FIELD_EQ(inName,"onRollOver") ) { return onRollOver; }
		if (HX_FIELD_EQ(inName,"onActivate") ) { return onActivate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onReady") ) { return set_onReady_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onClick") ) { return set_onClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"set_onAdded") ) { return set_onAdded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return get_percentWidth(); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		if (HX_FIELD_EQ(inName,"_handleEvent") ) { return _handleEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onResize") ) { return set_onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onChange") ) { return set_onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onScroll") ) { return set_onScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { return onDeactivate; }
		if (HX_FIELD_EQ(inName,"onGlyphClick") ) { return onGlyphClick; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return _percentWidth; }
		if (HX_FIELD_EQ(inName,"_invalidating") ) { return _invalidating; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return get_percentHeight(); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return get_verticalAlign(); }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseUp") ) { return set_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { return onDoubleClick; }
		if (HX_FIELD_EQ(inName,"set_onRollOut") ) { return set_onRollOut_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onRemoved") ) { return set_onRemoved_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return _percentHeight; }
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"interceptEvent") ) { return interceptEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseOut") ) { return set_onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onRollOver") ) { return set_onRollOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage; }
		if (HX_FIELD_EQ(inName,"set_onActivate") ) { return set_onActivate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { return _eventListeners; }
		if (HX_FIELD_EQ(inName,"_onAddedToStage") ) { return _onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return get_horizontalAlign(); }
		if (HX_FIELD_EQ(inName,"set_onMouseDown") ) { return set_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseOver") ) { return set_onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseMove") ) { return set_onMouseMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return get_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return set_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerCount") ) { return getListenerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onDeactivate") ) { return set_onDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onGlyphClick") ) { return set_onGlyphClick_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return get_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return set_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return get_verticalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return set_verticalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onDoubleClick") ) { return set_onDoubleClick_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onAddedToStage") ) { return set_onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"onRemovedFromStage") ) { return onRemovedFromStage; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return get_horizontalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return set_horizontalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_onRemovedFromStage") ) { return set_onRemovedFromStage_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeEventListenerType") ) { return removeEventListenerType_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllEventListeners") ) { return removeAllEventListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return set_root(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ready") ) { _ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { return set_parent(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onInit") ) { if (inCallProp) return set_onInit(inValue);onInit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halign") ) { _halign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valign") ) { _valign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"onReady") ) { if (inCallProp) return set_onReady(inValue);onReady=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp) return set_onClick(inValue);onClick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAdded") ) { if (inCallProp) return set_onAdded(inValue);onAdded=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::flash::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResize") ) { if (inCallProp) return set_onResize(inValue);onResize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp) return set_onChange(inValue);onChange=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onScroll") ) { if (inCallProp) return set_onScroll(inValue);onScroll=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { if (inCallProp) return set_onMouseUp(inValue);onMouseUp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRollOut") ) { if (inCallProp) return set_onRollOut(inValue);onRollOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRemoved") ) { if (inCallProp) return set_onRemoved(inValue);onRemoved=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { if (inCallProp) return set_onMouseOut(inValue);onMouseOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRollOver") ) { if (inCallProp) return set_onRollOver(inValue);onRollOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onActivate") ) { if (inCallProp) return set_onActivate(inValue);onActivate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { if (inCallProp) return set_onMouseDown(inValue);onMouseDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { if (inCallProp) return set_onMouseOver(inValue);onMouseOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { if (inCallProp) return set_onMouseMove(inValue);onMouseMove=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return set_percentWidth(inValue); }
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { if (inCallProp) return set_onDeactivate(inValue);onDeactivate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGlyphClick") ) { if (inCallProp) return set_onGlyphClick(inValue);onGlyphClick=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidating") ) { _invalidating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return set_percentHeight(inValue); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return set_verticalAlign(inValue); }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { if (inCallProp) return set_onDoubleClick(inValue);onDoubleClick=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { if (inCallProp) return set_onAddedToStage(inValue);onAddedToStage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { _eventListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return set_horizontalAlign(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onRemovedFromStage") ) { if (inCallProp) return set_onRemovedFromStage(inValue);onRemovedFromStage=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_root"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_percentWidth"));
	outFields->push(HX_CSTRING("_percentHeight"));
	outFields->push(HX_CSTRING("_ready"));
	outFields->push(HX_CSTRING("_invalidating"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("_halign"));
	outFields->push(HX_CSTRING("_valign"));
	outFields->push(HX_CSTRING("_eventListeners"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("percentWidth"));
	outFields->push(HX_CSTRING("percentHeight"));
	outFields->push(HX_CSTRING("ready"));
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("stageX"));
	outFields->push(HX_CSTRING("stageY"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("horizontalAlign"));
	outFields->push(HX_CSTRING("verticalAlign"));
	outFields->push(HX_CSTRING("graphics"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,_parent),HX_CSTRING("_parent")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(DisplayObject_obj,_root),HX_CSTRING("_root")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_id),HX_CSTRING("_id")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_x),HX_CSTRING("_x")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_y),HX_CSTRING("_y")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_width),HX_CSTRING("_width")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_height),HX_CSTRING("_height")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_percentWidth),HX_CSTRING("_percentWidth")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_percentHeight),HX_CSTRING("_percentHeight")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,_ready),HX_CSTRING("_ready")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,_invalidating),HX_CSTRING("_invalidating")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(DisplayObject_obj,_sprite),HX_CSTRING("_sprite")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_halign),HX_CSTRING("_halign")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_valign),HX_CSTRING("_valign")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DisplayObject_obj,_eventListeners),HX_CSTRING("_eventListeners")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,ready),HX_CSTRING("ready")},
	{hx::fsObject /*::flash::display::Sprite*/ ,(int)offsetof(DisplayObject_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,stageX),HX_CSTRING("stageX")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,stageY),HX_CSTRING("stageY")},
	{hx::fsObject /*::flash::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,graphics),HX_CSTRING("graphics")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onInit),HX_CSTRING("onInit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onResize),HX_CSTRING("onResize")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onReady),HX_CSTRING("onReady")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onClick),HX_CSTRING("onClick")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseDown),HX_CSTRING("onMouseDown")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseUp),HX_CSTRING("onMouseUp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseOver),HX_CSTRING("onMouseOver")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseOut),HX_CSTRING("onMouseOut")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseMove),HX_CSTRING("onMouseMove")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onDoubleClick),HX_CSTRING("onDoubleClick")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRollOver),HX_CSTRING("onRollOver")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRollOut),HX_CSTRING("onRollOut")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onChange),HX_CSTRING("onChange")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onScroll),HX_CSTRING("onScroll")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onAdded),HX_CSTRING("onAdded")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onAddedToStage),HX_CSTRING("onAddedToStage")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRemoved),HX_CSTRING("onRemoved")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRemovedFromStage),HX_CSTRING("onRemovedFromStage")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onActivate),HX_CSTRING("onActivate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onDeactivate),HX_CSTRING("onDeactivate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onGlyphClick),HX_CSTRING("onGlyphClick")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_parent"),
	HX_CSTRING("_root"),
	HX_CSTRING("_id"),
	HX_CSTRING("_x"),
	HX_CSTRING("_y"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_percentWidth"),
	HX_CSTRING("_percentHeight"),
	HX_CSTRING("_ready"),
	HX_CSTRING("_invalidating"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("_halign"),
	HX_CSTRING("_valign"),
	HX_CSTRING("_eventListeners"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("postInitialize"),
	HX_CSTRING("_onAddedToStage"),
	HX_CSTRING("ready"),
	HX_CSTRING("sprite"),
	HX_CSTRING("stageX"),
	HX_CSTRING("stageY"),
	HX_CSTRING("get_parent"),
	HX_CSTRING("set_parent"),
	HX_CSTRING("get_root"),
	HX_CSTRING("set_root"),
	HX_CSTRING("get_id"),
	HX_CSTRING("set_id"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_percentWidth"),
	HX_CSTRING("set_percentWidth"),
	HX_CSTRING("get_percentHeight"),
	HX_CSTRING("set_percentHeight"),
	HX_CSTRING("get_ready"),
	HX_CSTRING("get_sprite"),
	HX_CSTRING("get_stageX"),
	HX_CSTRING("get_stageY"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_horizontalAlign"),
	HX_CSTRING("set_horizontalAlign"),
	HX_CSTRING("get_verticalAlign"),
	HX_CSTRING("set_verticalAlign"),
	HX_CSTRING("hitTest"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("dispose"),
	HX_CSTRING("interceptEvent"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("willTrigger"),
	HX_CSTRING("graphics"),
	HX_CSTRING("get_graphics"),
	HX_CSTRING("paint"),
	HX_CSTRING("removeEventListenerType"),
	HX_CSTRING("removeAllEventListeners"),
	HX_CSTRING("getListenerCount"),
	HX_CSTRING("_handleEvent"),
	HX_CSTRING("onInit"),
	HX_CSTRING("set_onInit"),
	HX_CSTRING("onResize"),
	HX_CSTRING("set_onResize"),
	HX_CSTRING("onReady"),
	HX_CSTRING("set_onReady"),
	HX_CSTRING("onClick"),
	HX_CSTRING("set_onClick"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("set_onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("set_onMouseUp"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("set_onMouseOver"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("set_onMouseOut"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("set_onMouseMove"),
	HX_CSTRING("onDoubleClick"),
	HX_CSTRING("set_onDoubleClick"),
	HX_CSTRING("onRollOver"),
	HX_CSTRING("set_onRollOver"),
	HX_CSTRING("onRollOut"),
	HX_CSTRING("set_onRollOut"),
	HX_CSTRING("onChange"),
	HX_CSTRING("set_onChange"),
	HX_CSTRING("onScroll"),
	HX_CSTRING("set_onScroll"),
	HX_CSTRING("onAdded"),
	HX_CSTRING("set_onAdded"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("set_onAddedToStage"),
	HX_CSTRING("onRemoved"),
	HX_CSTRING("set_onRemoved"),
	HX_CSTRING("onRemovedFromStage"),
	HX_CSTRING("set_onRemovedFromStage"),
	HX_CSTRING("onActivate"),
	HX_CSTRING("set_onActivate"),
	HX_CSTRING("onDeactivate"),
	HX_CSTRING("set_onDeactivate"),
	HX_CSTRING("onGlyphClick"),
	HX_CSTRING("set_onGlyphClick"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
};

#endif

Class DisplayObject_obj::__mClass;

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.DisplayObject"), hx::TCanCast< DisplayObject_obj> ,sStaticFields,sMemberFields,
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

void DisplayObject_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onInit") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onInit") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onResize") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onResize") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onReady") , _Function_2_5::Block(),false);
						struct _Function_2_6{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onReady") , _Function_2_6::Block(),false);
						struct _Function_2_7{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onClick") , _Function_2_7::Block(),false);
						struct _Function_2_8{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onClick") , _Function_2_8::Block(),false);
						struct _Function_2_9{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onMouseDown") , _Function_2_9::Block(),false);
						struct _Function_2_10{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onMouseDown") , _Function_2_10::Block(),false);
						struct _Function_2_11{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onMouseUp") , _Function_2_11::Block(),false);
						struct _Function_2_12{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onMouseUp") , _Function_2_12::Block(),false);
						struct _Function_2_13{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onMouseOver") , _Function_2_13::Block(),false);
						struct _Function_2_14{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onMouseOver") , _Function_2_14::Block(),false);
						struct _Function_2_15{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onMouseOut") , _Function_2_15::Block(),false);
						struct _Function_2_16{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onMouseOut") , _Function_2_16::Block(),false);
						struct _Function_2_17{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onMouseMove") , _Function_2_17::Block(),false);
						struct _Function_2_18{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onMouseMove") , _Function_2_18::Block(),false);
						struct _Function_2_19{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onDoubleClick") , _Function_2_19::Block(),false);
						struct _Function_2_20{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onDoubleClick") , _Function_2_20::Block(),false);
						struct _Function_2_21{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onRollOver") , _Function_2_21::Block(),false);
						struct _Function_2_22{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onRollOver") , _Function_2_22::Block(),false);
						struct _Function_2_23{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onRollOut") , _Function_2_23::Block(),false);
						struct _Function_2_24{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onRollOut") , _Function_2_24::Block(),false);
						struct _Function_2_25{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onChange") , _Function_2_25::Block(),false);
						struct _Function_2_26{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onChange") , _Function_2_26::Block(),false);
						struct _Function_2_27{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onScroll") , _Function_2_27::Block(),false);
						struct _Function_2_28{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onScroll") , _Function_2_28::Block(),false);
						struct _Function_2_29{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onAdded") , _Function_2_29::Block(),false);
						struct _Function_2_30{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onAdded") , _Function_2_30::Block(),false);
						struct _Function_2_31{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onAddedToStage") , _Function_2_31::Block(),false);
						struct _Function_2_32{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onAddedToStage") , _Function_2_32::Block(),false);
						struct _Function_2_33{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onRemoved") , _Function_2_33::Block(),false);
						struct _Function_2_34{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onRemoved") , _Function_2_34::Block(),false);
						struct _Function_2_35{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onRemovedFromStage") , _Function_2_35::Block(),false);
						struct _Function_2_36{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onRemovedFromStage") , _Function_2_36::Block(),false);
						struct _Function_2_37{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onActivate") , _Function_2_37::Block(),false);
						struct _Function_2_38{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onActivate") , _Function_2_38::Block(),false);
						struct _Function_2_39{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onDeactivate") , _Function_2_39::Block(),false);
						struct _Function_2_40{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onDeactivate") , _Function_2_40::Block(),false);
						struct _Function_2_41{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onGlyphClick") , _Function_2_41::Block(),false);
						struct _Function_2_42{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/DisplayObject.hx",30,0xfab33e8a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onGlyphClick") , _Function_2_42::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("fields") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core