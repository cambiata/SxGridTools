#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#include <haxe/ui/toolkit/containers/Accordion.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ContinuousBox
#include <haxe/ui/toolkit/containers/ContinuousBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ExpandablePanel
#include <haxe/ui/toolkit/containers/ExpandablePanel.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Grid
#include <haxe/ui/toolkit/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_MenuBar
#include <haxe/ui/toolkit/containers/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_RTFView
#include <haxe/ui/toolkit/containers/RTFView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TabView
#include <haxe/ui/toolkit/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableView
#include <haxe/ui/toolkit/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#include <haxe/ui/toolkit/controls/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#include <haxe/ui/toolkit/controls/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgress
#include <haxe/ui/toolkit/controls/HProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuButton
#include <haxe/ui/toolkit/controls/MenuButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBox
#include <haxe/ui/toolkit/controls/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TabBar
#include <haxe/ui/toolkit/controls/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgress
#include <haxe/ui/toolkit/controls/VProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VSlider
#include <haxe/ui/toolkit/controls/VSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_Code
#include <haxe/ui/toolkit/controls/extended/Code.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_RTF
#include <haxe/ui/toolkit/controls/extended/RTF.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector
#include <haxe/ui/toolkit/controls/selection/DateSelector.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ComponentRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/DataSourceRegistryEntry.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer
#include <haxe/ui/toolkit/core/renderers/ComponentItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_FilesDataSource
#include <haxe/ui/toolkit/data/FilesDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_JSONDataSource
#include <haxe/ui/toolkit/data/JSONDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_MySQLDataSource
#include <haxe/ui/toolkit/data/MySQLDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_XMLDataSource
#include <haxe/ui/toolkit/data/XMLDataSource.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void ClassManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","new",0x99f32294,"haxe.ui.toolkit.core.ClassManager.new","haxe/ui/toolkit/core/ClassManager.hx",21,0xd34ec19c)
{
	HX_STACK_LINE(21)
	this->registerDefaults();
}
;
	return null();
}

//ClassManager_obj::~ClassManager_obj() { }

Dynamic ClassManager_obj::__CreateEmpty() { return  new ClassManager_obj; }
hx::ObjectPtr< ClassManager_obj > ClassManager_obj::__new()
{  hx::ObjectPtr< ClassManager_obj > result = new ClassManager_obj();
	result->__construct();
	return result;}

Dynamic ClassManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassManager_obj > result = new ClassManager_obj();
	result->__construct();
	return result;}

Void ClassManager_obj::registerDefaults( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDefaults",0x4d472b61,"haxe.ui.toolkit.core.ClassManager.registerDefaults","haxe/ui/toolkit/core/ClassManager.hx",24,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::haxe::ui::toolkit::core::ClassManager _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_CSTRING("accordion"));
			HX_STACK_LINE(26)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Box >(),HX_CSTRING("box"));
			HX_STACK_LINE(27)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::CalendarView >(),HX_CSTRING("calendarview"));
			HX_STACK_LINE(28)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Container >(),HX_CSTRING("container"));
			HX_STACK_LINE(29)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ContinuousBox >(),HX_CSTRING("continuousbox"));
			HX_STACK_LINE(30)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ExpandablePanel >(),HX_CSTRING("expandablepanel"));
			HX_STACK_LINE(34)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),HX_CSTRING("grid"));
			HX_STACK_LINE(34)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::HBox >(),HX_CSTRING("hbox"));
			HX_STACK_LINE(36)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ListView >(),HX_CSTRING("listview"));
			HX_STACK_LINE(36)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::MenuBar >(),HX_CSTRING("menubar"));
			HX_STACK_LINE(39)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::RTFView >(),HX_CSTRING("rtfview"));
			HX_STACK_LINE(40)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ScrollView >(),HX_CSTRING("scrollview"));
			HX_STACK_LINE(44)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >(),HX_CSTRING("stack"));
			HX_STACK_LINE(46)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::TableView >(),HX_CSTRING("tableview"));
			HX_STACK_LINE(50)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::TabView >(),HX_CSTRING("tabview"));
			HX_STACK_LINE(53)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::containers::VBox >(),HX_CSTRING("vbox"));
		}
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),HX_CSTRING("button"));
			HX_STACK_LINE(27)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Calendar >(),HX_CSTRING("calendar"));
			HX_STACK_LINE(28)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::CheckBox >(),HX_CSTRING("checkbox"));
			HX_STACK_LINE(29)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::HProgress >(),HX_CSTRING("hprogress"));
			HX_STACK_LINE(30)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >(),HX_CSTRING("hscroll"));
			HX_STACK_LINE(31)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::HSlider >(),HX_CSTRING("hslider"));
			HX_STACK_LINE(34)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Image >(),HX_CSTRING("image"));
			HX_STACK_LINE(35)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >(),HX_CSTRING("menu"));
			HX_STACK_LINE(36)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::MenuButton >(),HX_CSTRING("menubutton"));
			HX_STACK_LINE(37)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >(),HX_CSTRING("menuitem"));
			HX_STACK_LINE(39)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::OptionBox >(),HX_CSTRING("optionbox"));
			HX_STACK_LINE(40)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Progress >(),HX_CSTRING("progress"));
			HX_STACK_LINE(46)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Scroll >(),HX_CSTRING("scroll"));
			HX_STACK_LINE(47)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Slider >(),HX_CSTRING("slider"));
			HX_STACK_LINE(50)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Spacer >(),HX_CSTRING("spacer"));
			HX_STACK_LINE(53)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::TabBar >(),HX_CSTRING("tabbar"));
			HX_STACK_LINE(54)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),HX_CSTRING("text"));
			HX_STACK_LINE(55)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),HX_CSTRING("textinput"));
			HX_STACK_LINE(58)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Value >(),HX_CSTRING("value"));
			HX_STACK_LINE(60)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::VProgress >(),HX_CSTRING("vprogress"));
			HX_STACK_LINE(63)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >(),HX_CSTRING("vscroll"));
			HX_STACK_LINE(64)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::VSlider >(),HX_CSTRING("vslider"));
		}
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >(),HX_CSTRING("dateselector"));
			HX_STACK_LINE(28)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),HX_CSTRING("listselector"));
		}
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::extended::Code >(),HX_CSTRING("code"));
			HX_STACK_LINE(29)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::controls::extended::RTF >(),HX_CSTRING("rtf"));
		}
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),HX_CSTRING("component"));
			HX_STACK_LINE(30)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObject >(),HX_CSTRING("displayobject"));
			HX_STACK_LINE(31)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >(),HX_CSTRING("displayobjectcontainer"));
			HX_STACK_LINE(34)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::Root >(),HX_CSTRING("root"));
			HX_STACK_LINE(35)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >(),HX_CSTRING("statecomponent"));
			HX_STACK_LINE(36)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >(),HX_CSTRING("styleabledisplayobject"));
		}
		HX_STACK_LINE(30)
		{
			HX_STACK_LINE(30)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::renderers::BasicItemRenderer >(),HX_CSTRING("basicitemrenderer"));
			HX_STACK_LINE(31)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::renderers::ComponentItemRenderer >(),HX_CSTRING("componentitemrenderer"));
			HX_STACK_LINE(34)
			_g->registerComponentClass(hx::ClassOf< ::haxe::ui::toolkit::core::renderers::ItemRenderer >(),HX_CSTRING("itemrenderer"));
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			_g->registerDataSourceClass(hx::ClassOf< ::haxe::ui::toolkit::data::ArrayDataSource >(),HX_CSTRING("array"));
			HX_STACK_LINE(34)
			_g->registerDataSourceClass(hx::ClassOf< ::haxe::ui::toolkit::data::FilesDataSource >(),HX_CSTRING("files"));
			HX_STACK_LINE(35)
			_g->registerDataSourceClass(hx::ClassOf< ::haxe::ui::toolkit::data::JSONDataSource >(),HX_CSTRING("json"));
			HX_STACK_LINE(36)
			_g->registerDataSourceClass(hx::ClassOf< ::haxe::ui::toolkit::data::MySQLDataSource >(),HX_CSTRING("mysql"));
			HX_STACK_LINE(37)
			_g->registerDataSourceClass(hx::ClassOf< ::haxe::ui::toolkit::data::XMLDataSource >(),HX_CSTRING("xml"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,registerDefaults,(void))

::String ClassManager_obj::getComponentClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getComponentClassName",0x37577390,"haxe.ui.toolkit.core.ClassManager.getComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",39,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(40)
	if (((this->componentClassMap == null()))){
		HX_STACK_LINE(41)
		return null();
	}
	HX_STACK_LINE(44)
	::String key = simpleName;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(46)
	::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = this->componentClassMap->get(key);		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(47)
	if (((entry == null()))){
		HX_STACK_LINE(48)
		return null();
	}
	HX_STACK_LINE(50)
	return entry->className;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getComponentClassName,return )

Void ClassManager_obj::registerComponentClass( ::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClass",0x60670a4a,"haxe.ui.toolkit.core.ClassManager.registerComponentClass","haxe/ui/toolkit/core/ClassManager.hx",53,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(54)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(55)
		this->registerComponentClassName(className,simpleName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClass,(void))

Void ClassManager_obj::registerComponentClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClassName",0xf13395b5,"haxe.ui.toolkit.core.ClassManager.registerComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",58,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(59)
		if (((this->componentClassMap == null()))){
			HX_STACK_LINE(60)
			this->componentClassMap = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = ::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(64)
		entry->simpleName = simpleName;
		HX_STACK_LINE(65)
		entry->className = className;
		HX_STACK_LINE(66)
		this->componentClassMap->set(simpleName,entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClassName,(void))

bool ClassManager_obj::hasDataSourceClass( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","hasDataSourceClass",0xbca8a165,"haxe.ui.toolkit.core.ClassManager.hasDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",74,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(75)
	if (((this->dataSourceClassMap == null()))){
		HX_STACK_LINE(76)
		return false;
	}
	HX_STACK_LINE(79)
	return this->dataSourceClassMap->exists(simpleName);
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,hasDataSourceClass,return )

::String ClassManager_obj::getDataSourceClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getDataSourceClassName",0xf8224a94,"haxe.ui.toolkit.core.ClassManager.getDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",82,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(83)
	if (((this->dataSourceClassMap == null()))){
		HX_STACK_LINE(84)
		return null();
	}
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = this->dataSourceClassMap->get(simpleName);		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(88)
	if (((entry == null()))){
		HX_STACK_LINE(89)
		return null();
	}
	HX_STACK_LINE(92)
	return entry->className;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getDataSourceClassName,return )

Void ClassManager_obj::registerDataSourceClass( ::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClass",0xf4256864,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",95,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(96)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(97)
		this->registerDataSourceClassName(className,simpleName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClass,(void))

Void ClassManager_obj::registerDataSourceClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClassName",0xdee408cf,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",100,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(101)
		if (((this->dataSourceClassMap == null()))){
			HX_STACK_LINE(102)
			this->dataSourceClassMap = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = ::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(106)
		entry->simpleName = simpleName;
		HX_STACK_LINE(107)
		entry->className = className;
		HX_STACK_LINE(108)
		this->dataSourceClassMap->set(simpleName,entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClassName,(void))

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::_instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","get_instance",0xb3019aea,"haxe.ui.toolkit.core.ClassManager.get_instance","haxe/ui/toolkit/core/ClassManager.hx",10,0xd34ec19c)
	HX_STACK_LINE(11)
	if (((::haxe::ui::toolkit::core::ClassManager_obj::_instance == null()))){
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::ClassManager_obj::_instance = ::haxe::ui::toolkit::core::ClassManager_obj::__new();
	}
	HX_STACK_LINE(14)
	return ::haxe::ui::toolkit::core::ClassManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,get_instance,return )


ClassManager_obj::ClassManager_obj()
{
}

void ClassManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassManager);
	HX_MARK_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_MARK_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
	HX_MARK_END_CLASS();
}

void ClassManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_VISIT_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
}

Dynamic ClassManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerDefaults") ) { return registerDefaults_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { return componentClassMap; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { return dataSourceClassMap; }
		if (HX_FIELD_EQ(inName,"hasDataSourceClass") ) { return hasDataSourceClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getComponentClassName") ) { return getComponentClassName_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerComponentClass") ) { return registerComponentClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getDataSourceClassName") ) { return getDataSourceClassName_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"registerDataSourceClass") ) { return registerDataSourceClass_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"registerComponentClassName") ) { return registerComponentClassName_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"registerDataSourceClassName") ) { return registerDataSourceClassName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClassManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { componentClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { dataSourceClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("componentClassMap"));
	outFields->push(HX_CSTRING("dataSourceClassMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,componentClassMap),HX_CSTRING("componentClassMap")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,dataSourceClassMap),HX_CSTRING("dataSourceClassMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("registerDefaults"),
	HX_CSTRING("componentClassMap"),
	HX_CSTRING("getComponentClassName"),
	HX_CSTRING("registerComponentClass"),
	HX_CSTRING("registerComponentClassName"),
	HX_CSTRING("dataSourceClassMap"),
	HX_CSTRING("hasDataSourceClass"),
	HX_CSTRING("getDataSourceClassName"),
	HX_CSTRING("registerDataSourceClass"),
	HX_CSTRING("registerDataSourceClassName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#endif

Class ClassManager_obj::__mClass;

void ClassManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.ClassManager"), hx::TCanCast< ClassManager_obj> ,sStaticFields,sMemberFields,
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

void ClassManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
