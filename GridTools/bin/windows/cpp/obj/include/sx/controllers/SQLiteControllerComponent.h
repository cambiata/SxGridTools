#ifndef INCLUDED_sx_controllers_SQLiteControllerComponent
#define INCLUDED_sx_controllers_SQLiteControllerComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/VBox.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(sx,controllers,SQLiteController)
HX_DECLARE_CLASS2(sx,controllers,SQLiteControllerComponent)
namespace sx{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  SQLiteControllerComponent_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef SQLiteControllerComponent_obj OBJ_;
		SQLiteControllerComponent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SQLiteControllerComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SQLiteControllerComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SQLiteControllerComponent"); }

		::sx::controllers::SQLiteController controller;
		virtual Void initialize( );

		virtual Dynamic clone( );

		virtual Dynamic self( );

		static Void init( );
		static Dynamic init_dyn();

};

} // end namespace sx
} // end namespace controllers

#endif /* INCLUDED_sx_controllers_SQLiteControllerComponent */ 
