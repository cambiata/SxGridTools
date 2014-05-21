#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ClientWrapper_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.hscript.ClientWrapper","new",0xe56b295d,"haxe.ui.toolkit.hscript.ClientWrapper.new","haxe/ui/toolkit/hscript/ClientWrapper.hx",13,0x658eb455)
{
	HX_STACK_LINE(14)
	this->language = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_language();
	HX_STACK_LINE(15)
	this->dpi = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_dpi();
	HX_STACK_LINE(16)
	this->platform = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_platform();
	HX_STACK_LINE(17)
	this->target = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_target();
	HX_STACK_LINE(18)
	this->screenWidth = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_screenWidth();
	HX_STACK_LINE(19)
	this->screenHeight = ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_screenHeight();
}
;
	return null();
}

//ClientWrapper_obj::~ClientWrapper_obj() { }

Dynamic ClientWrapper_obj::__CreateEmpty() { return  new ClientWrapper_obj; }
hx::ObjectPtr< ClientWrapper_obj > ClientWrapper_obj::__new()
{  hx::ObjectPtr< ClientWrapper_obj > result = new ClientWrapper_obj();
	result->__construct();
	return result;}

Dynamic ClientWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClientWrapper_obj > result = new ClientWrapper_obj();
	result->__construct();
	return result;}


ClientWrapper_obj::ClientWrapper_obj()
{
}

void ClientWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientWrapper);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_END_CLASS();
}

void ClientWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
}

Dynamic ClientWrapper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return dpi; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return language; }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClientWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("language"));
	outFields->push(HX_CSTRING("dpi"));
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("screenHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ClientWrapper_obj,language),HX_CSTRING("language")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,dpi),HX_CSTRING("dpi")},
	{hx::fsString,(int)offsetof(ClientWrapper_obj,platform),HX_CSTRING("platform")},
	{hx::fsString,(int)offsetof(ClientWrapper_obj,target),HX_CSTRING("target")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,screenWidth),HX_CSTRING("screenWidth")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,screenHeight),HX_CSTRING("screenHeight")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("language"),
	HX_CSTRING("dpi"),
	HX_CSTRING("platform"),
	HX_CSTRING("target"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientWrapper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientWrapper_obj::__mClass,"__mClass");
};

#endif

Class ClientWrapper_obj::__mClass;

void ClientWrapper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.hscript.ClientWrapper"), hx::TCanCast< ClientWrapper_obj> ,sStaticFields,sMemberFields,
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

void ClientWrapper_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript
