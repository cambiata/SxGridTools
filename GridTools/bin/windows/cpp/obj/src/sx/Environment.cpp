#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cx_FileTools
#include <cx/FileTools.h>
#endif
#ifndef INCLUDED_sx_Environment
#include <sx/Environment.h>
#endif
namespace sx{

Void Environment_obj::__construct()
{
	return null();
}

//Environment_obj::~Environment_obj() { }

Dynamic Environment_obj::__CreateEmpty() { return  new Environment_obj; }
hx::ObjectPtr< Environment_obj > Environment_obj::__new()
{  hx::ObjectPtr< Environment_obj > result = new Environment_obj();
	result->__construct();
	return result;}

Dynamic Environment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Environment_obj > result = new Environment_obj();
	result->__construct();
	return result;}

::String Environment_obj::exeDir;

::String Environment_obj::exePdfTk;

::String Environment_obj::exeConvert;

::String Environment_obj::tempDir;


Environment_obj::Environment_obj()
{
}

Dynamic Environment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exeDir") ) { return exeDir; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tempDir") ) { return tempDir; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"exePdfTk") ) { return exePdfTk; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exeConvert") ) { return exeConvert; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Environment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exeDir") ) { exeDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tempDir") ) { tempDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"exePdfTk") ) { exePdfTk=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exeConvert") ) { exeConvert=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Environment_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("exeDir"),
	HX_CSTRING("exePdfTk"),
	HX_CSTRING("exeConvert"),
	HX_CSTRING("tempDir"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Environment_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Environment_obj::exeDir,"exeDir");
	HX_MARK_MEMBER_NAME(Environment_obj::exePdfTk,"exePdfTk");
	HX_MARK_MEMBER_NAME(Environment_obj::exeConvert,"exeConvert");
	HX_MARK_MEMBER_NAME(Environment_obj::tempDir,"tempDir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Environment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Environment_obj::exeDir,"exeDir");
	HX_VISIT_MEMBER_NAME(Environment_obj::exePdfTk,"exePdfTk");
	HX_VISIT_MEMBER_NAME(Environment_obj::exeConvert,"exeConvert");
	HX_VISIT_MEMBER_NAME(Environment_obj::tempDir,"tempDir");
};

#endif

Class Environment_obj::__mClass;

void Environment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.Environment"), hx::TCanCast< Environment_obj> ,sStaticFields,sMemberFields,
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

void Environment_obj::__boot()
{
	exeDir= ::cx::FileTools_obj::getDirectory(::Sys_obj::executablePath(),null());
	exePdfTk= (::sx::Environment_obj::exeDir + HX_CSTRING("\\pdftk.exe"));
	exeConvert= (::sx::Environment_obj::exeDir + HX_CSTRING("\\convert.exe"));
	tempDir= (::sx::Environment_obj::exeDir + HX_CSTRING("/temp"));
}

} // end namespace sx
