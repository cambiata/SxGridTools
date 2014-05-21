#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_RTF
#define INCLUDED_haxe_ui_toolkit_controls_extended_RTF

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/controls/TextInput.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,extended,RTF)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{


class HXCPP_CLASS_ATTRIBUTES  RTF_obj : public ::haxe::ui::toolkit::controls::TextInput_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::TextInput_obj super;
		typedef RTF_obj OBJ_;
		RTF_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RTF_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RTF_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RTF"); }

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual Void bold( );
		Dynamic bold_dyn();

		virtual Void italic( );
		Dynamic italic_dyn();

		virtual Void underline( );
		Dynamic underline_dyn();

		virtual Void fontSize( int size);
		Dynamic fontSize_dyn();

		virtual Void fontName( ::String name);
		Dynamic fontName_dyn();

		virtual Void bullet( );
		Dynamic bullet_dyn();

		virtual Void alignLeft( );
		Dynamic alignLeft_dyn();

		virtual Void alignCenter( );
		Dynamic alignCenter_dyn();

		virtual Void alignRight( );
		Dynamic alignRight_dyn();

		virtual Void alignJustify( );
		Dynamic alignJustify_dyn();

		virtual Void applyRTFStyle( ::String what,Dynamic value);
		Dynamic applyRTFStyle_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended

#endif /* INCLUDED_haxe_ui_toolkit_controls_extended_RTF */ 
