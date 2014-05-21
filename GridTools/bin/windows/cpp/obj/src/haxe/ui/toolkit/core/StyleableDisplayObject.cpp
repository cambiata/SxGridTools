#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void StyleableDisplayObject_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","new",0x55efa895,"haxe.ui.toolkit.core.StyleableDisplayObject.new","haxe/ui/toolkit/core/StyleableDisplayObject.hx",21,0xd6d306bb)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//StyleableDisplayObject_obj::~StyleableDisplayObject_obj() { }

Dynamic StyleableDisplayObject_obj::__CreateEmpty() { return  new StyleableDisplayObject_obj; }
hx::ObjectPtr< StyleableDisplayObject_obj > StyleableDisplayObject_obj::__new()
{  hx::ObjectPtr< StyleableDisplayObject_obj > result = new StyleableDisplayObject_obj();
	result->__construct();
	return result;}

Dynamic StyleableDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleableDisplayObject_obj > result = new StyleableDisplayObject_obj();
	result->__construct();
	return result;}

hx::Object *StyleableDisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void StyleableDisplayObject_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","preInitialize",0x64884bc8,"haxe.ui.toolkit.core.StyleableDisplayObject.preInitialize","haxe/ui/toolkit/core/StyleableDisplayObject.hx",27,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::preInitialize();
		HX_STACK_LINE(29)
		this->_setStyle = this->_style;
		HX_STACK_LINE(30)
		this->refreshStyle();
		HX_STACK_LINE(31)
		this->_style->merge(this->_setStyle);
	}
return null();
}


Void StyleableDisplayObject_obj::paint( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","paint",0x93b8c713,"haxe.ui.toolkit.core.StyleableDisplayObject.paint","haxe/ui/toolkit/core/StyleableDisplayObject.hx",34,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		if (((bool((this->_width == (int)0)) || bool((this->_height == (int)0))))){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		::flash::geom::Rectangle rc = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->_width,this->_height);		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(41)
		::flash::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::style::StyleHelper_obj::paintStyle(_g,this->get_style(),rc);
	}
return null();
}


Void StyleableDisplayObject_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","invalidate",0x52aae1e6,"haxe.ui.toolkit.core.StyleableDisplayObject.invalidate","haxe/ui/toolkit/core/StyleableDisplayObject.hx",44,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(45)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(50)
		if (((((int(type) & int((int)1048576))) == (int)1048576))){
			HX_STACK_LINE(51)
			this->refreshStyle();
		}
	}
return null();
}


::String StyleableDisplayObject_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_id",0x35dbbe83,"haxe.ui.toolkit.core.StyleableDisplayObject.set_id","haxe/ui/toolkit/core/StyleableDisplayObject.hx",55,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	if (((value == this->get_id()))){
		HX_STACK_LINE(57)
		return value;
	}
	HX_STACK_LINE(59)
	::String v = this->super::set_id(value);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(60)
	if ((this->_ready)){
		HX_STACK_LINE(61)
		this->buildStyles();
		HX_STACK_LINE(62)
		this->_style = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(63)
		this->_style->merge(this->_setStyle);
		HX_STACK_LINE(64)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(66)
	return v;
}


::haxe::ui::toolkit::core::interfaces::ILayout StyleableDisplayObject_obj::set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_layout",0x183e8552,"haxe.ui.toolkit.core.StyleableDisplayObject.set_layout","haxe/ui/toolkit/core/StyleableDisplayObject.hx",69,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(70)
	value = this->super::set_layout(value);
	HX_STACK_LINE(71)
	if (((this->_style != null()))){
		HX_STACK_LINE(73)
		if (((this->get_layout() != null()))){
			HX_STACK_LINE(74)
			if (((this->_style->get_paddingLeft() != (int)-1))){
				HX_STACK_LINE(75)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_left"),true)(this->_style->get_paddingLeft());
			}
			HX_STACK_LINE(77)
			if (((this->_style->get_paddingTop() != (int)-1))){
				HX_STACK_LINE(78)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_top"),true)(this->_style->get_paddingTop());
			}
			HX_STACK_LINE(80)
			if (((this->_style->get_paddingRight() != (int)-1))){
				HX_STACK_LINE(81)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_right"),true)(this->_style->get_paddingRight());
			}
			HX_STACK_LINE(83)
			if (((this->_style->get_paddingBottom() != (int)-1))){
				HX_STACK_LINE(84)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_bottom"),true)(this->_style->get_paddingBottom());
			}
			HX_STACK_LINE(86)
			if (((this->_style->get_spacingX() != (int)-1))){
				HX_STACK_LINE(87)
				this->_layout->__Field(HX_CSTRING("set_spacingX"),true)(this->_style->get_spacingX());
			}
			HX_STACK_LINE(89)
			if (((this->_style->get_spacingY() != (int)-1))){
				HX_STACK_LINE(90)
				this->_layout->__Field(HX_CSTRING("set_spacingY"),true)(this->_style->get_spacingY());
			}
		}
	}
	HX_STACK_LINE(94)
	return value;
}


::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_style( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_style",0x7bc66f7d,"haxe.ui.toolkit.core.StyleableDisplayObject.get_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",105,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	if (((this->_style == null()))){
		HX_STACK_LINE(107)
		this->_style = ::haxe::ui::toolkit::style::Style_obj::__new(null());
	}
	HX_STACK_LINE(109)
	return this->_style;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_style,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_style( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_style",0x5f175b89,"haxe.ui.toolkit.core.StyleableDisplayObject.set_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",112,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(113)
	this->_style = value;
	HX_STACK_LINE(114)
	this->_style->set_target(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(116)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_style,return )

::String StyleableDisplayObject_obj::get_styleName( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_styleName",0x7e191068,"haxe.ui.toolkit.core.StyleableDisplayObject.get_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",120,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->_styleName;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_styleName,return )

::String StyleableDisplayObject_obj::set_styleName( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_styleName",0xc31ef274,"haxe.ui.toolkit.core.StyleableDisplayObject.set_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",123,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	this->_styleName = value;
	HX_STACK_LINE(125)
	if ((this->_ready)){
		HX_STACK_LINE(126)
		this->buildStyles();
		HX_STACK_LINE(127)
		this->_style = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(128)
		this->_style->merge(this->_setStyle);
		HX_STACK_LINE(129)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(131)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_styleName,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_inlineStyle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_inlineStyle",0xb40db364,"haxe.ui.toolkit.core.StyleableDisplayObject.get_inlineStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",134,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	if (((this->_inlineStyle == null()))){
		HX_STACK_LINE(136)
		this->_inlineStyle = ::haxe::ui::toolkit::style::Style_obj::__new(null());
	}
	HX_STACK_LINE(138)
	return this->_inlineStyle;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_inlineStyle,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_inlineStyle( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_inlineStyle",0xafd93070,"haxe.ui.toolkit.core.StyleableDisplayObject.set_inlineStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",141,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	this->_inlineStyle = value;
	HX_STACK_LINE(143)
	if (((this->_inlineStyle != null()))){
		HX_STACK_LINE(144)
		this->_inlineStyle->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(146)
	if ((this->_ready)){
		HX_STACK_LINE(147)
		this->buildStyles();
		HX_STACK_LINE(148)
		this->_style = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(149)
		this->_style->merge(this->_setStyle);
		HX_STACK_LINE(150)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(152)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_inlineStyle,return )

Void StyleableDisplayObject_obj::storeStyle( ::String id,::haxe::ui::toolkit::style::Style value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","storeStyle",0x8d1d19fb,"haxe.ui.toolkit.core.StyleableDisplayObject.storeStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",155,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(156)
		if (((this->_storedStyles == null()))){
			HX_STACK_LINE(157)
			this->_storedStyles = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(159)
		this->_storedStyles->set(id,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleableDisplayObject_obj,storeStyle,(void))

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::retrieveStyle( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","retrieveStyle",0x9e3c858a,"haxe.ui.toolkit.core.StyleableDisplayObject.retrieveStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",162,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(163)
	if (((this->_storedStyles == null()))){
		HX_STACK_LINE(164)
		return null();
	}
	HX_STACK_LINE(166)
	return this->_storedStyles->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,retrieveStyle,return )

Void StyleableDisplayObject_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","applyStyle",0xfaefe94e,"haxe.ui.toolkit.core.StyleableDisplayObject.applyStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",169,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		if (((this->_style == null()))){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(174)
		if (((this->_inlineStyle != null()))){
			HX_STACK_LINE(175)
			this->_style->merge(this->_inlineStyle);
		}
		HX_STACK_LINE(177)
		if (((this->_style != null()))){
			HX_STACK_LINE(178)
			if (((this->_style->get_alpha() != (int)-1))){
				HX_STACK_LINE(179)
				this->_sprite->set_alpha(this->_style->get_alpha());
			}
			else{
				HX_STACK_LINE(181)
				this->_sprite->set_alpha((int)1);
			}
			HX_STACK_LINE(184)
			if (((this->_style->get_horizontalAlignment() != null()))){
				HX_STACK_LINE(185)
				this->set_horizontalAlign(this->_style->get_horizontalAlignment());
			}
			HX_STACK_LINE(187)
			if (((this->_style->get_verticalAlignment() != null()))){
				HX_STACK_LINE(188)
				this->set_verticalAlign(this->_style->get_verticalAlignment());
			}
			HX_STACK_LINE(192)
			if (((this->_style->get_filter() != null()))){
				HX_STACK_LINE(193)
				this->_sprite->set_filters(Dynamic( Array_obj<Dynamic>::__new().Add(this->_style->get_filter())));
			}
			else{
				HX_STACK_LINE(195)
				this->_sprite->set_filters(Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
		HX_STACK_LINE(200)
		this->invalidate((int)16,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,applyStyle,(void))

Void StyleableDisplayObject_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","buildStyles",0xab726125,"haxe.ui.toolkit.core.StyleableDisplayObject.buildStyles","haxe/ui/toolkit/core/StyleableDisplayObject.hx",203,0xd6d306bb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,buildStyles,(void))

Void StyleableDisplayObject_obj::refreshStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","refreshStyle",0xdb339a81,"haxe.ui.toolkit.core.StyleableDisplayObject.refreshStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",207,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		this->buildStyles();
		HX_STACK_LINE(210)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >()))){
			HX_STACK_LINE(211)
			::String state = (hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this)))->get_state();		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(212)
			if (((state == null()))){
				HX_STACK_LINE(213)
				state = HX_CSTRING("normal");
			}
			HX_STACK_LINE(215)
			this->_style = this->retrieveStyle(state);
			HX_STACK_LINE(216)
			if (((this->_style == null()))){
				HX_STACK_LINE(217)
				this->_style = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),(hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this)))->get_state());
			}
		}
		else{
			HX_STACK_LINE(220)
			this->_style = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());
		}
		HX_STACK_LINE(223)
		this->_style->merge(this->_inlineStyle);
		HX_STACK_LINE(226)
		if (((this->_style != null()))){
			HX_STACK_LINE(228)
			if (((  (((this->_style->get_width() != (int)-1))) ? bool((this->get_width() == (int)0)) : bool(false) ))){
				HX_STACK_LINE(229)
				this->set_width(this->_style->get_width());
			}
			HX_STACK_LINE(231)
			if (((  (((this->_style->get_height() != (int)-1))) ? bool((this->get_height() == (int)0)) : bool(false) ))){
				HX_STACK_LINE(232)
				this->set_height(this->_style->get_height());
			}
			HX_STACK_LINE(235)
			if (((  (((this->_style->get_percentWidth() != (int)-1))) ? bool((this->get_percentWidth() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(236)
				this->set_percentWidth(this->_style->get_percentWidth());
			}
			HX_STACK_LINE(238)
			if (((  (((this->_style->get_percentHeight() != (int)-1))) ? bool((this->get_percentHeight() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(239)
				this->set_percentHeight(this->_style->get_percentHeight());
			}
			HX_STACK_LINE(241)
			if ((this->_style->get_autoSizeSet())){
				HX_STACK_LINE(242)
				this->set_autoSize(this->_style->get_autoSize());
			}
			HX_STACK_LINE(246)
			if (((this->get_layout() != null()))){
				HX_STACK_LINE(247)
				if (((this->_style->get_paddingLeft() != (int)-1))){
					HX_STACK_LINE(248)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_left"),true)(this->_style->get_paddingLeft());
				}
				HX_STACK_LINE(250)
				if (((this->_style->get_paddingTop() != (int)-1))){
					HX_STACK_LINE(251)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_top"),true)(this->_style->get_paddingTop());
				}
				HX_STACK_LINE(253)
				if (((this->_style->get_paddingRight() != (int)-1))){
					HX_STACK_LINE(254)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_right"),true)(this->_style->get_paddingRight());
				}
				HX_STACK_LINE(256)
				if (((this->_style->get_paddingBottom() != (int)-1))){
					HX_STACK_LINE(257)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_bottom"),true)(this->_style->get_paddingBottom());
				}
				HX_STACK_LINE(259)
				if (((this->_style->get_spacingX() != (int)-1))){
					HX_STACK_LINE(260)
					this->_layout->__Field(HX_CSTRING("set_spacingX"),true)(this->_style->get_spacingX());
				}
				HX_STACK_LINE(262)
				if (((this->_style->get_spacingY() != (int)-1))){
					HX_STACK_LINE(263)
					this->_layout->__Field(HX_CSTRING("set_spacingY"),true)(this->_style->get_spacingY());
				}
			}
		}
		HX_STACK_LINE(268)
		this->applyStyle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,refreshStyle,(void))

Dynamic StyleableDisplayObject_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","clone",0x1ecd22d2,"haxe.ui.toolkit.core.StyleableDisplayObject.clone","haxe/ui/toolkit/core/StyleableDisplayObject.hx",1,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StyleableDisplayObject c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_styleName(this->get_styleName());
	HX_STACK_LINE(4)
	return c;
}


Dynamic StyleableDisplayObject_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","self",0xdf11e1b7,"haxe.ui.toolkit.core.StyleableDisplayObject.self","haxe/ui/toolkit/core/StyleableDisplayObject.hx",2,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__new();
}



StyleableDisplayObject_obj::StyleableDisplayObject_obj()
{
}

void StyleableDisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleableDisplayObject);
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_MARK_MEMBER_NAME(_styleName,"_styleName");
	HX_MARK_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	HX_MARK_MEMBER_NAME(_setStyle,"_setStyle");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleableDisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_VISIT_MEMBER_NAME(_styleName,"_styleName");
	HX_VISIT_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	HX_VISIT_MEMBER_NAME(_setStyle,"_setStyle");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StyleableDisplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"style") ) { return get_style(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { return _style; }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_setStyle") ) { return _setStyle; }
		if (HX_FIELD_EQ(inName,"styleName") ) { return get_styleName(); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_styleName") ) { return _styleName; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"storeStyle") ) { return storeStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineStyle") ) { return get_inlineStyle(); }
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { return _inlineStyle; }
		if (HX_FIELD_EQ(inName,"refreshStyle") ) { return refreshStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { return _storedStyles; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_styleName") ) { return get_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_styleName") ) { return set_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveStyle") ) { return retrieveStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_inlineStyle") ) { return get_inlineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineStyle") ) { return set_inlineStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleableDisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return set_style(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_setStyle") ) { _setStyle=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleName") ) { return set_styleName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_styleName") ) { _styleName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineStyle") ) { return set_inlineStyle(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { _inlineStyle=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { _storedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleableDisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_style"));
	outFields->push(HX_CSTRING("_storedStyles"));
	outFields->push(HX_CSTRING("_styleName"));
	outFields->push(HX_CSTRING("_inlineStyle"));
	outFields->push(HX_CSTRING("_setStyle"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("styleName"));
	outFields->push(HX_CSTRING("inlineStyle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_style),HX_CSTRING("_style")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleableDisplayObject_obj,_storedStyles),HX_CSTRING("_storedStyles")},
	{hx::fsString,(int)offsetof(StyleableDisplayObject_obj,_styleName),HX_CSTRING("_styleName")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_inlineStyle),HX_CSTRING("_inlineStyle")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_setStyle),HX_CSTRING("_setStyle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_style"),
	HX_CSTRING("_storedStyles"),
	HX_CSTRING("_styleName"),
	HX_CSTRING("_inlineStyle"),
	HX_CSTRING("_setStyle"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("paint"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("set_id"),
	HX_CSTRING("set_layout"),
	HX_CSTRING("get_style"),
	HX_CSTRING("set_style"),
	HX_CSTRING("get_styleName"),
	HX_CSTRING("set_styleName"),
	HX_CSTRING("get_inlineStyle"),
	HX_CSTRING("set_inlineStyle"),
	HX_CSTRING("storeStyle"),
	HX_CSTRING("retrieveStyle"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("buildStyles"),
	HX_CSTRING("refreshStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#endif

Class StyleableDisplayObject_obj::__mClass;

void StyleableDisplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.StyleableDisplayObject"), hx::TCanCast< StyleableDisplayObject_obj> ,sStaticFields,sMemberFields,
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

void StyleableDisplayObject_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
