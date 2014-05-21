#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteConnection_obj::__construct(::String file)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","new",0xf8a8646e,"sys.db._Sqlite.SqliteConnection.new","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",29,0xff1041ac)

HX_STACK_ARG(file,"file")
{
	HX_STACK_LINE(29)
	this->c = ::sys::db::_Sqlite::SqliteConnection_obj::_connect(file);
}
;
	return null();
}

//SqliteConnection_obj::~SqliteConnection_obj() { }

Dynamic SqliteConnection_obj::__CreateEmpty() { return  new SqliteConnection_obj; }
hx::ObjectPtr< SqliteConnection_obj > SqliteConnection_obj::__new(::String file)
{  hx::ObjectPtr< SqliteConnection_obj > result = new SqliteConnection_obj();
	result->__construct(file);
	return result;}

Dynamic SqliteConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteConnection_obj > result = new SqliteConnection_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *SqliteConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::Connection_obj)) return operator ::sys::db::Connection_obj *();
	return super::__ToInterface(inType);
}

Void SqliteConnection_obj::close( ){
{
		HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","close",0x6e0f4b46,"sys.db._Sqlite.SqliteConnection.close","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",33,0xff1041ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::sys::db::_Sqlite::SqliteConnection_obj::_close(this->c);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,close,(void))

::sys::db::ResultSet SqliteConnection_obj::request( ::String s){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","request",0x544f925d,"sys.db._Sqlite.SqliteConnection.request","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",37,0xff1041ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(37)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(38)
		return ::sys::db::_Sqlite::SqliteResultSet_obj::__new(::sys::db::_Sqlite::SqliteConnection_obj::_request(this->c,s));
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String e = __e;{
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(((((HX_CSTRING("Error while executing ") + s) + HX_CSTRING(" (")) + e) + HX_CSTRING(")")));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(37)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SqliteConnection_obj,request,return )

int SqliteConnection_obj::lastInsertId( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteConnection","lastInsertId",0x123d0a1c,"sys.db._Sqlite.SqliteConnection.lastInsertId","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",70,0xff1041ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return ::sys::db::_Sqlite::SqliteConnection_obj::_last_id(this->c);
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteConnection_obj,lastInsertId,return )

Dynamic SqliteConnection_obj::_connect;

Dynamic SqliteConnection_obj::_close;

Dynamic SqliteConnection_obj::_request;

Dynamic SqliteConnection_obj::_last_id;


SqliteConnection_obj::SqliteConnection_obj()
{
}

void SqliteConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteConnection);
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_END_CLASS();
}

void SqliteConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(c,"c");
}

Dynamic SqliteConnection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { return _close; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { return _connect; }
		if (HX_FIELD_EQ(inName,"_request") ) { return _request; }
		if (HX_FIELD_EQ(inName,"_last_id") ) { return _last_id; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastInsertId") ) { return lastInsertId_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SqliteConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { _close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_connect") ) { _connect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_request") ) { _request=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last_id") ) { _last_id=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SqliteConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("c"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_connect"),
	HX_CSTRING("_close"),
	HX_CSTRING("_request"),
	HX_CSTRING("_last_id"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteConnection_obj,c),HX_CSTRING("c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("c"),
	HX_CSTRING("close"),
	HX_CSTRING("request"),
	HX_CSTRING("lastInsertId"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
	HX_MARK_MEMBER_NAME(SqliteConnection_obj::_last_id,"_last_id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_connect,"_connect");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_close,"_close");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_request,"_request");
	HX_VISIT_MEMBER_NAME(SqliteConnection_obj::_last_id,"_last_id");
};

#endif

Class SqliteConnection_obj::__mClass;

void SqliteConnection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db._Sqlite.SqliteConnection"), hx::TCanCast< SqliteConnection_obj> ,sStaticFields,sMemberFields,
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

void SqliteConnection_obj::__boot()
{
	_connect= ::cpp::Lib_obj::load(HX_CSTRING("sqlite"),HX_CSTRING("sqlite_connect"),(int)1);
	_close= ::cpp::Lib_obj::load(HX_CSTRING("sqlite"),HX_CSTRING("close"),(int)1);
	_request= ::cpp::Lib_obj::load(HX_CSTRING("sqlite"),HX_CSTRING("request"),(int)2);
	_last_id= ::cpp::Lib_obj::load(HX_CSTRING("sqlite"),HX_CSTRING("last_insert_id"),(int)1);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
