#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void Theme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","new",0x02ce92f9,"haxe.ui.toolkit.themes.Theme.new","haxe/ui/toolkit/themes/Theme.hx",6,0xd5f9de17)
{
}
;
	return null();
}

//Theme_obj::~Theme_obj() { }

Dynamic Theme_obj::__CreateEmpty() { return  new Theme_obj; }
hx::ObjectPtr< Theme_obj > Theme_obj::__new()
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct();
	return result;}

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct();
	return result;}

Void Theme_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","apply",0xccdee047,"haxe.ui.toolkit.themes.Theme.apply","haxe/ui/toolkit/themes/Theme.hx",9,0xd5f9de17)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,apply,(void))


Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Theme_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Theme_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
};

#endif

Class Theme_obj::__mClass;

void Theme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.themes.Theme"), hx::TCanCast< Theme_obj> ,sStaticFields,sMemberFields,
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

void Theme_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
