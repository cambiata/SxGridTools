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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void HorizontalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","new",0x8639f8f1,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.new","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",8,0xe075d01f)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//HorizontalContinuousLayout_obj::~HorizontalContinuousLayout_obj() { }

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return  new HorizontalContinuousLayout_obj; }
hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new()
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > result = new HorizontalContinuousLayout_obj();
	result->__construct();
	return result;}

Dynamic HorizontalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > result = new HorizontalContinuousLayout_obj();
	result->__construct();
	return result;}

Void HorizontalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","repositionChildren",0x0255234a,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",11,0xe075d01f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::repositionChildren();
		HX_STACK_LINE(14)
		Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(15)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(16)
		Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		Float usedCX = (_g + this->get_padding()->get_right());		HX_STACK_VAR(usedCX,"usedCX");
		HX_STACK_LINE(17)
		Float _g1 = this->get_padding()->get_top();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		Float usedCY = (_g1 + this->get_padding()->get_bottom());		HX_STACK_VAR(usedCY,"usedCY");
		HX_STACK_LINE(18)
		Float rowCY = (int)0;		HX_STACK_VAR(rowCY,"rowCY");
		HX_STACK_LINE(19)
		Array< Float > rowHeights = Array_obj< Float >::__new();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > rowChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(rowChildren,"rowChildren");
		HX_STACK_LINE(21)
		rowHeights->push((int)0);
		HX_STACK_LINE(22)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(23)
		Float maxCX = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(maxCX,"maxCX");
		HX_STACK_LINE(24)
		if (((  (((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)() == true))) ? bool((this->get_container()->__Field(HX_CSTRING("get_parent"),true)() != null())) : bool(false) ))){
			HX_STACK_LINE(25)
			maxCX = this->get_container()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_layout"),true)()->__Field(HX_CSTRING("get_usableWidth"),true)();
		}
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(27)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(27)
			while(((_g2 < _g11->length))){
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g2);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(27)
				++(_g2);
				HX_STACK_LINE(29)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(30)
					continue;
				}
				HX_STACK_LINE(33)
				rowChildren->push(child);
				HX_STACK_LINE(35)
				if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)-1))){
					HX_STACK_LINE(36)
					Float _g21 = (maxCX - this->get_spacingX());		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(36)
					child->__Field(HX_CSTRING("set_width"),true)((Float((_g21 * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(39)
				Float _g3 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(39)
				hx::AddEq(usedCX,(_g3 + this->get_spacingX()));
				HX_STACK_LINE(40)
				if ((((usedCX - this->get_spacingX()) > maxCX))){
					HX_STACK_LINE(41)
					xpos = this->get_padding()->get_left();
					HX_STACK_LINE(42)
					rowHeights->push((int)0);
					HX_STACK_LINE(43)
					hx::AddEq(ypos,(rowHeights->__get(row) + this->get_spacingY()));
					HX_STACK_LINE(44)
					(row)++;
					HX_STACK_LINE(45)
					Float _g4 = this->get_padding()->get_left();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(45)
					Float _g5 = (_g4 + this->get_padding()->get_right());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(45)
					Float _g6 = (_g5 + child->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(45)
					usedCX = (_g6 + this->get_spacingX());
					HX_STACK_LINE(47)
					rowChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
					HX_STACK_LINE(48)
					rowChildren->push(child);
				}
				HX_STACK_LINE(51)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(52)
				if (((child->__Field(HX_CSTRING("get_height"),true)() > rowHeights->__get(row)))){
					HX_STACK_LINE(53)
					rowHeights[row] = child->__Field(HX_CSTRING("get_height"),true)();
					HX_STACK_LINE(54)
					reposition = true;
				}
				HX_STACK_LINE(57)
				Float _g7 = this->get_padding()->get_top();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(57)
				usedCY = (_g7 + this->get_padding()->get_bottom());
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(58)
					while(((_g21 < rowHeights->length))){
						HX_STACK_LINE(58)
						Float cy = rowHeights->__get(_g21);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(58)
						++(_g21);
						HX_STACK_LINE(59)
						hx::AddEq(usedCY,(cy + this->get_spacingY()));
					}
				}
				HX_STACK_LINE(61)
				hx::SubEq(usedCY,this->get_spacingY());
				HX_STACK_LINE(63)
				if ((reposition)){
					HX_STACK_LINE(64)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(64)
					while(((_g21 < rowChildren->length))){
						HX_STACK_LINE(64)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = rowChildren->__get(_g21);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(64)
						++(_g21);
						HX_STACK_LINE(65)
						::String valign = temp->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
						HX_STACK_LINE(66)
						Float tempYpos = temp->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(tempYpos,"tempYpos");
						HX_STACK_LINE(67)
						::String _switch_1 = (valign);
						if (  ( _switch_1==HX_CSTRING("center"))){
							HX_STACK_LINE(69)
							Float _g8 = (usedCY - temp->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(69)
							Float _g9 = (_g8 - this->get_padding()->get_top());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(69)
							tempYpos = (_g9 - (((Float(rowHeights->__get(row)) / Float((int)2)) - (Float(temp->__Field(HX_CSTRING("get_height"),true)()) / Float((int)2)))));
						}
						else if (  ( _switch_1==HX_CSTRING("bottom"))){
							HX_STACK_LINE(71)
							Float _g10 = (usedCY - temp->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(71)
							tempYpos = (_g10 - this->get_padding()->get_top());
						}
						else  {
						}
;
;
						HX_STACK_LINE(74)
						temp->__Field(HX_CSTRING("set_y"),true)(tempYpos);
					}
				}
				HX_STACK_LINE(78)
				Float _g111 = (usedCX - this->get_spacingX());		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(78)
				if (((  (((_g111 > this->get_container()->__Field(HX_CSTRING("get_width"),true)()))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(79)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)((usedCX - this->get_spacingX()));
				}
				HX_STACK_LINE(82)
				if (((  (((usedCY > this->get_container()->__Field(HX_CSTRING("get_height"),true)()))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(83)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)(usedCY);
				}
				HX_STACK_LINE(86)
				::String valign = child->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(87)
				::String _switch_2 = (valign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(89)
					Float _g12 = (usedCY - child->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(89)
					Float _g13 = (_g12 - this->get_padding()->get_top());		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(89)
					ypos = (_g13 - (((Float(rowHeights->__get(row)) / Float((int)2)) - (Float(child->__Field(HX_CSTRING("get_height"),true)()) / Float((int)2)))));
				}
				else if (  ( _switch_2==HX_CSTRING("bottom"))){
					HX_STACK_LINE(91)
					Float _g14 = (usedCY - child->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(91)
					ypos = (_g14 - this->get_padding()->get_top());
				}
				else  {
				}
;
;
				HX_STACK_LINE(95)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(96)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
				HX_STACK_LINE(98)
				Float _g15 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(98)
				hx::AddEq(xpos,(_g15 + this->get_spacingX()));
			}
		}
	}
return null();
}


Dynamic HorizontalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","clone",0xb291422e,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.clone","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",1,0xe075d01f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic HorizontalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","self",0xefcde1db,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.self","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",2,0xe075d01f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();
}



HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

Dynamic HorizontalContinuousLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HorizontalContinuousLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalContinuousLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.HorizontalContinuousLayout"), hx::TCanCast< HorizontalContinuousLayout_obj> ,sStaticFields,sMemberFields,
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

void HorizontalContinuousLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
