#ifndef INCLUDED_sx_controllers_WelcomeController
#define INCLUDED_sx_controllers_WelcomeController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/XMLController.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
HX_DECLARE_CLASS2(sx,controllers,WelcomeController)
namespace sx{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES  WelcomeController_obj : public ::haxe::ui::toolkit::core::XMLController_obj{
	public:
		typedef ::haxe::ui::toolkit::core::XMLController_obj super;
		typedef WelcomeController_obj OBJ_;
		WelcomeController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< WelcomeController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WelcomeController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("WelcomeController"); }

};

} // end namespace sx
} // end namespace controllers

#endif /* INCLUDED_sx_controllers_WelcomeController */ 
