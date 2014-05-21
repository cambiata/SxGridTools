#ifndef INCLUDED_sx_Environment
#define INCLUDED_sx_Environment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sx,Environment)
namespace sx{


class HXCPP_CLASS_ATTRIBUTES  Environment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Environment_obj OBJ_;
		Environment_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Environment_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Environment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Environment"); }

		static ::String exeDir;
		static ::String exePdfTk;
		static ::String exeConvert;
		static ::String tempDir;
};

} // end namespace sx

#endif /* INCLUDED_sx_Environment */ 
