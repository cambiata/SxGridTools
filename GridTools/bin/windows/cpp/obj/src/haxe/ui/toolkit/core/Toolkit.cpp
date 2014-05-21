#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#include <haxe/ui/toolkit/core/xml/DataProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#include <haxe/ui/toolkit/core/xml/StyleProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#include <haxe/ui/toolkit/core/xml/UIProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#include <haxe/ui/toolkit/themes/DefaultTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Toolkit_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","new",0xcf7551c3,"haxe.ui.toolkit.core.Toolkit.new","haxe/ui/toolkit/core/Toolkit.hx",195,0xd65388cd)
{
	HX_STACK_LINE(195)
	this->initInstance();
}
;
	return null();
}

//Toolkit_obj::~Toolkit_obj() { }

Dynamic Toolkit_obj::__CreateEmpty() { return  new Toolkit_obj; }
hx::ObjectPtr< Toolkit_obj > Toolkit_obj::__new()
{  hx::ObjectPtr< Toolkit_obj > result = new Toolkit_obj();
	result->__construct();
	return result;}

Dynamic Toolkit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Toolkit_obj > result = new Toolkit_obj();
	result->__construct();
	return result;}

Void Toolkit_obj::initInstance( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","initInstance",0xa68a6102,"haxe.ui.toolkit.core.Toolkit.initInstance","haxe/ui/toolkit/core/Toolkit.hx",200,0xd65388cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(200)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,initInstance,(void))

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::_instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_instance",0xb6ed8ddb,"haxe.ui.toolkit.core.Toolkit.get_instance","haxe/ui/toolkit/core/Toolkit.hx",23,0xd65388cd)
	HX_STACK_LINE(24)
	if (((::haxe::ui::toolkit::core::Toolkit_obj::_instance == null()))){
		HX_STACK_LINE(25)
		::flash::Lib_obj::get_current()->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(26)
		::flash::Lib_obj::get_current()->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::core::Toolkit_obj::_instance = ::haxe::ui::toolkit::core::Toolkit_obj::__new();
	}
	HX_STACK_LINE(29)
	return ::haxe::ui::toolkit::core::Toolkit_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_instance,return )

Void Toolkit_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","init",0xb3eaf04d,"haxe.ui.toolkit.core.Toolkit.init","haxe/ui/toolkit/core/Toolkit.hx",32,0xd65388cd)
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::core::Toolkit_obj::get_instance();
		HX_STACK_LINE(34)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_CSTRING("ui"));
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_CSTRING("selection"));
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::StyleProcessor >(),HX_CSTRING("style"));
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::DataProcessor >(),HX_CSTRING("data"));
		HX_STACK_LINE(39)
		if (((  (((bool((::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition != HX_CSTRING("none"))) && bool((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister != null()))))) ? bool((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(::Type_obj::getClassName(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >())) == null())) : bool(false) ))){
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >(),HX_CSTRING("fade"));
		}
		HX_STACK_LINE(43)
		if (((bool((::haxe::ui::toolkit::core::Toolkit_obj::theme == null())) && bool((::haxe::ui::toolkit::core::Toolkit_obj::useDefaultTheme == true))))){
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::core::Toolkit_obj::theme = ::haxe::ui::toolkit::themes::DefaultTheme_obj::__new();
		}
		HX_STACK_LINE(47)
		if (((::haxe::ui::toolkit::core::Toolkit_obj::theme != null()))){
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::core::Toolkit_obj::theme->apply();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,init,(void))

::haxe::ds::StringMap Toolkit_obj::_registeredProcessors;

Void Toolkit_obj::registerXMLProcessor( ::Class cls,::String prefix){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","registerXMLProcessor",0x096212bb,"haxe.ui.toolkit.core.Toolkit.registerXMLProcessor","haxe/ui/toolkit/core/Toolkit.hx",53,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(54)
		if (((::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors == null()))){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(57)
		::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors->set(prefix,::Type_obj::getClassName(cls));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,registerXMLProcessor,(void))

bool Toolkit_obj::useDefaultTheme;

::haxe::ui::toolkit::themes::Theme Toolkit_obj::theme;

Dynamic Toolkit_obj::processXmlResource( ::String resourceId){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlResource",0xc500f993,"haxe.ui.toolkit.core.Toolkit.processXmlResource","haxe/ui/toolkit/core/Toolkit.hx",71,0xd65388cd)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_LINE(71)
	return ::haxe::ui::toolkit::core::Toolkit_obj::processXml(::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getXML(resourceId,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlResource,return )

Dynamic Toolkit_obj::processXml( ::Xml xml){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXml",0x282b33a5,"haxe.ui.toolkit.core.Toolkit.processXml","haxe/ui/toolkit/core/Toolkit.hx",74,0xd65388cd)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(75)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(77)
	result = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(xml->firstElement());
	HX_STACK_LINE(79)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXml,return )

Dynamic Toolkit_obj::processXmlNode( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlNode",0xbe41a047,"haxe.ui.toolkit.core.Toolkit.processXmlNode","haxe/ui/toolkit/core/Toolkit.hx",82,0xd65388cd)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(83)
	if (((node == null()))){
		HX_STACK_LINE(84)
		return null();
	}
	HX_STACK_LINE(87)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(88)
	::String nodeName = node->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(89)
	int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(90)
	if (((n != (int)-1))){
		HX_STACK_LINE(91)
		nodeName = nodeName.substr((n + (int)1),nodeName.length);
	}
	HX_STACK_LINE(93)
	nodeName = nodeName.toLowerCase();
	HX_STACK_LINE(95)
	::String condition = node->get(HX_CSTRING("condition"));		HX_STACK_VAR(condition,"condition");
	HX_STACK_LINE(96)
	if (((condition != null()))){
		HX_STACK_LINE(97)
		::hscript::Parser parser = ::hscript::Parser_obj::__new();		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(98)
		::hscript::Expr program = parser->parseString(condition);		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(99)
		::hscript::Interp interp = ::hscript::Interp_obj::__new();		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::hscript::ClientWrapper clientWrapper = ::haxe::ui::toolkit::hscript::ClientWrapper_obj::__new();		HX_STACK_VAR(clientWrapper,"clientWrapper");
		HX_STACK_LINE(101)
		interp->variables->set(HX_CSTRING("Client"),clientWrapper);
		HX_STACK_LINE(102)
		bool conditionResult = interp->execute(program);		HX_STACK_VAR(conditionResult,"conditionResult");
		HX_STACK_LINE(103)
		if (((conditionResult == false))){
			HX_STACK_LINE(104)
			return null();
		}
	}
	HX_STACK_LINE(108)
	if (((nodeName == HX_CSTRING("import")))){
		HX_STACK_LINE(109)
		::String importResource = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(importResource,"importResource");
		HX_STACK_LINE(110)
		if (((importResource != null()))){
			HX_STACK_LINE(111)
			::String importData = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(importResource,null());		HX_STACK_VAR(importData,"importData");
			HX_STACK_LINE(112)
			if (((importData != null()))){
				HX_STACK_LINE(113)
				::Xml importXml = ::Xml_obj::parse(importData);		HX_STACK_VAR(importXml,"importXml");
				HX_STACK_LINE(114)
				return ::haxe::ui::toolkit::core::Toolkit_obj::processXml(importXml);
			}
		}
	}
	else{
		HX_STACK_LINE(117)
		if (((nodeName == HX_CSTRING("script")))){
			HX_STACK_LINE(118)
			::String scriptResource = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(scriptResource,"scriptResource");
			HX_STACK_LINE(119)
			::String scriptData = HX_CSTRING("");		HX_STACK_VAR(scriptData,"scriptData");
			HX_STACK_LINE(120)
			if (((scriptResource != null()))){
				HX_STACK_LINE(121)
				hx::AddEq(scriptData,::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(scriptResource,null()));
			}
			HX_STACK_LINE(123)
			::String scriptNodeData = node->firstChild()->get_nodeValue();		HX_STACK_VAR(scriptNodeData,"scriptNodeData");
			HX_STACK_LINE(124)
			if (((scriptNodeData != null()))){
				HX_STACK_LINE(125)
				scriptNodeData = ::StringTools_obj::trim(scriptNodeData);
				HX_STACK_LINE(126)
				hx::AddEq(scriptData,(HX_CSTRING("\n\n") + scriptNodeData));
			}
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance()->addScript(scriptData);
		}
		else{
			HX_STACK_LINE(129)
			if (((nodeName == HX_CSTRING("style")))){
				HX_STACK_LINE(130)
				::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::StyleProcessor_obj::__new();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(131)
				result = p->process(node);
			}
			else{
				HX_STACK_LINE(133)
				if ((::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->hasDataSourceClass(nodeName))){
					HX_STACK_LINE(134)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::DataProcessor_obj::__new();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(135)
					result = p->process(node);
				}
				else{
					HX_STACK_LINE(137)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::UIProcessor_obj::__new();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(138)
					result = p->process(node);
				}
			}
		}
	}
	HX_STACK_LINE(142)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(143)
			Dynamic childResult = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(child);		HX_STACK_VAR(childResult,"childResult");
			HX_STACK_LINE(145)
			if (((  ((::Std_obj::is(childResult,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >()))) ? bool(::Std_obj::is(result,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDataComponent >())) : bool(false) ))){
				HX_STACK_LINE(146)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IDataComponent >::cast(result))->__Field(HX_CSTRING("set_dataSource"),true)(hx::TCast< haxe::ui::toolkit::data::IDataSource >::cast(childResult));
			}
			HX_STACK_LINE(149)
			if (((  ((::Std_obj::is(childResult,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >()))) ? bool(::Std_obj::is(result,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >())) : bool(false) ))){
				HX_STACK_LINE(150)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(result))->addChild(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(childResult));
			}
		}
;
	}
	HX_STACK_LINE(154)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlNode,return )

::String Toolkit_obj::_defaultTransition;

::haxe::ds::StringMap Toolkit_obj::_transitionRegister;

::String Toolkit_obj::get_defaultTransition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_defaultTransition",0x6463deb0,"haxe.ui.toolkit.core.Toolkit.get_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",166,0xd65388cd)
	HX_STACK_LINE(166)
	return ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_defaultTransition,return )

::String Toolkit_obj::set_defaultTransition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","set_defaultTransition",0xb86cacbc,"haxe.ui.toolkit.core.Toolkit.set_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",169,0xd65388cd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(170)
	::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition = value;
	HX_STACK_LINE(171)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_defaultTransition,return )

::String Toolkit_obj::getTransitionForClass( ::Class cls){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","getTransitionForClass",0x0e947f7d,"haxe.ui.toolkit.core.Toolkit.getTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",174,0xd65388cd)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(175)
	::String s = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(176)
	::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(177)
	if (((  (((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister != null()))) ? bool((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(className) != null())) : bool(false) ))){
		HX_STACK_LINE(178)
		s = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(className);
	}
	HX_STACK_LINE(180)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,getTransitionForClass,return )

Void Toolkit_obj::setTransitionForClass( ::Class cls,::String transition){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","setTransitionForClass",0x629d4d89,"haxe.ui.toolkit.core.Toolkit.setTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",183,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(transition,"transition")
		HX_STACK_LINE(184)
		if (((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister == null()))){
			HX_STACK_LINE(185)
			::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(187)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(188)
		::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->set(className,transition);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,setTransitionForClass,(void))

::haxe::ui::toolkit::core::Root Toolkit_obj::openFullscreen( Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openFullscreen",0xc39f2622,"haxe.ui.toolkit.core.Toolkit.openFullscreen","haxe/ui/toolkit/core/Toolkit.hx",203,0xd65388cd)
	HX_STACK_ARG(fn,"fn")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",204,0xd65388cd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(204)
	::haxe::ui::toolkit::core::Root root = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->createRoot(_Function_1_1::Block(),fn);		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(205)
	return root;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,openFullscreen,return )

::haxe::ui::toolkit::core::Root Toolkit_obj::openPopup( Dynamic options,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openPopup",0xfd3fa7a5,"haxe.ui.toolkit.core.Toolkit.openPopup","haxe/ui/toolkit/core/Toolkit.hx",208,0xd65388cd)
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(209)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",210,0xd65388cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(210)
		options = _Function_2_1::Block();
	}
	HX_STACK_LINE(213)
	if (((options->__Field(HX_CSTRING("x"),true) != null()))){
		HX_STACK_LINE(213)
		options->__FieldRef(HX_CSTRING("x")) = options->__Field(HX_CSTRING("x"),true);
	}
	else{
		HX_STACK_LINE(213)
		options->__FieldRef(HX_CSTRING("x")) = (int)20;
	}
	HX_STACK_LINE(214)
	if (((options->__Field(HX_CSTRING("y"),true) != null()))){
		HX_STACK_LINE(214)
		options->__FieldRef(HX_CSTRING("y")) = options->__Field(HX_CSTRING("y"),true);
	}
	else{
		HX_STACK_LINE(214)
		options->__FieldRef(HX_CSTRING("y")) = (int)20;
	}
	HX_STACK_LINE(215)
	if (((options->__Field(HX_CSTRING("styleName"),true) != null()))){
		HX_STACK_LINE(215)
		options->__FieldRef(HX_CSTRING("styleName")) = options->__Field(HX_CSTRING("styleName"),true);
	}
	else{
		HX_STACK_LINE(215)
		options->__FieldRef(HX_CSTRING("styleName")) = HX_CSTRING("popup");
	}
	HX_STACK_LINE(217)
	::haxe::ui::toolkit::core::Root root = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->createRoot(options,fn);		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(218)
	return root;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,openPopup,return )


Toolkit_obj::Toolkit_obj()
{
}

Dynamic Toolkit_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { return theme; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"openPopup") ) { return openPopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processXml") ) { return processXml_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"initInstance") ) { return initInstance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processXmlNode") ) { return processXmlNode_dyn(); }
		if (HX_FIELD_EQ(inName,"openFullscreen") ) { return openFullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTheme") ) { return useDefaultTheme; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { return get_defaultTransition(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"processXmlResource") ) { return processXmlResource_dyn(); }
		if (HX_FIELD_EQ(inName,"_defaultTransition") ) { return _defaultTransition; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_transitionRegister") ) { return _transitionRegister; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"registerXMLProcessor") ) { return registerXMLProcessor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredProcessors") ) { return _registeredProcessors; }
		if (HX_FIELD_EQ(inName,"get_defaultTransition") ) { return get_defaultTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTransition") ) { return set_defaultTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"getTransitionForClass") ) { return getTransitionForClass_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransitionForClass") ) { return setTransitionForClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Toolkit_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { theme=inValue.Cast< ::haxe::ui::toolkit::themes::Theme >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::Toolkit >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::Toolkit >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTheme") ) { useDefaultTheme=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { return set_defaultTransition(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_defaultTransition") ) { _defaultTransition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_transitionRegister") ) { _transitionRegister=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredProcessors") ) { _registeredProcessors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Toolkit_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	HX_CSTRING("init"),
	HX_CSTRING("_registeredProcessors"),
	HX_CSTRING("registerXMLProcessor"),
	HX_CSTRING("useDefaultTheme"),
	HX_CSTRING("theme"),
	HX_CSTRING("processXmlResource"),
	HX_CSTRING("processXml"),
	HX_CSTRING("processXmlNode"),
	HX_CSTRING("_defaultTransition"),
	HX_CSTRING("_transitionRegister"),
	HX_CSTRING("get_defaultTransition"),
	HX_CSTRING("set_defaultTransition"),
	HX_CSTRING("getTransitionForClass"),
	HX_CSTRING("setTransitionForClass"),
	HX_CSTRING("openFullscreen"),
	HX_CSTRING("openPopup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initInstance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_MARK_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
};

#endif

Class Toolkit_obj::__mClass;

void Toolkit_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Toolkit"), hx::TCanCast< Toolkit_obj> ,sStaticFields,sMemberFields,
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

void Toolkit_obj::__boot()
{
	useDefaultTheme= true;
	_defaultTransition= HX_CSTRING("slide");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
