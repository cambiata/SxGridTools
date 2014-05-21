#include <hxcpp.h>

#ifndef INCLUDED_systools_Dialogs
#include <systools/Dialogs.h>
#endif
#ifndef INCLUDED_systools_Loader
#include <systools/Loader.h>
#endif
namespace systools{

Void Dialogs_obj::__construct()
{
	return null();
}

//Dialogs_obj::~Dialogs_obj() { }

Dynamic Dialogs_obj::__CreateEmpty() { return  new Dialogs_obj; }
hx::ObjectPtr< Dialogs_obj > Dialogs_obj::__new()
{  hx::ObjectPtr< Dialogs_obj > result = new Dialogs_obj();
	result->__construct();
	return result;}

Dynamic Dialogs_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dialogs_obj > result = new Dialogs_obj();
	result->__construct();
	return result;}

Dynamic Dialogs_obj::_message_box;

Void Dialogs_obj::message( ::String title,::String msg,bool isError){
{
		HX_STACK_FRAME("systools.Dialogs","message",0x97702264,"systools.Dialogs.message","systools/Dialogs.hx",38,0x78c11ed4)
		HX_STACK_ARG(title,"title")
		HX_STACK_ARG(msg,"msg")
		HX_STACK_ARG(isError,"isError")
		HX_STACK_LINE(38)
		::systools::Dialogs_obj::_message_box(title,msg,isError);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Dialogs_obj,message,(void))

Dynamic Dialogs_obj::_dialog_box;

bool Dialogs_obj::confirm( ::String title,::String msg,bool isError){
	HX_STACK_FRAME("systools.Dialogs","confirm",0x0d98899d,"systools.Dialogs.confirm","systools/Dialogs.hx",43,0x78c11ed4)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(msg,"msg")
	HX_STACK_ARG(isError,"isError")
	HX_STACK_LINE(43)
	return ::systools::Dialogs_obj::_dialog_box(title,msg,isError);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Dialogs_obj,confirm,return )

Dynamic Dialogs_obj::_dialog_save_file;

::String Dialogs_obj::saveFile( ::String title,::String msg,::String initialDir){
	HX_STACK_FRAME("systools.Dialogs","saveFile",0xad25851c,"systools.Dialogs.saveFile","systools/Dialogs.hx",48,0x78c11ed4)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(msg,"msg")
	HX_STACK_ARG(initialDir,"initialDir")
	HX_STACK_LINE(48)
	return ::systools::Dialogs_obj::_dialog_save_file(title,msg,initialDir);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Dialogs_obj,saveFile,return )

Dynamic Dialogs_obj::_dialog_open_file;

Array< ::String > Dialogs_obj::openFile( ::String title,::String msg,Dynamic mask){
	HX_STACK_FRAME("systools.Dialogs","openFile",0x9aa7c829,"systools.Dialogs.openFile","systools/Dialogs.hx",53,0x78c11ed4)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(msg,"msg")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(53)
	return ::systools::Dialogs_obj::_dialog_open_file(title,msg,mask);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Dialogs_obj,openFile,return )

Dynamic Dialogs_obj::_dialog_folder;

::String Dialogs_obj::folder( ::String title,::String msg){
	HX_STACK_FRAME("systools.Dialogs","folder",0x3afcccb1,"systools.Dialogs.folder","systools/Dialogs.hx",58,0x78c11ed4)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(58)
	return ::systools::Dialogs_obj::_dialog_folder(title,msg);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Dialogs_obj,folder,return )


Dialogs_obj::Dialogs_obj()
{
}

Dynamic Dialogs_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"folder") ) { return folder_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return message_dyn(); }
		if (HX_FIELD_EQ(inName,"confirm") ) { return confirm_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"saveFile") ) { return saveFile_dyn(); }
		if (HX_FIELD_EQ(inName,"openFile") ) { return openFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dialog_box") ) { return _dialog_box; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_message_box") ) { return _message_box; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dialog_folder") ) { return _dialog_folder; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dialog_save_file") ) { return _dialog_save_file; }
		if (HX_FIELD_EQ(inName,"_dialog_open_file") ) { return _dialog_open_file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Dialogs_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_dialog_box") ) { _dialog_box=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_message_box") ) { _message_box=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dialog_folder") ) { _dialog_folder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dialog_save_file") ) { _dialog_save_file=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dialog_open_file") ) { _dialog_open_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dialogs_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_message_box"),
	HX_CSTRING("message"),
	HX_CSTRING("_dialog_box"),
	HX_CSTRING("confirm"),
	HX_CSTRING("_dialog_save_file"),
	HX_CSTRING("saveFile"),
	HX_CSTRING("_dialog_open_file"),
	HX_CSTRING("openFile"),
	HX_CSTRING("_dialog_folder"),
	HX_CSTRING("folder"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dialogs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Dialogs_obj::_message_box,"_message_box");
	HX_MARK_MEMBER_NAME(Dialogs_obj::_dialog_box,"_dialog_box");
	HX_MARK_MEMBER_NAME(Dialogs_obj::_dialog_save_file,"_dialog_save_file");
	HX_MARK_MEMBER_NAME(Dialogs_obj::_dialog_open_file,"_dialog_open_file");
	HX_MARK_MEMBER_NAME(Dialogs_obj::_dialog_folder,"_dialog_folder");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dialogs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Dialogs_obj::_message_box,"_message_box");
	HX_VISIT_MEMBER_NAME(Dialogs_obj::_dialog_box,"_dialog_box");
	HX_VISIT_MEMBER_NAME(Dialogs_obj::_dialog_save_file,"_dialog_save_file");
	HX_VISIT_MEMBER_NAME(Dialogs_obj::_dialog_open_file,"_dialog_open_file");
	HX_VISIT_MEMBER_NAME(Dialogs_obj::_dialog_folder,"_dialog_folder");
};

#endif

Class Dialogs_obj::__mClass;

void Dialogs_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("systools.Dialogs"), hx::TCanCast< Dialogs_obj> ,sStaticFields,sMemberFields,
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

void Dialogs_obj::__boot()
{
	_message_box= ::systools::Loader_obj::load(HX_CSTRING("systools"),HX_CSTRING("dialogs_message_box"),(int)3);
	_dialog_box= ::systools::Loader_obj::load(HX_CSTRING("systools"),HX_CSTRING("dialogs_dialog_box"),(int)3);
	_dialog_save_file= ::systools::Loader_obj::load(HX_CSTRING("systools"),HX_CSTRING("dialogs_save_file"),(int)3);
	_dialog_open_file= ::systools::Loader_obj::load(HX_CSTRING("systools"),HX_CSTRING("dialogs_open_file"),(int)3);
	_dialog_folder= ::systools::Loader_obj::load(HX_CSTRING("systools"),HX_CSTRING("dialogs_folder"),(int)2);
}

} // end namespace systools
