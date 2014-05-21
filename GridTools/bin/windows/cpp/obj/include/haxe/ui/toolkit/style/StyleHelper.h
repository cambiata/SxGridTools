#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#define INCLUDED_haxe_ui_toolkit_style_StyleHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,Graphics)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,StyleHelper)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  StyleHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleHelper_obj OBJ_;
		StyleHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StyleHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StyleHelper"); }

		static ::haxe::ds::StringMap sectionCache;
		static Void clearCache( );
		static Dynamic clearCache_dyn();

		static Void paintStyle( ::flash::display::Graphics g,::haxe::ui::toolkit::style::Style style,::flash::geom::Rectangle rc);
		static Dynamic paintStyle_dyn();

		static Void paintScale9( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::flash::geom::Rectangle scale9,::flash::geom::Rectangle rc);
		static Dynamic paintScale9_dyn();

		static Void paintCompoundBitmap( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::haxe::ds::StringMap sourceRects,::flash::geom::Rectangle targetRect);
		static Dynamic paintCompoundBitmap_dyn();

		static Void paintBitmapSection( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::flash::geom::Rectangle src,::flash::geom::Rectangle dst);
		static Dynamic paintBitmapSection_dyn();

		static ::flash::display::BitmapData getBitmapSection( ::String resourceId,::flash::geom::Rectangle rc);
		static Dynamic getBitmapSection_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_StyleHelper */ 
