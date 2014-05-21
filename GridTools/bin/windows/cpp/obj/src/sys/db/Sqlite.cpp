#include <hxcpp.h>

#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Sqlite
#include <sys/db/Sqlite.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif
namespace sys{
namespace db{

Void Sqlite_obj::__construct()
{
	return null();
}

//Sqlite_obj::~Sqlite_obj() { }

Dynamic Sqlite_obj::__CreateEmpty() { return  new Sqlite_obj; }
hx::ObjectPtr< Sqlite_obj > Sqlite_obj::__new()
{  hx::ObjectPtr< Sqlite_obj > result = new Sqlite_obj();
	result->__construct();
	return result;}

Dynamic Sqlite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sqlite_obj > result = new Sqlite_obj();
	result->__construct();
	return result;}

::sys::db::Connection Sqlite_obj::open( ::String file){
	HX_STACK_FRAME("sys.db.Sqlite","open",0x1432cbdd,"sys.db.Sqlite.open","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",183,0xff1041ac)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(183)
	return ::sys::db::_Sqlite::SqliteConnection_obj::__new(file);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sqlite_obj,open,return )


Sqlite_obj::Sqlite_obj()
{
}

Dynamic Sqlite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sqlite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Sqlite_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("open"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#endif

Class Sqlite_obj::__mClass;

void Sqlite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db.Sqlite"), hx::TCanCast< Sqlite_obj> ,sStaticFields,sMemberFields,
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

void Sqlite_obj::__boot()
{
}

} // end namespace sys
} // end namespace db
