#ifndef INCLUDED_cx_PathTools
#define INCLUDED_cx_PathTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cx,PathTools)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  PathTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathTools_obj OBJ_;
		PathTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PathTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PathTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PathTools"); }

		static ::String addSlash( ::String path,::String slash);
		static Dynamic addSlash_dyn();

		static ::String addSlashBefore( ::String path,::String slash);
		static Dynamic addSlashBefore_dyn();

		static ::String removeSlash( ::String path,::String slash);
		static Dynamic removeSlash_dyn();

		static ::String removeSlashBefore( ::String path,::String slash);
		static Dynamic removeSlashBefore_dyn();

		static ::String firstSegment( ::String path,::String slash);
		static Dynamic firstSegment_dyn();

		static ::String lastSegment( ::String path,::String slash);
		static Dynamic lastSegment_dyn();

		static ::String getExtension( ::String filename);
		static Dynamic getExtension_dyn();

		static ::String excludeExtension( ::String filename);
		static Dynamic excludeExtension_dyn();

		static ::String addHttp( ::String path,::String http);
		static Dynamic addHttp_dyn();

		static ::String getUpperLevel( ::String path);
		static Dynamic getUpperLevel_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_PathTools */ 
