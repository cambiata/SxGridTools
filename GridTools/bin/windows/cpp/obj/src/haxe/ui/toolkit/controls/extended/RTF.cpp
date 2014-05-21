#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_RTF
#include <haxe/ui/toolkit/controls/extended/RTF.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{

Void RTF_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","new",0xabbaee77,"haxe.ui.toolkit.controls.extended.RTF.new","haxe/ui/toolkit/controls/extended/RTF.hx",15,0xefd15e5a)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->set_multiline(true);
	HX_STACK_LINE(18)
	::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(18)
	tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
}
;
	return null();
}

//RTF_obj::~RTF_obj() { }

Dynamic RTF_obj::__CreateEmpty() { return  new RTF_obj; }
hx::ObjectPtr< RTF_obj > RTF_obj::__new()
{  hx::ObjectPtr< RTF_obj > result = new RTF_obj();
	result->__construct();
	return result;}

Dynamic RTF_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RTF_obj > result = new RTF_obj();
	result->__construct();
	return result;}

::String RTF_obj::get_htmlText( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","get_htmlText",0xf5c7baca,"haxe.ui.toolkit.controls.extended.RTF.get_htmlText","haxe/ui/toolkit/controls/extended/RTF.hx",32,0xefd15e5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(33)
	tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(34)
	return tf->get_htmlText();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,get_htmlText,return )

::String RTF_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","set_htmlText",0x0ac0de3e,"haxe.ui.toolkit.controls.extended.RTF.set_htmlText","haxe/ui/toolkit/controls/extended/RTF.hx",37,0xefd15e5a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(38)
	if ((::StringTools_obj::startsWith(value,HX_CSTRING("asset://")))){
		HX_STACK_LINE(39)
		::String assetId = value.substr((int)8,value.length);		HX_STACK_VAR(assetId,"assetId");
		HX_STACK_LINE(40)
		value = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(assetId,null());
		HX_STACK_LINE(41)
		value = ::StringTools_obj::replace(value,HX_CSTRING("\r"),HX_CSTRING(""));
	}
	HX_STACK_LINE(43)
	::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(43)
	tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(44)
	tf->set_htmlText(value);
	HX_STACK_LINE(45)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,set_htmlText,return )

Void RTF_obj::bold( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","bold",0x8feeb78e,"haxe.ui.toolkit.controls.extended.RTF.bold","haxe/ui/toolkit/controls/extended/RTF.hx",55,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->applyRTFStyle(HX_CSTRING("bold"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,bold,(void))

Void RTF_obj::italic( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","italic",0x18f7b939,"haxe.ui.toolkit.controls.extended.RTF.italic","haxe/ui/toolkit/controls/extended/RTF.hx",62,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->applyRTFStyle(HX_CSTRING("italic"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,italic,(void))

Void RTF_obj::underline( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","underline",0x7ad05e63,"haxe.ui.toolkit.controls.extended.RTF.underline","haxe/ui/toolkit/controls/extended/RTF.hx",69,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->applyRTFStyle(HX_CSTRING("underline"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,underline,(void))

Void RTF_obj::fontSize( int size){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","fontSize",0x55132cb9,"haxe.ui.toolkit.controls.extended.RTF.fontSize","haxe/ui/toolkit/controls/extended/RTF.hx",76,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(76)
		this->applyRTFStyle(HX_CSTRING("fontSize"),size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,fontSize,(void))

Void RTF_obj::fontName( ::String name){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","fontName",0x51befe43,"haxe.ui.toolkit.controls.extended.RTF.fontName","haxe/ui/toolkit/controls/extended/RTF.hx",83,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(83)
		this->applyRTFStyle(HX_CSTRING("fontName"),name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,fontName,(void))

Void RTF_obj::bullet( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","bullet",0xe7241c8b,"haxe.ui.toolkit.controls.extended.RTF.bullet","haxe/ui/toolkit/controls/extended/RTF.hx",90,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->applyRTFStyle(HX_CSTRING("bullet"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,bullet,(void))

Void RTF_obj::alignLeft( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","alignLeft",0xc76d1ac3,"haxe.ui.toolkit.controls.extended.RTF.alignLeft","haxe/ui/toolkit/controls/extended/RTF.hx",97,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->applyRTFStyle(HX_CSTRING("align"),HX_CSTRING("left"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignLeft,(void))

Void RTF_obj::alignCenter( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","alignCenter",0xbd0f5f91,"haxe.ui.toolkit.controls.extended.RTF.alignCenter","haxe/ui/toolkit/controls/extended/RTF.hx",104,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->applyRTFStyle(HX_CSTRING("align"),HX_CSTRING("center"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignCenter,(void))

Void RTF_obj::alignRight( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","alignRight",0x2f175da0,"haxe.ui.toolkit.controls.extended.RTF.alignRight","haxe/ui/toolkit/controls/extended/RTF.hx",111,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->applyRTFStyle(HX_CSTRING("align"),HX_CSTRING("right"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignRight,(void))

Void RTF_obj::alignJustify( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","alignJustify",0x1a342a14,"haxe.ui.toolkit.controls.extended.RTF.alignJustify","haxe/ui/toolkit/controls/extended/RTF.hx",118,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->applyRTFStyle(HX_CSTRING("align"),HX_CSTRING("justify"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignJustify,(void))

Void RTF_obj::applyRTFStyle( ::String what,Dynamic value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","applyRTFStyle",0xa8b1c092,"haxe.ui.toolkit.controls.extended.RTF.applyRTFStyle","haxe/ui/toolkit/controls/extended/RTF.hx",121,0xefd15e5a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(122)
		if (((  (((this->get_selectionBeginIndex() == (int)0))) ? bool((this->get_selectionEndIndex() == (int)0)) : bool(false) ))){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(126)
		int _g = this->get_selectionBeginIndex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		if (((_g == this->get_selectionEndIndex()))){
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(130)
		::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(130)
		tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(131)
		int _g1 = this->get_selectionBeginIndex();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		::flash::text::TextFormat format = tf->getTextFormat(_g1,this->get_selectionEndIndex());		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(132)
		::String _switch_1 = (what);
		if (  ( _switch_1==HX_CSTRING("bold"))){
			HX_STACK_LINE(134)
			format->bold = !(format->bold);
		}
		else if (  ( _switch_1==HX_CSTRING("italic"))){
			HX_STACK_LINE(136)
			format->italic = !(format->italic);
		}
		else if (  ( _switch_1==HX_CSTRING("underline"))){
			HX_STACK_LINE(138)
			format->underline = !(format->underline);
		}
		else if (  ( _switch_1==HX_CSTRING("fontSize"))){
			HX_STACK_LINE(140)
			format->size = hx::TCast< Int >::cast(value);
		}
		else if (  ( _switch_1==HX_CSTRING("fontName"))){
			HX_STACK_LINE(142)
			format->font = hx::TCast< String >::cast(value);
		}
		else if (  ( _switch_1==HX_CSTRING("bullet"))){
			HX_STACK_LINE(144)
			format->bullet = !(format->bullet);
		}
		else if (  ( _switch_1==HX_CSTRING("align"))){
			HX_STACK_LINE(157)
			::String align;		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(157)
			align = hx::TCast< String >::cast(value);
			HX_STACK_LINE(159)
			format->align = align;
		}
		else  {
		}
;
;
		HX_STACK_LINE(163)
		int _g2 = this->get_selectionBeginIndex();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		tf->setTextFormat(format,_g2,this->get_selectionEndIndex());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RTF_obj,applyRTFStyle,(void))

Dynamic RTF_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","clone",0xf25f2534,"haxe.ui.toolkit.controls.extended.RTF.clone","haxe/ui/toolkit/controls/extended/RTF.hx",1,0xefd15e5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::extended::RTF c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic RTF_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.RTF","self",0x9b23c195,"haxe.ui.toolkit.controls.extended.RTF.self","haxe/ui/toolkit/controls/extended/RTF.hx",2,0xefd15e5a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::extended::RTF_obj::__new();
}



RTF_obj::RTF_obj()
{
}

Dynamic RTF_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold_dyn(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return italic_dyn(); }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return underline_dyn(); }
		if (HX_FIELD_EQ(inName,"alignLeft") ) { return alignLeft_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignRight") ) { return alignRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignCenter") ) { return alignCenter_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"alignJustify") ) { return alignJustify_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyRTFStyle") ) { return applyRTFStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RTF_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RTF_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("htmlText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_htmlText"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("bold"),
	HX_CSTRING("italic"),
	HX_CSTRING("underline"),
	HX_CSTRING("fontSize"),
	HX_CSTRING("fontName"),
	HX_CSTRING("bullet"),
	HX_CSTRING("alignLeft"),
	HX_CSTRING("alignCenter"),
	HX_CSTRING("alignRight"),
	HX_CSTRING("alignJustify"),
	HX_CSTRING("applyRTFStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTF_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTF_obj::__mClass,"__mClass");
};

#endif

Class RTF_obj::__mClass;

void RTF_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended.RTF"), hx::TCanCast< RTF_obj> ,sStaticFields,sMemberFields,
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

void RTF_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
