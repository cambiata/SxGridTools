#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#define INCLUDED_sys_db__Sqlite_SqliteResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <sys/db/ResultSet.h>
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Sqlite,SqliteResultSet)
namespace sys{
namespace db{
namespace _Sqlite{


class HXCPP_CLASS_ATTRIBUTES  SqliteResultSet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SqliteResultSet_obj OBJ_;
		SqliteResultSet_obj();
		Void __construct(Dynamic r);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SqliteResultSet_obj > __new(Dynamic r);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteResultSet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::sys::db::ResultSet_obj *()
			{ return new ::sys::db::ResultSet_delegate_< SqliteResultSet_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("SqliteResultSet"); }

		Dynamic r;
		::List cache;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual ::List results( );
		Dynamic results_dyn();

		static Dynamic result_next;
		static Dynamic &result_next_dyn() { return result_next;}
};

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite

#endif /* INCLUDED_sys_db__Sqlite_SqliteResultSet */ 
