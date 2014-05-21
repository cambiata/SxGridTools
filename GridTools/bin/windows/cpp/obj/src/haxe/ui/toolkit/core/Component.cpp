#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Component_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Component","new",0xd3418002,"haxe.ui.toolkit.core.Component.new","haxe/ui/toolkit/core/Component.hx",15,0xbd12176e)
{
	HX_STACK_LINE(18)
	this->_disabled = false;
	HX_STACK_LINE(17)
	this->_clipContent = false;
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//Component_obj::~Component_obj() { }

Dynamic Component_obj::__CreateEmpty() { return  new Component_obj; }
hx::ObjectPtr< Component_obj > Component_obj::__new()
{  hx::ObjectPtr< Component_obj > result = new Component_obj();
	result->__construct();
	return result;}

Dynamic Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Component_obj > result = new Component_obj();
	result->__construct();
	return result;}

hx::Object *Component_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void Component_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","initialize",0xaf5d99ee,"haxe.ui.toolkit.core.Component.initialize","haxe/ui/toolkit/core/Component.hx",27,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::initialize();
		HX_STACK_LINE(29)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDraggable >()))){
			HX_STACK_LINE(30)
			this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onComponentMouseDown_dyn(),null(),null(),null());
		}
	}
return null();
}


Void Component_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","postInitialize",0x9cc4016e,"haxe.ui.toolkit.core.Component.postInitialize","haxe/ui/toolkit/core/Component.hx",35,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		if (((this->_disabled == true))){
			HX_STACK_LINE(36)
			this->set_disabled(true);
		}
	}
return null();
}


Void Component_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","invalidate",0x49cc8219,"haxe.ui.toolkit.core.Component.invalidate","haxe/ui/toolkit/core/Component.hx",40,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(41)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(45)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(46)
		this->_invalidating = true;
		HX_STACK_LINE(47)
		if (((bool((((int(type) & int((int)256))) == (int)256)) && bool((this->_clipContent == true))))){
			HX_STACK_LINE(48)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			this->get_sprite()->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,this->get_height()));
		}
		HX_STACK_LINE(50)
		this->_invalidating = false;
	}
return null();
}


::String Component_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_text",0x789ced54,"haxe.ui.toolkit.core.Component.get_text","haxe/ui/toolkit/core/Component.hx",69,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	return this->_text;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_text,return )

::String Component_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_text",0x26fa46c8,"haxe.ui.toolkit.core.Component.set_text","haxe/ui/toolkit/core/Component.hx",72,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	if (((value != null()))){
		HX_STACK_LINE(74)
		if ((::StringTools_obj::startsWith(value,HX_CSTRING("@#")))){
			HX_STACK_LINE(75)
			::String _g = (value.substr((int)2,value.length) + HX_CSTRING("_"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			value = (_g + ::haxe::ui::toolkit::core::Client_obj::get_instance()->get_language());
		}
		else{
			HX_STACK_LINE(76)
			if ((::StringTools_obj::startsWith(value,HX_CSTRING("asset://")))){
				HX_STACK_LINE(77)
				::String assetId = value.substr((int)8,value.length);		HX_STACK_VAR(assetId,"assetId");
				HX_STACK_LINE(78)
				value = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(assetId,null());
				HX_STACK_LINE(79)
				value = ::StringTools_obj::replace(value,HX_CSTRING("\r"),HX_CSTRING(""));
			}
		}
		HX_STACK_LINE(81)
		this->_text = value;
	}
	HX_STACK_LINE(83)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_text,return )

Float Component_obj::get_clipWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipWidth",0xdf1c270f,"haxe.ui.toolkit.core.Component.get_clipWidth","haxe/ui/toolkit/core/Component.hx",87,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	if (((this->get_sprite()->get_scrollRect() == null()))){
		HX_STACK_LINE(89)
		return this->get_width();
	}
	HX_STACK_LINE(91)
	return this->get_sprite()->get_scrollRect()->width;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipWidth,return )

Float Component_obj::set_clipWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipWidth",0x2422091b,"haxe.ui.toolkit.core.Component.set_clipWidth","haxe/ui/toolkit/core/Component.hx",94,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(95)
	this->get_sprite()->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,value,this->get_clipHeight()));
	HX_STACK_LINE(96)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipWidth,return )

Float Component_obj::get_clipHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipHeight",0x0fd57ebe,"haxe.ui.toolkit.core.Component.get_clipHeight","haxe/ui/toolkit/core/Component.hx",99,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	if (((this->get_sprite()->get_scrollRect() == null()))){
		HX_STACK_LINE(101)
		return this->get_height();
	}
	HX_STACK_LINE(103)
	return this->get_sprite()->get_scrollRect()->height;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipHeight,return )

Float Component_obj::set_clipHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipHeight",0x2ff56732,"haxe.ui.toolkit.core.Component.set_clipHeight","haxe/ui/toolkit/core/Component.hx",106,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(107)
	this->get_sprite()->set_scrollRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,this->get_clipWidth(),value));
	HX_STACK_LINE(108)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipHeight,return )

bool Component_obj::get_clipContent( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_clipContent",0xe4361282,"haxe.ui.toolkit.core.Component.get_clipContent","haxe/ui/toolkit/core/Component.hx",112,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	return this->_clipContent;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_clipContent,return )

bool Component_obj::set_clipContent( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_clipContent",0xe0018f8e,"haxe.ui.toolkit.core.Component.set_clipContent","haxe/ui/toolkit/core/Component.hx",115,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	this->_clipContent = value;
	HX_STACK_LINE(117)
	this->invalidate((int)256,null());
	HX_STACK_LINE(118)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_clipContent,return )

Void Component_obj::clearClip( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","clearClip",0x74f36c1f,"haxe.ui.toolkit.core.Component.clearClip","haxe/ui/toolkit/core/Component.hx",122,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		this->get_sprite()->set_scrollRect(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,clearClip,(void))

bool Component_obj::get_disabled( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_disabled",0xafa241a3,"haxe.ui.toolkit.core.Component.get_disabled","haxe/ui/toolkit/core/Component.hx",126,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	return this->_disabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_disabled,return )

bool Component_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_disabled",0xc49b6517,"haxe.ui.toolkit.core.Component.set_disabled","haxe/ui/toolkit/core/Component.hx",129,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(130)
	if (((value == true))){
		HX_STACK_LINE(131)
		if (((this->_cachedListeners == null()))){
			HX_STACK_LINE(132)
			this->_cachedListeners = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(135)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_eventListeners->keys());  __it->hasNext(); ){
			::String type = __it->next();
			if (((this->disablableEventType(type) == true))){
				HX_STACK_LINE(137)
				::List list = this->_eventListeners->get(type);		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(138)
				::List cachedList = this->_cachedListeners->get(type);		HX_STACK_VAR(cachedList,"cachedList");
				HX_STACK_LINE(139)
				if (((cachedList == null()))){
					HX_STACK_LINE(140)
					cachedList = ::List_obj::__new();
					HX_STACK_LINE(141)
					this->_cachedListeners->set(type,cachedList);
				}
				HX_STACK_LINE(143)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->iterator());  __it->hasNext(); ){
					Dynamic listener = __it->next();
					{
						HX_STACK_LINE(144)
						cachedList->push(listener);
						HX_STACK_LINE(145)
						this->removeEventListener(type,listener,null());
					}
;
				}
			}
;
		}
	}
	HX_STACK_LINE(151)
	this->_disabled = value;
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		while(((_g < _g1->length))){
			HX_STACK_LINE(152)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(152)
			++(_g);
			HX_STACK_LINE(153)
			if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::Component >()))){
				HX_STACK_LINE(154)
				(hx::TCast< haxe::ui::toolkit::core::Component >::cast(child))->set_disabled(value);
			}
		}
	}
	HX_STACK_LINE(158)
	if (((value == false))){
		HX_STACK_LINE(159)
		if (((this->_cachedListeners != null()))){
			HX_STACK_LINE(160)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_cachedListeners->keys());  __it->hasNext(); ){
				::String type = __it->next();
				{
					HX_STACK_LINE(161)
					::List list = this->_cachedListeners->get(type);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(162)
					for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(list->iterator());  __it->hasNext(); ){
						Dynamic listener = __it->next();
						this->addEventListener(type,listener,null(),null(),null());
					}
					HX_STACK_LINE(165)
					list->clear();
				}
;
			}
			HX_STACK_LINE(167)
			this->_cachedListeners = null();
		}
	}
	HX_STACK_LINE(171)
	if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >()))){
		HX_STACK_LINE(172)
		::haxe::ui::toolkit::core::StateComponent stateComponent;		HX_STACK_VAR(stateComponent,"stateComponent");
		HX_STACK_LINE(172)
		stateComponent = hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(173)
		if (((value == true))){
			HX_STACK_LINE(174)
			if ((stateComponent->hasState(HX_CSTRING("disabled")))){
				HX_STACK_LINE(175)
				stateComponent->set_state(HX_CSTRING("disabled"));
			}
		}
		else{
			HX_STACK_LINE(178)
			if ((stateComponent->hasState(HX_CSTRING("normal")))){
				HX_STACK_LINE(179)
				stateComponent->set_state(HX_CSTRING("normal"));
			}
		}
	}
	HX_STACK_LINE(184)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_disabled,return )

Dynamic Component_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","get_value",0x34d1f0ea,"haxe.ui.toolkit.core.Component.get_value","haxe/ui/toolkit/core/Component.hx",188,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	return this->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(Component_obj,get_value,return )

Dynamic Component_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","set_value",0x1822dcf6,"haxe.ui.toolkit.core.Component.set_value","haxe/ui/toolkit/core/Component.hx",191,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(192)
	this->set_text(newValue);
	HX_STACK_LINE(193)
	return newValue;
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,set_value,return )

Void Component_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","addEventListener",0xbc03beeb,"haxe.ui.toolkit.core.Component.addEventListener","haxe/ui/toolkit/core/Component.hx",200,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(201)
		if (((  (((this->_disabled == true))) ? bool((this->disablableEventType(type) == true)) : bool(false) ))){
			HX_STACK_LINE(202)
			if (((this->_cachedListeners == null()))){
				HX_STACK_LINE(203)
				this->_cachedListeners = ::haxe::ds::StringMap_obj::__new();
			}
			HX_STACK_LINE(205)
			::List list = this->_cachedListeners->get(type);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(206)
			if (((list == null()))){
				HX_STACK_LINE(207)
				list = ::List_obj::__new();
				HX_STACK_LINE(208)
				this->_cachedListeners->set(type,list);
			}
			HX_STACK_LINE(210)
			list->push(listener);
			HX_STACK_LINE(211)
			return null();
		}
		HX_STACK_LINE(213)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
	}
return null();
}


Void Component_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","removeEventListener",0x1d3c1b6c,"haxe.ui.toolkit.core.Component.removeEventListener","haxe/ui/toolkit/core/Component.hx",216,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(217)
		if (((  (((this->_disabled == true))) ? bool((this->disablableEventType(type) == true)) : bool(false) ))){
			HX_STACK_LINE(218)
			if (((this->_cachedListeners != null()))){
				HX_STACK_LINE(219)
				::List list = this->_cachedListeners->get(type);		HX_STACK_VAR(list,"list");
				HX_STACK_LINE(220)
				if (((list != null()))){
					HX_STACK_LINE(221)
					list->remove(listener);
					HX_STACK_LINE(222)
					if (((list->length == (int)0))){
						HX_STACK_LINE(223)
						this->_cachedListeners->remove(type);
					}
				}
			}
			HX_STACK_LINE(227)
			return null();
		}
		HX_STACK_LINE(229)
		this->super::removeEventListener(type,listener,useCapture);
	}
return null();
}


bool Component_obj::disablableEventType( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","disablableEventType",0x346fa09f,"haxe.ui.toolkit.core.Component.disablableEventType","haxe/ui/toolkit/core/Component.hx",233,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(233)
	return (bool((bool((bool((bool((bool((bool((type == ::flash::events::MouseEvent_obj::MOUSE_DOWN)) || bool((type == ::flash::events::MouseEvent_obj::MOUSE_MOVE)))) || bool((type == ::flash::events::MouseEvent_obj::MOUSE_OVER)))) || bool((type == ::flash::events::MouseEvent_obj::MOUSE_OUT)))) || bool((type == ::flash::events::MouseEvent_obj::MOUSE_UP)))) || bool((type == ::flash::events::MouseEvent_obj::MOUSE_WHEEL)))) || bool((type == ::flash::events::MouseEvent_obj::CLICK)));
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,disablableEventType,return )

Void Component_obj::_onComponentMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseDown",0x2ee9a3aa,"haxe.ui.toolkit.core.Component._onComponentMouseDown","haxe/ui/toolkit/core/Component.hx",246,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(247)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDraggable >()))){
			HX_STACK_LINE(248)
			if ((((hx::TCast< haxe::ui::toolkit::core::interfaces::IDraggable >::cast(hx::ObjectPtr<OBJ_>(this)))->allowDrag(event) == false))){
				HX_STACK_LINE(249)
				return null();
			}
		}
		HX_STACK_LINE(253)
		Float _g = (event->stageX - this->get_stageX());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		this->mouseDownPos = ::flash::geom::Point_obj::__new(_g,(event->stageY - this->get_stageY()));
		HX_STACK_LINE(254)
		this->get_root()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onComponentMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(255)
		this->get_root()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onComponentMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseDown,(void))

Void Component_obj::_onComponentMouseUp( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseUp",0xe3c12fa3,"haxe.ui.toolkit.core.Component._onComponentMouseUp","haxe/ui/toolkit/core/Component.hx",258,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(259)
		this->get_root()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onComponentMouseMove_dyn(),null());
		HX_STACK_LINE(260)
		this->get_root()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onComponentMouseUp_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseUp,(void))

Void Component_obj::_onComponentMouseMove( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Component","_onComponentMouseMove",0x34dc8e59,"haxe.ui.toolkit.core.Component._onComponentMouseMove","haxe/ui/toolkit/core/Component.hx",263,0xbd12176e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(264)
		this->set_x((event->stageX - this->mouseDownPos->x));
		HX_STACK_LINE(265)
		this->set_y((event->stageY - this->mouseDownPos->y));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Component_obj,_onComponentMouseMove,(void))

Dynamic Component_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","clone",0xf5d56f7f,"haxe.ui.toolkit.core.Component.clone","haxe/ui/toolkit/core/Component.hx",1,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_text(this->get_text());
	HX_STACK_LINE(4)
	c->set_disabled(this->get_disabled());
	HX_STACK_LINE(5)
	c->userData = this->userData;
	HX_STACK_LINE(6)
	c->set_value(this->get_value());
	HX_STACK_LINE(7)
	return c;
}


Dynamic Component_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Component","self",0x095c89aa,"haxe.ui.toolkit.core.Component.self","haxe/ui/toolkit/core/Component.hx",2,0xbd12176e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::Component_obj::__new();
}



Component_obj::Component_obj()
{
}

void Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Component);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_clipContent,"_clipContent");
	HX_MARK_MEMBER_NAME(_disabled,"_disabled");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(_cachedListeners,"_cachedListeners");
	HX_MARK_MEMBER_NAME(mouseDownPos,"mouseDownPos");
	::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_clipContent,"_clipContent");
	HX_VISIT_MEMBER_NAME(_disabled,"_disabled");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(_cachedListeners,"_cachedListeners");
	HX_VISIT_MEMBER_NAME(mouseDownPos,"mouseDownPos");
	::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Component_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		if (HX_FIELD_EQ(inName,"value") ) { return get_value(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { return get_disabled(); }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disabled") ) { return _disabled; }
		if (HX_FIELD_EQ(inName,"clipWidth") ) { return get_clipWidth(); }
		if (HX_FIELD_EQ(inName,"clearClip") ) { return clearClip_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"clipHeight") ) { return get_clipHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clipContent") ) { return get_clipContent(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clipContent") ) { return _clipContent; }
		if (HX_FIELD_EQ(inName,"get_disabled") ) { return get_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseDownPos") ) { return mouseDownPos; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_clipWidth") ) { return get_clipWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipWidth") ) { return set_clipWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clipHeight") ) { return get_clipHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipHeight") ) { return set_clipHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_clipContent") ) { return get_clipContent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clipContent") ) { return set_clipContent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListeners") ) { return _cachedListeners; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"disablableEventType") ) { return disablableEventType_dyn(); }
		if (HX_FIELD_EQ(inName,"_onComponentMouseUp") ) { return _onComponentMouseUp_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_onComponentMouseDown") ) { return _onComponentMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_onComponentMouseMove") ) { return _onComponentMouseMove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { return set_value(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { return set_disabled(inValue); }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disabled") ) { _disabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clipWidth") ) { return set_clipWidth(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clipHeight") ) { return set_clipHeight(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clipContent") ) { return set_clipContent(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clipContent") ) { _clipContent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDownPos") ) { mouseDownPos=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_cachedListeners") ) { _cachedListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_text"));
	outFields->push(HX_CSTRING("_clipContent"));
	outFields->push(HX_CSTRING("_disabled"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("clipWidth"));
	outFields->push(HX_CSTRING("clipHeight"));
	outFields->push(HX_CSTRING("clipContent"));
	outFields->push(HX_CSTRING("disabled"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("_cachedListeners"));
	outFields->push(HX_CSTRING("mouseDownPos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Component_obj,_text),HX_CSTRING("_text")},
	{hx::fsBool,(int)offsetof(Component_obj,_clipContent),HX_CSTRING("_clipContent")},
	{hx::fsBool,(int)offsetof(Component_obj,_disabled),HX_CSTRING("_disabled")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Component_obj,userData),HX_CSTRING("userData")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Component_obj,_cachedListeners),HX_CSTRING("_cachedListeners")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Component_obj,mouseDownPos),HX_CSTRING("mouseDownPos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_text"),
	HX_CSTRING("_clipContent"),
	HX_CSTRING("_disabled"),
	HX_CSTRING("initialize"),
	HX_CSTRING("postInitialize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("userData"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_clipWidth"),
	HX_CSTRING("set_clipWidth"),
	HX_CSTRING("get_clipHeight"),
	HX_CSTRING("set_clipHeight"),
	HX_CSTRING("get_clipContent"),
	HX_CSTRING("set_clipContent"),
	HX_CSTRING("clearClip"),
	HX_CSTRING("get_disabled"),
	HX_CSTRING("set_disabled"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_value"),
	HX_CSTRING("_cachedListeners"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("disablableEventType"),
	HX_CSTRING("mouseDownPos"),
	HX_CSTRING("_onComponentMouseDown"),
	HX_CSTRING("_onComponentMouseUp"),
	HX_CSTRING("_onComponentMouseMove"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Component_obj::__mClass,"__mClass");
};

#endif

Class Component_obj::__mClass;

void Component_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Component"), hx::TCanCast< Component_obj> ,sStaticFields,sMemberFields,
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

void Component_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
