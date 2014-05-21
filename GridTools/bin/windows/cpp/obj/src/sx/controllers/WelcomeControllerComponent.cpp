#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_sx_controllers_WelcomeController
#include <sx/controllers/WelcomeController.h>
#endif
#ifndef INCLUDED_sx_controllers_WelcomeControllerComponent
#include <sx/controllers/WelcomeControllerComponent.h>
#endif
namespace sx{
namespace controllers{

Void WelcomeControllerComponent_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.WelcomeControllerComponent","new",0x388eeef1,"sx.controllers.WelcomeControllerComponent.new","sx/controllers/WelcomeController.hx",18,0x07a5a9a2)
{
	HX_STACK_LINE(20)
	this->controller = null();
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//WelcomeControllerComponent_obj::~WelcomeControllerComponent_obj() { }

Dynamic WelcomeControllerComponent_obj::__CreateEmpty() { return  new WelcomeControllerComponent_obj; }
hx::ObjectPtr< WelcomeControllerComponent_obj > WelcomeControllerComponent_obj::__new()
{  hx::ObjectPtr< WelcomeControllerComponent_obj > result = new WelcomeControllerComponent_obj();
	result->__construct();
	return result;}

Dynamic WelcomeControllerComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WelcomeControllerComponent_obj > result = new WelcomeControllerComponent_obj();
	result->__construct();
	return result;}

Void WelcomeControllerComponent_obj::initialize( ){
{
		HX_STACK_FRAME("sx.controllers.WelcomeControllerComponent","initialize",0x50d276df,"sx.controllers.WelcomeControllerComponent.initialize","sx/controllers/WelcomeController.hx",27,0x07a5a9a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::initialize();
		HX_STACK_LINE(29)
		this->controller = ::sx::controllers::WelcomeController_obj::__new();
		HX_STACK_LINE(30)
		this->addChild(this->controller->get_view());
	}
return null();
}


Dynamic WelcomeControllerComponent_obj::clone( ){
	HX_STACK_FRAME("sx.controllers.WelcomeControllerComponent","clone",0x5c8fb82e,"sx.controllers.WelcomeControllerComponent.clone","sx/controllers/WelcomeControllerComponent.hx",1,0xd5388edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::sx::controllers::WelcomeControllerComponent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic WelcomeControllerComponent_obj::self( ){
	HX_STACK_FRAME("sx.controllers.WelcomeControllerComponent","self",0x47d02bdb,"sx.controllers.WelcomeControllerComponent.self","sx/controllers/WelcomeControllerComponent.hx",2,0xd5388edd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::sx::controllers::WelcomeControllerComponent_obj::__new();
}


Void WelcomeControllerComponent_obj::init( ){
{
		HX_STACK_FRAME("sx.controllers.WelcomeControllerComponent","init",0x413adb5f,"sx.controllers.WelcomeControllerComponent.init","sx/controllers/WelcomeController.hx",23,0x07a5a9a2)
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClass(hx::ClassOf< ::sx::controllers::WelcomeControllerComponent >(),HX_CSTRING("welcomecontroller"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WelcomeControllerComponent_obj,init,(void))


WelcomeControllerComponent_obj::WelcomeControllerComponent_obj()
{
}

void WelcomeControllerComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WelcomeControllerComponent);
	HX_MARK_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WelcomeControllerComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WelcomeControllerComponent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WelcomeControllerComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::sx::controllers::WelcomeController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WelcomeControllerComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::controllers::WelcomeController*/ ,(int)offsetof(WelcomeControllerComponent_obj,controller),HX_CSTRING("controller")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("controller"),
	HX_CSTRING("initialize"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WelcomeControllerComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WelcomeControllerComponent_obj::__mClass,"__mClass");
};

#endif

Class WelcomeControllerComponent_obj::__mClass;

void WelcomeControllerComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.WelcomeControllerComponent"), hx::TCanCast< WelcomeControllerComponent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void WelcomeControllerComponent_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
