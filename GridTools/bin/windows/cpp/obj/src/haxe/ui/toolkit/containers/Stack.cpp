#include <hxcpp.h>

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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Stack_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","new",0xb76a7480,"haxe.ui.toolkit.containers.Stack.new","haxe/ui/toolkit/containers/Stack.hx",10,0xfd2b75f0)
{
	HX_STACK_LINE(12)
	this->_selectedIndex = (int)0;
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->_clipContent = true;
}
;
	return null();
}

//Stack_obj::~Stack_obj() { }

Dynamic Stack_obj::__CreateEmpty() { return  new Stack_obj; }
hx::ObjectPtr< Stack_obj > Stack_obj::__new()
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::core::interfaces::IDisplayObject Stack_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","addChild",0xead9379b,"haxe.ui.toolkit.containers.Stack.addChild","haxe/ui/toolkit/containers/Stack.hx",27,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = this->super::addChild(child);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(29)
	r->__Field(HX_CSTRING("set_visible"),true)(((this->get_children()->length - (int)1) == this->_selectedIndex));
	HX_STACK_LINE(30)
	r->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
	HX_STACK_LINE(31)
	return r;
}


int Stack_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","get_selectedIndex",0x3e281e2e,"haxe.ui.toolkit.containers.Stack.get_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",40,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return this->_selectedIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,get_selectedIndex,return )

int Stack_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","set_selectedIndex",0x6195f63a,"haxe.ui.toolkit.containers.Stack.set_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",43,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(44)
	if (((value != this->_selectedIndex))){
		HX_STACK_LINE(45)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(46)
		{
			HX_STACK_LINE(46)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(46)
			int _g = this->get_children()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(46)
			while(((_g1 < _g))){
				HX_STACK_LINE(46)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(47)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > item = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new().Add(this->get_children()->__get(n));		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(48)
				if (((n == value))){
					HX_STACK_LINE(49)
					if (((transition == HX_CSTRING("slide")))){
						HX_STACK_LINE(50)
						if (((value > this->_selectedIndex))){
							HX_STACK_LINE(51)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(52)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(53)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(-(item->__get((int)0)->__Field(HX_CSTRING("get_width"),true)()));
							struct _Function_7_1{
								inline static Dynamic Block( ::haxe::ui::toolkit::containers::Stack_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",54,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("x") , __this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)(),false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",54,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(54)
							::motion::Actuate_obj::tween(item->__get((int)0),.2,_Function_7_1::Block(this),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(57)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(58)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(59)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(this->get_width());
							struct _Function_7_1{
								inline static Dynamic Block( ::haxe::ui::toolkit::containers::Stack_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",60,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("x") , __this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)(),false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",60,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(60)
							::motion::Actuate_obj::tween(item->__get((int)0),.2,_Function_7_1::Block(this),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_7_2()),null());
						}
					}
					else{
						HX_STACK_LINE(63)
						if (((transition == HX_CSTRING("fade")))){
							HX_STACK_LINE(64)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)());
							HX_STACK_LINE(65)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)0);
							HX_STACK_LINE(66)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(67)
							::flash::display::Sprite _g2 = item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g2,"_g2");
							struct _Function_7_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",67,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("alpha") , (int)1,false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",67,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(67)
							::motion::Actuate_obj::tween(_g2,.2,_Function_7_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(70)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)());
							HX_STACK_LINE(71)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(72)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
						}
					}
				}
				else{
					HX_STACK_LINE(75)
					if (((n == this->_selectedIndex))){
						HX_STACK_LINE(76)
						if (((transition == HX_CSTRING("slide")))){
							HX_STACK_LINE(77)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(78)
							if (((value > this->_selectedIndex))){
								struct _Function_8_1{
									inline static Dynamic Block( ::haxe::ui::toolkit::containers::Stack_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",79,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , __this->get_width(),false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",80,0xfd2b75f0)
									{
										HX_STACK_LINE(80)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(79)
								::motion::Actuate_obj::tween(item->__get((int)0),.2,_Function_8_1::Block(this),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								struct _Function_8_1{
									inline static Dynamic Block( Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > &item){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",83,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , -(item->__get((int)0)->__Field(HX_CSTRING("get_width"),true)()),false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",84,0xfd2b75f0)
									{
										HX_STACK_LINE(84)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(83)
								::motion::Actuate_obj::tween(item->__get((int)0),.2,_Function_8_1::Block(item),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
						}
						else{
							HX_STACK_LINE(87)
							if (((transition == HX_CSTRING("fade")))){
								HX_STACK_LINE(88)
								item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)());
								HX_STACK_LINE(89)
								::flash::display::Sprite _g11 = item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g11,"_g11");
								struct _Function_8_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",89,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("alpha") , (int)0,false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",90,0xfd2b75f0)
									{
										HX_STACK_LINE(90)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(89)
								::motion::Actuate_obj::tween(_g11,.2,_Function_8_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								HX_STACK_LINE(93)
								item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)());
								HX_STACK_LINE(94)
								item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
								HX_STACK_LINE(95)
								item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(100)
		this->_selectedIndex = value;
		HX_STACK_LINE(102)
		::flash::events::Event event = ::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(103)
		this->dispatchEvent(event);
	}
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,set_selectedIndex,return )

Dynamic Stack_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","clone",0xed82ff7d,"haxe.ui.toolkit.containers.Stack.clone","haxe/ui/toolkit/containers/Stack.hx",1,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Stack c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Stack_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","self",0xc909836c,"haxe.ui.toolkit.containers.Stack.self","haxe/ui/toolkit/containers/Stack.hx",2,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::Stack_obj::__new();
}



Stack_obj::Stack_obj()
{
}

Dynamic Stack_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stack_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("selectedIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stack_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("addChild"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#endif

Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.Stack"), hx::TCanCast< Stack_obj> ,sStaticFields,sMemberFields,
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

void Stack_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
