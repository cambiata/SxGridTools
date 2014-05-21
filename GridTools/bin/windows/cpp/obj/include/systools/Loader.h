#ifndef INCLUDED_systools_Loader
#define INCLUDED_systools_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(systools,Loader)
namespace systools{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Loader"); }

		static bool init;
		static Dynamic load( ::String lib,::String s,int n);
		static Dynamic load_dyn();

};

} // end namespace systools

#endif /* INCLUDED_systools_Loader */ 
