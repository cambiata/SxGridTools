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
#ifndef INCLUDED_sx_controllers_ConvertController
#include <sx/controllers/ConvertController.h>
#endif
#ifndef INCLUDED_sx_controllers_ConvertControllerComponent
#include <sx/controllers/ConvertControllerComponent.h>
#endif
#ifndef INCLUDED_sx_data_Files
#include <sx/data/Files.h>
#endif
namespace sx{
namespace controllers{

Void ConvertControllerComponent_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.ConvertControllerComponent","new",0x6197ffc0,"sx.controllers.ConvertControllerComponent.new","sx/controllers/ConvertController.hx",187,0xa05c71b1)
{
	HX_STACK_LINE(189)
	this->controller = null();
	HX_STACK_LINE(187)
	super::__construct();
}
;
	return null();
}

//ConvertControllerComponent_obj::~ConvertControllerComponent_obj() { }

Dynamic ConvertControllerComponent_obj::__CreateEmpty() { return  new ConvertControllerComponent_obj; }
hx::ObjectPtr< ConvertControllerComponent_obj > ConvertControllerComponent_obj::__new()
{  hx::ObjectPtr< ConvertControllerComponent_obj > result = new ConvertControllerComponent_obj();
	result->__construct();
	return result;}

Dynamic ConvertControllerComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvertControllerComponent_obj > result = new ConvertControllerComponent_obj();
	result->__construct();
	return result;}

Void ConvertControllerComponent_obj::initialize( ){
{
		HX_STACK_FRAME("sx.controllers.ConvertControllerComponent","initialize",0xb1d5adf0,"sx.controllers.ConvertControllerComponent.initialize","sx/controllers/ConvertController.hx",196,0xa05c71b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->super::initialize();
		HX_STACK_LINE(198)
		this->controller = ::sx::controllers::ConvertController_obj::__new();
		HX_STACK_LINE(199)
		this->addChild(this->controller->get_view());
		HX_STACK_LINE(200)
		::sx::data::Files_obj::observers->__Field(HX_CSTRING("push"),true)(this->controller->onFilesNotify_dyn());
	}
return null();
}


Dynamic ConvertControllerComponent_obj::clone( ){
	HX_STACK_FRAME("sx.controllers.ConvertControllerComponent","clone",0xa699dabd,"sx.controllers.ConvertControllerComponent.clone","sx/controllers/ConvertControllerComponent.hx",1,0xe7c5ccee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::sx::controllers::ConvertControllerComponent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ConvertControllerComponent_obj::self( ){
	HX_STACK_FRAME("sx.controllers.ConvertControllerComponent","self",0x06b5d02c,"sx.controllers.ConvertControllerComponent.self","sx/controllers/ConvertControllerComponent.hx",2,0xe7c5ccee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::sx::controllers::ConvertControllerComponent_obj::__new();
}


Void ConvertControllerComponent_obj::init( ){
{
		HX_STACK_FRAME("sx.controllers.ConvertControllerComponent","init",0x00207fb0,"sx.controllers.ConvertControllerComponent.init","sx/controllers/ConvertController.hx",192,0xa05c71b1)
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClass(hx::ClassOf< ::sx::controllers::ConvertControllerComponent >(),HX_CSTRING("convertcontroller"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConvertControllerComponent_obj,init,(void))


ConvertControllerComponent_obj::ConvertControllerComponent_obj()
{
}

void ConvertControllerComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvertControllerComponent);
	HX_MARK_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConvertControllerComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ConvertControllerComponent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ConvertControllerComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::sx::controllers::ConvertController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvertControllerComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::controllers::ConvertController*/ ,(int)offsetof(ConvertControllerComponent_obj,controller),HX_CSTRING("controller")},
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
	HX_MARK_MEMBER_NAME(ConvertControllerComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertControllerComponent_obj::__mClass,"__mClass");
};

#endif

Class ConvertControllerComponent_obj::__mClass;

void ConvertControllerComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.ConvertControllerComponent"), hx::TCanCast< ConvertControllerComponent_obj> ,sStaticFields,sMemberFields,
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

void ConvertControllerComponent_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
