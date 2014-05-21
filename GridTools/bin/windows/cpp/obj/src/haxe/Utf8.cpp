#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct()
{
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new()
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct();
	return result;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct();
	return result;}

::String Utf8_obj::decode( ::String s){
	HX_STACK_FRAME("haxe.Utf8","decode",0x4e17f663,"haxe.Utf8.decode","F:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Utf8.hx",52,0x0d97634d)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(52)
	return ::__hxcpp_utf8_string_to_char_bytes(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,decode,return )


Utf8_obj::Utf8_obj()
{
}

Dynamic Utf8_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("decode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

Class Utf8_obj::__mClass;

void Utf8_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Utf8"), hx::TCanCast< Utf8_obj> ,sStaticFields,sMemberFields,
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

void Utf8_obj::__boot()
{
}

} // end namespace haxe
