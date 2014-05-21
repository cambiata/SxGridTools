#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_events_TimerEvent
#include <flash/events/TimerEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_utils_Timer
#include <flash/utils/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScrollLayout
#include <haxe/ui/toolkit/controls/HScrollLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
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
namespace controls{

Void HScroll_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","new",0x98b853b1,"haxe.ui.toolkit.controls.HScroll.new","haxe/ui/toolkit/controls/HScroll.hx",19,0x2a624a1f)
{
	HX_STACK_LINE(35)
	this->_hasButtons = true;
	HX_STACK_LINE(32)
	this->_scrollDirection = (int)0;
	HX_STACK_LINE(30)
	this->_mouseDownOffset = (int)-1;
	HX_STACK_LINE(24)
	this->_incrementSize = (int)20;
	HX_STACK_LINE(23)
	this->_pageSize = (int)0;
	HX_STACK_LINE(22)
	this->_max = (int)100;
	HX_STACK_LINE(21)
	this->_min = (int)0;
	HX_STACK_LINE(20)
	this->_pos = (int)0;
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->_layout = ::haxe::ui::toolkit::controls::HScrollLayout_obj::__new();
}
;
	return null();
}

//HScroll_obj::~HScroll_obj() { }

Dynamic HScroll_obj::__CreateEmpty() { return  new HScroll_obj; }
hx::ObjectPtr< HScroll_obj > HScroll_obj::__new()
{  hx::ObjectPtr< HScroll_obj > result = new HScroll_obj();
	result->__construct();
	return result;}

Dynamic HScroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HScroll_obj > result = new HScroll_obj();
	result->__construct();
	return result;}

hx::Object *HScroll_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IScrollable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
	return super::__ToInterface(inType);
}

Void HScroll_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","preInitialize",0x9b4871e4,"haxe.ui.toolkit.controls.HScroll.preInitialize","haxe/ui/toolkit/controls/HScroll.hx",45,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::preInitialize();
		HX_STACK_LINE(48)
		if (((this->_style != null()))){
			HX_STACK_LINE(49)
			this->_hasButtons = this->_style->get_hasButtons();
		}
	}
return null();
}


Void HScroll_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","initialize",0xd2332a1f,"haxe.ui.toolkit.controls.HScroll.initialize","haxe/ui/toolkit/controls/HScroll.hx",53,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->super::initialize();
		HX_STACK_LINE(56)
		if (((this->_hasButtons == true))){
			HX_STACK_LINE(57)
			this->_deincButton = ::haxe::ui::toolkit::controls::Button_obj::__new();
			HX_STACK_LINE(58)
			this->_deincButton->set_iconPosition(HX_CSTRING("center"));
			HX_STACK_LINE(59)
			this->_deincButton->set_width(this->get_layout()->__Field(HX_CSTRING("get_innerHeight"),true)());
			HX_STACK_LINE(60)
			this->_deincButton->set_percentHeight((int)100);
			HX_STACK_LINE(61)
			this->_deincButton->set_id(HX_CSTRING("deinc"));
			HX_STACK_LINE(62)
			this->_deincButton->set_styleName(HX_CSTRING("left"));
			HX_STACK_LINE(63)
			this->_deincButton->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onDeinc_dyn(),null(),null(),null());
			HX_STACK_LINE(64)
			this->addChild(this->_deincButton);
			HX_STACK_LINE(66)
			this->_incButton = ::haxe::ui::toolkit::controls::Button_obj::__new();
			HX_STACK_LINE(67)
			this->_incButton->set_iconPosition(HX_CSTRING("center"));
			HX_STACK_LINE(68)
			this->_incButton->set_width(this->get_layout()->__Field(HX_CSTRING("get_innerHeight"),true)());
			HX_STACK_LINE(69)
			this->_incButton->set_percentHeight((int)100);
			HX_STACK_LINE(70)
			this->_incButton->set_id(HX_CSTRING("inc"));
			HX_STACK_LINE(71)
			this->_incButton->set_styleName(HX_CSTRING("right"));
			HX_STACK_LINE(72)
			this->_incButton->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onInc_dyn(),null(),null(),null());
			HX_STACK_LINE(73)
			this->addChild(this->_incButton);
		}
		HX_STACK_LINE(76)
		this->_thumb = ::haxe::ui::toolkit::controls::Button_obj::__new();
		HX_STACK_LINE(77)
		this->_thumb->set_iconPosition(HX_CSTRING("center"));
		HX_STACK_LINE(78)
		this->_thumb->set_autoSize(false);
		HX_STACK_LINE(79)
		this->_thumb->set_width((int)50);
		HX_STACK_LINE(80)
		this->_thumb->set_percentHeight((int)100);
		HX_STACK_LINE(81)
		this->_thumb->set_id(HX_CSTRING("thumb"));
		HX_STACK_LINE(82)
		this->_thumb->set_styleName(HX_CSTRING("thumb"));
		HX_STACK_LINE(83)
		this->_thumb->set_remainPressed(true);
		HX_STACK_LINE(84)
		this->_thumb->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onThumbMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(85)
		this->addChild(this->_thumb);
		HX_STACK_LINE(87)
		this->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
	}
return null();
}


Void HScroll_obj::_onThumbMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onThumbMouseDown",0x2f974720,"haxe.ui.toolkit.controls.HScroll._onThumbMouseDown","haxe/ui/toolkit/controls/HScroll.hx",93,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(94)
		::flash::geom::Point ptStage = ::flash::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(ptStage,"ptStage");
		HX_STACK_LINE(95)
		this->_mouseDownOffset = (ptStage->x - this->_thumb->get_x());
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onThumbMouseDown,(void))

Void HScroll_obj::_onScreenMouseMove( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onScreenMouseMove",0xfa05b8fb,"haxe.ui.toolkit.controls.HScroll._onScreenMouseMove","haxe/ui/toolkit/controls/HScroll.hx",101,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		Float xpos = (event->stageX - this->_mouseDownOffset);		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(103)
		Float minX = (int)0;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(104)
		if (((this->_deincButton != null()))){
			HX_STACK_LINE(105)
			Float _g = this->_deincButton->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			minX = (_g + this->get_layout()->__Field(HX_CSTRING("get_spacingX"),true)());
		}
		HX_STACK_LINE(107)
		Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		Float maxX = (_g1 - this->_thumb->get_width());		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(108)
		if (((this->_deincButton != null()))){
			HX_STACK_LINE(109)
			Float _g2 = this->_deincButton->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(109)
			hx::AddEq(maxX,(_g2 + this->get_layout()->__Field(HX_CSTRING("get_spacingX"),true)()));
		}
		HX_STACK_LINE(111)
		if (((xpos < minX))){
			HX_STACK_LINE(112)
			xpos = minX;
		}
		else{
			HX_STACK_LINE(113)
			if (((xpos > maxX))){
				HX_STACK_LINE(114)
				xpos = maxX;
			}
		}
		HX_STACK_LINE(117)
		Float ucx = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(118)
		hx::SubEq(ucx,this->_thumb->get_width());
		HX_STACK_LINE(119)
		Float _g3 = this->get_max();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(119)
		int m = ::Std_obj::_int((_g3 - this->get_min()));		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(120)
		Float v = (xpos - minX);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(121)
		Float newValue = (this->get_min() + ((Float(v) / Float(ucx)) * m));		HX_STACK_VAR(newValue,"newValue");
		HX_STACK_LINE(122)
		this->set_pos(::Std_obj::_int(newValue));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onScreenMouseMove,(void))

Void HScroll_obj::_onScreenMouseUp( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onScreenMouseUp",0x139d0dc5,"haxe.ui.toolkit.controls.HScroll._onScreenMouseUp","haxe/ui/toolkit/controls/HScroll.hx",125,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(126)
		this->_mouseDownOffset = (int)-1;
		HX_STACK_LINE(127)
		if (((this->_scrollTimer != null()))){
			HX_STACK_LINE(128)
			this->_scrollTimer->stop();
		}
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null());
		HX_STACK_LINE(131)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onScreenMouseUp,(void))

Void HScroll_obj::_onDeinc( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onDeinc",0x47636aee,"haxe.ui.toolkit.controls.HScroll._onDeinc","haxe/ui/toolkit/controls/HScroll.hx",134,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(135)
		this->deincrementValue();
		HX_STACK_LINE(136)
		this->_scrollDirection = (int)0;
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(138)
		if (((this->_scrollTimer == null()))){
			HX_STACK_LINE(139)
			this->_scrollTimer = ::flash::utils::Timer_obj::__new((int)50,(int)1);
			HX_STACK_LINE(140)
			this->_scrollTimer->addEventListener(::flash::events::TimerEvent_obj::TIMER_COMPLETE,this->_onScrollTimerComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(142)
		this->_scrollTimer->reset();
		HX_STACK_LINE(143)
		this->_scrollTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onDeinc,(void))

Void HScroll_obj::_onInc( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onInc",0xb8e88d8f,"haxe.ui.toolkit.controls.HScroll._onInc","haxe/ui/toolkit/controls/HScroll.hx",146,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(147)
		this->incrementValue();
		HX_STACK_LINE(148)
		this->_scrollDirection = (int)1;
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(150)
		if (((this->_scrollTimer == null()))){
			HX_STACK_LINE(151)
			this->_scrollTimer = ::flash::utils::Timer_obj::__new((int)50,(int)1);
			HX_STACK_LINE(152)
			this->_scrollTimer->addEventListener(::flash::events::TimerEvent_obj::TIMER_COMPLETE,this->_onScrollTimerComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(154)
		this->_scrollTimer->reset();
		HX_STACK_LINE(155)
		this->_scrollTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onInc,(void))

Void HScroll_obj::_onScrollTimerComplete( ::flash::events::TimerEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onScrollTimerComplete",0xc72ab002,"haxe.ui.toolkit.controls.HScroll._onScrollTimerComplete","haxe/ui/toolkit/controls/HScroll.hx",159,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(159)
		if (((this->_scrollTimer != null()))){
			HX_STACK_LINE(160)
			if (((this->_scrollDirection == (int)1))){
				HX_STACK_LINE(161)
				this->incrementValue();
			}
			else{
				HX_STACK_LINE(162)
				if (((this->_scrollDirection == (int)0))){
					HX_STACK_LINE(163)
					this->deincrementValue();
				}
			}
			HX_STACK_LINE(165)
			this->_scrollTimer->reset();
			HX_STACK_LINE(166)
			this->_scrollTimer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onScrollTimerComplete,(void))

Void HScroll_obj::_onMouseDown( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","_onMouseDown",0xa5124c98,"haxe.ui.toolkit.controls.HScroll._onMouseDown","haxe/ui/toolkit/controls/HScroll.hx",170,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(171)
		bool performPaging = !(this->_thumb->hitTest(event->stageX,event->stageY));		HX_STACK_VAR(performPaging,"performPaging");
		HX_STACK_LINE(172)
		if (((  (((this->_deincButton != null()))) ? bool((this->_deincButton->hitTest(event->stageX,event->stageY) == true)) : bool(false) ))){
			HX_STACK_LINE(173)
			performPaging = false;
		}
		HX_STACK_LINE(175)
		if (((  (((this->_incButton != null()))) ? bool((this->_incButton->hitTest(event->stageX,event->stageY) == true)) : bool(false) ))){
			HX_STACK_LINE(176)
			performPaging = false;
		}
		HX_STACK_LINE(178)
		if (((performPaging == true))){
			HX_STACK_LINE(179)
			if (((event->localX > this->_thumb->get_x()))){
				HX_STACK_LINE(180)
				::haxe::ui::toolkit::controls::HScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(180)
				Float _g1 = _g->get_pos();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(180)
				_g->set_pos((_g1 + this->get_pageSize()));
			}
			else{
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::controls::HScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				Float _g1 = _g->get_pos();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				_g->set_pos((_g1 - this->get_pageSize()));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,_onMouseDown,(void))

Float HScroll_obj::get_pos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","get_pos",0xe2a125fc,"haxe.ui.toolkit.controls.HScroll.get_pos","haxe/ui/toolkit/controls/HScroll.hx",217,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	return this->_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,get_pos,return )

Float HScroll_obj::set_pos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","set_pos",0xd5a2b708,"haxe.ui.toolkit.controls.HScroll.set_pos","haxe/ui/toolkit/controls/HScroll.hx",220,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(221)
	if (((value < this->_min))){
		HX_STACK_LINE(222)
		value = this->_min;
	}
	HX_STACK_LINE(224)
	if (((value > this->_max))){
		HX_STACK_LINE(225)
		value = this->_max;
	}
	HX_STACK_LINE(227)
	if (((value != this->_pos))){
		HX_STACK_LINE(228)
		this->_pos = value;
		HX_STACK_LINE(229)
		::flash::events::Event changeEvent = ::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(230)
		this->dispatchEvent(changeEvent);
		HX_STACK_LINE(231)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(233)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,set_pos,return )

Float HScroll_obj::get_min( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","get_min",0xe29ed9fa,"haxe.ui.toolkit.controls.HScroll.get_min","haxe/ui/toolkit/controls/HScroll.hx",237,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return this->_min;
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,get_min,return )

Float HScroll_obj::set_min( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","set_min",0xd5a06b06,"haxe.ui.toolkit.controls.HScroll.set_min","haxe/ui/toolkit/controls/HScroll.hx",240,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	if (((value != this->_min))){
		HX_STACK_LINE(242)
		this->_min = value;
		HX_STACK_LINE(243)
		if (((this->_pos < this->_min))){
			HX_STACK_LINE(244)
			this->_pos = this->_min;
		}
		HX_STACK_LINE(246)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(248)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,set_min,return )

Float HScroll_obj::get_max( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","get_max",0xe29ed30c,"haxe.ui.toolkit.controls.HScroll.get_max","haxe/ui/toolkit/controls/HScroll.hx",252,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	return this->_max;
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,get_max,return )

Float HScroll_obj::set_max( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","set_max",0xd5a06418,"haxe.ui.toolkit.controls.HScroll.set_max","haxe/ui/toolkit/controls/HScroll.hx",255,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(256)
	if (((value != this->_max))){
		HX_STACK_LINE(257)
		this->_max = value;
		HX_STACK_LINE(258)
		if (((this->_pos > this->_max))){
			HX_STACK_LINE(259)
			this->_pos = this->_max;
		}
		HX_STACK_LINE(261)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(263)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,set_max,return )

Float HScroll_obj::get_pageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","get_pageSize",0x38383948,"haxe.ui.toolkit.controls.HScroll.get_pageSize","haxe/ui/toolkit/controls/HScroll.hx",267,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	return this->_pageSize;
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,get_pageSize,return )

Float HScroll_obj::set_pageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","set_pageSize",0x4d315cbc,"haxe.ui.toolkit.controls.HScroll.set_pageSize","haxe/ui/toolkit/controls/HScroll.hx",270,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(271)
	if (((value != this->_pageSize))){
		HX_STACK_LINE(272)
		this->_pageSize = value;
		HX_STACK_LINE(273)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(275)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,set_pageSize,return )

Float HScroll_obj::get_incrementSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","get_incrementSize",0x382d70f8,"haxe.ui.toolkit.controls.HScroll.get_incrementSize","haxe/ui/toolkit/controls/HScroll.hx",279,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	return this->_incrementSize;
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,get_incrementSize,return )

Float HScroll_obj::set_incrementSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","set_incrementSize",0x5b9b4904,"haxe.ui.toolkit.controls.HScroll.set_incrementSize","haxe/ui/toolkit/controls/HScroll.hx",282,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(283)
	this->_incrementSize = value;
	HX_STACK_LINE(284)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(HScroll_obj,set_incrementSize,return )

Void HScroll_obj::deincrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","deincrementValue",0xbf2a3412,"haxe.ui.toolkit.controls.HScroll.deincrementValue","haxe/ui/toolkit/controls/HScroll.hx",294,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::controls::HScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(294)
		_g->set_pos((_g->get_pos() - this->_incrementSize));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,deincrementValue,(void))

Void HScroll_obj::incrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","incrementValue",0xe23d2b11,"haxe.ui.toolkit.controls.HScroll.incrementValue","haxe/ui/toolkit/controls/HScroll.hx",301,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::HScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		_g->set_pos((_g->get_pos() + this->_incrementSize));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HScroll_obj,incrementValue,(void))

Dynamic HScroll_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","clone",0x256bccee,"haxe.ui.toolkit.controls.HScroll.clone","haxe/ui/toolkit/controls/HScroll.hx",1,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HScroll c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_pos(this->get_pos());
	HX_STACK_LINE(4)
	c->set_min(this->get_min());
	HX_STACK_LINE(5)
	c->set_max(this->get_max());
	HX_STACK_LINE(6)
	c->set_pageSize(this->get_pageSize());
	HX_STACK_LINE(7)
	c->set_incrementSize(this->get_incrementSize());
	HX_STACK_LINE(8)
	return c;
}


Dynamic HScroll_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScroll","self",0x0bdeef1b,"haxe.ui.toolkit.controls.HScroll.self","haxe/ui/toolkit/controls/HScroll.hx",2,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::HScroll_obj::__new();
}



HScroll_obj::HScroll_obj()
{
}

void HScroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScroll);
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pageSize,"_pageSize");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_deincButton,"_deincButton");
	HX_MARK_MEMBER_NAME(_incButton,"_incButton");
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_MARK_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_MARK_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_MARK_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HScroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pageSize,"_pageSize");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_deincButton,"_deincButton");
	HX_VISIT_MEMBER_NAME(_incButton,"_incButton");
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_VISIT_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_VISIT_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_VISIT_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HScroll_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return get_pos(); }
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return _thumb; }
		if (HX_FIELD_EQ(inName,"_onInc") ) { return _onInc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onDeinc") ) { return _onDeinc_dyn(); }
		if (HX_FIELD_EQ(inName,"pageSize") ) { return get_pageSize(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { return _pageSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { return _incButton; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { return _hasButtons; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { return _deincButton; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { return _scrollTimer; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return get_pageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return set_pageSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return get_incrementSize(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return _incrementSize; }
		if (HX_FIELD_EQ(inName,"incrementValue") ) { return incrementValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { return _scrollDirection; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"deincrementValue") ) { return deincrementValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return _onThumbMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return get_incrementSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return set_incrementSize_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_onScrollTimerComplete") ) { return _onScrollTimerComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HScroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		if (HX_FIELD_EQ(inName,"min") ) { return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { return set_pageSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { _pageSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { _incButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { _hasButtons=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { _deincButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { _scrollTimer=inValue.Cast< ::flash::utils::Timer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return set_incrementSize(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { _scrollDirection=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HScroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pos"));
	outFields->push(HX_CSTRING("_min"));
	outFields->push(HX_CSTRING("_max"));
	outFields->push(HX_CSTRING("_pageSize"));
	outFields->push(HX_CSTRING("_incrementSize"));
	outFields->push(HX_CSTRING("_deincButton"));
	outFields->push(HX_CSTRING("_incButton"));
	outFields->push(HX_CSTRING("_thumb"));
	outFields->push(HX_CSTRING("_mouseDownOffset"));
	outFields->push(HX_CSTRING("_scrollDirection"));
	outFields->push(HX_CSTRING("_scrollTimer"));
	outFields->push(HX_CSTRING("_hasButtons"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("pageSize"));
	outFields->push(HX_CSTRING("incrementSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(HScroll_obj,_pos),HX_CSTRING("_pos")},
	{hx::fsFloat,(int)offsetof(HScroll_obj,_min),HX_CSTRING("_min")},
	{hx::fsFloat,(int)offsetof(HScroll_obj,_max),HX_CSTRING("_max")},
	{hx::fsFloat,(int)offsetof(HScroll_obj,_pageSize),HX_CSTRING("_pageSize")},
	{hx::fsFloat,(int)offsetof(HScroll_obj,_incrementSize),HX_CSTRING("_incrementSize")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(HScroll_obj,_deincButton),HX_CSTRING("_deincButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(HScroll_obj,_incButton),HX_CSTRING("_incButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(HScroll_obj,_thumb),HX_CSTRING("_thumb")},
	{hx::fsFloat,(int)offsetof(HScroll_obj,_mouseDownOffset),HX_CSTRING("_mouseDownOffset")},
	{hx::fsInt,(int)offsetof(HScroll_obj,_scrollDirection),HX_CSTRING("_scrollDirection")},
	{hx::fsObject /*::flash::utils::Timer*/ ,(int)offsetof(HScroll_obj,_scrollTimer),HX_CSTRING("_scrollTimer")},
	{hx::fsBool,(int)offsetof(HScroll_obj,_hasButtons),HX_CSTRING("_hasButtons")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pos"),
	HX_CSTRING("_min"),
	HX_CSTRING("_max"),
	HX_CSTRING("_pageSize"),
	HX_CSTRING("_incrementSize"),
	HX_CSTRING("_deincButton"),
	HX_CSTRING("_incButton"),
	HX_CSTRING("_thumb"),
	HX_CSTRING("_mouseDownOffset"),
	HX_CSTRING("_scrollDirection"),
	HX_CSTRING("_scrollTimer"),
	HX_CSTRING("_hasButtons"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("_onThumbMouseDown"),
	HX_CSTRING("_onScreenMouseMove"),
	HX_CSTRING("_onScreenMouseUp"),
	HX_CSTRING("_onDeinc"),
	HX_CSTRING("_onInc"),
	HX_CSTRING("_onScrollTimerComplete"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("get_min"),
	HX_CSTRING("set_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("set_max"),
	HX_CSTRING("get_pageSize"),
	HX_CSTRING("set_pageSize"),
	HX_CSTRING("get_incrementSize"),
	HX_CSTRING("set_incrementSize"),
	HX_CSTRING("deincrementValue"),
	HX_CSTRING("incrementValue"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScroll_obj::__mClass,"__mClass");
};

#endif

Class HScroll_obj::__mClass;

void HScroll_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.HScroll"), hx::TCanCast< HScroll_obj> ,sStaticFields,sMemberFields,
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

void HScroll_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
