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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInputLayout
#include <haxe/ui/toolkit/controls/TextInputLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void TextInputLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","new",0x9c9bdec3,"haxe.ui.toolkit.controls.TextInputLayout.new","haxe/ui/toolkit/controls/TextInput.hx",421,0x28010717)
{
	HX_STACK_LINE(421)
	super::__construct();
}
;
	return null();
}

//TextInputLayout_obj::~TextInputLayout_obj() { }

Dynamic TextInputLayout_obj::__CreateEmpty() { return  new TextInputLayout_obj; }
hx::ObjectPtr< TextInputLayout_obj > TextInputLayout_obj::__new()
{  hx::ObjectPtr< TextInputLayout_obj > result = new TextInputLayout_obj();
	result->__construct();
	return result;}

Dynamic TextInputLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInputLayout_obj > result = new TextInputLayout_obj();
	result->__construct();
	return result;}

Void TextInputLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","resizeChildren",0x5eee59d0,"haxe.ui.toolkit.controls.TextInputLayout.resizeChildren","haxe/ui/toolkit/controls/TextInput.hx",424,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(425)
		this->super::resizeChildren();
		HX_STACK_LINE(426)
		if (((this->get_container()->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_numChildren"),true)() > (int)0))){
			HX_STACK_LINE(427)
			::haxe::ui::toolkit::controls::VScroll vscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(vscroll,"vscroll");
			HX_STACK_LINE(429)
			::flash::text::TextField text = this->findTextField();		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(430)
			if (((text != null()))){
				HX_STACK_LINE(431)
				text->set_x(this->get_padding()->get_left());
				HX_STACK_LINE(432)
				if (((text->get_multiline() == true))){
					HX_STACK_LINE(433)
					text->set_y(this->get_padding()->get_top());
					HX_STACK_LINE(434)
					text->set_height(this->get_usableHeight());
				}
				else{
					HX_STACK_LINE(436)
					text->set_height((text->get_defaultTextFormat()->size + (int)8));
					HX_STACK_LINE(437)
					Float _g = (Float(this->get_container()->__Field(HX_CSTRING("get_height"),true)()) / Float((int)2));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(437)
					text->set_y((_g - (Float(text->get_height()) / Float((int)2))));
				}
				HX_STACK_LINE(439)
				text->set_width(this->get_usableWidth());
				HX_STACK_LINE(441)
				::haxe::ui::toolkit::controls::Text placeholder = this->get_container()->findChild(HX_CSTRING("placeholder"),null(),null());		HX_STACK_VAR(placeholder,"placeholder");
				HX_STACK_LINE(442)
				if (((placeholder != null()))){
					HX_STACK_LINE(443)
					placeholder->set_width(text->get_width());
					HX_STACK_LINE(444)
					placeholder->set_height(text->get_height());
				}
			}
		}
	}
return null();
}


Void TextInputLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","repositionChildren",0xbb5e99b8,"haxe.ui.toolkit.controls.TextInputLayout.repositionChildren","haxe/ui/toolkit/controls/TextInput.hx",450,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(451)
		this->super::repositionChildren();
		HX_STACK_LINE(453)
		::haxe::ui::toolkit::controls::VScroll vscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(vscroll,"vscroll");
		HX_STACK_LINE(454)
		if (((vscroll != null()))){
			HX_STACK_LINE(455)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(455)
			Float _g1 = (_g - vscroll->get_width());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(455)
			vscroll->set_x((_g1 - this->get_padding()->get_right()));
		}
		HX_STACK_LINE(457)
		::haxe::ui::toolkit::controls::HScroll hscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(hscroll,"hscroll");
		HX_STACK_LINE(458)
		if (((hscroll != null()))){
			HX_STACK_LINE(459)
			Float _g2 = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(459)
			Float _g3 = (_g2 - hscroll->get_height());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(459)
			hscroll->set_y((_g3 - this->get_padding()->get_bottom()));
		}
		HX_STACK_LINE(462)
		::flash::text::TextField text = this->findTextField();		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(463)
		::haxe::ui::toolkit::controls::Text placeholder = this->get_container()->findChild(HX_CSTRING("placeholder"),null(),null());		HX_STACK_VAR(placeholder,"placeholder");
		HX_STACK_LINE(464)
		if (((bool((text != null())) && bool((placeholder != null()))))){
			HX_STACK_LINE(465)
			placeholder->set_x(text->get_x());
			HX_STACK_LINE(466)
			placeholder->set_y((text->get_y() + (int)1));
		}
	}
return null();
}


Float TextInputLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","get_usableWidth",0x8e045668,"haxe.ui.toolkit.controls.TextInputLayout.get_usableWidth","haxe/ui/toolkit/controls/TextInput.hx",471,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(472)
	Float ucx = this->get_innerWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(473)
	::haxe::ui::toolkit::controls::VScroll vscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(vscroll,"vscroll");
	HX_STACK_LINE(474)
	if (((  (((vscroll != null()))) ? bool((vscroll->get_visible() == true)) : bool(false) ))){
		HX_STACK_LINE(475)
		Float _g = vscroll->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(475)
		hx::SubEq(ucx,(_g + this->get_spacingX()));
	}
	HX_STACK_LINE(477)
	return ucx;
}


Float TextInputLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","get_usableHeight",0x6c16bd45,"haxe.ui.toolkit.controls.TextInputLayout.get_usableHeight","haxe/ui/toolkit/controls/TextInput.hx",480,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(481)
	Float ucy = this->get_innerHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(482)
	::haxe::ui::toolkit::controls::HScroll hscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(hscroll,"hscroll");
	HX_STACK_LINE(483)
	if (((  (((hscroll != null()))) ? bool((hscroll->get_visible() == true)) : bool(false) ))){
		HX_STACK_LINE(484)
		Float _g = hscroll->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(484)
		hx::SubEq(ucy,(_g - this->get_spacingY()));
	}
	HX_STACK_LINE(486)
	return ucy;
}


::flash::text::TextField TextInputLayout_obj::findTextField( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","findTextField",0x405bed77,"haxe.ui.toolkit.controls.TextInputLayout.findTextField","haxe/ui/toolkit/controls/TextInput.hx",489,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(490)
	::flash::text::TextField tf = null();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(491)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		int _g = this->get_container()->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("get_numChildren"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		while(((_g1 < _g))){
			HX_STACK_LINE(491)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(492)
			::flash::display::DisplayObject child = this->get_container()->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("getChildAt"),true)(i);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(493)
			if ((::Std_obj::is(child,hx::ClassOf< ::flash::text::TextField >()))){
				HX_STACK_LINE(494)
				tf = hx::TCast< flash::text::TextField >::cast(child);
				HX_STACK_LINE(495)
				break;
			}
		}
	}
	HX_STACK_LINE(498)
	return tf;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputLayout_obj,findTextField,return )

Dynamic TextInputLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","clone",0x9195c080,"haxe.ui.toolkit.controls.TextInputLayout.clone","haxe/ui/toolkit/controls/TextInputLayout.hx",1,0xcf3b874d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInputLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic TextInputLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","self",0x6f1513c9,"haxe.ui.toolkit.controls.TextInputLayout.self","haxe/ui/toolkit/controls/TextInputLayout.hx",2,0xcf3b874d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::TextInputLayout_obj::__new();
}



TextInputLayout_obj::TextInputLayout_obj()
{
}

Dynamic TextInputLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findTextField") ) { return findTextField_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextInputLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInputLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("get_usableHeight"),
	HX_CSTRING("findTextField"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInputLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInputLayout_obj::__mClass,"__mClass");
};

#endif

Class TextInputLayout_obj::__mClass;

void TextInputLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.TextInputLayout"), hx::TCanCast< TextInputLayout_obj> ,sStaticFields,sMemberFields,
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

void TextInputLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TextInput.hx",419,0x28010717)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TextInput.hx",419,0x28010717)
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
