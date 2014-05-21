#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif
namespace sys{
namespace db{
namespace _Sqlite{

Void SqliteResultSet_obj::__construct(Dynamic r)
{
HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","new",0x31627399,"sys.db._Sqlite.SqliteResultSet.new","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",106,0xff1041ac)

HX_STACK_ARG(r,"r")
{
	HX_STACK_LINE(107)
	this->cache = ::List_obj::__new();
	HX_STACK_LINE(108)
	this->r = r;
	HX_STACK_LINE(109)
	this->hasNext();
}
;
	return null();
}

//SqliteResultSet_obj::~SqliteResultSet_obj() { }

Dynamic SqliteResultSet_obj::__CreateEmpty() { return  new SqliteResultSet_obj; }
hx::ObjectPtr< SqliteResultSet_obj > SqliteResultSet_obj::__new(Dynamic r)
{  hx::ObjectPtr< SqliteResultSet_obj > result = new SqliteResultSet_obj();
	result->__construct(r);
	return result;}

Dynamic SqliteResultSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteResultSet_obj > result = new SqliteResultSet_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *SqliteResultSet_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::sys::db::ResultSet_obj)) return operator ::sys::db::ResultSet_obj *();
	return super::__ToInterface(inType);
}

bool SqliteResultSet_obj::hasNext( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","hasNext",0x0ab9d926,"sys.db._Sqlite.SqliteResultSet.hasNext","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",129,0xff1041ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	Dynamic c = this->next();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(131)
	if (((c == null()))){
		HX_STACK_LINE(132)
		return false;
	}
	HX_STACK_LINE(133)
	this->cache->push(c);
	HX_STACK_LINE(134)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,hasNext,return )

Dynamic SqliteResultSet_obj::next( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","next",0x04c2b39a,"sys.db._Sqlite.SqliteResultSet.next","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",137,0xff1041ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Dynamic c = this->cache->pop();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(139)
	if (((c != null()))){
		HX_STACK_LINE(140)
		return c;
	}
	HX_STACK_LINE(141)
	return ::sys::db::_Sqlite::SqliteResultSet_obj::result_next(this->r);
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,next,return )

::List SqliteResultSet_obj::results( ){
	HX_STACK_FRAME("sys.db._Sqlite.SqliteResultSet","results",0x5dca8caf,"sys.db._Sqlite.SqliteResultSet.results","F:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",144,0xff1041ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	::List l = ::List_obj::__new();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(146)
	while((true)){
		HX_STACK_LINE(147)
		Dynamic c = this->next();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(148)
		if (((c == null()))){
			HX_STACK_LINE(149)
			break;
		}
		HX_STACK_LINE(150)
		l->add(c);
	}
	HX_STACK_LINE(152)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,results,return )

Dynamic SqliteResultSet_obj::result_next;


SqliteResultSet_obj::SqliteResultSet_obj()
{
}

void SqliteResultSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteResultSet);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void SqliteResultSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

Dynamic SqliteResultSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"results") ) { return results_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { return result_next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SqliteResultSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"result_next") ) { result_next=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SqliteResultSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("cache"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("result_next"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteResultSet_obj,r),HX_CSTRING("r")},
	{hx::fsObject /*::List*/ ,(int)offsetof(SqliteResultSet_obj,cache),HX_CSTRING("cache")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("cache"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	HX_CSTRING("results"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::result_next,"result_next");
};

#endif

Class SqliteResultSet_obj::__mClass;

void SqliteResultSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.db._Sqlite.SqliteResultSet"), hx::TCanCast< SqliteResultSet_obj> ,sStaticFields,sMemberFields,
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

void SqliteResultSet_obj::__boot()
{
	result_next= ::cpp::Lib_obj::load(HX_CSTRING("sqlite"),HX_CSTRING("result_next"),(int)1);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
