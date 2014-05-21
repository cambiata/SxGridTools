#ifndef INCLUDED_haxe_Utf8
#define INCLUDED_haxe_Utf8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Utf8)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Utf8_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utf8_obj OBJ_;
		Utf8_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Utf8_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utf8_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Utf8"); }

		static ::String decode( ::String s);
		static Dynamic decode_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Utf8 */ 
