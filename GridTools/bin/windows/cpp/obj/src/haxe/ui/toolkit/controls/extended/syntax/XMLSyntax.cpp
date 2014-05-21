#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_XMLSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/XMLSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace syntax{

Void XMLSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.XMLSyntax","new",0x2dea8040,"haxe.ui.toolkit.controls.extended.syntax.XMLSyntax.new","haxe/ui/toolkit/controls/extended/syntax/XMLSyntax.hx",4,0x17d49690)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->_identifier = HX_CSTRING("xml");
	HX_STACK_LINE(7)
	this->addRule(HX_CSTRING("(<(.*?) |</(.*?)>|/>)"),(int)255,true);
	HX_STACK_LINE(8)
	this->addRule(HX_CSTRING("(\\w*)\\="),(int)3840511,true);
	HX_STACK_LINE(9)
	this->addRule(HX_CSTRING("\"(.*?)\""),(int)8912896,null());
}
;
	return null();
}

//XMLSyntax_obj::~XMLSyntax_obj() { }

Dynamic XMLSyntax_obj::__CreateEmpty() { return  new XMLSyntax_obj; }
hx::ObjectPtr< XMLSyntax_obj > XMLSyntax_obj::__new()
{  hx::ObjectPtr< XMLSyntax_obj > result = new XMLSyntax_obj();
	result->__construct();
	return result;}

Dynamic XMLSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLSyntax_obj > result = new XMLSyntax_obj();
	result->__construct();
	return result;}


XMLSyntax_obj::XMLSyntax_obj()
{
}

Dynamic XMLSyntax_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic XMLSyntax_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void XMLSyntax_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(XMLSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLSyntax_obj::__mClass,"__mClass");
};

#endif

Class XMLSyntax_obj::__mClass;

void XMLSyntax_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended.syntax.XMLSyntax"), hx::TCanCast< XMLSyntax_obj> ,sStaticFields,sMemberFields,
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

void XMLSyntax_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace syntax
