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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void VerticalLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","new",0x9dc9d914,"haxe.ui.toolkit.layout.VerticalLayout.new","haxe/ui/toolkit/layout/VerticalLayout.hx",7,0xfcb5c55c)
{
	HX_STACK_LINE(7)
	super::__construct();
}
;
	return null();
}

//VerticalLayout_obj::~VerticalLayout_obj() { }

Dynamic VerticalLayout_obj::__CreateEmpty() { return  new VerticalLayout_obj; }
hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new()
{  hx::ObjectPtr< VerticalLayout_obj > result = new VerticalLayout_obj();
	result->__construct();
	return result;}

Dynamic VerticalLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalLayout_obj > result = new VerticalLayout_obj();
	result->__construct();
	return result;}

Void VerticalLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","resizeChildren",0x01804f1f,"haxe.ui.toolkit.layout.VerticalLayout.resizeChildren","haxe/ui/toolkit/layout/VerticalLayout.hx",13,0xfcb5c55c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->super::resizeChildren();
		HX_STACK_LINE(15)
		Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(16)
		Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(17)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(18)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(19)
		int numChildren = (int)0;		HX_STACK_VAR(numChildren,"numChildren");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(21)
			while(((_g < _g1->length))){
				HX_STACK_LINE(21)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(21)
				++(_g);
				HX_STACK_LINE(23)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(24)
					continue;
				}
				HX_STACK_LINE(27)
				(numChildren)++;
				HX_STACK_LINE(29)
				if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)-1))){
					HX_STACK_LINE(30)
					child->__Field(HX_CSTRING("set_width"),true)((Float((ucx * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(33)
				if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() > (int)-1))){
					HX_STACK_LINE(34)
					child->__Field(HX_CSTRING("set_height"),true)((Float((ucy * child->__Field(HX_CSTRING("get_percentHeight"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(37)
				hx::AddEq(totalHeight,child->__Field(HX_CSTRING("get_height"),true)());
				HX_STACK_LINE(38)
				if (((child->__Field(HX_CSTRING("get_width"),true)() > totalWidth))){
					HX_STACK_LINE(39)
					totalWidth = child->__Field(HX_CSTRING("get_width"),true)();
				}
			}
		}
		HX_STACK_LINE(43)
		if (((numChildren > (int)1))){
			HX_STACK_LINE(44)
			hx::AddEq(totalHeight,(this->get_spacingY() * ((numChildren - (int)1))));
		}
		HX_STACK_LINE(47)
		if ((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)())){
			HX_STACK_LINE(48)
			if (((  (((  (((totalWidth > (int)0))) ? bool((totalWidth != this->get_innerWidth())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentWidth"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(49)
				Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g + this->get_padding()->get_right()))));
			}
			HX_STACK_LINE(51)
			if (((  (((  (((totalHeight > (int)0))) ? bool((totalHeight != this->get_innerHeight())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentHeight"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(52)
				Float _g1 = this->get_padding()->get_top();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(52)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g1 + this->get_padding()->get_bottom()))));
			}
		}
		else{
			HX_STACK_LINE(55)
			if (((  (((totalWidth > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_height"),true)() == (int)0)) : bool(false) ))){
				HX_STACK_LINE(56)
				Float _g2 = this->get_padding()->get_left();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(56)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g2 + this->get_padding()->get_right()))));
				HX_STACK_LINE(57)
				Float _g3 = this->get_padding()->get_top();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(57)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g3 + this->get_padding()->get_bottom()))));
			}
			else{
				HX_STACK_LINE(58)
				if (((  (((totalHeight > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_width"),true)() == (int)0)) : bool(false) ))){
					HX_STACK_LINE(59)
					Float _g4 = this->get_padding()->get_left();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(59)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g4 + this->get_padding()->get_right()))));
					HX_STACK_LINE(60)
					Float _g5 = this->get_padding()->get_top();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(60)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g5 + this->get_padding()->get_bottom()))));
				}
			}
		}
	}
return null();
}


Void VerticalLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","repositionChildren",0x2336e287,"haxe.ui.toolkit.layout.VerticalLayout.repositionChildren","haxe/ui/toolkit/layout/VerticalLayout.hx",65,0xfcb5c55c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->super::repositionChildren();
		HX_STACK_LINE(67)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			while(((_g < _g1->length))){
				HX_STACK_LINE(68)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(68)
				++(_g);
				HX_STACK_LINE(70)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(71)
					continue;
				}
				HX_STACK_LINE(74)
				Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(75)
				::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(77)
				::String _switch_1 = (halign);
				if (  ( _switch_1==HX_CSTRING("center"))){
					HX_STACK_LINE(79)
					Float _g2 = (Float(this->get_container()->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(79)
					xpos = (_g2 - (Float(child->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2)));
				}
				else if (  ( _switch_1==HX_CSTRING("right"))){
					HX_STACK_LINE(81)
					Float _g11 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(81)
					xpos = (_g11 - child->__Field(HX_CSTRING("get_width"),true)());
				}
				else  {
				}
;
;
				HX_STACK_LINE(85)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(86)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
				HX_STACK_LINE(88)
				Float _g2 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(88)
				hx::AddEq(ypos,(_g2 + this->get_spacingY()));
			}
		}
	}
return null();
}


Float VerticalLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","get_usableHeight",0x4f0be454,"haxe.ui.toolkit.layout.VerticalLayout.get_usableHeight","haxe/ui/toolkit/layout/VerticalLayout.hx",95,0xfcb5c55c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	Float ucy = this->super::get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(98)
	int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(99)
		while(((_g < _g1->length))){
			HX_STACK_LINE(99)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(99)
			++(_g);
			HX_STACK_LINE(100)
			if ((c->__Field(HX_CSTRING("get_visible"),true)())){
				HX_STACK_LINE(101)
				(visibleChildren)++;
			}
		}
	}
	HX_STACK_LINE(105)
	if (((visibleChildren > (int)1))){
		HX_STACK_LINE(106)
		hx::SubEq(ucy,(this->get_spacingY() * ((visibleChildren - (int)1))));
	}
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		while(((_g < _g1->length))){
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(109)
			++(_g);
			HX_STACK_LINE(111)
			if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
				HX_STACK_LINE(112)
				continue;
			}
			HX_STACK_LINE(115)
			if (((  (((child->__Field(HX_CSTRING("get_height"),true)() > (int)0))) ? bool((child->__Field(HX_CSTRING("get_percentHeight"),true)() < (int)0)) : bool(false) ))){
				HX_STACK_LINE(116)
				hx::SubEq(ucy,child->__Field(HX_CSTRING("get_height"),true)());
			}
		}
	}
	HX_STACK_LINE(120)
	if (((ucy < (int)0))){
		HX_STACK_LINE(121)
		ucy = (int)0;
	}
	HX_STACK_LINE(124)
	return ucy;
}


Dynamic VerticalLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","clone",0xb5f3b111,"haxe.ui.toolkit.layout.VerticalLayout.clone","haxe/ui/toolkit/layout/VerticalLayout.hx",1,0xfcb5c55c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::VerticalLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic VerticalLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalLayout","self",0x76222058,"haxe.ui.toolkit.layout.VerticalLayout.self","haxe/ui/toolkit/layout/VerticalLayout.hx",2,0xfcb5c55c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();
}



VerticalLayout_obj::VerticalLayout_obj()
{
}

Dynamic VerticalLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic VerticalLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalLayout_obj::__mClass,"__mClass");
};

#endif

Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.VerticalLayout"), hx::TCanCast< VerticalLayout_obj> ,sStaticFields,sMemberFields,
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

void VerticalLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
