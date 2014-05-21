#ifndef INCLUDED_sx_util_ScorxTools
#define INCLUDED_sx_util_ScorxTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(sx,util,ScorxTools)
namespace sx{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ScorxTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScorxTools_obj OBJ_;
		ScorxTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScorxTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScorxTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScorxTools"); }

		static int getId( ::String filename);
		static Dynamic getId_dyn();

		static Array< ::String > getDirectories( ::String dir,hx::Null< bool >  stripBaseDir);
		static Dynamic getDirectories_dyn();

		static Array< int > getIdsInDirectory( ::String dir,Array< ::String > subdirs);
		static Dynamic getIdsInDirectory_dyn();

		static ::haxe::ds::IntMap getFilesInDirectory( ::String dir,Array< ::String > subdirs);
		static Dynamic getFilesInDirectory_dyn();

		static Array< int > getIdsFromFiles( ::haxe::ds::IntMap files);
		static Dynamic getIdsFromFiles_dyn();

		static ::String getOriginatorshort( Dynamic originator,hx::Null< bool >  firstNameFirst);
		static Dynamic getOriginatorshort_dyn();

};

} // end namespace sx
} // end namespace util

#endif /* INCLUDED_sx_util_ScorxTools */ 
