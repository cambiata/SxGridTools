#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScrollLayout
#include <haxe/ui/toolkit/controls/HScrollLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void HScrollLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","new",0xd744bcbb,"haxe.ui.toolkit.controls.HScrollLayout.new","haxe/ui/toolkit/controls/HScroll.hx",308,0x2a624a1f)
{
	HX_STACK_LINE(308)
	super::__construct();
}
;
	return null();
}

//HScrollLayout_obj::~HScrollLayout_obj() { }

Dynamic HScrollLayout_obj::__CreateEmpty() { return  new HScrollLayout_obj; }
hx::ObjectPtr< HScrollLayout_obj > HScrollLayout_obj::__new()
{  hx::ObjectPtr< HScrollLayout_obj > result = new HScrollLayout_obj();
	result->__construct();
	return result;}

Dynamic HScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HScrollLayout_obj > result = new HScrollLayout_obj();
	result->__construct();
	return result;}

Void HScrollLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","resizeChildren",0x485aced8,"haxe.ui.toolkit.controls.HScrollLayout.resizeChildren","haxe/ui/toolkit/controls/HScroll.hx",311,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(312)
		this->super::resizeChildren();
		HX_STACK_LINE(314)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(314)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(316)
		if (((thumb != null()))){
			HX_STACK_LINE(317)
			Float _g = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(317)
			Float m = (_g - scroll->__Field(HX_CSTRING("get_min"),true)());		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(318)
			Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
			HX_STACK_LINE(319)
			Float thumbWidth = ((Float(scroll->__Field(HX_CSTRING("get_pageSize"),true)()) / Float(m)) * ucx);		HX_STACK_VAR(thumbWidth,"thumbWidth");
			HX_STACK_LINE(320)
			if (((thumbWidth < (int)20))){
				HX_STACK_LINE(321)
				thumbWidth = (int)20;
			}
			else{
				HX_STACK_LINE(322)
				if (((thumbWidth > ucx))){
					HX_STACK_LINE(323)
					thumbWidth = ucx;
				}
			}
			HX_STACK_LINE(325)
			thumb->__Field(HX_CSTRING("set_width"),true)(thumbWidth);
		}
	}
return null();
}


Void HScrollLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","repositionChildren",0x47de32c0,"haxe.ui.toolkit.controls.HScrollLayout.repositionChildren","haxe/ui/toolkit/controls/HScroll.hx",329,0x2a624a1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		this->super::repositionChildren();
		HX_STACK_LINE(332)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = this->get_container()->findChild(HX_CSTRING("deinc"),null(),null());		HX_STACK_VAR(deinc,"deinc");
		HX_STACK_LINE(333)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = this->get_container()->findChild(HX_CSTRING("inc"),null(),null());		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(334)
		if (((inc != null()))){
			HX_STACK_LINE(335)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			Float _g1 = (_g - inc->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			inc->__Field(HX_CSTRING("set_x"),true)((_g1 - this->get_padding()->get_right()));
		}
		HX_STACK_LINE(338)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(338)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(339)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(340)
		if (((thumb != null()))){
			HX_STACK_LINE(341)
			Float _g2 = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(341)
			Float m = (_g2 - scroll->__Field(HX_CSTRING("get_min"),true)());		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(342)
			Float u = this->get_usableWidth();		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(343)
			hx::SubEq(u,thumb->__Field(HX_CSTRING("get_width"),true)());
			HX_STACK_LINE(345)
			Float _g3 = scroll->__Field(HX_CSTRING("get_pos"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(345)
			Float x = ((Float(((_g3 - scroll->__Field(HX_CSTRING("get_min"),true)()))) / Float(m)) * u);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(346)
			hx::AddEq(x,this->get_padding()->get_left());
			HX_STACK_LINE(347)
			if (((deinc != null()))){
				HX_STACK_LINE(348)
				Float _g4 = deinc->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(348)
				hx::AddEq(x,(_g4 + this->get_spacingX()));
			}
			HX_STACK_LINE(351)
			thumb->__Field(HX_CSTRING("set_x"),true)(x);
		}
	}
return null();
}


Float HScrollLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","get_usableWidth",0xe37e4860,"haxe.ui.toolkit.controls.HScrollLayout.get_usableWidth","haxe/ui/toolkit/controls/HScroll.hx",356,0x2a624a1f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(357)
	Float ucx = this->get_innerWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(358)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = this->get_container()->findChild(HX_CSTRING("deinc"),null(),null());		HX_STACK_VAR(deinc,"deinc");
	HX_STACK_LINE(359)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = this->get_container()->findChild(HX_CSTRING("inc"),null(),null());		HX_STACK_VAR(inc,"inc");
	HX_STACK_LINE(360)
	if (((deinc != null()))){
		HX_STACK_LINE(361)
		Float _g = deinc->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		hx::SubEq(ucx,(_g + this->get_spacingX()));
	}
	HX_STACK_LINE(363)
	if (((inc != null()))){
		HX_STACK_LINE(364)
		Float _g1 = inc->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(364)
		hx::SubEq(ucx,(_g1 + this->get_spacingX()));
	}
	HX_STACK_LINE(366)
	return ucx;
}


Dynamic HScrollLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","clone",0x6eac0c78,"haxe.ui.toolkit.controls.HScrollLayout.clone","haxe/ui/toolkit/controls/HScrollLayout.hx",1,0xbb1cc055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HScrollLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic HScrollLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HScrollLayout","self",0x882e6ed1,"haxe.ui.toolkit.controls.HScrollLayout.self","haxe/ui/toolkit/controls/HScrollLayout.hx",2,0xbb1cc055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::HScrollLayout_obj::__new();
}



HScrollLayout_obj::HScrollLayout_obj()
{
}

Dynamic HScrollLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HScrollLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HScrollLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resizeChildren"),
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("get_usableWidth"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScrollLayout_obj::__mClass,"__mClass");
};

#endif

Class HScrollLayout_obj::__mClass;

void HScrollLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.HScrollLayout"), hx::TCanCast< HScrollLayout_obj> ,sStaticFields,sMemberFields,
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

void HScrollLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/HScroll.hx",306,0x2a624a1f)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/HScroll.hx",306,0x2a624a1f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("exclude") , null(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("obj") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
