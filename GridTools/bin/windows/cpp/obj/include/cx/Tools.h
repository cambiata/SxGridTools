#ifndef INCLUDED_cx_Tools
#define INCLUDED_cx_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cx,Tools)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  Tools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Tools"); }

		static ::String stringAfterLast( ::String str,::String _char);
		static Dynamic stringAfterLast_dyn();

		static ::String stringAfterIncludingLast( ::String str,::String _char);
		static Dynamic stringAfterIncludingLast_dyn();

		static ::String stringBeforeFirst( ::String str,::String _char);
		static Dynamic stringBeforeFirst_dyn();

		static ::String stringIncludingFirst( ::String str,::String _char);
		static Dynamic stringIncludingFirst_dyn();

		static ::String stringBeforeLast( ::String str,::String _char);
		static Dynamic stringBeforeLast_dyn();

		static ::String stringBeforeIncludingLast( ::String str,::String _char);
		static Dynamic stringBeforeIncludingLast_dyn();

		static int toInt( Float _float);
		static Dynamic toInt_dyn();

		static ::String fillString( ::String str,hx::Null< int >  toLength,::String with,::String replaceNull);
		static Dynamic fillString_dyn();

		static ::String stringAscii( ::String str);
		static Dynamic stringAscii_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_Tools */ 
