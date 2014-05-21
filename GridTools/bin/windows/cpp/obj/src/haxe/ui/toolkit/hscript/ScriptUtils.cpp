#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptUtils_obj::__construct()
{
	return null();
}

//ScriptUtils_obj::~ScriptUtils_obj() { }

Dynamic ScriptUtils_obj::__CreateEmpty() { return  new ScriptUtils_obj; }
hx::ObjectPtr< ScriptUtils_obj > ScriptUtils_obj::__new()
{  hx::ObjectPtr< ScriptUtils_obj > result = new ScriptUtils_obj();
	result->__construct();
	return result;}

Dynamic ScriptUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptUtils_obj > result = new ScriptUtils_obj();
	result->__construct();
	return result;}

bool ScriptUtils_obj::isScript( ::String data){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isScript",0x1bf3e49a,"haxe.ui.toolkit.hscript.ScriptUtils.isScript","haxe/ui/toolkit/hscript/ScriptUtils.hx",4,0x8cddcb77)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(5)
	if (((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((data.indexOf(HX_CSTRING("+"),null()) != (int)-1))))) ? bool((data.indexOf(HX_CSTRING("-"),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING("*"),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING("/"),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING("("),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING(")"),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING("["),null()) != (int)-1)) : bool(true) ))))) ? bool((data.indexOf(HX_CSTRING("]"),null()) != (int)-1)) : bool(true) ))){
		HX_STACK_LINE(13)
		return true;
	}
	HX_STACK_LINE(15)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isScript,return )

bool ScriptUtils_obj::isCssException( ::String name){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isCssException",0x70b7c7db,"haxe.ui.toolkit.hscript.ScriptUtils.isCssException","haxe/ui/toolkit/hscript/ScriptUtils.hx",18,0x8cddcb77)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(19)
	if (((bool((bool((bool((name == HX_CSTRING("filter"))) || bool((name == HX_CSTRING("icon"))))) || bool((name == HX_CSTRING("backgroundImage"))))) || bool((name == HX_CSTRING("fontName")))))){
		HX_STACK_LINE(23)
		return true;
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isCssException,return )


ScriptUtils_obj::ScriptUtils_obj()
{
}

Dynamic ScriptUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScript") ) { return isScript_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isCssException") ) { return isCssException_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScriptUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScriptUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isScript"),
	HX_CSTRING("isCssException"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#endif

Class ScriptUtils_obj::__mClass;

void ScriptUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.hscript.ScriptUtils"), hx::TCanCast< ScriptUtils_obj> ,sStaticFields,sMemberFields,
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

void ScriptUtils_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript
