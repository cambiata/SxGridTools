#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cx_FileTools
#include <cx/FileTools.h>
#endif
#ifndef INCLUDED_cx_SqliteTools
#include <cx/SqliteTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sx_util_ScorxDb
#include <sx/util/ScorxDb.h>
#endif
#ifndef INCLUDED_sx_util_ScorxTools
#include <sx/util/ScorxTools.h>
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
namespace sx{
namespace util{

Void ScorxDb_obj::__construct()
{
	return null();
}

//ScorxDb_obj::~ScorxDb_obj() { }

Dynamic ScorxDb_obj::__CreateEmpty() { return  new ScorxDb_obj; }
hx::ObjectPtr< ScorxDb_obj > ScorxDb_obj::__new()
{  hx::ObjectPtr< ScorxDb_obj > result = new ScorxDb_obj();
	result->__construct();
	return result;}

Dynamic ScorxDb_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScorxDb_obj > result = new ScorxDb_obj();
	result->__construct();
	return result;}

Void ScorxDb_obj::createNew( ::String filename){
{
		HX_STACK_FRAME("sx.util.ScorxDb","createNew",0x188ea3f6,"sx.util.ScorxDb.createNew","sx/util/ScorxDb.hx",37,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_LINE(38)
		::cx::SqliteTools_obj::createSqlite(filename);
		HX_STACK_LINE(39)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"categories\" (\"type\" varchar, \"value\" VARCHAR)"));
		HX_STACK_LINE(40)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"categoriesdyn\" (\"type\" varchar, \"value\" varchar)  "));
		HX_STACK_LINE(41)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"channels\" (\"id\" varchar, \"name\" varchar, \"data\" blob)  "));
		HX_STACK_LINE(42)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"files\" (\"ext\" varchar, \"name\" varchar, \"data\" blob)  "));
		HX_STACK_LINE(43)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"grid\" (\"pos\" float ,\"type\" varchar,\"page\" int,\"xAbs\" int,\"yAbs\" int,\"widthAbs\" int,\"heightAbs\" int, \"x\" float, \"y\" float, \"width\" float, \"height\" float)  "));
		HX_STACK_LINE(44)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"information\" (\"type\" varchar, \"value\" varchar)  "));
		HX_STACK_LINE(45)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"notes\" (\"type\" varchar NOT NULL ,\"value\" text)  "));
		HX_STACK_LINE(46)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"originators\" (\"type\" VARCHAR NOT NULL , \"firstname\" VARCHAR, \"lastname\" varchar, \"birth\" varchar, \"death\" VARCHAR, \"originator_id\" int)  "));
		HX_STACK_LINE(47)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"pages\" (\"id\" varchar PRIMARY KEY  NOT NULL , \"data\" blob)  "));
		HX_STACK_LINE(48)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("CREATE TABLE \"quickstarts\" (\"name\" varchar, \"start\" float, \"stop\" float, \"label\" varchar, \"tooltip\" varchar, \"type\" varchar)  "));
		HX_STACK_LINE(49)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('id','')  "));
		HX_STACK_LINE(50)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('title','')   "));
		HX_STACK_LINE(51)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('subtitle','')   "));
		HX_STACK_LINE(52)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('sorttitle','')   "));
		HX_STACK_LINE(53)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('distributor_id','SKA')   "));
		HX_STACK_LINE(54)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('mediaformat_id','SCX')   "));
		HX_STACK_LINE(55)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('published','0')   "));
		HX_STACK_LINE(56)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('updated','')   "));
		HX_STACK_LINE(57)
		::cx::SqliteTools_obj::execute(filename,HX_CSTRING("INSERT INTO 'information' VALUES('added','')   "));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,createNew,(void))

Dynamic ScorxDb_obj::getChannelsBase( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getChannelsBase",0xe4a86ae9,"sx.util.ScorxDb.getChannelsBase","sx/util/ScorxDb.hx",60,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(61)
	::String sql = HX_CSTRING("SELECT * FROM channels ORDER BY id");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(62)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(63)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(64)
	cnx->close();
	HX_STACK_LINE(65)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(66)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			HX_STACK_LINE(67)
			Dynamic data = item;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(68)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(70)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getChannelsBase,return )

Dynamic ScorxDb_obj::getChannels( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getChannels",0x22ae9ab8,"sx.util.ScorxDb.getChannels","sx/util/ScorxDb.hx",73,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(74)
	::String sql = HX_CSTRING("SELECT * FROM channels ORDER BY id");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(75)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(76)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(77)
	cnx->close();
	HX_STACK_LINE(78)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(79)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",80,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , item->__Field(HX_CSTRING("id"),true),false);
						__result->Add(HX_CSTRING("name") , item->__Field(HX_CSTRING("name"),true),false);
						__result->Add(HX_CSTRING("data") , ::haxe::io::Bytes_obj::ofString(item->__Field(HX_CSTRING("data"),true)->toString()),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(80)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(85)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(87)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getChannels,return )

Dynamic ScorxDb_obj::getPages( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getPages",0x8b2069dc,"sx.util.ScorxDb.getPages","sx/util/ScorxDb.hx",90,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(91)
	::String sql = HX_CSTRING("SELECT * FROM pages ORDER BY id");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(92)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(93)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(94)
	cnx->close();
	HX_STACK_LINE(95)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(96)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",97,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("id") , item->__Field(HX_CSTRING("id"),true),false);
						__result->Add(HX_CSTRING("data") , ::haxe::io::Bytes_obj::ofString(item->__Field(HX_CSTRING("data"),true)),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(97)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(102)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(104)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getPages,return )

Dynamic ScorxDb_obj::getPagesBase( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getPagesBase",0x861a9c0d,"sx.util.ScorxDb.getPagesBase","sx/util/ScorxDb.hx",108,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(109)
	::String sql = HX_CSTRING("SELECT * FROM pages ORDER BY id");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(110)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(111)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(112)
	cnx->close();
	HX_STACK_LINE(114)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(115)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			HX_STACK_LINE(116)
			Dynamic data = item;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(117)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(119)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getPagesBase,return )

Dynamic ScorxDb_obj::getQuickstarts( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getQuickstarts",0x20c39916,"sx.util.ScorxDb.getQuickstarts","sx/util/ScorxDb.hx",122,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(123)
	::String sql = HX_CSTRING("SELECT * FROM quickstarts ORDER BY start");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(124)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(125)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(126)
	cnx->close();
	HX_STACK_LINE(128)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(129)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			HX_STACK_LINE(130)
			Dynamic data = item;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(131)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(133)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getQuickstarts,return )

Dynamic ScorxDb_obj::getCategories( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getCategories",0x1cea7544,"sx.util.ScorxDb.getCategories","sx/util/ScorxDb.hx",138,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(139)
	::String sql = HX_CSTRING("SELECT * FROM categories");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(140)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(141)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(142)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(143)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",144,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("categoryId") , item->__Field(HX_CSTRING("type"),true),false);
						__result->Add(HX_CSTRING("value") , item->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(144)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(145)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(147)
	cnx->close();
	HX_STACK_LINE(148)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getCategories,return )

Void ScorxDb_obj::insertCategory( ::String filename,Dynamic alternative){
{
		HX_STACK_FRAME("sx.util.ScorxDb","insertCategory",0xba2c78e5,"sx.util.ScorxDb.insertCategory","sx/util/ScorxDb.hx",151,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(alternative,"alternative")
		HX_STACK_LINE(152)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(153)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(154)
			return null();
		}
		HX_STACK_LINE(157)
		::String sql = ((((((HX_CSTRING("INSERT INTO categories (type, value) VALUES (\"") + alternative->__Field(HX_CSTRING("categoryId"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + alternative->__Field(HX_CSTRING("value"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(") "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(161)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(162)
		cnx->request(sql);
		HX_STACK_LINE(163)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,insertCategory,(void))

Void ScorxDb_obj::removeCategory( ::String filename,Dynamic alternative){
{
		HX_STACK_FRAME("sx.util.ScorxDb","removeCategory",0x41b854f0,"sx.util.ScorxDb.removeCategory","sx/util/ScorxDb.hx",166,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(alternative,"alternative")
		HX_STACK_LINE(167)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(167)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(167)
			return null();
		}
		HX_STACK_LINE(169)
		::String sql = (((((HX_CSTRING("DELETE FROM categories WHERE  type = \"") + alternative->__Field(HX_CSTRING("categoryId"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND value = \"")) + alternative->__Field(HX_CSTRING("value"),true)) + HX_CSTRING("\" "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(174)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(175)
		cnx->request(sql);
		HX_STACK_LINE(176)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,removeCategory,(void))

Dynamic ScorxDb_obj::getCategoriesDyn( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getCategoriesDyn",0xd4733055,"sx.util.ScorxDb.getCategoriesDyn","sx/util/ScorxDb.hx",181,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(182)
	::String sql = HX_CSTRING("SELECT * FROM categoriesdyn");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(183)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(184)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(185)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(186)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",187,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("categoryId") , item->__Field(HX_CSTRING("type"),true),false);
						__result->Add(HX_CSTRING("value") , item->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(187)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(188)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(190)
	cnx->close();
	HX_STACK_LINE(191)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getCategoriesDyn,return )

Void ScorxDb_obj::insertCategoryDyn( ::String filename,Dynamic alternative){
{
		HX_STACK_FRAME("sx.util.ScorxDb","insertCategoryDyn",0xd2806754,"sx.util.ScorxDb.insertCategoryDyn","sx/util/ScorxDb.hx",194,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(alternative,"alternative")
		HX_STACK_LINE(195)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(196)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(200)
		::String sql = ((((((HX_CSTRING("INSERT INTO categoriesdyn (type, value) VALUES (\"") + alternative->__Field(HX_CSTRING("categoryId"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + alternative->__Field(HX_CSTRING("value"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(") "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(205)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(206)
		cnx->request(sql);
		HX_STACK_LINE(207)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,insertCategoryDyn,(void))

Void ScorxDb_obj::removeCategoryDyn( ::String filename,Dynamic alternative){
{
		HX_STACK_FRAME("sx.util.ScorxDb","removeCategoryDyn",0xc60b6429,"sx.util.ScorxDb.removeCategoryDyn","sx/util/ScorxDb.hx",210,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(alternative,"alternative")
		HX_STACK_LINE(211)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(211)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(211)
			return null();
		}
		HX_STACK_LINE(213)
		::String sql = (((((HX_CSTRING("DELETE FROM categoriesdyn WHERE  type = \"") + alternative->__Field(HX_CSTRING("categoryId"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND value = \"")) + alternative->__Field(HX_CSTRING("value"),true)) + HX_CSTRING("\" "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(218)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(219)
		cnx->request(sql);
		HX_STACK_LINE(220)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,removeCategoryDyn,(void))

Dynamic ScorxDb_obj::getCategoriesAll( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getCategoriesAll",0xd470de3d,"sx.util.ScorxDb.getCategoriesAll","sx/util/ScorxDb.hx",224,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(225)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(226)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(227)
	::String sql = HX_CSTRING("SELECT * FROM categories");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(228)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(229)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",230,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("categoryId") , item->__Field(HX_CSTRING("type"),true),false);
						__result->Add(HX_CSTRING("value") , item->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(230)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(231)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(233)
	::String sql1 = HX_CSTRING("SELECT * FROM categoriesdyn");		HX_STACK_VAR(sql1,"sql1");
	HX_STACK_LINE(234)
	::List items1 = cnx->request(sql1)->results();		HX_STACK_VAR(items1,"items1");
	HX_STACK_LINE(235)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items1->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",236,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("categoryId") , item->__Field(HX_CSTRING("type"),true),false);
						__result->Add(HX_CSTRING("value") , item->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(236)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(237)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(239)
	cnx->close();
	HX_STACK_LINE(240)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getCategoriesAll,return )

Dynamic ScorxDb_obj::getCategoryTypes( ::String filename,::String __o_type){
::String type = __o_type.Default(HX_CSTRING(""));
	HX_STACK_FRAME("sx.util.ScorxDb","getCategoryTypes",0x7471b333,"sx.util.ScorxDb.getCategoryTypes","sx/util/ScorxDb.hx",246,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(type,"type")
{
		HX_STACK_LINE(247)
		::String sql = HX_CSTRING("SELECT * FROM categories ");		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(249)
		if (((type != HX_CSTRING("")))){
			HX_STACK_LINE(249)
			hx::AddEq(sql,((HX_CSTRING(" WHERE type = \"") + type) + HX_CSTRING("\" ")));
		}
		HX_STACK_LINE(251)
		hx::AddEq(sql,HX_CSTRING("order by sort"));
		HX_STACK_LINE(254)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(255)
		::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
		HX_STACK_LINE(256)
		Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
		HX_STACK_LINE(257)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
			Dynamic item = __it->next();
			{
				struct _Function_2_1{
					inline static Dynamic Block( Dynamic &item){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",258,0x26073ffe)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("distributorId") , item->__Field(HX_CSTRING("distributorId"),true),false);
							__result->Add(HX_CSTRING("id") , item->__Field(HX_CSTRING("id"),true),false);
							__result->Add(HX_CSTRING("maxcount") , item->__Field(HX_CSTRING("maxcount"),true),false);
							__result->Add(HX_CSTRING("name") , item->__Field(HX_CSTRING("name"),true),false);
							__result->Add(HX_CSTRING("sort") , item->__Field(HX_CSTRING("sort"),true),false);
							__result->Add(HX_CSTRING("type") , item->__Field(HX_CSTRING("type"),true),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(258)
				Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(266)
				datas->__Field(HX_CSTRING("push"),true)(data);
			}
;
		}
		HX_STACK_LINE(268)
		cnx->close();
		HX_STACK_LINE(269)
		return datas;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,getCategoryTypes,return )

int ScorxDb_obj::getMaxcountForCategory( ::String filename,::String categoryId){
	HX_STACK_FRAME("sx.util.ScorxDb","getMaxcountForCategory",0x910301d4,"sx.util.ScorxDb.getMaxcountForCategory","sx/util/ScorxDb.hx",272,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(categoryId,"categoryId")
	HX_STACK_LINE(273)
	::String sql = ((HX_CSTRING("SELECT * FROM categories where id = \"") + categoryId) + HX_CSTRING("\""));		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(274)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(275)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(277)
	if (((items->length != (int)1))){
		HX_STACK_LINE(278)
		::haxe::Log_obj::trace((HX_CSTRING("Something is wrong with categoryId ") + categoryId),hx::SourceInfo(HX_CSTRING("ScorxDb.hx"),278,HX_CSTRING("sx.util.ScorxDb"),HX_CSTRING("getMaxcountForCategory")));
	}
	HX_STACK_LINE(281)
	Dynamic categories = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(categories,"categories");
	HX_STACK_LINE(282)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			HX_STACK_LINE(283)
			Dynamic category = item;		HX_STACK_VAR(category,"category");
			HX_STACK_LINE(284)
			categories->__Field(HX_CSTRING("push"),true)(category);
		}
;
	}
	HX_STACK_LINE(286)
	Dynamic cat = categories->__GetItem((int)0);		HX_STACK_VAR(cat,"cat");
	HX_STACK_LINE(287)
	cat->__Field(HX_CSTRING("maxcount"),true);
	HX_STACK_LINE(288)
	::haxe::Log_obj::trace((((HX_CSTRING("found maxcount for category ") + categoryId) + HX_CSTRING(": ")) + cat->__Field(HX_CSTRING("maxcount"),true)),hx::SourceInfo(HX_CSTRING("ScorxDb.hx"),288,HX_CSTRING("sx.util.ScorxDb"),HX_CSTRING("getMaxcountForCategory")));
	HX_STACK_LINE(290)
	return cat->__Field(HX_CSTRING("maxcount"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,getMaxcountForCategory,return )

int ScorxDb_obj::getTitleCountCategory( ::String filename,::String categoryId){
	HX_STACK_FRAME("sx.util.ScorxDb","getTitleCountCategory",0xb696309d,"sx.util.ScorxDb.getTitleCountCategory","sx/util/ScorxDb.hx",293,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(categoryId,"categoryId")
	HX_STACK_LINE(294)
	::String sql = ((HX_CSTRING("SELECT * FROM categories where type = \"") + categoryId) + HX_CSTRING("\""));		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(295)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(296)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(297)
	return items->length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,getTitleCountCategory,return )

Dynamic ScorxDb_obj::getAlternatives( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getAlternatives",0xe209384e,"sx.util.ScorxDb.getAlternatives","sx/util/ScorxDb.hx",301,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(302)
	::String sql = HX_CSTRING("SELECT * FROM alternatives order by categoryId, value");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(303)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(304)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(305)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(306)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",307,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("categoryId") , item->__Field(HX_CSTRING("categoryId"),true),false);
						__result->Add(HX_CSTRING("value") , item->__Field(HX_CSTRING("value"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(307)
			Dynamic data = _Function_2_1::Block(item);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(308)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(310)
	cnx->close();
	HX_STACK_LINE(311)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getAlternatives,return )

Void ScorxDb_obj::setInformationField( ::String filename,::String field,::String value){
{
		HX_STACK_FRAME("sx.util.ScorxDb","setInformationField",0x7a542e22,"sx.util.ScorxDb.setInformationField","sx/util/ScorxDb.hx",314,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(315)
		::String sql = ((((HX_CSTRING("UPDATE information SET value = \"") + value) + HX_CSTRING("\" WHERE  type = \"")) + field) + HX_CSTRING("\""));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(316)
		::haxe::Log_obj::trace(sql,hx::SourceInfo(HX_CSTRING("ScorxDb.hx"),316,HX_CSTRING("sx.util.ScorxDb"),HX_CSTRING("setInformationField")));
		HX_STACK_LINE(317)
		::cx::SqliteTools_obj::execute(filename,sql);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ScorxDb_obj,setInformationField,(void))

Dynamic ScorxDb_obj::getOriginators( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getOriginators",0x8bed27cf,"sx.util.ScorxDb.getOriginators","sx/util/ScorxDb.hx",320,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(321)
	::String sql = HX_CSTRING("SELECT * FROM originators");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(322)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(323)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(324)
	Dynamic originators = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(originators,"originators");
	HX_STACK_LINE(325)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &item){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",326,0x26073ffe)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("lastname") , item->__Field(HX_CSTRING("lastname"),true),false);
						__result->Add(HX_CSTRING("firstname") , item->__Field(HX_CSTRING("firstname"),true),false);
						__result->Add(HX_CSTRING("birth") , item->__Field(HX_CSTRING("birth"),true),false);
						__result->Add(HX_CSTRING("death") , item->__Field(HX_CSTRING("death"),true),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(326)
			Dynamic originator = _Function_2_1::Block(item);		HX_STACK_VAR(originator,"originator");
			HX_STACK_LINE(327)
			originators->__Field(HX_CSTRING("push"),true)(originator);
		}
;
	}
	HX_STACK_LINE(329)
	cnx->close();
	HX_STACK_LINE(330)
	return originators;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getOriginators,return )

Void ScorxDb_obj::insertOriginator( ::String filename,Dynamic originator){
{
		HX_STACK_FRAME("sx.util.ScorxDb","insertOriginator",0x0a7df363,"sx.util.ScorxDb.insertOriginator","sx/util/ScorxDb.hx",333,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(originator,"originator")
		HX_STACK_LINE(334)
		::String sql = ((((((((HX_CSTRING("INSERT INTO originators (firstname, lastname, birth, death) VALUES ('") + originator->__Field(HX_CSTRING("firstname"),true)) + HX_CSTRING("','")) + originator->__Field(HX_CSTRING("lastname"),true)) + HX_CSTRING("','")) + originator->__Field(HX_CSTRING("birth"),true)) + HX_CSTRING("','")) + originator->__Field(HX_CSTRING("death"),true)) + HX_CSTRING("');"));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(341)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(342)
		cnx->request(sql);
		HX_STACK_LINE(343)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,insertOriginator,(void))

Void ScorxDb_obj::insertOriginatorType( ::String filename,Dynamic originator,::String type){
{
		HX_STACK_FRAME("sx.util.ScorxDb","insertOriginatorType",0x2480ffbd,"sx.util.ScorxDb.insertOriginatorType","sx/util/ScorxDb.hx",346,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(originator,"originator")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(347)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(347)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(347)
			return null();
		}
		HX_STACK_LINE(349)
		::String sql = (((((((((((((((HX_CSTRING("INSERT INTO originators (type, firstname, lastname, birth, death) VALUES (\"") + type) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + originator->__Field(HX_CSTRING("firstname"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + originator->__Field(HX_CSTRING("lastname"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + originator->__Field(HX_CSTRING("birth"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + originator->__Field(HX_CSTRING("death"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(") "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(356)
		::haxe::Log_obj::trace(sql,hx::SourceInfo(HX_CSTRING("ScorxDb.hx"),356,HX_CSTRING("sx.util.ScorxDb"),HX_CSTRING("insertOriginatorType")));
		HX_STACK_LINE(357)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(358)
		cnx->request(sql);
		HX_STACK_LINE(359)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ScorxDb_obj,insertOriginatorType,(void))

Void ScorxDb_obj::insertOriginatorItem( ::String filename,Dynamic origItem){
{
		HX_STACK_FRAME("sx.util.ScorxDb","insertOriginatorItem",0x1d37d216,"sx.util.ScorxDb.insertOriginatorItem","sx/util/ScorxDb.hx",362,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(origItem,"origItem")
		HX_STACK_LINE(363)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(363)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(364)
		::String sql = (((((((((((((((HX_CSTRING("INSERT INTO originators (type, firstname, lastname, birth, death) VALUES (\"") + origItem->__Field(HX_CSTRING("type"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("firstname"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("lastname"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("birth"),true)) + HX_CSTRING("\", ")) + HX_CSTRING("\"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("death"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(") "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(373)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(374)
		cnx->request(sql);
		HX_STACK_LINE(375)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,insertOriginatorItem,(void))

Void ScorxDb_obj::removeOriginatorItem( ::String filename,Dynamic origItem){
{
		HX_STACK_FRAME("sx.util.ScorxDb","removeOriginatorItem",0x9a7cc861,"sx.util.ScorxDb.removeOriginatorItem","sx/util/ScorxDb.hx",378,0x26073ffe)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(origItem,"origItem")
		HX_STACK_LINE(379)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(379)
			HX_STACK_DO_THROW(((HX_CSTRING("File ") + filename) + HX_CSTRING(" doesn't exist!")));
			HX_STACK_LINE(379)
			return null();
		}
		HX_STACK_LINE(380)
		::String sql = ((((((((((((((HX_CSTRING("DELETE FROM originators WHERE  type = \"") + origItem->__Field(HX_CSTRING("type"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND firstname = \"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("firstname"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND lastname = \"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("lastname"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND birth = \"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("birth"),true)) + HX_CSTRING("\" ")) + HX_CSTRING(" AND death = \"")) + origItem->__Field(HX_CSTRING("originator"),true)->__Field(HX_CSTRING("death"),true)) + HX_CSTRING("\" "));		HX_STACK_VAR(sql,"sql");
		HX_STACK_LINE(388)
		::haxe::Log_obj::trace(sql,hx::SourceInfo(HX_CSTRING("ScorxDb.hx"),388,HX_CSTRING("sx.util.ScorxDb"),HX_CSTRING("removeOriginatorItem")));
		HX_STACK_LINE(389)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(390)
		cnx->request(sql);
		HX_STACK_LINE(391)
		cnx->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxDb_obj,removeOriginatorItem,(void))

Dynamic ScorxDb_obj::getExample( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getExample",0xdd1d1cc2,"sx.util.ScorxDb.getExample","sx/util/ScorxDb.hx",396,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(398)
	Dynamic _g = ::sx::util::ScorxDb_obj::getInformation(filename);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(399)
	Dynamic _g1 = ::sx::util::ScorxDb_obj::getOriginatorItems(filename);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(400)
	Dynamic _g2 = ::sx::util::ScorxDb_obj::getCategories(filename);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(401)
	Dynamic _g3 = ::sx::util::ScorxDb_obj::getCategoriesDyn(filename);		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_1{
		inline static Dynamic Block( Dynamic &_g1,Dynamic &_g,Dynamic &_g2,Dynamic &_g3,::String &filename){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",397,0x26073ffe)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("information") , _g,false);
				__result->Add(HX_CSTRING("originatorItems") , _g1,false);
				__result->Add(HX_CSTRING("categories") , _g2,false);
				__result->Add(HX_CSTRING("categoriesDynamic") , _g3,false);
				__result->Add(HX_CSTRING("subdir") , ::sx::util::ScorxDb_obj::getSubdir(filename),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(397)
	Dynamic r = _Function_1_1::Block(_g1,_g,_g2,_g3,filename);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(404)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getExample,return )

::String ScorxDb_obj::getSubdir( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getSubdir",0xe5030a35,"sx.util.ScorxDb.getSubdir","sx/util/ScorxDb.hx",407,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(408)
	Array< ::String > a = ::cx::FileTools_obj::safeSlashes(filename,null()).split(HX_CSTRING("/"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(409)
	a->pop();
	HX_STACK_LINE(410)
	::String subdir = a->pop();		HX_STACK_VAR(subdir,"subdir");
	HX_STACK_LINE(411)
	return subdir;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getSubdir,return )

Dynamic ScorxDb_obj::getInformation( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getInformation",0xe62d5b04,"sx.util.ScorxDb.getInformation","sx/util/ScorxDb.hx",415,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(417)
	if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
		HX_STACK_LINE(417)
		HX_STACK_DO_THROW((HX_CSTRING("Can't find file ") + filename));
	}
	HX_STACK_LINE(418)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(419)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(420)
		::List results = cnx->request(HX_CSTRING("SELECT * FROM information"))->results();		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(421)
		Dynamic dynResults = ::sx::util::ScorxDb_obj::translateResultsToDynamic(results);		HX_STACK_VAR(dynResults,"dynResults");
		HX_STACK_LINE(423)
		::Date addedDate;		HX_STACK_VAR(addedDate,"addedDate");
		HX_STACK_LINE(423)
		if (((dynResults->__Field(HX_CSTRING("added"),true) > HX_CSTRING("")))){
			HX_STACK_LINE(423)
			addedDate = ::Date_obj::fromString(dynResults->__Field(HX_CSTRING("added"),true));
		}
		else{
			HX_STACK_LINE(423)
			addedDate = null();
		}
		HX_STACK_LINE(424)
		::Date updatedDate;		HX_STACK_VAR(updatedDate,"updatedDate");
		HX_STACK_LINE(424)
		if (((dynResults->__Field(HX_CSTRING("updated"),true) > HX_CSTRING("")))){
			HX_STACK_LINE(424)
			updatedDate = ::Date_obj::fromString(dynResults->__Field(HX_CSTRING("updated"),true));
		}
		else{
			HX_STACK_LINE(424)
			updatedDate = null();
		}
		HX_STACK_LINE(427)
		int _g = ::sx::util::ScorxTools_obj::getId(filename);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(431)
		::String _g1 = ::haxe::Utf8_obj::decode(dynResults->__Field(HX_CSTRING("distributor_id"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(432)
		::String _g2 = ::haxe::Utf8_obj::decode(dynResults->__Field(HX_CSTRING("mediaformat_id"),true));		HX_STACK_VAR(_g2,"_g2");
		struct _Function_2_1{
			inline static Dynamic Block( ::String &_g1,Dynamic &dynResults,int &_g,::Date &addedDate,::String &_g2,::Date &updatedDate){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",426,0x26073ffe)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("id") , _g,false);
					__result->Add(HX_CSTRING("title") , dynResults->__Field(HX_CSTRING("title"),true),false);
					__result->Add(HX_CSTRING("subtitle") , dynResults->__Field(HX_CSTRING("subtitle"),true),false);
					__result->Add(HX_CSTRING("sorttitle") , dynResults->__Field(HX_CSTRING("sorttitle"),true),false);
					__result->Add(HX_CSTRING("distributorId") , _g1,false);
					__result->Add(HX_CSTRING("mediaformatId") , _g2,false);
					__result->Add(HX_CSTRING("published") , ::Std_obj::parseInt(dynResults->__Field(HX_CSTRING("published"),true)),false);
					__result->Add(HX_CSTRING("added") , addedDate,false);
					__result->Add(HX_CSTRING("updated") , updatedDate,false);
					__result->Add(HX_CSTRING("introd") , dynResults->__Field(HX_CSTRING("introd"),true),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(426)
		Dynamic r = _Function_2_1::Block(_g1,dynResults,_g,addedDate,_g2,updatedDate);		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(438)
		return r;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String msg = __e;{
				HX_STACK_LINE(440)
				HX_STACK_DO_THROW((HX_CSTRING("getInformation error for file ") + filename));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(442)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getInformation,return )

Dynamic ScorxDb_obj::getOriginatorItems( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getOriginatorItems",0x7524213c,"sx.util.ScorxDb.getOriginatorItems","sx/util/ScorxDb.hx",445,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(446)
	if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
		HX_STACK_LINE(446)
		HX_STACK_DO_THROW((HX_CSTRING("Can't find file ") + filename));
	}
	HX_STACK_LINE(448)
	try
	{
	HX_STACK_CATCHABLE(::String, 0);
	{
		HX_STACK_LINE(449)
		::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
		HX_STACK_LINE(450)
		::List results = cnx->request(HX_CSTRING("SELECT * FROM originators"))->results();		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(451)
		Dynamic ois = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(ois,"ois");
		HX_STACK_LINE(452)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(results->iterator());  __it->hasNext(); ){
			Dynamic item = __it->next();
			{
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &item){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",453,0x26073ffe)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("type") , item->__Field(HX_CSTRING("type"),true),false);
							struct _Function_4_1{
								inline static Dynamic Block( Dynamic &item){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",455,0x26073ffe)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("firstname") , item->__Field(HX_CSTRING("firstname"),true),false);
										__result->Add(HX_CSTRING("lastname") , item->__Field(HX_CSTRING("lastname"),true),false);
										__result->Add(HX_CSTRING("birth") , item->__Field(HX_CSTRING("birth"),true),false);
										__result->Add(HX_CSTRING("death") , item->__Field(HX_CSTRING("death"),true),false);
										return __result;
									}
									return null();
								}
							};
							__result->Add(HX_CSTRING("originator") , _Function_4_1::Block(item),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(453)
				Dynamic oi = _Function_3_1::Block(item);		HX_STACK_VAR(oi,"oi");
				HX_STACK_LINE(462)
				ois->__Field(HX_CSTRING("push"),true)(oi);
			}
;
		}
		HX_STACK_LINE(465)
		return ois;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::String >() ){
			HX_STACK_BEGIN_CATCH
			::String msg = __e;{
				HX_STACK_LINE(467)
				HX_STACK_DO_THROW((HX_CSTRING("getInformation error for file ") + filename));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(470)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getOriginatorItems,return )

Dynamic ScorxDb_obj::translateResultsToDynamic( ::List results){
	HX_STACK_FRAME("sx.util.ScorxDb","translateResultsToDynamic",0x0802400e,"sx.util.ScorxDb.translateResultsToDynamic","sx/util/ScorxDb.hx",473,0x26073ffe)
	HX_STACK_ARG(results,"results")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/util/ScorxDb.hx",474,0x26073ffe)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(474)
	Dynamic r = _Function_1_1::Block();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(475)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(results->iterator());  __it->hasNext(); ){
		Dynamic data = __it->next();
		{
			HX_STACK_LINE(476)
			::String type = data->__Field(HX_CSTRING("type"),true);		HX_STACK_VAR(type,"type");
			HX_STACK_LINE(477)
			::String value = ::Std_obj::string(data->__Field(HX_CSTRING("value"),true));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(478)
			if (((r != null()))){
				HX_STACK_LINE(478)
				r->__SetField(type,value,false);
			}
		}
;
	}
	HX_STACK_LINE(480)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,translateResultsToDynamic,return )

Dynamic ScorxDb_obj::getGrid( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxDb","getGrid",0xe981732e,"sx.util.ScorxDb.getGrid","sx/util/ScorxDb.hx",483,0x26073ffe)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(484)
	::String sql = HX_CSTRING("SELECT * FROM grid order by rowid");		HX_STACK_VAR(sql,"sql");
	HX_STACK_LINE(485)
	::sys::db::Connection cnx = ::sys::db::Sqlite_obj::open(filename);		HX_STACK_VAR(cnx,"cnx");
	HX_STACK_LINE(486)
	::List items = cnx->request(sql)->results();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(487)
	Dynamic datas = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(datas,"datas");
	HX_STACK_LINE(488)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(items->iterator());  __it->hasNext(); ){
		Dynamic item = __it->next();
		{
			HX_STACK_LINE(489)
			Dynamic data = item;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(490)
			datas->__Field(HX_CSTRING("push"),true)(data);
		}
;
	}
	HX_STACK_LINE(492)
	cnx->close();
	HX_STACK_LINE(493)
	return datas;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxDb_obj,getGrid,return )


ScorxDb_obj::ScorxDb_obj()
{
}

Dynamic ScorxDb_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getGrid") ) { return getGrid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPages") ) { return getPages_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createNew") ) { return createNew_dyn(); }
		if (HX_FIELD_EQ(inName,"getSubdir") ) { return getSubdir_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getExample") ) { return getExample_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getChannels") ) { return getChannels_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getPagesBase") ) { return getPagesBase_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCategories") ) { return getCategories_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getQuickstarts") ) { return getQuickstarts_dyn(); }
		if (HX_FIELD_EQ(inName,"insertCategory") ) { return insertCategory_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCategory") ) { return removeCategory_dyn(); }
		if (HX_FIELD_EQ(inName,"getOriginators") ) { return getOriginators_dyn(); }
		if (HX_FIELD_EQ(inName,"getInformation") ) { return getInformation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getChannelsBase") ) { return getChannelsBase_dyn(); }
		if (HX_FIELD_EQ(inName,"getAlternatives") ) { return getAlternatives_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCategoriesDyn") ) { return getCategoriesDyn_dyn(); }
		if (HX_FIELD_EQ(inName,"getCategoriesAll") ) { return getCategoriesAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getCategoryTypes") ) { return getCategoryTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"insertOriginator") ) { return insertOriginator_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"insertCategoryDyn") ) { return insertCategoryDyn_dyn(); }
		if (HX_FIELD_EQ(inName,"removeCategoryDyn") ) { return removeCategoryDyn_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getOriginatorItems") ) { return getOriginatorItems_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setInformationField") ) { return setInformationField_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"insertOriginatorType") ) { return insertOriginatorType_dyn(); }
		if (HX_FIELD_EQ(inName,"insertOriginatorItem") ) { return insertOriginatorItem_dyn(); }
		if (HX_FIELD_EQ(inName,"removeOriginatorItem") ) { return removeOriginatorItem_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getTitleCountCategory") ) { return getTitleCountCategory_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getMaxcountForCategory") ) { return getMaxcountForCategory_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"translateResultsToDynamic") ) { return translateResultsToDynamic_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScorxDb_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScorxDb_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createNew"),
	HX_CSTRING("getChannelsBase"),
	HX_CSTRING("getChannels"),
	HX_CSTRING("getPages"),
	HX_CSTRING("getPagesBase"),
	HX_CSTRING("getQuickstarts"),
	HX_CSTRING("getCategories"),
	HX_CSTRING("insertCategory"),
	HX_CSTRING("removeCategory"),
	HX_CSTRING("getCategoriesDyn"),
	HX_CSTRING("insertCategoryDyn"),
	HX_CSTRING("removeCategoryDyn"),
	HX_CSTRING("getCategoriesAll"),
	HX_CSTRING("getCategoryTypes"),
	HX_CSTRING("getMaxcountForCategory"),
	HX_CSTRING("getTitleCountCategory"),
	HX_CSTRING("getAlternatives"),
	HX_CSTRING("setInformationField"),
	HX_CSTRING("getOriginators"),
	HX_CSTRING("insertOriginator"),
	HX_CSTRING("insertOriginatorType"),
	HX_CSTRING("insertOriginatorItem"),
	HX_CSTRING("removeOriginatorItem"),
	HX_CSTRING("getExample"),
	HX_CSTRING("getSubdir"),
	HX_CSTRING("getInformation"),
	HX_CSTRING("getOriginatorItems"),
	HX_CSTRING("translateResultsToDynamic"),
	HX_CSTRING("getGrid"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScorxDb_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScorxDb_obj::__mClass,"__mClass");
};

#endif

Class ScorxDb_obj::__mClass;

void ScorxDb_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.util.ScorxDb"), hx::TCanCast< ScorxDb_obj> ,sStaticFields,sMemberFields,
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

void ScorxDb_obj::__boot()
{
}

} // end namespace sx
} // end namespace util
