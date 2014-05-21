#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#define INCLUDED_sys_db__Sqlite_SqliteConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <sys/db/Connection.h>
HX_DECLARE_CLASS2(sys,db,Connection)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Sqlite,SqliteConnection)
namespace sys{
namespace db{
namespace _Sqlite{


class HXCPP_CLASS_ATTRIBUTES  SqliteConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SqliteConnection_obj OBJ_;
		SqliteConnection_obj();
		Void __construct(::String file);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SqliteConnection_obj > __new(::String file);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteConnection_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::sys::db::Connection_obj *()
			{ return new ::sys::db::Connection_delegate_< SqliteConnection_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SqliteConnection"); }

		Dynamic c;
		virtual Void close( );
		Dynamic close_dyn();

		virtual ::sys::db::ResultSet request( ::String s);
		Dynamic request_dyn();

		virtual int lastInsertId( );
		Dynamic lastInsertId_dyn();

		static Dynamic _connect;
		static Dynamic &_connect_dyn() { return _connect;}
		static Dynamic _close;
		static Dynamic &_close_dyn() { return _close;}
		static Dynamic _request;
		static Dynamic &_request_dyn() { return _request;}
		static Dynamic _last_id;
		static Dynamic &_last_id_dyn() { return _last_id;}
};

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite

#endif /* INCLUDED_sys_db__Sqlite_SqliteConnection */ 
