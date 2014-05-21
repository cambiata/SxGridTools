#include <hxcpp.h>

#ifndef INCLUDED_sx_data_Files
#include <sx/data/Files.h>
#endif
namespace sx{
namespace data{

Void Files_obj::__construct()
{
	return null();
}

//Files_obj::~Files_obj() { }

Dynamic Files_obj::__CreateEmpty() { return  new Files_obj; }
hx::ObjectPtr< Files_obj > Files_obj::__new()
{  hx::ObjectPtr< Files_obj > result = new Files_obj();
	result->__construct();
	return result;}

Dynamic Files_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Files_obj > result = new Files_obj();
	result->__construct();
	return result;}

::String Files_obj::projectName;

::String Files_obj::pdfFileName;

Array< ::String > Files_obj::mp3FilesNames;

Array< ::String > Files_obj::pngFilesNames;

Dynamic Files_obj::observers;

Void Files_obj::notify( ){
{
		HX_STACK_FRAME("sx.data.Files","notify",0xa489eebb,"sx.data.Files.notify","sx/data/Files.hx",17,0x86b6ca62)
		HX_STACK_LINE(17)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		Dynamic _g1 = ::sx::data::Files_obj::observers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(17)
			Dynamic observer = _g1->__GetItem(_g);		HX_STACK_VAR(observer,"observer");
			HX_STACK_LINE(17)
			++(_g);
			HX_STACK_LINE(17)
			observer().Cast< Void >();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Files_obj,notify,(void))


Files_obj::Files_obj()
{
}

Dynamic Files_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"observers") ) { return observers; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectName") ) { return projectName; }
		if (HX_FIELD_EQ(inName,"pdfFileName") ) { return pdfFileName; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mp3FilesNames") ) { return mp3FilesNames; }
		if (HX_FIELD_EQ(inName,"pngFilesNames") ) { return pngFilesNames; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Files_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"observers") ) { observers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectName") ) { projectName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pdfFileName") ) { pdfFileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mp3FilesNames") ) { mp3FilesNames=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pngFilesNames") ) { pngFilesNames=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Files_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("projectName"),
	HX_CSTRING("pdfFileName"),
	HX_CSTRING("mp3FilesNames"),
	HX_CSTRING("pngFilesNames"),
	HX_CSTRING("observers"),
	HX_CSTRING("notify"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Files_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Files_obj::projectName,"projectName");
	HX_MARK_MEMBER_NAME(Files_obj::pdfFileName,"pdfFileName");
	HX_MARK_MEMBER_NAME(Files_obj::mp3FilesNames,"mp3FilesNames");
	HX_MARK_MEMBER_NAME(Files_obj::pngFilesNames,"pngFilesNames");
	HX_MARK_MEMBER_NAME(Files_obj::observers,"observers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Files_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Files_obj::projectName,"projectName");
	HX_VISIT_MEMBER_NAME(Files_obj::pdfFileName,"pdfFileName");
	HX_VISIT_MEMBER_NAME(Files_obj::mp3FilesNames,"mp3FilesNames");
	HX_VISIT_MEMBER_NAME(Files_obj::pngFilesNames,"pngFilesNames");
	HX_VISIT_MEMBER_NAME(Files_obj::observers,"observers");
};

#endif

Class Files_obj::__mClass;

void Files_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.data.Files"), hx::TCanCast< Files_obj> ,sStaticFields,sMemberFields,
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

void Files_obj::__boot()
{
	projectName= HX_CSTRING("");
	pdfFileName= HX_CSTRING("");
	mp3FilesNames= Array_obj< ::String >::__new();
	pngFilesNames= Array_obj< ::String >::__new();
	observers= Dynamic( Array_obj<Dynamic>::__new());
}

} // end namespace sx
} // end namespace data
