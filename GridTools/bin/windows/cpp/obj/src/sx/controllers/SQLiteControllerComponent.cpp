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
#ifndef INCLUDED_sx_controllers_SQLiteController
#include <sx/controllers/SQLiteController.h>
#endif
#ifndef INCLUDED_sx_controllers_SQLiteControllerComponent
#include <sx/controllers/SQLiteControllerComponent.h>
#endif
namespace sx{
namespace controllers{

Void SQLiteControllerComponent_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.SQLiteControllerComponent","new",0x6e592907,"sx.controllers.SQLiteControllerComponent.new","sx/controllers/SQLiteController.hx",154,0xfc54bd74)
{
	HX_STACK_LINE(156)
	this->controller = null();
	HX_STACK_LINE(154)
	super::__construct();
}
;
	return null();
}

//SQLiteControllerComponent_obj::~SQLiteControllerComponent_obj() { }

Dynamic SQLiteControllerComponent_obj::__CreateEmpty() { return  new SQLiteControllerComponent_obj; }
hx::ObjectPtr< SQLiteControllerComponent_obj > SQLiteControllerComponent_obj::__new()
{  hx::ObjectPtr< SQLiteControllerComponent_obj > result = new SQLiteControllerComponent_obj();
	result->__construct();
	return result;}

Dynamic SQLiteControllerComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SQLiteControllerComponent_obj > result = new SQLiteControllerComponent_obj();
	result->__construct();
	return result;}

Void SQLiteControllerComponent_obj::initialize( ){
{
		HX_STACK_FRAME("sx.controllers.SQLiteControllerComponent","initialize",0x20794b89,"sx.controllers.SQLiteControllerComponent.initialize","sx/controllers/SQLiteController.hx",163,0xfc54bd74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		this->super::initialize();
		HX_STACK_LINE(165)
		this->controller = ::sx::controllers::SQLiteController_obj::__new();
		HX_STACK_LINE(166)
		this->addChild(this->controller->get_view());
	}
return null();
}


Dynamic SQLiteControllerComponent_obj::clone( ){
	HX_STACK_FRAME("sx.controllers.SQLiteControllerComponent","clone",0x44ed23c4,"sx.controllers.SQLiteControllerComponent.clone","sx/controllers/SQLiteControllerComponent.hx",1,0x96a570cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::sx::controllers::SQLiteControllerComponent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic SQLiteControllerComponent_obj::self( ){
	HX_STACK_FRAME("sx.controllers.SQLiteControllerComponent","self",0x22f8c505,"sx.controllers.SQLiteControllerComponent.self","sx/controllers/SQLiteControllerComponent.hx",2,0x96a570cb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::sx::controllers::SQLiteControllerComponent_obj::__new();
}


Void SQLiteControllerComponent_obj::init( ){
{
		HX_STACK_FRAME("sx.controllers.SQLiteControllerComponent","init",0x1c637489,"sx.controllers.SQLiteControllerComponent.init","sx/controllers/SQLiteController.hx",159,0xfc54bd74)
		HX_STACK_LINE(159)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClass(hx::ClassOf< ::sx::controllers::SQLiteControllerComponent >(),HX_CSTRING("sqlitefilecontroller"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SQLiteControllerComponent_obj,init,(void))


SQLiteControllerComponent_obj::SQLiteControllerComponent_obj()
{
}

void SQLiteControllerComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SQLiteControllerComponent);
	HX_MARK_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SQLiteControllerComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(controller,"controller");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SQLiteControllerComponent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SQLiteControllerComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::sx::controllers::SQLiteController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SQLiteControllerComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("controller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("init"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sx::controllers::SQLiteController*/ ,(int)offsetof(SQLiteControllerComponent_obj,controller),HX_CSTRING("controller")},
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
	HX_MARK_MEMBER_NAME(SQLiteControllerComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SQLiteControllerComponent_obj::__mClass,"__mClass");
};

#endif

Class SQLiteControllerComponent_obj::__mClass;

void SQLiteControllerComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.SQLiteControllerComponent"), hx::TCanCast< SQLiteControllerComponent_obj> ,sStaticFields,sMemberFields,
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

void SQLiteControllerComponent_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
