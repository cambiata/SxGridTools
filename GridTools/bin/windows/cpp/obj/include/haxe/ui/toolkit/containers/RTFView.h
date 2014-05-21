#ifndef INCLUDED_haxe_ui_toolkit_containers_RTFView
#define INCLUDED_haxe_ui_toolkit_containers_RTFView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/VBox.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,RTFToolButton)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,RTFView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,extended,RTF)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,ListSelector)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  RTFView_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef RTFView_obj OBJ_;
		RTFView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RTFView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RTFView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RTFView"); }

		::haxe::ui::toolkit::controls::extended::RTF _rtf;
		::haxe::ui::toolkit::controls::selection::ListSelector _fontNameList;
		::haxe::ui::toolkit::controls::selection::ListSelector _fontSizeList;
		::haxe::ui::toolkit::containers::RTFToolButton _boldButton;
		::haxe::ui::toolkit::containers::RTFToolButton _italicButton;
		::haxe::ui::toolkit::containers::RTFToolButton _underlineButton;
		::haxe::ui::toolkit::containers::RTFToolButton _bulletButton;
		::haxe::ui::toolkit::containers::RTFToolButton _leftAlignButton;
		::haxe::ui::toolkit::containers::RTFToolButton _centerAlignButton;
		::haxe::ui::toolkit::containers::RTFToolButton _rightAlignButton;
		::haxe::ui::toolkit::containers::RTFToolButton _justifyAlignButton;
		bool _systemFonts;
		virtual Void initialize( );

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual ::String set_text( ::String value);

		virtual Void _onBoldClick( ::flash::events::MouseEvent event);
		Dynamic _onBoldClick_dyn();

		virtual Void _onItalicClick( ::flash::events::MouseEvent event);
		Dynamic _onItalicClick_dyn();

		virtual Void _onUnderlineClick( ::flash::events::MouseEvent event);
		Dynamic _onUnderlineClick_dyn();

		virtual Void _onBulletClick( ::flash::events::MouseEvent event);
		Dynamic _onBulletClick_dyn();

		virtual Void _onFontNameChange( ::flash::events::Event event);
		Dynamic _onFontNameChange_dyn();

		virtual Void _onFontSizeChange( ::flash::events::Event event);
		Dynamic _onFontSizeChange_dyn();

		virtual Void _onLeftAlignClick( ::flash::events::Event event);
		Dynamic _onLeftAlignClick_dyn();

		virtual Void _onCenterAlignClick( ::flash::events::Event event);
		Dynamic _onCenterAlignClick_dyn();

		virtual Void _onRightAlignClick( ::flash::events::Event event);
		Dynamic _onRightAlignClick_dyn();

		virtual Void _onJustifyAlignClick( ::flash::events::Event event);
		Dynamic _onJustifyAlignClick_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_RTFView */ 
