#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#include <haxe/ui/toolkit/layout/GridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void GridLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","new",0xa8539e64,"haxe.ui.toolkit.layout.GridLayout.new","haxe/ui/toolkit/layout/GridLayout.hx",7,0x5e5bda0c)
{
	HX_STACK_LINE(8)
	this->_columns = (int)1;
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//GridLayout_obj::~GridLayout_obj() { }

Dynamic GridLayout_obj::__CreateEmpty() { return  new GridLayout_obj; }
hx::ObjectPtr< GridLayout_obj > GridLayout_obj::__new()
{  hx::ObjectPtr< GridLayout_obj > result = new GridLayout_obj();
	result->__construct();
	return result;}

Dynamic GridLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridLayout_obj > result = new GridLayout_obj();
	result->__construct();
	return result;}

hx::Object *GridLayout_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

int GridLayout_obj::get_columns( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_columns",0x46977ef8,"haxe.ui.toolkit.layout.GridLayout.get_columns","haxe/ui/toolkit/layout/GridLayout.hx",21,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return this->_columns;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,get_columns,return )

int GridLayout_obj::set_columns( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","set_columns",0x51048604,"haxe.ui.toolkit.layout.GridLayout.set_columns","haxe/ui/toolkit/layout/GridLayout.hx",24,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	this->_columns = value;
	HX_STACK_LINE(26)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(GridLayout_obj,set_columns,return )

Void GridLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","resizeChildren",0xbcc4ebcf,"haxe.ui.toolkit.layout.GridLayout.resizeChildren","haxe/ui/toolkit/layout/GridLayout.hx",32,0x5e5bda0c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::resizeChildren();
		HX_STACK_LINE(35)
		Array< Float > columnWidths = this->calcColumnWidths();		HX_STACK_VAR(columnWidths,"columnWidths");
		HX_STACK_LINE(36)
		Array< Float > rowHeights = this->calcRowHeights();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(37)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(38)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(40)
		int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(41)
		int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			while(((_g < _g1->length))){
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(42)
				++(_g);
				HX_STACK_LINE(44)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(45)
					continue;
				}
				HX_STACK_LINE(48)
				if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)-1))){
					HX_STACK_LINE(49)
					Float ucx = columnWidths->__get(columnIndex);		HX_STACK_VAR(ucx,"ucx");
					HX_STACK_LINE(50)
					child->__Field(HX_CSTRING("set_width"),true)((Float((ucx * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(53)
				if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() > (int)-1))){
					HX_STACK_LINE(54)
					Float ucy = rowHeights->__get(rowIndex);		HX_STACK_VAR(ucy,"ucy");
					HX_STACK_LINE(55)
					child->__Field(HX_CSTRING("set_height"),true)((Float((ucy * child->__Field(HX_CSTRING("get_percentHeight"),true)())) / Float((int)100)));
				}
				HX_STACK_LINE(58)
				(columnIndex)++;
				HX_STACK_LINE(59)
				if (((columnIndex >= this->_columns))){
					HX_STACK_LINE(60)
					columnIndex = (int)0;
					HX_STACK_LINE(61)
					(rowIndex)++;
				}
			}
		}
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			while(((_g < columnWidths->length))){
				HX_STACK_LINE(65)
				Float cx = columnWidths->__get(_g);		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(66)
				hx::AddEq(totalWidth,cx);
			}
		}
		HX_STACK_LINE(68)
		if (((columnWidths->length > (int)1))){
			HX_STACK_LINE(69)
			hx::AddEq(totalWidth,(this->get_spacingX() * ((columnWidths->length - (int)1))));
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(72)
			while(((_g < rowHeights->length))){
				HX_STACK_LINE(72)
				Float cy = rowHeights->__get(_g);		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(72)
				++(_g);
				HX_STACK_LINE(73)
				hx::AddEq(totalHeight,cy);
			}
		}
		HX_STACK_LINE(75)
		if (((rowHeights->length > (int)1))){
			HX_STACK_LINE(76)
			hx::AddEq(totalHeight,(this->get_spacingY() * ((rowHeights->length - (int)1))));
		}
		HX_STACK_LINE(79)
		if ((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)())){
			HX_STACK_LINE(80)
			if (((  (((  (((totalWidth > (int)0))) ? bool((totalWidth != this->get_innerWidth())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentWidth"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(81)
				Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(81)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g + this->get_padding()->get_right()))));
			}
			HX_STACK_LINE(83)
			if (((  (((  (((totalHeight > (int)0))) ? bool((totalHeight != this->get_innerHeight())) : bool(false) ))) ? bool((this->get_container()->__Field(HX_CSTRING("get_percentHeight"),true)() == (int)-1)) : bool(false) ))){
				HX_STACK_LINE(84)
				Float _g1 = this->get_padding()->get_top();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g1 + this->get_padding()->get_bottom()))));
			}
		}
		else{
			HX_STACK_LINE(87)
			if (((  (((totalWidth > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_height"),true)() == (int)0)) : bool(false) ))){
				HX_STACK_LINE(88)
				Float _g2 = this->get_padding()->get_left();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(88)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g2 + this->get_padding()->get_right()))));
				HX_STACK_LINE(89)
				Float _g3 = this->get_padding()->get_top();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(89)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g3 + this->get_padding()->get_bottom()))));
			}
			else{
				HX_STACK_LINE(90)
				if (((  (((totalHeight > (int)0))) ? bool((this->get_container()->__Field(HX_CSTRING("get_width"),true)() == (int)0)) : bool(false) ))){
					HX_STACK_LINE(91)
					Float _g4 = this->get_padding()->get_left();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(91)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)((totalWidth + ((_g4 + this->get_padding()->get_right()))));
					HX_STACK_LINE(92)
					Float _g5 = this->get_padding()->get_top();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(92)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)((totalHeight + ((_g5 + this->get_padding()->get_bottom()))));
				}
			}
		}
	}
return null();
}


Void GridLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","repositionChildren",0xa97f9737,"haxe.ui.toolkit.layout.GridLayout.repositionChildren","haxe/ui/toolkit/layout/GridLayout.hx",97,0x5e5bda0c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->super::repositionChildren();
		HX_STACK_LINE(100)
		Array< Float > columnWidths = this->calcColumnWidths();		HX_STACK_VAR(columnWidths,"columnWidths");
		HX_STACK_LINE(101)
		Array< Float > rowHeights = this->calcRowHeights();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(102)
		int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(103)
		int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(104)
		Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(105)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			while(((_g < _g1->length))){
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(107)
				++(_g);
				HX_STACK_LINE(109)
				if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
					HX_STACK_LINE(110)
					continue;
				}
				HX_STACK_LINE(113)
				::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(114)
				::String valign = child->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(115)
				::String _switch_1 = (halign);
				if (  ( _switch_1==HX_CSTRING("center"))){
					HX_STACK_LINE(117)
					child->__Field(HX_CSTRING("set_x"),true)((xpos + (((columnWidths->__get(columnIndex) - child->__Field(HX_CSTRING("get_width"),true)())) * 0.5)));
				}
				else if (  ( _switch_1==HX_CSTRING("right"))){
					HX_STACK_LINE(119)
					child->__Field(HX_CSTRING("set_x"),true)((xpos + ((columnWidths->__get(columnIndex) - child->__Field(HX_CSTRING("get_width"),true)()))));
				}
				else  {
					HX_STACK_LINE(121)
					child->__Field(HX_CSTRING("set_x"),true)(xpos);
				}
;
;
				HX_STACK_LINE(123)
				::String _switch_2 = (valign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(125)
					child->__Field(HX_CSTRING("set_y"),true)((ypos + (((rowHeights->__get(rowIndex) - child->__Field(HX_CSTRING("get_height"),true)())) * 0.5)));
				}
				else if (  ( _switch_2==HX_CSTRING("bottom"))){
					HX_STACK_LINE(127)
					child->__Field(HX_CSTRING("set_y"),true)((ypos + ((rowHeights->__get(rowIndex) - child->__Field(HX_CSTRING("get_height"),true)()))));
				}
				else  {
					HX_STACK_LINE(129)
					child->__Field(HX_CSTRING("set_y"),true)(ypos);
				}
;
;
				HX_STACK_LINE(132)
				hx::AddEq(xpos,(columnWidths->__get(columnIndex) + this->get_spacingX()));
				HX_STACK_LINE(134)
				(columnIndex)++;
				HX_STACK_LINE(135)
				if (((columnIndex >= this->_columns))){
					HX_STACK_LINE(136)
					xpos = this->get_padding()->get_left();
					HX_STACK_LINE(137)
					hx::AddEq(ypos,(rowHeights->__get(rowIndex) + this->get_spacingY()));
					HX_STACK_LINE(138)
					columnIndex = (int)0;
					HX_STACK_LINE(139)
					(rowIndex)++;
				}
			}
		}
	}
return null();
}


Float GridLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_usableWidth",0x4bed8389,"haxe.ui.toolkit.layout.GridLayout.get_usableWidth","haxe/ui/toolkit/layout/GridLayout.hx",147,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	Float ucx = this->super::get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(150)
	return ucx;
}


Float GridLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_usableHeight",0xda350d04,"haxe.ui.toolkit.layout.GridLayout.get_usableHeight","haxe/ui/toolkit/layout/GridLayout.hx",153,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	Float ucy = this->super::get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(156)
	return ucy;
}


Array< Float > GridLayout_obj::calcColumnWidths( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcColumnWidths",0x748246d4,"haxe.ui.toolkit.layout.GridLayout.calcColumnWidths","haxe/ui/toolkit/layout/GridLayout.hx",162,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	Array< Float > columnWidths = Array_obj< Float >::__new();		HX_STACK_VAR(columnWidths,"columnWidths");
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(164)
		int _g = this->_columns;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		while(((_g1 < _g))){
			HX_STACK_LINE(164)
			int n = (_g1)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(165)
			columnWidths->push((int)0);
		}
	}
	HX_STACK_LINE(168)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(169)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(170)
		while(((_g < _g1->length))){
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(170)
			++(_g);
			HX_STACK_LINE(172)
			if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
				HX_STACK_LINE(173)
				continue;
			}
			HX_STACK_LINE(176)
			if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() <= (int)0))){
				HX_STACK_LINE(177)
				if (((child->__Field(HX_CSTRING("get_width"),true)() > columnWidths->__get(columnIndex)))){
					HX_STACK_LINE(178)
					columnWidths[columnIndex] = child->__Field(HX_CSTRING("get_width"),true)();
				}
			}
			HX_STACK_LINE(181)
			(columnIndex)++;
			HX_STACK_LINE(182)
			if (((columnIndex >= this->_columns))){
				HX_STACK_LINE(183)
				columnIndex = (int)0;
				HX_STACK_LINE(184)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(188)
	rowIndex = (int)0;
	HX_STACK_LINE(189)
	columnIndex = (int)0;
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		while(((_g < _g1->length))){
			HX_STACK_LINE(190)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(190)
			++(_g);
			HX_STACK_LINE(192)
			if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
				HX_STACK_LINE(193)
				continue;
			}
			HX_STACK_LINE(196)
			if (((child->__Field(HX_CSTRING("get_percentWidth"),true)() > (int)0))){
				HX_STACK_LINE(197)
				Float _g2 = this->get_usableWidth();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(197)
				int _g11 = (this->get_columns() - (int)1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(197)
				Float ucx = (_g2 - (_g11 * this->get_spacingX()));		HX_STACK_VAR(ucx,"ucx");
				HX_STACK_LINE(198)
				{
					HX_STACK_LINE(198)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(198)
					int _g21 = columnWidths->length;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(198)
					while(((_g3 < _g21))){
						HX_STACK_LINE(198)
						int n = (_g3)++;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(199)
						if (((n != columnIndex))){
							HX_STACK_LINE(200)
							hx::SubEq(ucx,columnWidths->__get(n));
						}
					}
				}
				HX_STACK_LINE(203)
				Float cx = (Float((ucx * child->__Field(HX_CSTRING("get_percentWidth"),true)())) / Float((int)100));		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(204)
				if (((cx > columnWidths->__get(columnIndex)))){
					HX_STACK_LINE(205)
					columnWidths[columnIndex] = cx;
				}
			}
			HX_STACK_LINE(208)
			(columnIndex)++;
			HX_STACK_LINE(209)
			if (((columnIndex >= this->_columns))){
				HX_STACK_LINE(210)
				columnIndex = (int)0;
				HX_STACK_LINE(211)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(215)
	return columnWidths;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcColumnWidths,return )

Array< Float > GridLayout_obj::calcRowHeights( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcRowHeights",0xb7d73123,"haxe.ui.toolkit.layout.GridLayout.calcRowHeights","haxe/ui/toolkit/layout/GridLayout.hx",218,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		while(((_g < _g1->length))){
			HX_STACK_LINE(221)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = _g1->__get(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(221)
			++(_g);
			HX_STACK_LINE(222)
			if ((c->__Field(HX_CSTRING("get_visible"),true)())){
				HX_STACK_LINE(223)
				(visibleChildren)++;
			}
		}
	}
	HX_STACK_LINE(227)
	int rowCount = ::Std_obj::_int((Float(visibleChildren) / Float(this->_columns)));		HX_STACK_VAR(rowCount,"rowCount");
	HX_STACK_LINE(228)
	if (((hx::Mod(visibleChildren,this->_columns) != (int)0))){
		HX_STACK_LINE(229)
		(rowCount)++;
	}
	HX_STACK_LINE(231)
	Array< Float > rowHeights = Array_obj< Float >::__new();		HX_STACK_VAR(rowHeights,"rowHeights");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		while(((_g < rowCount))){
			HX_STACK_LINE(232)
			int n = (_g)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(233)
			rowHeights->push((int)0);
		}
	}
	HX_STACK_LINE(236)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(237)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		while(((_g < _g1->length))){
			HX_STACK_LINE(238)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(238)
			++(_g);
			HX_STACK_LINE(240)
			if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
				HX_STACK_LINE(241)
				continue;
			}
			HX_STACK_LINE(244)
			if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() <= (int)0))){
				HX_STACK_LINE(245)
				if (((child->__Field(HX_CSTRING("get_height"),true)() > rowHeights->__get(rowIndex)))){
					HX_STACK_LINE(246)
					rowHeights[rowIndex] = child->__Field(HX_CSTRING("get_height"),true)();
				}
			}
			HX_STACK_LINE(249)
			(columnIndex)++;
			HX_STACK_LINE(250)
			if (((columnIndex >= this->_columns))){
				HX_STACK_LINE(251)
				columnIndex = (int)0;
				HX_STACK_LINE(252)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(256)
	rowIndex = (int)0;
	HX_STACK_LINE(257)
	columnIndex = (int)0;
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		while(((_g < _g1->length))){
			HX_STACK_LINE(258)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(258)
			++(_g);
			HX_STACK_LINE(260)
			if (((child->__Field(HX_CSTRING("get_visible"),true)() == false))){
				HX_STACK_LINE(261)
				continue;
			}
			HX_STACK_LINE(264)
			if (((child->__Field(HX_CSTRING("get_percentHeight"),true)() > (int)0))){
				HX_STACK_LINE(265)
				Float _g2 = this->get_usableHeight();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(265)
				Float ucy = (_g2 - (((rowCount - (int)1)) * this->get_spacingY()));		HX_STACK_VAR(ucy,"ucy");
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(266)
					int _g21 = rowHeights->length;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(266)
					while(((_g3 < _g21))){
						HX_STACK_LINE(266)
						int n = (_g3)++;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(267)
						if (((n != rowIndex))){
							HX_STACK_LINE(268)
							hx::SubEq(ucy,rowHeights->__get(n));
						}
					}
				}
				HX_STACK_LINE(271)
				Float cy = (Float((ucy * child->__Field(HX_CSTRING("get_percentHeight"),true)())) / Float((int)100));		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(272)
				if (((cy > rowHeights->__get(rowIndex)))){
					HX_STACK_LINE(273)
					rowHeights[rowIndex] = cy;
				}
			}
			HX_STACK_LINE(276)
			(columnIndex)++;
			HX_STACK_LINE(277)
			if (((columnIndex >= this->_columns))){
				HX_STACK_LINE(278)
				columnIndex = (int)0;
				HX_STACK_LINE(279)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(282)
	return rowHeights;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcRowHeights,return )

Dynamic GridLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","clone",0xca756a61,"haxe.ui.toolkit.layout.GridLayout.clone","haxe/ui/toolkit/layout/GridLayout.hx",1,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::GridLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_columns(this->get_columns());
	HX_STACK_LINE(4)
	return c;
}


Dynamic GridLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","self",0xa4250108,"haxe.ui.toolkit.layout.GridLayout.self","haxe/ui/toolkit/layout/GridLayout.hx",2,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::GridLayout_obj::__new();
}



GridLayout_obj::GridLayout_obj()
{
}

Dynamic GridLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return get_columns(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return set_columns_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"calcRowHeights") ) { return calcRowHeights_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"calcColumnWidths") ) { return calcColumnWidths_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GridLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return set_columns(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_columns"));
	outFields->push(HX_CSTRING("columns"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GridLayout_obj,_columns),HX_CSTRING("_columns")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_columns"),
	HX_CSTRING("get_columns"),
	HX_CSTRING("set_columns"),
	HX_CSTRING("resizeChildren"),
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("get_usableWidth"),
	HX_CSTRING("get_usableHeight"),
	HX_CSTRING("calcColumnWidths"),
	HX_CSTRING("calcRowHeights"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridLayout_obj::__mClass,"__mClass");
};

#endif

Class GridLayout_obj::__mClass;

void GridLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.GridLayout"), hx::TCanCast< GridLayout_obj> ,sStaticFields,sMemberFields,
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

void GridLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
