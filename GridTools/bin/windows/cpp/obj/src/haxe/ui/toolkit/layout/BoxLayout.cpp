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
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void BoxLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","new",0x9dea6965,"haxe.ui.toolkit.layout.BoxLayout.new","haxe/ui/toolkit/layout/BoxLayout.hx",8,0xd04b792b)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//BoxLayout_obj::~BoxLayout_obj() { }

Dynamic BoxLayout_obj::__CreateEmpty() { return  new BoxLayout_obj; }
hx::ObjectPtr< BoxLayout_obj > BoxLayout_obj::__new()
{  hx::ObjectPtr< BoxLayout_obj > result = new BoxLayout_obj();
	result->__construct();
	return result;}

Dynamic BoxLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoxLayout_obj > result = new BoxLayout_obj();
	result->__construct();
	return result;}

Void BoxLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","resizeChildren",0x309b6e6e,"haxe.ui.toolkit.layout.BoxLayout.resizeChildren","haxe/ui/toolkit/layout/BoxLayout.hx",14,0xd04b792b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		this->super::resizeChildren();
		HX_STACK_LINE(16)
		Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(17)
		Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(18)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(19)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			while(((_g < _g1->length))){
				HX_STACK_LINE(20)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(20)
				++(_g);
				HX_STACK_LINE(22)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(23)
					continue;
				}
				HX_STACK_LINE(26)
				if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)-1))){
					HX_STACK_LINE(27)
					child->__Field(HX_CSTRING("set_width"),true)((Float((ucx * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(30)
				if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() > (int)-1))){
					HX_STACK_LINE(31)
					child->__Field(HX_CSTRING("set_height"),true)((Float((ucy * child->__Field(HX_CSTRING("get_percentHeight"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(35)
				if (((child->__Field(HX_CSTRING("get_width"),true)() > totalWidth))){
					HX_STACK_LINE(36)
					totalWidth = child->__Field(HX_CSTRING("get_width"),true)();
				}
				HX_STACK_LINE(38)
				if (((child->__Field(HX_CSTRING("get_height"),true)() > totalHeight))){
					HX_STACK_LINE(39)
					totalHeight = child->__Field(HX_CSTRING("get_height"),true)();
				}
			}
		}
		HX_STACK_LINE(43)
		if ((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)())){
			HX_STACK_LINE(44)
			if (((  (((  (((totalWidth > (int)0))) ? bool((totalWidth != this->get_innerWidth())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentWidth"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(45)
				Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g + this->get_padding()->get_right()))));
			}
			HX_STACK_LINE(47)
			if (((  (((  (((totalHeight > (int)0))) ? bool((totalHeight != this->get_innerHeight())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentHeight"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(48)
				Float _g1 = this->get_padding()->get_top();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g1 + this->get_padding()->get_bottom()))));
			}
		}
		else{
			HX_STACK_LINE(51)
			if (((  (((totalWidth > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_height"),true)() == (int)0)) : bool(false) ))){
				HX_STACK_LINE(52)
				Float _g2 = this->get_padding()->get_left();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(52)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g2 + this->get_padding()->get_right()))));
				HX_STACK_LINE(53)
				Float _g3 = this->get_padding()->get_top();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(53)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g3 + this->get_padding()->get_bottom()))));
			}
			else{
				HX_STACK_LINE(54)
				if (((  (((totalHeight > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_width"),true)() == (int)0)) : bool(false) ))){
					HX_STACK_LINE(55)
					Float _g4 = this->get_padding()->get_left();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(55)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g4 + this->get_padding()->get_right()))));
					HX_STACK_LINE(56)
					Float _g5 = this->get_padding()->get_top();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(56)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g5 + this->get_padding()->get_bottom()))));
				}
			}
		}
	}
return null();
}


Void BoxLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","repositionChildren",0x64755556,"haxe.ui.toolkit.layout.BoxLayout.repositionChildren","haxe/ui/toolkit/layout/BoxLayout.hx",61,0xd04b792b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->super::repositionChildren();
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			while(((_g < _g1->length))){
				HX_STACK_LINE(63)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(63)
				++(_g);
				HX_STACK_LINE(65)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(66)
					continue;
				}
				HX_STACK_LINE(69)
				Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(70)
				Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(71)
				::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(72)
				::String valign = child->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(74)
				::String _switch_1 = (halign);
				if (  ( _switch_1==HX_CSTRING("center"))){
					HX_STACK_LINE(76)
					Float _g2 = (Float(this->get_container()->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(76)
					xpos = (_g2 - (Float(child->__Field(HX_CSTRING("get_width"),true)()) / Float((int)2)));
				}
				else if (  ( _switch_1==HX_CSTRING("right"))){
					HX_STACK_LINE(78)
					Float _g11 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(78)
					Float _g2 = (_g11 - child->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(78)
					xpos = (_g2 - this->get_padding()->get_right());
				}
				else  {
				}
;
;
				HX_STACK_LINE(82)
				::String _switch_2 = (valign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(84)
					Float _g3 = (Float(this->get_container()->__Field(HX_CSTRING("get_height"),true)()) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(84)
					ypos = (_g3 - (Float(child->__Field(HX_CSTRING("get_height"),true)()) / Float((int)2)));
				}
				else if (  ( _switch_2==HX_CSTRING("bottom"))){
					HX_STACK_LINE(86)
					Float _g4 = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(86)
					Float _g5 = (_g4 - child->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(86)
					ypos = (_g5 - this->get_padding()->get_bottom());
				}
				else  {
				}
;
;
				HX_STACK_LINE(90)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(91)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
			}
		}
	}
return null();
}


Float BoxLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","get_usableWidth",0x33c94c0a,"haxe.ui.toolkit.layout.BoxLayout.get_usableWidth","haxe/ui/toolkit/layout/BoxLayout.hx",100,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	Float ucx = this->super::get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(119)
	return ucx;
}


Float BoxLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","get_usableHeight",0xd2a8b563,"haxe.ui.toolkit.layout.BoxLayout.get_usableHeight","haxe/ui/toolkit/layout/BoxLayout.hx",122,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float ucy = this->super::get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(141)
	return ucy;
}


Dynamic BoxLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","clone",0x6b95b7a2,"haxe.ui.toolkit.layout.BoxLayout.clone","haxe/ui/toolkit/layout/BoxLayout.hx",1,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::BoxLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic BoxLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.BoxLayout","self",0x927fd6e7,"haxe.ui.toolkit.layout.BoxLayout.self","haxe/ui/toolkit/layout/BoxLayout.hx",2,0xd04b792b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();
}



BoxLayout_obj::BoxLayout_obj()
{
}

Dynamic BoxLayout_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoxLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BoxLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoxLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoxLayout_obj::__mClass,"__mClass");
};

#endif

Class BoxLayout_obj::__mClass;

void BoxLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.BoxLayout"), hx::TCanCast< BoxLayout_obj> ,sStaticFields,sMemberFields,
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

void BoxLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
