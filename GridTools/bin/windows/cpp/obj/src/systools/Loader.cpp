#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_systools_Loader
#include <systools/Loader.h>
#endif
namespace systools{

Void Loader_obj::__construct()
{
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

bool Loader_obj::init;

Dynamic Loader_obj::load( ::String lib,::String s,int n){
	HX_STACK_FRAME("systools.Loader","load",0xe209c9c1,"systools.Loader.load","systools/Loader.hx",13,0x579255ca)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(15)
	if ((!(::systools::Loader_obj::init))){
		HX_STACK_LINE(20)
		::cpp::Lib_obj::load(HX_CSTRING("systools"),HX_CSTRING("systools_init"),(int)0)();
		HX_STACK_LINE(21)
		::systools::Loader_obj::init = true;
	}
	HX_STACK_LINE(24)
	return ::cpp::Lib_obj::load(lib,s,n);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,load,return )


Loader_obj::Loader_obj()
{
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { init=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Loader_obj::init,"init");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Loader_obj::init,"init");
};

#endif

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("systools.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
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

void Loader_obj::__boot()
{
	init= false;
}

} // end namespace systools
