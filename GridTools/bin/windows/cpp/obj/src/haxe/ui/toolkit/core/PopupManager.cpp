#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_BusyPopupContent
#include <haxe/ui/toolkit/controls/popups/BusyPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CalendarPopupContent
#include <haxe/ui/toolkit/controls/popups/CalendarPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#include <haxe/ui/toolkit/controls/popups/CustomPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_ListPopupContent
#include <haxe/ui/toolkit/controls/popups/ListPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
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
namespace core{

Void PopupManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","new",0xa4c2ad20,"haxe.ui.toolkit.core.PopupManager.new","haxe/ui/toolkit/core/PopupManager.hx",18,0xc348cc90)
{
	HX_STACK_LINE(32)
	this->defaultWidth = (int)300;
	HX_STACK_LINE(31)
	this->defaultTitle = HX_CSTRING("HaxeUI");
}
;
	return null();
}

//PopupManager_obj::~PopupManager_obj() { }

Dynamic PopupManager_obj::__CreateEmpty() { return  new PopupManager_obj; }
hx::ObjectPtr< PopupManager_obj > PopupManager_obj::__new()
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

Dynamic PopupManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showSimple( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showSimple",0x472de44f,"haxe.ui.toolkit.core.PopupManager.showSimple","haxe/ui/toolkit/core/PopupManager.hx",38,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(::haxe::ui::toolkit::controls::popups::SimplePopupContent_obj::__new(text),title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(40)
		this->showPopup(p);
		HX_STACK_LINE(41)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showSimple,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCustom( ::haxe::ui::toolkit::core::interfaces::IDisplayObject display,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCustom",0xce4167ce,"haxe.ui.toolkit.core.PopupManager.showCustom","haxe/ui/toolkit/core/PopupManager.hx",44,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(::haxe::ui::toolkit::controls::popups::CustomPopupContent_obj::__new(display),title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(46)
		this->showPopup(p);
		HX_STACK_LINE(47)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showCustom,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showList( Dynamic items,hx::Null< int >  __o_selectedIndex,::String title,Dynamic config,Dynamic fn){
int selectedIndex = __o_selectedIndex.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showList",0x83f2cb3b,"haxe.ui.toolkit.core.PopupManager.showList","haxe/ui/toolkit/core/PopupManager.hx",50,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(selectedIndex,"selectedIndex")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::data::IDataSource ds = null();		HX_STACK_VAR(ds,"ds");
		HX_STACK_LINE(52)
		if ((::Std_obj::is(items,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(53)
			Dynamic arr;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(53)
			arr = hx::TCastToArray(items);
			HX_STACK_LINE(54)
			ds = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(55)
				while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(55)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(55)
					++(_g);
					HX_STACK_LINE(56)
					if ((::Std_obj::is(item,hx::ClassOf< ::String >()))){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",57,0xc348cc90)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						Dynamic o = _Function_5_1::Block();		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(58)
						o->__FieldRef(HX_CSTRING("text")) = hx::TCast< String >::cast(item);
						HX_STACK_LINE(59)
						ds->add(o);
					}
					else{
						HX_STACK_LINE(61)
						ds->add(item);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(64)
			if ((::Std_obj::is(items,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >()))){
				HX_STACK_LINE(65)
				ds = hx::TCast< haxe::ui::toolkit::data::IDataSource >::cast(items);
			}
		}
		HX_STACK_LINE(68)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(::haxe::ui::toolkit::controls::popups::ListPopupContent_obj::__new(ds,selectedIndex,fn),title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(69)
		this->showPopup(p);
		HX_STACK_LINE(70)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showList,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCalendar( ::String title,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCalendar",0x3f66401b,"haxe.ui.toolkit.core.PopupManager.showCalendar","haxe/ui/toolkit/core/PopupManager.hx",73,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(73)
	Dynamic fn1 = Dynamic( Array_obj<Dynamic>::__new().Add(fn));		HX_STACK_VAR(fn1,"fn1");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",74,0xc348cc90)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("modal") , true,false);
				__result->Add(HX_CSTRING("buttons") , (int)69632,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	Dynamic config = _Function_1_1::Block();		HX_STACK_VAR(config,"config");
	HX_STACK_LINE(75)
	Array< ::Dynamic > content = Array_obj< ::Dynamic >::__new().Add(::haxe::ui::toolkit::controls::popups::CalendarPopupContent_obj::__new());		HX_STACK_VAR(content,"content");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,content,Dynamic,fn1)
	Void run(Dynamic button){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/core/PopupManager.hx",77,0xc348cc90)
		HX_STACK_ARG(button,"button")
		{
			HX_STACK_LINE(77)
			if (((fn1->__GetItem((int)0) != null()))){
				HX_STACK_LINE(78)
				if (((button == (int)65536))){
					HX_STACK_LINE(79)
					fn1->__GetItem((int)0)(button,content->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::CalendarPopupContent >()->get_selectedDate()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(81)
					fn1->__GetItem((int)0)(button,null()).Cast< Void >();
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(76)
	Dynamic tempFn =  Dynamic(new _Function_1_2(content,fn1));		HX_STACK_VAR(tempFn,"tempFn");
	HX_STACK_LINE(86)
	::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(content->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::CalendarPopupContent >(),title,config,tempFn);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(87)
	this->showPopup(p);
	HX_STACK_LINE(88)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,showCalendar,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showBusy( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showBusy",0x7d5fc416,"haxe.ui.toolkit.core.PopupManager.showBusy","haxe/ui/toolkit/core/PopupManager.hx",91,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(91)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		if (((config == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",93,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			config = _Function_2_1::Block();
		}
		HX_STACK_LINE(95)
		config->__FieldRef(HX_CSTRING("useDefaultTitle")) = false;
		HX_STACK_LINE(96)
		Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new().Add(this->buildPopup(::haxe::ui::toolkit::controls::popups::BusyPopupContent_obj::__new(text),title,config,fn));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(97)
		this->showPopup(p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >());
		HX_STACK_LINE(99)
		if (((delay > (int)0))){
			HX_STACK_LINE(100)
			Array< ::Dynamic > timer = Array_obj< ::Dynamic >::__new().Add(::haxe::Timer_obj::__new(delay));		HX_STACK_VAR(timer,"timer");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,timer,Array< ::Dynamic >,p)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/core/PopupManager.hx",101,0xc348cc90)
				{
					HX_STACK_LINE(102)
					timer->__get((int)0).StaticCast< ::haxe::Timer >()->stop();
					HX_STACK_LINE(103)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupManager >()->hidePopup(p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(101)
			timer->__get((int)0).StaticCast< ::haxe::Timer >()->run =  Dynamic(new _Function_2_1(_g,timer,p));
		}
		HX_STACK_LINE(107)
		return p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showBusy,return )

Void PopupManager_obj::showPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showPopup",0x420e5caf,"haxe.ui.toolkit.core.PopupManager.showPopup","haxe/ui/toolkit/core/PopupManager.hx",110,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(111)
		bool modal = true;		HX_STACK_VAR(modal,"modal");
		HX_STACK_LINE(112)
		if (((p->get_config()->__Field(HX_CSTRING("modal"),true) != null()))){
			HX_STACK_LINE(113)
			modal = p->get_config()->__Field(HX_CSTRING("modal"),true);
		}
		HX_STACK_LINE(115)
		if (((modal == true))){
			HX_STACK_LINE(116)
			p->get_root()->showModalOverlay();
		}
		HX_STACK_LINE(118)
		p->get_root()->addChild(p);
		HX_STACK_LINE(119)
		this->centerPopup(p);
		HX_STACK_LINE(121)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(122)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(123)
			Float ypos = p->get_y();		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(124)
			p->set_y(-(p->get_height()));
			HX_STACK_LINE(125)
			p->set_visible(true);
			struct _Function_2_1{
				inline static Dynamic Block( Float &ypos){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",126,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , ypos,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",126,0xc348cc90)
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(126)
			::motion::Actuate_obj::tween(p,.2,_Function_2_1::Block(ypos),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_2_2()),null());
		}
		else{
			HX_STACK_LINE(128)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(129)
				p->get_sprite()->set_alpha((int)0);
				HX_STACK_LINE(130)
				p->set_visible(true);
				HX_STACK_LINE(131)
				::flash::display::Sprite _g = p->get_sprite();		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",131,0xc348cc90)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",131,0xc348cc90)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(131)
				::motion::Actuate_obj::tween(_g,.2,_Function_3_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(134)
				p->set_visible(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,showPopup,(void))

Void PopupManager_obj::hidePopup( ::haxe::ui::toolkit::controls::popups::Popup p,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","hidePopup",0x6f08b2ca,"haxe.ui.toolkit.core.PopupManager.hidePopup","haxe/ui/toolkit/core/PopupManager.hx",138,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(138)
		Array< bool > dispose1 = Array_obj< bool >::__new().Add(dispose);		HX_STACK_VAR(dispose1,"dispose1");
		HX_STACK_LINE(138)
		Array< ::Dynamic > p1 = Array_obj< ::Dynamic >::__new().Add(p);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(139)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(140)
		if (((transition == HX_CSTRING("slide")))){
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::Dynamic > &p1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",141,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->get_height(),false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< bool >,dispose1,Array< ::Dynamic >,p1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",141,0xc348cc90)
				{
					HX_STACK_LINE(142)
					p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
					HX_STACK_LINE(143)
					p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(141)
			::motion::Actuate_obj::tween(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),.2,_Function_2_1::Block(p1),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_2_2(dispose1,p1)),null());
		}
		else{
			HX_STACK_LINE(145)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(146)
				::flash::display::Sprite _g = p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_sprite();		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",146,0xc348cc90)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,Array< bool >,dispose1,Array< ::Dynamic >,p1)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",146,0xc348cc90)
					{
						HX_STACK_LINE(147)
						p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
						HX_STACK_LINE(148)
						p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(146)
				::motion::Actuate_obj::tween(_g,.2,_Function_3_1::Block(),true,null())->ease(::motion::easing::Linear_obj::get_easeNone())->onComplete( Dynamic(new _Function_3_2(dispose1,p1)),null());
			}
			else{
				HX_STACK_LINE(151)
				p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
				HX_STACK_LINE(152)
				p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,hidePopup,(void))

Void PopupManager_obj::centerPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","centerPopup",0x061eacd7,"haxe.ui.toolkit.core.PopupManager.centerPopup","haxe/ui/toolkit/core/PopupManager.hx",156,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(157)
		Float _g = (Float(p->get_root()->get_width()) / Float((int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		p->set_x(::Std_obj::_int((_g - (Float(p->get_width()) / Float((int)2)))));
		HX_STACK_LINE(158)
		Float _g1 = (Float(p->get_root()->get_height()) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		p->set_y(::Std_obj::_int((_g1 - (Float(p->get_height()) / Float((int)2)))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,centerPopup,(void))

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::buildPopup( ::haxe::ui::toolkit::controls::popups::PopupContent content,::String title,Dynamic config,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildPopup",0x8042935e,"haxe.ui.toolkit.core.PopupManager.buildPopup","haxe/ui/toolkit/core/PopupManager.hx",161,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(content,"content")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(162)
	config = this->buildConfig(config);
	HX_STACK_LINE(163)
	if (((bool((title == null())) && bool((config->__Field(HX_CSTRING("useDefaultTitle"),true) == true))))){
		HX_STACK_LINE(164)
		title = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultTitle;
	}
	HX_STACK_LINE(166)
	::haxe::ui::toolkit::controls::popups::Popup p = ::haxe::ui::toolkit::controls::popups::Popup_obj::__new(title,content,config,fn);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(167)
	p->set_root(config->__Field(HX_CSTRING("root"),true));
	HX_STACK_LINE(168)
	p->set_visible(false);
	HX_STACK_LINE(170)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,buildPopup,return )

Dynamic PopupManager_obj::buildConfig( Dynamic config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildConfig",0x85fcd950,"haxe.ui.toolkit.core.PopupManager.buildConfig","haxe/ui/toolkit/core/PopupManager.hx",173,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",174,0xc348cc90)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(174)
	Dynamic c = _Function_1_1::Block();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(175)
	c->__FieldRef(HX_CSTRING("id")) = null();
	HX_STACK_LINE(176)
	c->__FieldRef(HX_CSTRING("styleName")) = null();
	HX_STACK_LINE(177)
	c->__FieldRef(HX_CSTRING("modal")) = true;
	HX_STACK_LINE(178)
	c->__FieldRef(HX_CSTRING("width")) = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultWidth;
	HX_STACK_LINE(179)
	c->__FieldRef(HX_CSTRING("useDefaultTitle")) = true;
	HX_STACK_LINE(180)
	c->__FieldRef(HX_CSTRING("root")) = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->get_currentRoot();
	HX_STACK_LINE(182)
	if (((  (((config != null()))) ? bool((::Std_obj::is(config,hx::ClassOf< ::Int >()) == false)) : bool(false) ))){
		HX_STACK_LINE(183)
		if (((config->__Field(HX_CSTRING("id"),true) != null()))){
			HX_STACK_LINE(183)
			c->__FieldRef(HX_CSTRING("id")) = config->__Field(HX_CSTRING("id"),true);
		}
		else{
			HX_STACK_LINE(183)
			c->__FieldRef(HX_CSTRING("id")) = null();
		}
		HX_STACK_LINE(184)
		if (((config->__Field(HX_CSTRING("styleName"),true) != null()))){
			HX_STACK_LINE(184)
			c->__FieldRef(HX_CSTRING("styleName")) = config->__Field(HX_CSTRING("styleName"),true);
		}
		else{
			HX_STACK_LINE(184)
			c->__FieldRef(HX_CSTRING("styleName")) = null();
		}
		HX_STACK_LINE(185)
		if (((config->__Field(HX_CSTRING("modal"),true) != null()))){
			HX_STACK_LINE(185)
			c->__FieldRef(HX_CSTRING("modal")) = config->__Field(HX_CSTRING("modal"),true);
		}
		else{
			HX_STACK_LINE(185)
			c->__FieldRef(HX_CSTRING("modal")) = true;
		}
		HX_STACK_LINE(186)
		if (((config->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(186)
			c->__FieldRef(HX_CSTRING("width")) = config->__Field(HX_CSTRING("width"),true);
		}
		else{
			HX_STACK_LINE(186)
			c->__FieldRef(HX_CSTRING("width")) = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultWidth;
		}
		HX_STACK_LINE(187)
		if (((config->__Field(HX_CSTRING("useDefaultTitle"),true) != null()))){
			HX_STACK_LINE(187)
			c->__FieldRef(HX_CSTRING("useDefaultTitle")) = config->__Field(HX_CSTRING("useDefaultTitle"),true);
		}
		else{
			HX_STACK_LINE(187)
			c->__FieldRef(HX_CSTRING("useDefaultTitle")) = true;
		}
		HX_STACK_LINE(188)
		if (((config->__Field(HX_CSTRING("root"),true) != null()))){
			HX_STACK_LINE(188)
			c->__FieldRef(HX_CSTRING("root")) = config->__Field(HX_CSTRING("root"),true);
		}
		else{
			HX_STACK_LINE(188)
			c->__FieldRef(HX_CSTRING("root")) = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->get_currentRoot();
		}
	}
	HX_STACK_LINE(191)
	c->__FieldRef(HX_CSTRING("buttons")) = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(192)
	if (((config != null()))){
		HX_STACK_LINE(193)
		if ((::Std_obj::is(config,hx::ClassOf< ::Int >()))){
			HX_STACK_LINE(194)
			c->__FieldRef(HX_CSTRING("buttons")) = this->buildButtonArray(config);
		}
		else{
			HX_STACK_LINE(195)
			if ((::Std_obj::is(config,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(196)
				c->__FieldRef(HX_CSTRING("buttons")) = this->buildButtonArray(config);
			}
			else{
				HX_STACK_LINE(198)
				if (((config->__Field(HX_CSTRING("buttons"),true) != null()))){
					HX_STACK_LINE(199)
					c->__FieldRef(HX_CSTRING("buttons")) = this->buildButtonArray(config->__Field(HX_CSTRING("buttons"),true));
				}
			}
		}
	}
	HX_STACK_LINE(204)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildConfig,return )

Array< ::Dynamic > PopupManager_obj::buildButtonArray( Dynamic data){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildButtonArray",0x4865a8f9,"haxe.ui.toolkit.core.PopupManager.buildButtonArray","haxe/ui/toolkit/core/PopupManager.hx",207,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(208)
	Array< ::Dynamic > buttons = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(buttons,"buttons");
	HX_STACK_LINE(209)
	if ((::Std_obj::is(data,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(210)
		int n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(210)
		n = hx::TCast< Int >::cast(data);
		HX_STACK_LINE(211)
		if (((((int(n) & int((int)1))) == (int)1))){
			HX_STACK_LINE(212)
			buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)1,null(),null()));
		}
		HX_STACK_LINE(214)
		if (((((int(n) & int((int)16))) == (int)16))){
			HX_STACK_LINE(215)
			buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)16,null(),null()));
		}
		HX_STACK_LINE(217)
		if (((((int(n) & int((int)256))) == (int)256))){
			HX_STACK_LINE(218)
			buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)256,null(),null()));
		}
		HX_STACK_LINE(220)
		if (((((int(n) & int((int)4096))) == (int)4096))){
			HX_STACK_LINE(221)
			buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)4096,null(),null()));
		}
		HX_STACK_LINE(223)
		if (((((int(n) & int((int)65536))) == (int)65536))){
			HX_STACK_LINE(224)
			buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)65536,null(),null()));
		}
	}
	else{
		HX_STACK_LINE(226)
		if ((::Std_obj::is(data,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(227)
			Dynamic arr = data;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(228)
				while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
					HX_STACK_LINE(228)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(228)
					++(_g);
					HX_STACK_LINE(229)
					if ((::Std_obj::is(item,hx::ClassOf< ::Int >()))){
						HX_STACK_LINE(230)
						buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(hx::TCast< Int >::cast(item),null(),null()));
					}
					else{
						HX_STACK_LINE(232)
						int type = (int)1048576;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(233)
						if (((item->__Field(HX_CSTRING("type"),true) != null()))){
							HX_STACK_LINE(234)
							type = item->__Field(HX_CSTRING("type"),true);
						}
						HX_STACK_LINE(236)
						::String text = item->__Field(HX_CSTRING("text"),true);		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(237)
						Dynamic fn = item->__Field(HX_CSTRING("fn"),true);		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(238)
						buttons->push(::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(type,text,fn));
					}
				}
			}
		}
	}
	HX_STACK_LINE(242)
	return buttons;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildButtonArray,return )

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::_instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","get_instance",0xa3aa5ede,"haxe.ui.toolkit.core.PopupManager.get_instance","haxe/ui/toolkit/core/PopupManager.hx",21,0xc348cc90)
	HX_STACK_LINE(22)
	if (((::haxe::ui::toolkit::core::PopupManager_obj::_instance == null()))){
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::PopupManager_obj::_instance = ::haxe::ui::toolkit::core::PopupManager_obj::__new();
	}
	HX_STACK_LINE(25)
	return ::haxe::ui::toolkit::core::PopupManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopupManager_obj,get_instance,return )


PopupManager_obj::PopupManager_obj()
{
}

void PopupManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupManager);
	HX_MARK_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_MARK_MEMBER_NAME(defaultWidth,"defaultWidth");
	HX_MARK_END_CLASS();
}

void PopupManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_VISIT_MEMBER_NAME(defaultWidth,"defaultWidth");
}

Dynamic PopupManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusy") ) { return showBusy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePopup") ) { return hidePopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showSimple") ) { return showSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"showCustom") ) { return showCustom_dyn(); }
		if (HX_FIELD_EQ(inName,"buildPopup") ) { return buildPopup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centerPopup") ) { return centerPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"buildConfig") ) { return buildConfig_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { return defaultTitle; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { return defaultWidth; }
		if (HX_FIELD_EQ(inName,"showCalendar") ) { return showCalendar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildButtonArray") ) { return buildButtonArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { defaultTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { defaultWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultTitle"));
	outFields->push(HX_CSTRING("defaultWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PopupManager_obj,defaultTitle),HX_CSTRING("defaultTitle")},
	{hx::fsInt,(int)offsetof(PopupManager_obj,defaultWidth),HX_CSTRING("defaultWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("defaultTitle"),
	HX_CSTRING("defaultWidth"),
	HX_CSTRING("showSimple"),
	HX_CSTRING("showCustom"),
	HX_CSTRING("showList"),
	HX_CSTRING("showCalendar"),
	HX_CSTRING("showBusy"),
	HX_CSTRING("showPopup"),
	HX_CSTRING("hidePopup"),
	HX_CSTRING("centerPopup"),
	HX_CSTRING("buildPopup"),
	HX_CSTRING("buildConfig"),
	HX_CSTRING("buildButtonArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#endif

Class PopupManager_obj::__mClass;

void PopupManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.PopupManager"), hx::TCanCast< PopupManager_obj> ,sStaticFields,sMemberFields,
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

void PopupManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
