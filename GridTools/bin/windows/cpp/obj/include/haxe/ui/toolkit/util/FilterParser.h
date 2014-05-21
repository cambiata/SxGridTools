#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#define INCLUDED_haxe_ui_toolkit_util_FilterParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,filters,BitmapFilter)
HX_DECLARE_CLASS2(flash,filters,BlurFilter)
HX_DECLARE_CLASS2(flash,filters,DropShadowFilter)
HX_DECLARE_CLASS2(flash,filters,GlowFilter)
HX_DECLARE_CLASS4(haxe,ui,toolkit,util,FilterParser)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FilterParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FilterParser_obj OBJ_;
		FilterParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FilterParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FilterParser"); }

		static Dynamic filterParamDefaults;
		static ::flash::filters::BitmapFilter parseFilter( ::String filterString);
		static Dynamic parseFilter_dyn();

		static ::flash::filters::BitmapFilter createFilter( ::String filterName,::String filterParams);
		static Dynamic createFilter_dyn();

		static ::flash::filters::BlurFilter createBlurFilter( Array< ::String > params);
		static Dynamic createBlurFilter_dyn();

		static ::flash::filters::DropShadowFilter createDropShadowFilter( Array< ::String > params);
		static Dynamic createDropShadowFilter_dyn();

		static ::flash::filters::GlowFilter createGlowFilter( Array< ::String > params);
		static Dynamic createGlowFilter_dyn();

		static Array< ::String > copyFilterDefaults( ::String filterName,Array< ::String > params);
		static Dynamic copyFilterDefaults_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_FilterParser */ 
