#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void DefaultLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","new",0xb4440a9b,"haxe.ui.toolkit.layout.DefaultLayout.new","haxe/ui/toolkit/layout/DefaultLayout.hx",5,0x34f830b5)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//DefaultLayout_obj::~DefaultLayout_obj() { }

Dynamic DefaultLayout_obj::__CreateEmpty() { return  new DefaultLayout_obj; }
hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__new()
{  hx::ObjectPtr< DefaultLayout_obj > result = new DefaultLayout_obj();
	result->__construct();
	return result;}

Dynamic DefaultLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultLayout_obj > result = new DefaultLayout_obj();
	result->__construct();
	return result;}

Void DefaultLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","resizeChildren",0x39348cf8,"haxe.ui.toolkit.layout.DefaultLayout.resizeChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",11,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::resizeChildren();
		HX_STACK_LINE(13)
		Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(14)
		Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(15)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(16)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			while(((_g < _g1->length))){
				HX_STACK_LINE(17)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(17)
				++(_g);
				HX_STACK_LINE(19)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(20)
					continue;
				}
				HX_STACK_LINE(23)
				if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)-1))){
					HX_STACK_LINE(24)
					child->__Field(HX_CSTRING("set_width"),true)((Float((ucx * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(27)
				if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() > (int)-1))){
					HX_STACK_LINE(28)
					child->__Field(HX_CSTRING("set_height"),true)((Float((ucy * child->__Field(HX_CSTRING("get_percentHeight"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(31)
				if (((child->__Field(HX_CSTRING("get_width"),true)() > totalWidth))){
					HX_STACK_LINE(32)
					totalWidth = child->__Field(HX_CSTRING("get_width"),true)();
				}
				HX_STACK_LINE(34)
				if (((child->__Field(HX_CSTRING("get_height"),true)() > totalHeight))){
					HX_STACK_LINE(35)
					totalHeight = child->__Field(HX_CSTRING("get_height"),true)();
				}
			}
		}
		HX_STACK_LINE(39)
		if ((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)())){
			HX_STACK_LINE(40)
			if (((  (((  (((totalWidth > (int)0))) ? bool((totalWidth != this->get_innerWidth())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentWidth"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(41)
				Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g + this->get_padding()->get_right()))));
			}
			HX_STACK_LINE(43)
			if (((  (((  (((totalHeight > (int)0))) ? bool((totalHeight != this->get_innerHeight())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentHeight"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(44)
				Float _g1 = this->get_padding()->get_top();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(44)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g1 + this->get_padding()->get_bottom()))));
			}
		}
		else{
		}
	}
return null();
}


Void DefaultLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","repositionChildren",0xa84180e0,"haxe.ui.toolkit.layout.DefaultLayout.repositionChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",50,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::repositionChildren();
		HX_STACK_LINE(52)
		Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(53)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			while(((_g < _g1->length))){
				HX_STACK_LINE(54)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(54)
				++(_g);
				HX_STACK_LINE(56)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(57)
					continue;
				}
				HX_STACK_LINE(60)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(61)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
			}
		}
	}
return null();
}


Dynamic DefaultLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","clone",0x04829258,"haxe.ui.toolkit.layout.DefaultLayout.clone","haxe/ui/toolkit/layout/DefaultLayout.hx",1,0x34f830b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic DefaultLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","self",0x0a9344f1,"haxe.ui.toolkit.layout.DefaultLayout.self","haxe/ui/toolkit/layout/DefaultLayout.hx",2,0x34f830b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();
}



DefaultLayout_obj::DefaultLayout_obj()
{
}

Dynamic DefaultLayout_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#endif

Class DefaultLayout_obj::__mClass;

void DefaultLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.DefaultLayout"), hx::TCanCast< DefaultLayout_obj> ,sStaticFields,sMemberFields,
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

void DefaultLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
