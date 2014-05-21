#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScrollLayout
#include <haxe/ui/toolkit/controls/VScrollLayout.h>
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

Void VScrollLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","new",0x009a38c9,"haxe.ui.toolkit.controls.VScrollLayout.new","haxe/ui/toolkit/controls/VScroll.hx",309,0xae74d851)
{
	HX_STACK_LINE(309)
	super::__construct();
}
;
	return null();
}

//VScrollLayout_obj::~VScrollLayout_obj() { }

Dynamic VScrollLayout_obj::__CreateEmpty() { return  new VScrollLayout_obj; }
hx::ObjectPtr< VScrollLayout_obj > VScrollLayout_obj::__new()
{  hx::ObjectPtr< VScrollLayout_obj > result = new VScrollLayout_obj();
	result->__construct();
	return result;}

Dynamic VScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VScrollLayout_obj > result = new VScrollLayout_obj();
	result->__construct();
	return result;}

Void VScrollLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","resizeChildren",0x76b6d18a,"haxe.ui.toolkit.controls.VScrollLayout.resizeChildren","haxe/ui/toolkit/controls/VScroll.hx",312,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(313)
		this->super::resizeChildren();
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(315)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(316)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(317)
		if (((thumb != null()))){
			HX_STACK_LINE(318)
			Float _g = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(318)
			Float m = (_g - scroll->__Field(HX_CSTRING("get_min"),true)());		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(319)
			Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
			HX_STACK_LINE(320)
			Float thumbHeight = ((Float(scroll->__Field(HX_CSTRING("get_pageSize"),true)()) / Float(m)) * ucy);		HX_STACK_VAR(thumbHeight,"thumbHeight");
			HX_STACK_LINE(321)
			if (((thumbHeight < (int)20))){
				HX_STACK_LINE(322)
				thumbHeight = (int)20;
			}
			else{
				HX_STACK_LINE(323)
				if (((thumbHeight > ucy))){
					HX_STACK_LINE(324)
					thumbHeight = ucy;
				}
			}
			HX_STACK_LINE(326)
			thumb->__Field(HX_CSTRING("set_height"),true)(thumbHeight);
		}
	}
return null();
}


Void VScrollLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","repositionChildren",0x1eb67672,"haxe.ui.toolkit.controls.VScrollLayout.repositionChildren","haxe/ui/toolkit/controls/VScroll.hx",330,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(331)
		this->super::repositionChildren();
		HX_STACK_LINE(333)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = this->get_container()->findChild(HX_CSTRING("deinc"),null(),null());		HX_STACK_VAR(deinc,"deinc");
		HX_STACK_LINE(334)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = this->get_container()->findChild(HX_CSTRING("inc"),null(),null());		HX_STACK_VAR(inc,"inc");
		HX_STACK_LINE(335)
		if (((inc != null()))){
			HX_STACK_LINE(336)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			Float _g1 = (_g - inc->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(336)
			inc->__Field(HX_CSTRING("set_y"),true)((_g1 - this->get_padding()->get_bottom()));
		}
		HX_STACK_LINE(339)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(339)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(340)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
		HX_STACK_LINE(341)
		if (((thumb != null()))){
			HX_STACK_LINE(342)
			Float _g2 = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(342)
			Float m = (_g2 - scroll->__Field(HX_CSTRING("get_min"),true)());		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(343)
			Float u = this->get_usableHeight();		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(344)
			hx::SubEq(u,thumb->__Field(HX_CSTRING("get_height"),true)());
			HX_STACK_LINE(346)
			Float _g3 = scroll->__Field(HX_CSTRING("get_pos"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(346)
			Float y = ((Float(((_g3 - scroll->__Field(HX_CSTRING("get_min"),true)()))) / Float(m)) * u);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(347)
			hx::AddEq(y,this->get_padding()->get_top());
			HX_STACK_LINE(348)
			if (((deinc != null()))){
				HX_STACK_LINE(349)
				Float _g4 = deinc->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(349)
				hx::AddEq(y,(_g4 + this->get_spacingY()));
			}
			HX_STACK_LINE(352)
			thumb->__Field(HX_CSTRING("set_y"),true)(y);
		}
	}
return null();
}


Float VScrollLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","get_usableHeight",0x60b8177f,"haxe.ui.toolkit.controls.VScrollLayout.get_usableHeight","haxe/ui/toolkit/controls/VScroll.hx",357,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(358)
	Float ucy = this->get_innerHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(359)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject deinc = this->get_container()->findChild(HX_CSTRING("deinc"),null(),null());		HX_STACK_VAR(deinc,"deinc");
	HX_STACK_LINE(360)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject inc = this->get_container()->findChild(HX_CSTRING("inc"),null(),null());		HX_STACK_VAR(inc,"inc");
	HX_STACK_LINE(361)
	if (((deinc != null()))){
		HX_STACK_LINE(362)
		Float _g = deinc->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(362)
		hx::SubEq(ucy,(_g + this->get_spacingY()));
	}
	HX_STACK_LINE(364)
	if (((inc != null()))){
		HX_STACK_LINE(365)
		Float _g1 = inc->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(365)
		hx::SubEq(ucy,(_g1 + this->get_spacingY()));
	}
	HX_STACK_LINE(367)
	return ucy;
}


Dynamic VScrollLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","clone",0xb5632806,"haxe.ui.toolkit.controls.VScrollLayout.clone","haxe/ui/toolkit/controls/VScrollLayout.hx",1,0x9fbf0007)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VScrollLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic VScrollLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScrollLayout","self",0x89a57f03,"haxe.ui.toolkit.controls.VScrollLayout.self","haxe/ui/toolkit/controls/VScrollLayout.hx",2,0x9fbf0007)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::VScrollLayout_obj::__new();
}



VScrollLayout_obj::VScrollLayout_obj()
{
}

Dynamic VScrollLayout_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VScrollLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VScrollLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("get_usableHeight"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VScrollLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VScrollLayout_obj::__mClass,"__mClass");
};

#endif

Class VScrollLayout_obj::__mClass;

void VScrollLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.VScrollLayout"), hx::TCanCast< VScrollLayout_obj> ,sStaticFields,sMemberFields,
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

void VScrollLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/VScroll.hx",307,0xae74d851)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/VScroll.hx",307,0xae74d851)
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
