#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_cx_SqliteTools
#include <cx/SqliteTools.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db_Sqlite
#include <sys/db/Sqlite.h>
#endif
namespace cx{

Void SqliteTools_obj::__construct()
{
	return null();
}

//SqliteTools_obj::~SqliteTools_obj() { }

Dynamic SqliteTools_obj::__CreateEmpty() { return  new SqliteTools_obj; }
hx::ObjectPtr< SqliteTools_obj > SqliteTools_obj::__new()
{  hx::ObjectPtr< SqliteTools_obj > result = new SqliteTools_obj();
	result->__construct();
	return result;}

Dynamic SqliteTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SqliteTools_obj > result = new SqliteTools_obj();
	result->__construct();
	return result;}

::sys::db::Connection SqliteTools_obj::getCnx( ::String sqliteFilename){
	HX_STACK_FRAME("cx.SqliteTools","getCnx",0x5ed8d38f,"cx.SqliteTools.getCnx","cx/SqliteTools.hx",15,0xe198a9e9)
	HX_STACK_ARG(sqliteFilename,"sqliteFilename")
	HX_STACK_LINE(15)
	return ::sys::db::Sqlite_obj::open(sqliteFilename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SqliteTools_obj,getCnx,return )

::List SqliteTools_obj::select( ::String sqliteFilename,::String sql){
	HX_STACK_FRAME("cx.SqliteTools","select",0x25f13614,"cx.SqliteTools.select","cx/SqliteTools.hx",18,0xe198a9e9)
	HX_STACK_ARG(sqliteFilename,"sqliteFilename")
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(19)
	::sys::db::Connection cnx = ::cx::SqliteTools_obj::getCnx(sqliteFilename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(20)
	::List result = cnx->request(sql)->results();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(21)
	cnx->close();
	HX_STACK_LINE(22)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SqliteTools_obj,select,return )

int SqliteTools_obj::insert( ::String sqliteFilename,::String sql){
	HX_STACK_FRAME("cx.SqliteTools","insert",0x599b5e51,"cx.SqliteTools.insert","cx/SqliteTools.hx",25,0xe198a9e9)
	HX_STACK_ARG(sqliteFilename,"sqliteFilename")
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(26)
	::sys::db::Connection cnx = ::cx::SqliteTools_obj::getCnx(sqliteFilename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(27)
	cnx->request(sql);
	HX_STACK_LINE(28)
	return cnx->lastInsertId();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SqliteTools_obj,insert,return )

::String SqliteTools_obj::getInsertStatement( Dynamic insertObject,::String tableName){
	HX_STACK_FRAME("cx.SqliteTools","getInsertStatement",0x593d84d8,"cx.SqliteTools.getInsertStatement","cx/SqliteTools.hx",31,0xe198a9e9)
	HX_STACK_ARG(insertObject,"insertObject")
	HX_STACK_ARG(tableName,"tableName")
	HX_STACK_LINE(32)
	Array< ::String > fields = ::Reflect_obj::fields(insertObject);		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(33)
	::String sql = ((HX_CSTRING("(") + fields->join(HX_CSTRING(", "))) + HX_CSTRING(")"));		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(34)
	hx::AddEq(sql,HX_CSTRING(" VALUES "));
	HX_STACK_LINE(36)
	Array< ::String > values = Array_obj< ::String >::__new();		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while(((_g < fields->length))){
			HX_STACK_LINE(37)
			::String field = fields->__get(_g);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(37)
			++(_g);
			HX_STACK_LINE(38)
			values->push(::Reflect_obj::field(insertObject,field));
		}
	}
	HX_STACK_LINE(41)
	hx::AddEq(sql,((HX_CSTRING("('") + values->join(HX_CSTRING("', '"))) + HX_CSTRING("')")));
	HX_STACK_LINE(42)
	return (((HX_CSTRING("INSERT INTO \"") + tableName) + HX_CSTRING("\" ")) + sql);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SqliteTools_obj,getInsertStatement,return )

::List SqliteTools_obj::execute( ::String filename,::String sql){
	HX_STACK_FRAME("cx.SqliteTools","execute",0x56a6a41d,"cx.SqliteTools.execute","cx/SqliteTools.hx",46,0xe198a9e9)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(47)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(48)
	::List results = cnx->request(sql)->results();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(49)
	cnx->close();
	HX_STACK_LINE(50)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SqliteTools_obj,execute,return )

::List SqliteTools_obj::cnxExecute( ::sys::db::Connection cnx,::String sql){
	HX_STACK_FRAME("cx.SqliteTools","cnxExecute",0x7f90b160,"cx.SqliteTools.cnxExecute","cx/SqliteTools.hx",54,0xe198a9e9)
	HX_STACK_ARG(cnx,"cnx")
	HX_STACK_ARG(sql,"sql")
	HX_STACK_LINE(55)
	::List results = cnx->request(sql)->results();		HX_STACK_VAR(results,"results");
	HX_STACK_LINE(56)
	return results;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SqliteTools_obj,cnxExecute,return )

bool SqliteTools_obj::createSqlite( ::String filename){
	HX_STACK_FRAME("cx.SqliteTools","createSqlite",0x3d21e600,"cx.SqliteTools.createSqlite","cx/SqliteTools.hx",60,0xe198a9e9)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(61)
	if ((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename)))){
		HX_STACK_LINE(61)
		HX_STACK_DO_THROW(((HX_CSTRING("SQlite file ") + filename) + HX_CSTRING(" already exists!")));
	}
	HX_STACK_LINE(62)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(63)
	cnx->close();
	HX_STACK_LINE(64)
	return ::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SqliteTools_obj,createSqlite,return )


SqliteTools_obj::SqliteTools_obj()
{
}

Dynamic SqliteTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getCnx") ) { return getCnx_dyn(); }
		if (HX_FIELD_EQ(inName,"select") ) { return select_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cnxExecute") ) { return cnxExecute_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createSqlite") ) { return createSqlite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getInsertStatement") ) { return getInsertStatement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SqliteTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SqliteTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getCnx"),
	HX_CSTRING("select"),
	HX_CSTRING("insert"),
	HX_CSTRING("getInsertStatement"),
	HX_CSTRING("execute"),
	HX_CSTRING("cnxExecute"),
	HX_CSTRING("createSqlite"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteTools_obj::__mClass,"__mClass");
};

#endif

Class SqliteTools_obj::__mClass;

void SqliteTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.SqliteTools"), hx::TCanCast< SqliteTools_obj> ,sStaticFields,sMemberFields,
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

void SqliteTools_obj::__boot()
{
}

} // end namespace cx
