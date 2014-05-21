#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_sx_controllers_WelcomeController
#include <sx/controllers/WelcomeController.h>
#endif
namespace sx{
namespace controllers{

Void WelcomeController_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.WelcomeController","new",0x5d011a50,"sx.controllers.WelcomeController.new","sx/controllers/WelcomeController.hx",7,0x07a5a9a2)
{
	HX_STACK_LINE(7)
	super::__construct(HX_CSTRING("assets/welcome.xml"));
}
;
	return null();
}

//WelcomeController_obj::~WelcomeController_obj() { }

Dynamic WelcomeController_obj::__CreateEmpty() { return  new WelcomeController_obj; }
hx::ObjectPtr< WelcomeController_obj > WelcomeController_obj::__new()
{  hx::ObjectPtr< WelcomeController_obj > result = new WelcomeController_obj();
	result->__construct();
	return result;}

Dynamic WelcomeController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WelcomeController_obj > result = new WelcomeController_obj();
	result->__construct();
	return result;}


WelcomeController_obj::WelcomeController_obj()
{
}

Dynamic WelcomeController_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic WelcomeController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void WelcomeController_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WelcomeController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WelcomeController_obj::__mClass,"__mClass");
};

#endif

Class WelcomeController_obj::__mClass;

void WelcomeController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.WelcomeController"), hx::TCanCast< WelcomeController_obj> ,sStaticFields,sMemberFields,
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

void WelcomeController_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
