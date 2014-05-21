#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void BasicItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","new",0xe6fa9bab,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.new","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",9,0x1902ba66)
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	this->_layout = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();
	HX_STACK_LINE(13)
	::haxe::ui::toolkit::controls::Text text = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(14)
	text->set_text(HX_CSTRING("Text"));
	HX_STACK_LINE(15)
	text->set_id(HX_CSTRING("text"));
	HX_STACK_LINE(16)
	text->set_verticalAlign(HX_CSTRING("center"));
	HX_STACK_LINE(17)
	text->set_percentWidth((int)100);
	HX_STACK_LINE(18)
	this->addChild(text);
}
;
	return null();
}

//BasicItemRenderer_obj::~BasicItemRenderer_obj() { }

Dynamic BasicItemRenderer_obj::__CreateEmpty() { return  new BasicItemRenderer_obj; }
hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__new()
{  hx::ObjectPtr< BasicItemRenderer_obj > result = new BasicItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic BasicItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicItemRenderer_obj > result = new BasicItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic BasicItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","set_data",0x1f18cffc,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.set_data","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",21,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	if (((value->__Field(HX_CSTRING("icon"),true) != null()))){
		HX_STACK_LINE(23)
		if (((this->findChild(HX_CSTRING("icon"),null(),null()) == null()))){
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::controls::Image icon = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(icon,"icon");
			HX_STACK_LINE(25)
			icon->set_id(HX_CSTRING("icon"));
			HX_STACK_LINE(26)
			icon->set_verticalAlign(HX_CSTRING("center"));
			HX_STACK_LINE(27)
			this->addChildAt(icon,(int)0);
		}
	}
	HX_STACK_LINE(30)
	return this->super::set_data(value);
}


Dynamic BasicItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","clone",0x3ecb8768,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.clone","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",1,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic BasicItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","self",0x379ba1e1,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.self","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",2,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__new();
}



BasicItemRenderer_obj::BasicItemRenderer_obj()
{
}

Dynamic BasicItemRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("set_data"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#endif

Class BasicItemRenderer_obj::__mClass;

void BasicItemRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.renderers.BasicItemRenderer"), hx::TCanCast< BasicItemRenderer_obj> ,sStaticFields,sMemberFields,
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

void BasicItemRenderer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers
