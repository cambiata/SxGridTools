#include <hxcpp.h>

#ifndef INCLUDED_flash_system_Capabilities
#include <flash/system/Capabilities.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Client_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Client","new",0xbed64f0a,"haxe.ui.toolkit.core.Client.new","haxe/ui/toolkit/core/Client.hx",19,0xab9725e6)
{
}
;
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}

Void Client_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Client","init",0x39679126,"haxe.ui.toolkit.core.Client.init","haxe/ui/toolkit/core/Client.hx",23,0xab9725e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,init,(void))

::String Client_obj::get_language( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_language",0xe8dc9077,"haxe.ui.toolkit.core.Client.get_language","haxe/ui/toolkit/core/Client.hx",34,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return ::flash::system::Capabilities_obj::get_language();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_language,return )

Float Client_obj::get_dpi( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_dpi",0xad79279e,"haxe.ui.toolkit.core.Client.get_dpi","haxe/ui/toolkit/core/Client.hx",38,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return ::flash::system::Capabilities_obj::get_screenDPI();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_dpi,return )

::String Client_obj::get_platform( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_platform",0xd6c4c2d2,"haxe.ui.toolkit.core.Client.get_platform","haxe/ui/toolkit/core/Client.hx",41,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	return HX_CSTRING("windows");
	HX_STACK_LINE(50)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_platform,return )

::String Client_obj::get_target( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_target",0x3cdd6db0,"haxe.ui.toolkit.core.Client.get_target","haxe/ui/toolkit/core/Client.hx",53,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return HX_CSTRING("cpp");
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_target,return )

Float Client_obj::get_screenWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenWidth",0xcbe4903b,"haxe.ui.toolkit.core.Client.get_screenWidth","haxe/ui/toolkit/core/Client.hx",64,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return ::flash::system::Capabilities_obj::get_screenResolutionX();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenWidth,return )

Float Client_obj::get_screenHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenHeight",0x52691c12,"haxe.ui.toolkit.core.Client.get_screenHeight","haxe/ui/toolkit/core/Client.hx",68,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return ::flash::system::Capabilities_obj::get_screenResolutionY();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenHeight,return )

::haxe::ui::toolkit::core::Client Client_obj::_instance;

::haxe::ui::toolkit::core::Client Client_obj::instance;

::haxe::ui::toolkit::core::Client Client_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_instance",0xc8ac2fb4,"haxe.ui.toolkit.core.Client.get_instance","haxe/ui/toolkit/core/Client.hx",8,0xab9725e6)
	HX_STACK_LINE(9)
	if (((::haxe::ui::toolkit::core::Client_obj::_instance == null()))){
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Client_obj::_instance = ::haxe::ui::toolkit::core::Client_obj::__new();
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::core::Client_obj::_instance->init();
	}
	HX_STACK_LINE(13)
	return ::haxe::ui::toolkit::core::Client_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_instance,return )


Client_obj::Client_obj()
{
}

void Client_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Client);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void Client_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic Client_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return inCallProp ? get_dpi() : dpi; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp ? get_target() : target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return get_dpi_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp ? get_language() : language; }
		if (HX_FIELD_EQ(inName,"platform") ) { return inCallProp ? get_platform() : platform; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return inCallProp ? get_screenWidth() : screenWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return inCallProp ? get_screenHeight() : screenHeight; }
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"get_platform") ) { return get_platform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_screenWidth") ) { return get_screenWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_screenHeight") ) { return get_screenHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Client_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::Client >(); return inValue; }
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::Client >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Client_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("language"));
	outFields->push(HX_CSTRING("dpi"));
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("screenHeight"));
	outFields->push(HX_CSTRING("target"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Client_obj,language),HX_CSTRING("language")},
	{hx::fsFloat,(int)offsetof(Client_obj,dpi),HX_CSTRING("dpi")},
	{hx::fsString,(int)offsetof(Client_obj,platform),HX_CSTRING("platform")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenWidth),HX_CSTRING("screenWidth")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenHeight),HX_CSTRING("screenHeight")},
	{hx::fsString,(int)offsetof(Client_obj,target),HX_CSTRING("target")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("language"),
	HX_CSTRING("dpi"),
	HX_CSTRING("platform"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("target"),
	HX_CSTRING("get_language"),
	HX_CSTRING("get_dpi"),
	HX_CSTRING("get_platform"),
	HX_CSTRING("get_target"),
	HX_CSTRING("get_screenWidth"),
	HX_CSTRING("get_screenHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Client_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Client_obj::instance,"instance");
};

#endif

Class Client_obj::__mClass;

void Client_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Client"), hx::TCanCast< Client_obj> ,sStaticFields,sMemberFields,
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

void Client_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core