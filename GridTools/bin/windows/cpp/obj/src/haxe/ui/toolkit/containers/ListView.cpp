#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ListView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","new",0xf20d97cf,"haxe.ui.toolkit.containers.ListView.new","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
{
	HX_STACK_LINE(28)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->set_autoSize(false);
	HX_STACK_LINE(35)
	this->set_dataSource(::haxe::ui::toolkit::data::ArrayDataSource_obj::__new());
	HX_STACK_LINE(36)
	this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
	HX_STACK_LINE(37)
	this->_content = ::haxe::ui::toolkit::containers::VBox_obj::__new();
	HX_STACK_LINE(38)
	this->_content->set_id(HX_CSTRING("content"));
	HX_STACK_LINE(39)
	this->_content->set_percentWidth((int)100);
	HX_STACK_LINE(40)
	this->addChild(this->_content);
	HX_STACK_LINE(42)
	this->_itemRenderer = hx::ClassOf< ::haxe::ui::toolkit::core::renderers::BasicItemRenderer >();
}
;
	return null();
}

//ListView_obj::~ListView_obj() { }

Dynamic ListView_obj::__CreateEmpty() { return  new ListView_obj; }
hx::ObjectPtr< ListView_obj > ListView_obj::__new()
{  hx::ObjectPtr< ListView_obj > result = new ListView_obj();
	result->__construct();
	return result;}

Dynamic ListView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListView_obj > result = new ListView_obj();
	result->__construct();
	return result;}

hx::Object *ListView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

Void ListView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","initialize",0x97b7c5c1,"haxe.ui.toolkit.containers.ListView.initialize","haxe/ui/toolkit/containers/ListView.hx",48,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->super::initialize();
		HX_STACK_LINE(51)
		if (((this->_dataSource == null()))){
			HX_STACK_LINE(52)
			this->set_dataSource(::haxe::ui::toolkit::data::ArrayDataSource_obj::__new());
		}
		HX_STACK_LINE(55)
		this->_dataSource->open();
		HX_STACK_LINE(57)
		this->syncUI();
		HX_STACK_LINE(58)
		this->checkScrolls();
	}
return null();
}


Void ListView_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","dispose",0x24702b8e,"haxe.ui.toolkit.containers.ListView.dispose","haxe/ui/toolkit/containers/ListView.hx",61,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		if (((this->_dataSource != null()))){
			HX_STACK_LINE(63)
			this->_dataSource->close();
		}
		HX_STACK_LINE(65)
		this->super::dispose();
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChild",0x5528b5ec,"haxe.ui.toolkit.containers.ListView.addChild","haxe/ui/toolkit/containers/ListView.hx",68,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(69)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
		HX_STACK_LINE(70)
		this->_itemRenderer = child;
		HX_STACK_LINE(71)
		return child;
	}
	HX_STACK_LINE(73)
	return this->super::addChild(child);
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChildAt",0x793341ff,"haxe.ui.toolkit.containers.ListView.addChildAt","haxe/ui/toolkit/containers/ListView.hx",77,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(77)
	return this->super::addChildAt(child,index);
}


int ListView_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_listSize",0xb40176f9,"haxe.ui.toolkit.containers.ListView.get_listSize","haxe/ui/toolkit/containers/ListView.hx",91,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	return this->_content->get_children()->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_listSize,return )

Float ListView_obj::get_itemHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemHeight",0x9d6d7a94,"haxe.ui.toolkit.containers.ListView.get_itemHeight","haxe/ui/toolkit/containers/ListView.hx",94,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	if (((this->_content->get_children()->length == (int)0))){
		HX_STACK_LINE(96)
		return (int)0;
	}
	HX_STACK_LINE(98)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(99)
	Float _g = this->_content->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(99)
	Float cy = (_g + this->_content->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)());		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(100)
	int scy = this->_content->get_layout()->__Field(HX_CSTRING("get_spacingY"),true)();		HX_STACK_VAR(scy,"scy");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->_content->get_children();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(101)
		while(((_g1 < _g11->length))){
			HX_STACK_LINE(101)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g1);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(101)
			++(_g1);
			HX_STACK_LINE(102)
			hx::AddEq(cy,(child->__Field(HX_CSTRING("get_height"),true)() + scy));
			HX_STACK_LINE(103)
			(n)++;
			HX_STACK_LINE(104)
			if (((n > (int)100))){
				HX_STACK_LINE(105)
				break;
			}
		}
	}
	HX_STACK_LINE(108)
	if (((n > (int)0))){
		HX_STACK_LINE(109)
		hx::SubEq(cy,scy);
	}
	HX_STACK_LINE(111)
	return (Float(cy) / Float(n));
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemHeight,return )

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::getItem( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItem",0x81661fb8,"haxe.ui.toolkit.containers.ListView.getItem","haxe/ui/toolkit/containers/ListView.hx",115,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(115)
	return hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->get_children()->__get(index));
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItem,return )

Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > ListView_obj::get_selectedItems( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedItems",0x1480deab,"haxe.ui.toolkit.containers.ListView.get_selectedItems","haxe/ui/toolkit/containers/ListView.hx",119,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	return this->_selectedItems;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItems,return )

int ListView_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedIndex",0x1088cdbd,"haxe.ui.toolkit.containers.ListView.get_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",122,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(124)
	if (((bool((this->_selectedItems != null())) && bool((this->_selectedItems->length > (int)0))))){
		HX_STACK_LINE(125)
		index = ::Lambda_obj::indexOf(this->_content->get_children(),this->_selectedItems->__get((int)0));
	}
	HX_STACK_LINE(127)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndex,return )

int ListView_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_selectedIndex",0x33f6a5c9,"haxe.ui.toolkit.containers.ListView.set_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",130,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(131)
	if (((this->_ready == false))){
		HX_STACK_LINE(132)
		return value;
	}
	HX_STACK_LINE(135)
	if (((value < (int)0))){
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			while(((_g < _g1->length))){
				HX_STACK_LINE(136)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = _g1->__get(_g);		HX_STACK_VAR(selectedItem,"selectedItem");
				HX_STACK_LINE(136)
				++(_g);
				HX_STACK_LINE(137)
				selectedItem->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
			}
		}
		HX_STACK_LINE(139)
		this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
	}
	else{
		HX_STACK_LINE(141)
		if (((this->_content->getChildAt(value) != null()))){
			HX_STACK_LINE(142)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(142)
			item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(value));
			HX_STACK_LINE(143)
			if (((item != null()))){
				HX_STACK_LINE(144)
				this->handleListSelection(item,null(),null());
			}
		}
	}
	HX_STACK_LINE(149)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndex,return )

::haxe::ui::toolkit::core::Component ListView_obj::get_content( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_content",0x91773bbf,"haxe.ui.toolkit.containers.ListView.get_content","haxe/ui/toolkit/containers/ListView.hx",152,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(154)
	if (((this->get_numChildren() > (int)0))){
		HX_STACK_LINE(155)
		c = hx::TCast< haxe::ui::toolkit::core::Component >::cast(this->getChildAt((int)0));
	}
	HX_STACK_LINE(157)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_content,return )

Dynamic ListView_obj::get_itemRenderer( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemRenderer",0x6f40fd30,"haxe.ui.toolkit.containers.ListView.get_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",161,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return this->_itemRenderer;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRenderer,return )

Dynamic ListView_obj::set_itemRenderer( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_itemRenderer",0xc582eaa4,"haxe.ui.toolkit.containers.ListView.set_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",164,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	this->_itemRenderer = value;
	HX_STACK_LINE(166)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRenderer,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_dataSource",0xcae71fdf,"haxe.ui.toolkit.containers.ListView.get_dataSource","haxe/ui/toolkit/containers/ListView.hx",175,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	return this->_dataSource;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_dataSource",0xeb070853,"haxe.ui.toolkit.containers.ListView.set_dataSource","haxe/ui/toolkit/containers/ListView.hx",178,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	if (((this->_dataSource != null()))){
		HX_STACK_LINE(180)
		if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >()))){
			HX_STACK_LINE(181)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(this->_dataSource))->removeEventListener(::flash::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null());
		}
	}
	HX_STACK_LINE(185)
	this->_dataSource = value;
	HX_STACK_LINE(187)
	if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >()))){
		HX_STACK_LINE(188)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(this->_dataSource))->addEventListener(::flash::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(191)
	if (((this->_ready == true))){
		HX_STACK_LINE(192)
		this->syncUI();
	}
	HX_STACK_LINE(194)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(195)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_dataSource,return )

Void ListView_obj::_onDataSourceChanged( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onDataSourceChanged",0x396edf62,"haxe.ui.toolkit.containers.ListView._onDataSourceChanged","haxe/ui/toolkit/containers/ListView.hx",199,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		this->syncUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onDataSourceChanged,(void))

Void ListView_obj::syncUI( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","syncUI",0xea42d960,"haxe.ui.toolkit.containers.ListView.syncUI","haxe/ui/toolkit/containers/ListView.hx",205,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(207)
		if (((this->_dataSource != null()))){
			HX_STACK_LINE(208)
			if ((this->get_dataSource()->moveFirst())){
				HX_STACK_LINE(209)
				do{
					HX_STACK_LINE(210)
					::String dataHash = this->get_dataSource()->hash();		HX_STACK_VAR(dataHash,"dataHash");
					HX_STACK_LINE(211)
					Dynamic data = this->get_dataSource()->get();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(212)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer item = null();		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(213)
					if (((this->_content->getChildAt(pos) != null()))){
						HX_STACK_LINE(214)
						item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(pos));
					}
					HX_STACK_LINE(217)
					if (((item == null()))){
						HX_STACK_LINE(218)
						this->addListViewItem(dataHash,data,pos);
						HX_STACK_LINE(219)
						(pos)++;
					}
					else{
						HX_STACK_LINE(221)
						if (((item->__Field(HX_CSTRING("hash"),true) == dataHash))){
							HX_STACK_LINE(222)
							(pos)++;
						}
						else{
							HX_STACK_LINE(224)
							while(((bool((item != null())) && bool((item->__Field(HX_CSTRING("hash"),true) != dataHash))))){
								HX_STACK_LINE(225)
								this->removeListViewItem(pos);
								HX_STACK_LINE(226)
								item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(pos));
							}
							HX_STACK_LINE(228)
							(pos)++;
						}
					}
				}
while((this->get_dataSource()->moveNext()));
			}
		}
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			int _g = this->_content->get_children()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while(((_g1 < _g))){
				HX_STACK_LINE(235)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(236)
				this->removeListViewItem(n);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,syncUI,(void))

Void ListView_obj::addListViewItem( ::String dataHash,Dynamic data,hx::Null< int >  __o_index){
int index = __o_index.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addListViewItem",0x74f53e46,"haxe.ui.toolkit.containers.ListView.addListViewItem","haxe/ui/toolkit/containers/ListView.hx",252,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataHash,"dataHash")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(253)
		if (((data == null()))){
			HX_STACK_LINE(254)
			return null();
		}
		HX_STACK_LINE(257)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item = this->createRendererInstance();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(258)
		item->__Field(HX_CSTRING("set_autoSize"),true)(true);
		HX_STACK_LINE(259)
		item->__FieldRef(HX_CSTRING("hash")) = dataHash;
		HX_STACK_LINE(260)
		item->__Field(HX_CSTRING("set_percentWidth"),true)((int)100);
		HX_STACK_LINE(262)
		item->__Field(HX_CSTRING("set_data"),true)(data);
		HX_STACK_LINE(263)
		if ((::Std_obj::is(item,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >()))){
			HX_STACK_LINE(264)
			::String styleName;		HX_STACK_VAR(styleName,"styleName");
			HX_STACK_LINE(264)
			if (((hx::Mod(this->_content->get_numChildren(),(int)2) == (int)0))){
				HX_STACK_LINE(264)
				styleName = HX_CSTRING("even");
			}
			else{
				HX_STACK_LINE(264)
				styleName = HX_CSTRING("odd");
			}
			HX_STACK_LINE(265)
			(hx::TCast< haxe::ui::toolkit::core::StyleableDisplayObject >::cast(item))->set_styleName(styleName);
		}
		HX_STACK_LINE(268)
		if (((index == (int)-1))){
			HX_STACK_LINE(269)
			this->_content->addChild(item);
		}
		else{
			HX_STACK_LINE(271)
			this->_content->addChildAt(item,index);
		}
		HX_STACK_LINE(274)
		this->invalidate((int)256,null());
		HX_STACK_LINE(276)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_mouseOver"),this->_onListItemMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(277)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_mouseOut"),this->_onListItemMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(278)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_click"),this->_onListItemClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,addListViewItem,(void))

Void ListView_obj::removeListViewItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","removeListViewItem",0xebdd4c6b,"haxe.ui.toolkit.containers.ListView.removeListViewItem","haxe/ui/toolkit/containers/ListView.hx",281,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(282)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(282)
		item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(index));
		HX_STACK_LINE(283)
		int sIndex = ::Lambda_obj::indexOf(this->_selectedItems,item);		HX_STACK_VAR(sIndex,"sIndex");
		HX_STACK_LINE(284)
		if (((sIndex != (int)-1))){
			HX_STACK_LINE(285)
			this->_selectedItems->remove(item);
		}
		HX_STACK_LINE(287)
		if (((item != null()))){
			HX_STACK_LINE(288)
			this->_content->removeChild(item,null());
			HX_STACK_LINE(289)
			this->invalidate((int)256,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,removeListViewItem,(void))

Void ListView_obj::_onListItemMouseOver( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOver",0x01cd29db,"haxe.ui.toolkit.containers.ListView._onListItemMouseOver","haxe/ui/toolkit/containers/ListView.hx",294,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(294)
		if ((::Std_obj::is(event->get_component(),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >()))){
			HX_STACK_LINE(295)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(event->get_component()))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("over"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOver,(void))

Void ListView_obj::_onListItemMouseOut( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOut",0xbe92b5e7,"haxe.ui.toolkit.containers.ListView._onListItemMouseOut","haxe/ui/toolkit/containers/ListView.hx",300,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(300)
		if ((::Std_obj::is(event->get_component(),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >()))){
			HX_STACK_LINE(301)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = event->get_component();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(302)
			if ((this->isSelected(item))){
				HX_STACK_LINE(303)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("selected"));
			}
			else{
				HX_STACK_LINE(305)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOut,(void))

Void ListView_obj::_onListItemClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemClick",0x9a7ed30a,"haxe.ui.toolkit.containers.ListView._onListItemClick","haxe/ui/toolkit/containers/ListView.hx",311,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(311)
		if ((::Std_obj::is(event->get_component(),hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
			HX_STACK_LINE(312)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = event->get_component();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(313)
			if ((item->allowSelection(event->stageX,event->stageY))){
				HX_STACK_LINE(314)
				this->handleListSelection(item,event,null());
				HX_STACK_LINE(315)
				this->handleClick(item);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemClick,(void))

Void ListView_obj::handleListSelection( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item,::haxe::ui::toolkit::events::UIEvent event,hx::Null< bool >  __o_raiseEvent){
bool raiseEvent = __o_raiseEvent.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleListSelection",0xa73ab8b5,"haxe.ui.toolkit.containers.ListView.handleListSelection","haxe/ui/toolkit/containers/ListView.hx",320,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(raiseEvent,"raiseEvent")
{
		HX_STACK_LINE(321)
		bool shiftPressed = false;		HX_STACK_VAR(shiftPressed,"shiftPressed");
		HX_STACK_LINE(322)
		bool ctrlPressed = false;		HX_STACK_VAR(ctrlPressed,"ctrlPressed");
		HX_STACK_LINE(324)
		if (((  (((event != null()))) ? bool(::Std_obj::is(event,hx::ClassOf< ::flash::events::MouseEvent >())) : bool(false) ))){
			HX_STACK_LINE(325)
			::flash::events::MouseEvent mouseEvent;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(325)
			mouseEvent = hx::TCast< flash::events::MouseEvent >::cast(event);
			HX_STACK_LINE(326)
			shiftPressed = mouseEvent->shiftKey;
			HX_STACK_LINE(327)
			ctrlPressed = mouseEvent->ctrlKey;
		}
		HX_STACK_LINE(330)
		if (((ctrlPressed == true))){
		}
		else{
			HX_STACK_LINE(332)
			if (((shiftPressed == true))){
			}
			else{
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(335)
					Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(335)
					while(((_g < _g1->length))){
						HX_STACK_LINE(335)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = _g1->__get(_g);		HX_STACK_VAR(selectedItem,"selectedItem");
						HX_STACK_LINE(335)
						++(_g);
						HX_STACK_LINE(336)
						if (((selectedItem != item))){
							HX_STACK_LINE(337)
							selectedItem->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
						}
					}
				}
				HX_STACK_LINE(340)
				this->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
			}
		}
		HX_STACK_LINE(343)
		if ((this->isSelected(item))){
			HX_STACK_LINE(344)
			this->_selectedItems->remove(item);
			HX_STACK_LINE(345)
			item->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("over"));
		}
		else{
			HX_STACK_LINE(347)
			this->_selectedItems->push(item);
			HX_STACK_LINE(348)
			item->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("selected"));
		}
		HX_STACK_LINE(351)
		this->ensureVisible(item);
		HX_STACK_LINE(353)
		if (((raiseEvent == true))){
			HX_STACK_LINE(354)
			if (((this->get_selectedIndex() != (int)-1))){
				HX_STACK_LINE(355)
				::haxe::ui::toolkit::core::renderers::ItemRenderer item1 = this->_content->getChildAt(this->get_selectedIndex());		HX_STACK_VAR(item1,"item1");
				HX_STACK_LINE(356)
				if (((item1 != null()))){
					HX_STACK_LINE(357)
					item1->dispatchProxyEvent(HX_CSTRING("haxeui_change"),event);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,handleListSelection,(void))

Void ListView_obj::handleClick( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleClick",0xecad75ef,"haxe.ui.toolkit.containers.ListView.handleClick","haxe/ui/toolkit/containers/ListView.hx",365,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(366)
		int index = ::Lambda_obj::indexOf(this->_content->get_children(),item);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(367)
		if (((this->_lastSelection == index))){
			HX_STACK_LINE(368)
			::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_doubleClick"),null(),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(369)
			this->dispatchEvent(event);
			HX_STACK_LINE(370)
			this->_lastSelection = (int)-1;
		}
		else{
			HX_STACK_LINE(372)
			this->_lastSelection = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,handleClick,(void))

bool ListView_obj::isSelected( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","isSelected",0xd718d0d6,"haxe.ui.toolkit.containers.ListView.isSelected","haxe/ui/toolkit/containers/ListView.hx",377,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(377)
	return (::Lambda_obj::indexOf(this->_selectedItems,item) != (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,isSelected,return )

int ListView_obj::getItemIndex( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItemIndex",0x9ff5f03a,"haxe.ui.toolkit.containers.ListView.getItemIndex","haxe/ui/toolkit/containers/ListView.hx",383,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(384)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(385)
	if (((item != null()))){
		HX_STACK_LINE(386)
		index = ::Lambda_obj::indexOf(this->_content->get_children(),item);
	}
	HX_STACK_LINE(388)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItemIndex,return )

int ListView_obj::setSelectedIndexNoEvent( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","setSelectedIndexNoEvent",0xe52f6fd3,"haxe.ui.toolkit.containers.ListView.setSelectedIndexNoEvent","haxe/ui/toolkit/containers/ListView.hx",391,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(392)
	if (((this->_ready == false))){
		HX_STACK_LINE(393)
		return value;
	}
	HX_STACK_LINE(395)
	if (((this->_content->getChildAt(value) != null()))){
		HX_STACK_LINE(396)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(396)
		item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(value));
		HX_STACK_LINE(397)
		if (((item != null()))){
			HX_STACK_LINE(398)
			this->handleListSelection(item,null(),false);
		}
	}
	HX_STACK_LINE(401)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,setSelectedIndexNoEvent,return )

Void ListView_obj::ensureVisible( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","ensureVisible",0xf4cc0683,"haxe.ui.toolkit.containers.ListView.ensureVisible","haxe/ui/toolkit/containers/ListView.hx",404,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(405)
		if (((item == null()))){
			HX_STACK_LINE(406)
			return null();
		}
		HX_STACK_LINE(408)
		Float vpos = (int)0;		HX_STACK_VAR(vpos,"vpos");
		HX_STACK_LINE(409)
		if (((this->_vscroll != null()))){
			HX_STACK_LINE(410)
			vpos = this->_vscroll->get_pos();
		}
		HX_STACK_LINE(412)
		Float _g = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		Float _g1 = (_g + item->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(412)
		if (((_g1 > (vpos + this->_content->get_clipHeight())))){
			HX_STACK_LINE(413)
			Float _g2 = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(413)
			Float _g3 = (_g2 + item->__Field(HX_CSTRING("get_height"),true)());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(413)
			this->_vscroll->set_pos((_g3 - this->_content->get_clipHeight()));
		}
		else{
			HX_STACK_LINE(414)
			if (((item->__Field(HX_CSTRING("get_y"),true)() < vpos))){
				HX_STACK_LINE(415)
				this->_vscroll->set_pos(item->__Field(HX_CSTRING("get_y"),true)());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,ensureVisible,(void))

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::createRendererInstance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","createRendererInstance",0xeda51105,"haxe.ui.toolkit.containers.ListView.createRendererInstance","haxe/ui/toolkit/containers/ListView.hx",419,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(420)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(421)
	if (((this->_itemRenderer == null()))){
		HX_STACK_LINE(422)
		return null();
	}
	HX_STACK_LINE(425)
	if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
		HX_STACK_LINE(426)
		r = (hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_itemRenderer))->__Field(HX_CSTRING("clone"),true)();
	}
	else{
		HX_STACK_LINE(427)
		if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(428)
			::Class cls;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(428)
			cls = hx::TCast< Class >::cast(this->_itemRenderer);
			HX_STACK_LINE(429)
			r = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));
		}
		else{
			HX_STACK_LINE(430)
			if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(431)
				::String classString;		HX_STACK_VAR(classString,"classString");
				HX_STACK_LINE(431)
				classString = hx::TCast< String >::cast(this->_itemRenderer);
				HX_STACK_LINE(432)
				::Class cls = ::Type_obj::resolveClass(classString);		HX_STACK_VAR(cls,"cls");
				HX_STACK_LINE(433)
				r = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
	}
	HX_STACK_LINE(436)
	if (((r != null()))){
		HX_STACK_LINE(437)
		r->__FieldRef(HX_CSTRING("eventDispatcher")) = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(440)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,createRendererInstance,return )

Dynamic ListView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","clone",0x71b0d48c,"haxe.ui.toolkit.containers.ListView.clone","haxe/ui/toolkit/containers/ListView.hx",1,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ListView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ListView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","self",0xdd25453d,"haxe.ui.toolkit.containers.ListView.self","haxe/ui/toolkit/containers/ListView.hx",2,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ListView_obj::__new();
}


Dynamic ListView_obj::set_onComponentEvent( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_onComponentEvent",0xf26e8fca,"haxe.ui.toolkit.containers.ListView.set_onComponentEvent","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	this->onComponentEvent = value;
	HX_STACK_LINE(22)
	this->addEventListener(HX_CSTRING("haxeui_componentEvent"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(27)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_onComponentEvent,return )


ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(listSize,"listSize");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(listSize,"listSize");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"syncUI") ) { return syncUI_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"content") ) { return inCallProp ? get_content() : content; }
		if (HX_FIELD_EQ(inName,"getItem") ) { return getItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"listSize") ) { return inCallProp ? get_listSize() : listSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return inCallProp ? get_itemHeight() : itemHeight; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		if (HX_FIELD_EQ(inName,"get_content") ) { return get_content_dyn(); }
		if (HX_FIELD_EQ(inName,"handleClick") ) { return handleClick_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { return get_itemRenderer(); }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getItemIndex") ) { return getItemIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return _itemRenderer; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return inCallProp ? get_selectedItems() : selectedItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ensureVisible_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { return _lastSelection; }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return get_itemHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addListViewItem") ) { return addListViewItem_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return get_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return set_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemClick") ) { return _onListItemClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { return onComponentEvent; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return get_selectedItems_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeListViewItem") ) { return removeListViewItem_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_onListItemMouseOut") ) { return _onListItemMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"handleListSelection") ) { return handleListSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onDataSourceChanged") ) { return _onDataSourceChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemMouseOver") ) { return _onListItemMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onComponentEvent") ) { return set_onComponentEvent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRendererInstance") ) { return createRendererInstance_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setSelectedIndexNoEvent") ) { return setSelectedIndexNoEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listSize") ) { listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { return set_itemRenderer(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { _lastSelection=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { if (inCallProp) return set_onComponentEvent(inValue);onComponentEvent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataSource"));
	outFields->push(HX_CSTRING("_content"));
	outFields->push(HX_CSTRING("_selectedItems"));
	outFields->push(HX_CSTRING("_lastSelection"));
	outFields->push(HX_CSTRING("_itemRenderer"));
	outFields->push(HX_CSTRING("listSize"));
	outFields->push(HX_CSTRING("itemHeight"));
	outFields->push(HX_CSTRING("selectedItems"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("itemRenderer"));
	outFields->push(HX_CSTRING("dataSource"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(ListView_obj,_dataSource),HX_CSTRING("_dataSource")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(ListView_obj,_content),HX_CSTRING("_content")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,_selectedItems),HX_CSTRING("_selectedItems")},
	{hx::fsInt,(int)offsetof(ListView_obj,_lastSelection),HX_CSTRING("_lastSelection")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,_itemRenderer),HX_CSTRING("_itemRenderer")},
	{hx::fsInt,(int)offsetof(ListView_obj,listSize),HX_CSTRING("listSize")},
	{hx::fsFloat,(int)offsetof(ListView_obj,itemHeight),HX_CSTRING("itemHeight")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,selectedItems),HX_CSTRING("selectedItems")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ListView_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,onComponentEvent),HX_CSTRING("onComponentEvent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataSource"),
	HX_CSTRING("_content"),
	HX_CSTRING("_selectedItems"),
	HX_CSTRING("_lastSelection"),
	HX_CSTRING("_itemRenderer"),
	HX_CSTRING("initialize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("listSize"),
	HX_CSTRING("itemHeight"),
	HX_CSTRING("selectedItems"),
	HX_CSTRING("content"),
	HX_CSTRING("get_listSize"),
	HX_CSTRING("get_itemHeight"),
	HX_CSTRING("getItem"),
	HX_CSTRING("get_selectedItems"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_content"),
	HX_CSTRING("get_itemRenderer"),
	HX_CSTRING("set_itemRenderer"),
	HX_CSTRING("get_dataSource"),
	HX_CSTRING("set_dataSource"),
	HX_CSTRING("_onDataSourceChanged"),
	HX_CSTRING("syncUI"),
	HX_CSTRING("addListViewItem"),
	HX_CSTRING("removeListViewItem"),
	HX_CSTRING("_onListItemMouseOver"),
	HX_CSTRING("_onListItemMouseOut"),
	HX_CSTRING("_onListItemClick"),
	HX_CSTRING("handleListSelection"),
	HX_CSTRING("handleClick"),
	HX_CSTRING("isSelected"),
	HX_CSTRING("getItemIndex"),
	HX_CSTRING("setSelectedIndexNoEvent"),
	HX_CSTRING("ensureVisible"),
	HX_CSTRING("createRendererInstance"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	HX_CSTRING("onComponentEvent"),
	HX_CSTRING("set_onComponentEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#endif

Class ListView_obj::__mClass;

void ListView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ListView"), hx::TCanCast< ListView_obj> ,sStaticFields,sMemberFields,
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

void ListView_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onComponentEvent") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onComponentEvent") , _Function_2_2::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("fields") , _Function_1_1::Block(),false);
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
} // end namespace containers
