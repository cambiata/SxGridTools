#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Root_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Root","new",0xe8048d21,"haxe.ui.toolkit.core.Root.new","haxe/ui/toolkit/core/Root.hx",11,0x06a667af)
{
	HX_STACK_LINE(13)
	this->_modalOverlayCounter = (int)0;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->_layout = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();
	HX_STACK_LINE(20)
	this->_clipContent = true;
	HX_STACK_LINE(21)
	this->_mousePos = ::flash::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::Event_obj::RESIZE,this->_onScreenResize_dyn(),null(),null(),null());
}
;
	return null();
}

//Root_obj::~Root_obj() { }

Dynamic Root_obj::__CreateEmpty() { return  new Root_obj; }
hx::ObjectPtr< Root_obj > Root_obj::__new()
{  hx::ObjectPtr< Root_obj > result = new Root_obj();
	result->__construct();
	return result;}

Dynamic Root_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Root_obj > result = new Root_obj();
	result->__construct();
	return result;}

Void Root_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","preInitialize",0x68c4d754,"haxe.ui.toolkit.core.Root.preInitialize","haxe/ui/toolkit/core/Root.hx",28,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->super::preInitialize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::flash::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/Root.hx",31,0x06a667af)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(31)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->_mousePos = ::flash::geom::Point_obj::__new(event->stageX,event->stageY);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(30)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(33)
		this->resizeRoot();
	}
return null();
}


Void Root_obj::_onScreenResize( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","_onScreenResize",0xfae2651f,"haxe.ui.toolkit.core.Root._onScreenResize","haxe/ui/toolkit/core/Root.hx",40,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(40)
		this->resizeRoot();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Root_obj,_onScreenResize,(void))

::flash::geom::Point Root_obj::get_mousePosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","get_mousePosition",0x7720d7c6,"haxe.ui.toolkit.core.Root.get_mousePosition","haxe/ui/toolkit/core/Root.hx",49,0x06a667af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return this->_mousePos;
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,get_mousePosition,return )

Void Root_obj::resizeRoot( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","resizeRoot",0x59104b95,"haxe.ui.toolkit.core.Root.resizeRoot","haxe/ui/toolkit/core/Root.hx",54,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		if (((this->get_percentWidth() > (int)0))){
			HX_STACK_LINE(56)
			Float _g = ::haxe::ui::toolkit::core::Screen_obj::get_instance()->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			this->set_width((Float((_g * this->get_percentWidth())) / Float((int)100)));
		}
		HX_STACK_LINE(58)
		if (((this->get_percentHeight() > (int)0))){
			HX_STACK_LINE(59)
			Float _g1 = ::haxe::ui::toolkit::core::Screen_obj::get_instance()->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			this->set_height((Float((_g1 * this->get_percentHeight())) / Float((int)100)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,resizeRoot,(void))

Void Root_obj::showModalOverlay( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","showModalOverlay",0x37f0221f,"haxe.ui.toolkit.core.Root.showModalOverlay","haxe/ui/toolkit/core/Root.hx",65,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		(this->_modalOverlayCounter)++;
		HX_STACK_LINE(68)
		if (((this->_modalOverlay == null()))){
			HX_STACK_LINE(69)
			this->_modalOverlay = ::haxe::ui::toolkit::core::Component_obj::__new();
			HX_STACK_LINE(70)
			this->_modalOverlay->set_id(HX_CSTRING("modalOverlay"));
			HX_STACK_LINE(71)
			this->_modalOverlay->set_percentWidth(this->_modalOverlay->set_percentHeight((int)100));
		}
		HX_STACK_LINE(73)
		if (((this->findChild(HX_CSTRING("modalOverlay"),null(),null()) == null()))){
			HX_STACK_LINE(74)
			this->addChild(this->_modalOverlay);
		}
		HX_STACK_LINE(76)
		this->_modalOverlay->set_visible(true);
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(79)
			while(((_g < _g1->length))){
				HX_STACK_LINE(79)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(79)
				++(_g);
				HX_STACK_LINE(80)
				if (((  (((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >()) == false))) ? bool((child->__Field(HX_CSTRING("get_id"),true)() != HX_CSTRING("modalOverlay"))) : bool(false) ))){
					HX_STACK_LINE(81)
					::haxe::ui::toolkit::core::Component c;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(81)
					c = hx::TCast< haxe::ui::toolkit::core::Component >::cast(child);
					HX_STACK_LINE(83)
					if (((this->_modalOverlay->get_style()->get_filter() != null()))){
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,showModalOverlay,(void))

Void Root_obj::hideModalOverlay( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","hideModalOverlay",0xf8de9564,"haxe.ui.toolkit.core.Root.hideModalOverlay","haxe/ui/toolkit/core/Root.hx",92,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		(this->_modalOverlayCounter)--;
		HX_STACK_LINE(94)
		if (((this->_modalOverlayCounter <= (int)0))){
			HX_STACK_LINE(95)
			if (((this->_modalOverlay != null()))){
				HX_STACK_LINE(96)
				this->_modalOverlay->set_visible(false);
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(100)
				while(((_g < _g1->length))){
					HX_STACK_LINE(100)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(100)
					++(_g);
					HX_STACK_LINE(101)
					if (((  (((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >()) == false))) ? bool((child->__Field(HX_CSTRING("get_id"),true)() != HX_CSTRING("modalOverlay"))) : bool(false) ))){
						HX_STACK_LINE(102)
						::haxe::ui::toolkit::core::Component c;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(102)
						c = hx::TCast< haxe::ui::toolkit::core::Component >::cast(child);
						HX_STACK_LINE(104)
						c->get_sprite()->set_filters(null());
					}
				}
			}
			HX_STACK_LINE(109)
			this->_modalOverlayCounter = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,hideModalOverlay,(void))

Dynamic Root_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","clone",0x0b4d425e,"haxe.ui.toolkit.core.Root.clone","haxe/ui/toolkit/core/Root.hx",1,0x06a667af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Root c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Root_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","self",0x1f44f7ab,"haxe.ui.toolkit.core.Root.self","haxe/ui/toolkit/core/Root.hx",2,0x06a667af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::Root_obj::__new();
}



Root_obj::Root_obj()
{
}

void Root_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Root);
	HX_MARK_MEMBER_NAME(_modalOverlay,"_modalOverlay");
	HX_MARK_MEMBER_NAME(_modalOverlayCounter,"_modalOverlayCounter");
	HX_MARK_MEMBER_NAME(_mousePos,"_mousePos");
	HX_MARK_MEMBER_NAME(mousePosition,"mousePosition");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Root_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_modalOverlay,"_modalOverlay");
	HX_VISIT_MEMBER_NAME(_modalOverlayCounter,"_modalOverlayCounter");
	HX_VISIT_MEMBER_NAME(_mousePos,"_mousePos");
	HX_VISIT_MEMBER_NAME(mousePosition,"mousePosition");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Root_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mousePos") ) { return _mousePos; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resizeRoot") ) { return resizeRoot_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_modalOverlay") ) { return _modalOverlay; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"mousePosition") ) { return inCallProp ? get_mousePosition() : mousePosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onScreenResize") ) { return _onScreenResize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"showModalOverlay") ) { return showModalOverlay_dyn(); }
		if (HX_FIELD_EQ(inName,"hideModalOverlay") ) { return hideModalOverlay_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_mousePosition") ) { return get_mousePosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_modalOverlayCounter") ) { return _modalOverlayCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Root_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_mousePos") ) { _mousePos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_modalOverlay") ) { _modalOverlay=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mousePosition") ) { mousePosition=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_modalOverlayCounter") ) { _modalOverlayCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Root_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_modalOverlay"));
	outFields->push(HX_CSTRING("_modalOverlayCounter"));
	outFields->push(HX_CSTRING("_mousePos"));
	outFields->push(HX_CSTRING("mousePosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(Root_obj,_modalOverlay),HX_CSTRING("_modalOverlay")},
	{hx::fsInt,(int)offsetof(Root_obj,_modalOverlayCounter),HX_CSTRING("_modalOverlayCounter")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Root_obj,_mousePos),HX_CSTRING("_mousePos")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Root_obj,mousePosition),HX_CSTRING("mousePosition")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_modalOverlay"),
	HX_CSTRING("_modalOverlayCounter"),
	HX_CSTRING("_mousePos"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("_onScreenResize"),
	HX_CSTRING("mousePosition"),
	HX_CSTRING("get_mousePosition"),
	HX_CSTRING("resizeRoot"),
	HX_CSTRING("showModalOverlay"),
	HX_CSTRING("hideModalOverlay"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Root_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Root_obj::__mClass,"__mClass");
};

#endif

Class Root_obj::__mClass;

void Root_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Root"), hx::TCanCast< Root_obj> ,sStaticFields,sMemberFields,
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

void Root_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
