#ifndef INCLUDED_sx_controllers_SQLiteController
#define INCLUDED_sx_controllers_SQLiteController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/XMLController.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS2(sx,controllers,SQLiteController)
namespace sx{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  SQLiteController_obj : public ::haxe::ui::toolkit::core::XMLController_obj{
	public:
		typedef ::haxe::ui::toolkit::core::XMLController_obj super;
		typedef SQLiteController_obj OBJ_;
		SQLiteController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SQLiteController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SQLiteController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SQLiteController"); }

		::haxe::ui::toolkit::controls::TextInput tiProjectName;
		virtual Void onProjectnameChange( ::haxe::ui::toolkit::events::UIEvent e);
		Dynamic onProjectnameChange_dyn();

		virtual Void onBtnPngFilesClick( ::haxe::ui::toolkit::events::UIEvent e);
		Dynamic onBtnPngFilesClick_dyn();

		virtual Void onBtnMp3FilesClick( ::haxe::ui::toolkit::events::UIEvent e);
		Dynamic onBtnMp3FilesClick_dyn();

		virtual Void onBtnSqliteClick( ::haxe::ui::toolkit::events::UIEvent e);
		Dynamic onBtnSqliteClick_dyn();

};

} // end namespace sx
} // end namespace controllers

#endif /* INCLUDED_sx_controllers_SQLiteController */ 
