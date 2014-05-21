#ifndef INCLUDED_cx_SqliteTools
#define INCLUDED_cx_SqliteTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(cx,SqliteTools)
HX_DECLARE_CLASS2(sys,db,Connection)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  SqliteTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SqliteTools_obj OBJ_;
		SqliteTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SqliteTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SqliteTools"); }

		static ::sys::db::Connection getCnx( ::String sqliteFilename);
		static Dynamic getCnx_dyn();

		static ::List select( ::String sqliteFilename,::String sql);
		static Dynamic select_dyn();

		static int insert( ::String sqliteFilename,::String sql);
		static Dynamic insert_dyn();

		static ::String getInsertStatement( Dynamic insertObject,::String tableName);
		static Dynamic getInsertStatement_dyn();

		static ::List execute( ::String filename,::String sql);
		static Dynamic execute_dyn();

		static ::List cnxExecute( ::sys::db::Connection cnx,::String sql);
		static Dynamic cnxExecute_dyn();

		static bool createSqlite( ::String filename);
		static Dynamic createSqlite_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_SqliteTools */ 
