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
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void VerticalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","new",0x6c53b103,"haxe.ui.toolkit.layout.VerticalContinuousLayout.new","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",8,0xd83d204d)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//VerticalContinuousLayout_obj::~VerticalContinuousLayout_obj() { }

Dynamic VerticalContinuousLayout_obj::__CreateEmpty() { return  new VerticalContinuousLayout_obj; }
hx::ObjectPtr< VerticalContinuousLayout_obj > VerticalContinuousLayout_obj::__new()
{  hx::ObjectPtr< VerticalContinuousLayout_obj > result = new VerticalContinuousLayout_obj();
	result->__construct();
	return result;}

Dynamic VerticalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalContinuousLayout_obj > result = new VerticalContinuousLayout_obj();
	result->__construct();
	return result;}

Void VerticalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","repositionChildren",0x7f4d4f78,"haxe.ui.toolkit.layout.VerticalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",11,0xd83d204d)
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
		Float colCX = (int)0;		HX_STACK_VAR(colCX,"colCX");
		HX_STACK_LINE(19)
		Array< Float > colWidths = Array_obj< Float >::__new();		HX_STACK_VAR(colWidths,"colWidths");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > colChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(colChildren,"colChildren");
		HX_STACK_LINE(21)
		colWidths->push((int)0);
		HX_STACK_LINE(22)
		int col = (int)0;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(23)
		Float maxCY = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(maxCY,"maxCY");
		HX_STACK_LINE(24)
		if (((  (((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)() == true))) ? bool((this->get_container()->__Field(HX_CSTRING("get_parent"),true)() != null())) : bool(false) ))){
			HX_STACK_LINE(25)
			maxCY = this->get_container()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_layout"),true)()->__Field(HX_CSTRING("get_usableHeight"),true)();
		}
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(28)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(28)
			while(((_g2 < _g11->length))){
				HX_STACK_LINE(28)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g2);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(28)
				++(_g2);
				HX_STACK_LINE(30)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(31)
					continue;
				}
				HX_STACK_LINE(34)
				colChildren->push(child);
				HX_STACK_LINE(35)
				Float _g21 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(35)
				hx::AddEq(usedCY,(_g21 + this->get_spacingY()));
				HX_STACK_LINE(36)
				if ((((usedCY - this->get_spacingY()) > maxCY))){
					HX_STACK_LINE(37)
					ypos = this->get_padding()->get_top();
					HX_STACK_LINE(38)
					colWidths->push((int)0);
					HX_STACK_LINE(39)
					hx::AddEq(xpos,(colWidths->__get(col) + this->get_spacingX()));
					HX_STACK_LINE(40)
					(col)++;
					HX_STACK_LINE(41)
					Float _g3 = this->get_padding()->get_top();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(41)
					Float _g4 = (_g3 + this->get_padding()->get_bottom());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(41)
					Float _g5 = (_g4 + child->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(41)
					usedCY = (_g5 + this->get_spacingY());
					HX_STACK_LINE(43)
					colChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
					HX_STACK_LINE(44)
					colChildren->push(child);
				}
				HX_STACK_LINE(47)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(48)
				if (((child->__Field(HX_CSTRING("get_width"),true)() > colWidths->__get(col)))){
					HX_STACK_LINE(49)
					colWidths[col] = child->__Field(HX_CSTRING("get_width"),true)();
					HX_STACK_LINE(50)
					reposition = true;
				}
				HX_STACK_LINE(53)
				Float _g6 = this->get_padding()->get_left();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(53)
				usedCX = (_g6 + this->get_padding()->get_right());
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					int _g22 = (int)0;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(54)
					while(((_g22 < colWidths->length))){
						HX_STACK_LINE(54)
						Float cx = colWidths->__get(_g22);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(54)
						++(_g22);
						HX_STACK_LINE(55)
						hx::AddEq(usedCX,(cx + this->get_spacingX()));
					}
				}
				HX_STACK_LINE(57)
				hx::SubEq(usedCX,this->get_spacingX());
				HX_STACK_LINE(59)
				if ((reposition)){
					HX_STACK_LINE(60)
					int _g22 = (int)0;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(60)
					while(((_g22 < colChildren->length))){
						HX_STACK_LINE(60)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = colChildren->__get(_g22);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(60)
						++(_g22);
						HX_STACK_LINE(61)
						::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
						HX_STACK_LINE(62)
						Float tempXpos = temp->__Field(HX_CSTRING("get_x"),true)();		HX_STACK_VAR(tempXpos,"tempXpos");
						HX_STACK_LINE(63)
						::String _switch_1 = (halign);
						if (  ( _switch_1==HX_CSTRING("center"))){
							HX_STACK_LINE(65)
							Float _g7 = (usedCX - temp->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(65)
							Float _g8 = (_g7 - this->get_padding()->get_left());		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(65)
							tempXpos = (_g8 - (((Float(colWidths->__get(col)) / Float((int)2)) - (Float(temp->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2)))));
						}
						else if (  ( _switch_1==HX_CSTRING("right"))){
							HX_STACK_LINE(67)
							Float _g9 = (usedCX - temp->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(67)
							tempXpos = (_g9 - this->get_padding()->get_left());
						}
						else  {
						}
;
;
						HX_STACK_LINE(70)
						temp->__Field(HX_CSTRING("set_x"),true)(tempXpos);
					}
				}
				HX_STACK_LINE(74)
				Float _g10 = (usedCY - this->get_spacingY());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(74)
				if (((  (((_g10 > this->get_container()->__Field(HX_CSTRING("get_height"),true)()))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(75)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)((usedCY - this->get_spacingY()));
				}
				HX_STACK_LINE(78)
				if (((  (((usedCX > this->get_container()->__Field(HX_CSTRING("get_width"),true)()))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(79)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)(usedCX);
				}
				HX_STACK_LINE(82)
				::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(83)
				::String _switch_2 = (halign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(85)
					Float _g111 = (usedCX - child->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(85)
					Float _g12 = (_g111 - this->get_padding()->get_left());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(85)
					xpos = (_g12 - (((Float(colWidths->__get(col)) / Float((int)2)) - (Float(child->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2)))));
				}
				else if (  ( _switch_2==HX_CSTRING("right"))){
					HX_STACK_LINE(87)
					Float _g13 = (usedCX - child->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(87)
					xpos = (_g13 - this->get_padding()->get_left());
				}
				else  {
				}
;
;
				HX_STACK_LINE(91)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(92)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
				HX_STACK_LINE(94)
				Float _g14 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(94)
				hx::AddEq(ypos,(_g14 + this->get_spacingY()));
			}
		}
	}
return null();
}


Dynamic VerticalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","clone",0x9c96a2c0,"haxe.ui.toolkit.layout.VerticalContinuousLayout.clone","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",1,0xd83d204d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic VerticalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","self",0x60353989,"haxe.ui.toolkit.layout.VerticalContinuousLayout.self","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",2,0xd83d204d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();
}



VerticalContinuousLayout_obj::VerticalContinuousLayout_obj()
{
}

Dynamic VerticalContinuousLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic VerticalContinuousLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalContinuousLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

Class VerticalContinuousLayout_obj::__mClass;

void VerticalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.VerticalContinuousLayout"), hx::TCanCast< VerticalContinuousLayout_obj> ,sStaticFields,sMemberFields,
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

void VerticalContinuousLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
