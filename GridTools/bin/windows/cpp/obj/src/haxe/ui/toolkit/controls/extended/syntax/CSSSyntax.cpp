#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CSSSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CSSSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace syntax{

Void CSSSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CSSSyntax","new",0x85b1b52c,"haxe.ui.toolkit.controls.extended.syntax.CSSSyntax.new","haxe/ui/toolkit/controls/extended/syntax/CSSSyntax.hx",4,0xfa606324)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->_identifier = HX_CSTRING("css");
	HX_STACK_LINE(7)
	this->addRule(HX_CSTRING("(#|\\w|.)(.*?){|}"),(int)255,true);
	HX_STACK_LINE(8)
	this->addRule(HX_CSTRING("(\\w*)\\:"),(int)3840511,true);
	HX_STACK_LINE(9)
	this->addRule(HX_CSTRING(":(.*?)\\;"),(int)8912896,null());
}
;
	return null();
}

//CSSSyntax_obj::~CSSSyntax_obj() { }

Dynamic CSSSyntax_obj::__CreateEmpty() { return  new CSSSyntax_obj; }
hx::ObjectPtr< CSSSyntax_obj > CSSSyntax_obj::__new()
{  hx::ObjectPtr< CSSSyntax_obj > result = new CSSSyntax_obj();
	result->__construct();
	return result;}

Dynamic CSSSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CSSSyntax_obj > result = new CSSSyntax_obj();
	result->__construct();
	return result;}


CSSSyntax_obj::CSSSyntax_obj()
{
}

Dynamic CSSSyntax_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CSSSyntax_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CSSSyntax_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CSSSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CSSSyntax_obj::__mClass,"__mClass");
};

#endif

Class CSSSyntax_obj::__mClass;

void CSSSyntax_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended.syntax.CSSSyntax"), hx::TCanCast< CSSSyntax_obj> ,sStaticFields,sMemberFields,
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

void CSSSyntax_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace syntax
