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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule
#include <haxe/ui/toolkit/style/_StyleManager/StyleRule.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#include <haxe/ui/toolkit/style/_StyleManager/StyleRulePart.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","new",0x91bf8c6d,"haxe.ui.toolkit.style.StyleManager.new","haxe/ui/toolkit/style/StyleManager.hx",12,0x60b8f881)
{
	HX_STACK_LINE(33)
	this->_cacheStyles = true;
	HX_STACK_LINE(28)
	this->stylesBuilt = (int)0;
	HX_STACK_LINE(37)
	this->_styles = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(38)
	this->_rules = Array_obj< ::String >::__new();
	HX_STACK_LINE(39)
	this->stylesBuiltFor = ::haxe::ds::StringMap_obj::__new();
}
;
	return null();
}

//StyleManager_obj::~StyleManager_obj() { }

Dynamic StyleManager_obj::__CreateEmpty() { return  new StyleManager_obj; }
hx::ObjectPtr< StyleManager_obj > StyleManager_obj::__new()
{  hx::ObjectPtr< StyleManager_obj > result = new StyleManager_obj();
	result->__construct();
	return result;}

Dynamic StyleManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleManager_obj > result = new StyleManager_obj();
	result->__construct();
	return result;}

Void StyleManager_obj::addStyle( ::String rule,::haxe::ui::toolkit::style::Style style){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyle",0xb2a94023,"haxe.ui.toolkit.style.StyleManager.addStyle","haxe/ui/toolkit/style/StyleManager.hx",42,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(43)
		this->_cachedStyles = null();
		HX_STACK_LINE(44)
		Array< ::String > arr = rule.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while(((_g < arr->length))){
				HX_STACK_LINE(45)
				::String a = arr->__get(_g);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(45)
				++(_g);
				HX_STACK_LINE(46)
				a = ::StringTools_obj::trim(a);
				HX_STACK_LINE(47)
				::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = this->_styles->get(a);		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
				HX_STACK_LINE(48)
				::haxe::ui::toolkit::style::Style existingStyle = null();		HX_STACK_VAR(existingStyle,"existingStyle");
				HX_STACK_LINE(49)
				if (((existingStyleRule != null()))){
					HX_STACK_LINE(50)
					::haxe::ui::toolkit::style::Style existingStyle1 = existingStyleRule->style;		HX_STACK_VAR(existingStyle1,"existingStyle1");
					HX_STACK_LINE(51)
					existingStyle1->merge(style);
					HX_STACK_LINE(52)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,existingStyle1);		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(53)
					this->_styles->set(a,styleRule);
				}
				else{
					HX_STACK_LINE(55)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,style);		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(56)
					this->_styles->set(a,styleRule);
					HX_STACK_LINE(57)
					this->_rules->push(a);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,addStyle,(void))

Void StyleManager_obj::addStyles( ::haxe::ui::toolkit::style::Styles styles){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyles",0xa16edef0,"haxe.ui.toolkit.style.StyleManager.addStyles","haxe/ui/toolkit/style/StyleManager.hx",63,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(styles,"styles")
		HX_STACK_LINE(63)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(styles->get_rules());  __it->hasNext(); ){
			::String rule = __it->next();
			this->addStyle(rule,styles->getStyle(rule));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,addStyles,(void))

::haxe::ui::toolkit::style::Style StyleManager_obj::findStyle( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findStyle",0x468c9a05,"haxe.ui.toolkit.style.StyleManager.findStyle","haxe/ui/toolkit/style/StyleManager.hx",68,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(69)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = this->_styles->get(rule);		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
	HX_STACK_LINE(70)
	if (((existingStyleRule != null()))){
		HX_STACK_LINE(71)
		return existingStyleRule->style;
	}
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,findStyle,return )

Void StyleManager_obj::clear( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","clear",0xd9380ada,"haxe.ui.toolkit.style.StyleManager.clear","haxe/ui/toolkit/style/StyleManager.hx",76,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->_styles = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(78)
		this->_rules = Array_obj< ::String >::__new();
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::style::StyleHelper_obj::clearCache();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,clear,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer StyleManager_obj::findAncestor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findAncestor",0x5e024bff,"haxe.ui.toolkit.style.StyleManager.findAncestor","haxe/ui/toolkit/style/StyleManager.hx",82,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_LINE(83)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(84)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(86)
	while(((a == null()))){
		HX_STACK_LINE(87)
		if (((this->rulePartMatch(t,rulePart,null(),null()) == true))){
			HX_STACK_LINE(88)
			a = t;
		}
		else{
			HX_STACK_LINE(90)
			t = t->__Field(HX_CSTRING("get_parent"),true)();
			HX_STACK_LINE(91)
			if (((t == null()))){
				HX_STACK_LINE(92)
				break;
			}
		}
	}
	HX_STACK_LINE(97)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,findAncestor,return )

bool StyleManager_obj::rulePartMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","rulePartMatch",0xf2793a03,"haxe.ui.toolkit.style.StyleManager.rulePartMatch","haxe/ui/toolkit/style/StyleManager.hx",100,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(101)
	bool match = false;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(103)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(104)
		state = null();
	}
	HX_STACK_LINE(107)
	::String className = ::Type_obj::getClassName(::Type_obj::getClass(c));		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(108)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(109)
	className = className.substr((n + (int)1),className.length);
	HX_STACK_LINE(110)
	if (((overriddenClassName != null()))){
		HX_STACK_LINE(111)
		className = overriddenClassName;
	}
	HX_STACK_LINE(113)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(114)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(115)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(116)
		styleName = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();
	}
	HX_STACK_LINE(119)
	::String rulePartId = rulePart->id;		HX_STACK_VAR(rulePartId,"rulePartId");
	HX_STACK_LINE(120)
	::String rulePartClassName = rulePart->className;		HX_STACK_VAR(rulePartClassName,"rulePartClassName");
	HX_STACK_LINE(121)
	::String rulePartState = rulePart->state;		HX_STACK_VAR(rulePartState,"rulePartState");
	HX_STACK_LINE(122)
	::String rulePartStyleName = rulePart->styleName;		HX_STACK_VAR(rulePartStyleName,"rulePartStyleName");
	HX_STACK_LINE(124)
	if (((bool((rulePartStyleName != null())) && bool((rulePartStyleName.length == (int)0))))){
		HX_STACK_LINE(125)
		rulePartStyleName = null();
	}
	HX_STACK_LINE(128)
	::haxe::ui::toolkit::style::Style s = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(129)
	if (((rulePartId != null()))){
		HX_STACK_LINE(130)
		match = (rulePartId == id);
		HX_STACK_LINE(131)
		if (((bool((rulePartStyleName != null())) && bool((match == true))))){
			HX_STACK_LINE(132)
			match = (rulePartStyleName == styleName);
		}
	}
	else{
		HX_STACK_LINE(134)
		if (((rulePartClassName != null()))){
			HX_STACK_LINE(135)
			match = (rulePartClassName == className);
			HX_STACK_LINE(136)
			if (((bool((rulePartStyleName != null())) && bool((match == true))))){
				HX_STACK_LINE(137)
				match = (rulePartStyleName == styleName);
			}
		}
		else{
			HX_STACK_LINE(139)
			if (((rulePartStyleName != null()))){
				HX_STACK_LINE(140)
				match = (rulePartStyleName == styleName);
			}
		}
	}
	HX_STACK_LINE(143)
	if (((bool((rulePartState != null())) && bool((match == true))))){
		HX_STACK_LINE(144)
		match = (rulePartState == state);
	}
	HX_STACK_LINE(147)
	return match;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,rulePartMatch,return )

bool StyleManager_obj::ruleMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String rule,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","ruleMatch",0x6a70f276,"haxe.ui.toolkit.style.StyleManager.ruleMatch","haxe/ui/toolkit/style/StyleManager.hx",150,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(151)
	bool match = true;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(153)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(154)
		state = null();
	}
	HX_STACK_LINE(157)
	::String className = ::Type_obj::getClassName(::Type_obj::getClass(c));		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(158)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(159)
	className = className.substr((n + (int)1),className.length);
	HX_STACK_LINE(160)
	if (((overriddenClassName != null()))){
		HX_STACK_LINE(161)
		className = overriddenClassName;
	}
	HX_STACK_LINE(163)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(164)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(165)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(166)
		styleName = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();
	}
	HX_STACK_LINE(169)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = this->_styles->get(rule);		HX_STACK_VAR(styleRule,"styleRule");
	HX_STACK_LINE(171)
	bool skipRule = true;		HX_STACK_VAR(skipRule,"skipRule");
	HX_STACK_LINE(173)
	if (((styleRule->isRelevant(id,className,state,styleName) == true))){
		HX_STACK_LINE(174)
		skipRule = false;
	}
	HX_STACK_LINE(177)
	if (((  (((styleName != null()))) ? bool((rule.indexOf((HX_CSTRING(".") + styleName),null()) != (int)-1)) : bool(false) ))){
		HX_STACK_LINE(178)
		skipRule = false;
	}
	HX_STACK_LINE(181)
	if (((skipRule == true))){
		HX_STACK_LINE(182)
		return false;
	}
	HX_STACK_LINE(185)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(187)
		Array< ::Dynamic > _g1 = styleRule->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while(((_g < _g1->length))){
			HX_STACK_LINE(187)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(187)
			++(_g);
			HX_STACK_LINE(188)
			bool partMatch = this->rulePartMatch(t,rulePart,state,overriddenClassName);		HX_STACK_VAR(partMatch,"partMatch");
			HX_STACK_LINE(189)
			if (((partMatch == false))){
				HX_STACK_LINE(190)
				t = this->findAncestor(t,rulePart);
				HX_STACK_LINE(191)
				if (((t == null()))){
					HX_STACK_LINE(192)
					match = false;
					HX_STACK_LINE(193)
					break;
				}
				else{
					HX_STACK_LINE(195)
					state = null();
				}
			}
		}
	}
	HX_STACK_LINE(200)
	return match;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,ruleMatch,return )

::haxe::ui::toolkit::style::Style StyleManager_obj::buildStyleFor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildStyleFor",0xdedb11f3,"haxe.ui.toolkit.style.StyleManager.buildStyleFor","haxe/ui/toolkit/style/StyleManager.hx",203,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(204)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(205)
		state = null();
	}
	HX_STACK_LINE(208)
	::String cacheKey = null();		HX_STACK_VAR(cacheKey,"cacheKey");
	HX_STACK_LINE(209)
	if (((this->_cacheStyles == true))){
		HX_STACK_LINE(210)
		cacheKey = this->buildFullCacheKey(c,state);
		HX_STACK_LINE(211)
		if (((this->_cachedStyles == null()))){
			HX_STACK_LINE(212)
			this->_cachedStyles = ::haxe::ds::StringMap_obj::__new();
		}
		HX_STACK_LINE(214)
		if (((this->_cachedStyles->get(cacheKey) != null()))){
			HX_STACK_LINE(215)
			return this->_cachedStyles->get(cacheKey);
		}
	}
	HX_STACK_LINE(219)
	::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(style,"style");
	HX_STACK_LINE(220)
	style->set_autoApply(false);
	HX_STACK_LINE(222)
	::Class superClass = ::Type_obj::getSuperClass(::Type_obj::getClass(c));		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(223)
	while(((bool((bool((bool((bool((bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::Component >())) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObject >())))) && bool((superClass != null()))))){
		HX_STACK_LINE(229)
		::String superClassName = ::Type_obj::getClassName(superClass);		HX_STACK_VAR(superClassName,"superClassName");
		HX_STACK_LINE(230)
		int n = superClassName.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(231)
		superClassName = superClassName.substr((n + (int)1),superClassName.length);
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(233)
			while(((_g < _g1->length))){
				HX_STACK_LINE(233)
				::String rule = _g1->__get(_g);		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(233)
				++(_g);
				HX_STACK_LINE(234)
				if (((this->ruleMatch(c,rule,state,superClassName) == true))){
					HX_STACK_LINE(235)
					::haxe::ui::toolkit::style::Style matchedStyle = this->_styles->get(rule)->__Field(HX_CSTRING("style"),true);		HX_STACK_VAR(matchedStyle,"matchedStyle");
					HX_STACK_LINE(236)
					style->merge(matchedStyle);
				}
			}
		}
		HX_STACK_LINE(240)
		superClass = ::Type_obj::getSuperClass(superClass);
	}
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		while(((_g < _g1->length))){
			HX_STACK_LINE(243)
			::String rule = _g1->__get(_g);		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(243)
			++(_g);
			HX_STACK_LINE(244)
			if (((this->ruleMatch(c,rule,state,null()) == true))){
				HX_STACK_LINE(245)
				::haxe::ui::toolkit::style::Style matchedStyle = this->_styles->get(rule)->__Field(HX_CSTRING("style"),true);		HX_STACK_VAR(matchedStyle,"matchedStyle");
				HX_STACK_LINE(246)
				style->merge(matchedStyle);
			}
		}
	}
	HX_STACK_LINE(250)
	(this->stylesBuilt)++;
	HX_STACK_LINE(251)
	::String className = ::Type_obj::getClassName(::Type_obj::getClass(c));		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(252)
	if (((this->stylesBuiltFor->get(className) == null()))){
		HX_STACK_LINE(253)
		this->stylesBuiltFor->set(className,(int)0);
	}
	HX_STACK_LINE(255)
	int n = this->stylesBuiltFor->get(className);		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(256)
	(n)++;
	HX_STACK_LINE(257)
	this->stylesBuiltFor->set(className,n);
	HX_STACK_LINE(259)
	if (((bool((this->_cacheStyles == true)) && bool((cacheKey != null()))))){
		HX_STACK_LINE(260)
		this->_cachedStyles->set(cacheKey,style);
	}
	HX_STACK_LINE(263)
	style->set_target(c);
	HX_STACK_LINE(264)
	style->set_autoApply(true);
	HX_STACK_LINE(265)
	return style;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildStyleFor,return )

::String StyleManager_obj::buildCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildCacheKey",0x1c2ba018,"haxe.ui.toolkit.style.StyleManager.buildCacheKey","haxe/ui/toolkit/style/StyleManager.hx",268,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(269)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(270)
		state = null();
	}
	HX_STACK_LINE(273)
	::String className = ::Type_obj::getClassName(::Type_obj::getClass(c));		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(274)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(275)
	className = className.substr((n + (int)1),className.length);
	HX_STACK_LINE(277)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(278)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(279)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(280)
		styleName = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();
	}
	HX_STACK_LINE(283)
	::String s = className;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(284)
	if (((id != null()))){
		HX_STACK_LINE(285)
		hx::AddEq(s,(HX_CSTRING("#") + id));
	}
	HX_STACK_LINE(287)
	if (((styleName != null()))){
		HX_STACK_LINE(288)
		hx::AddEq(s,(HX_CSTRING(".") + styleName));
	}
	HX_STACK_LINE(290)
	if (((state != null()))){
		HX_STACK_LINE(291)
		hx::AddEq(s,(HX_CSTRING(":") + state));
	}
	HX_STACK_LINE(293)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildCacheKey,return )

::String StyleManager_obj::buildFullCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildFullCacheKey",0x87b65647,"haxe.ui.toolkit.style.StyleManager.buildFullCacheKey","haxe/ui/toolkit/style/StyleManager.hx",296,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(297)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(298)
		state = null();
	}
	HX_STACK_LINE(301)
	::String key = this->buildCacheKey(c,state);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(302)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer p = c->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(303)
	while(((p != null()))){
		HX_STACK_LINE(304)
		hx::AddEq(key,(HX_CSTRING(">") + this->buildCacheKey(p,null())));
		HX_STACK_LINE(305)
		p = p->__Field(HX_CSTRING("get_parent"),true)();
	}
	HX_STACK_LINE(307)
	return key;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildFullCacheKey,return )

Void StyleManager_obj::dump( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","dump",0xef4b4c87,"haxe.ui.toolkit.style.StyleManager.dump","haxe/ui/toolkit/style/StyleManager.hx",310,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->stylesBuiltFor->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(312)
				::String _g = (((HX_CSTRING("> ") + key) + HX_CSTRING(" = ")) + this->stylesBuiltFor->get(key));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(312)
				::haxe::Log_obj::trace(_g,hx::SourceInfo(HX_CSTRING("StyleManager.hx"),312,HX_CSTRING("haxe.ui.toolkit.style.StyleManager"),HX_CSTRING("dump")));
			}
;
		}
		HX_STACK_LINE(314)
		::haxe::Log_obj::trace(HX_CSTRING(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"),hx::SourceInfo(HX_CSTRING("StyleManager.hx"),314,HX_CSTRING("haxe.ui.toolkit.style.StyleManager"),HX_CSTRING("dump")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,dump,(void))

bool StyleManager_obj::get_hasStyles( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_hasStyles",0x9f599b40,"haxe.ui.toolkit.style.StyleManager.get_hasStyles","haxe/ui/toolkit/style/StyleManager.hx",317,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	if (((this->_styles == null()))){
		HX_STACK_LINE(319)
		return false;
	}
	HX_STACK_LINE(321)
	return this->_styles->keys()->__Field(HX_CSTRING("hasNext"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_hasStyles,return )

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::_instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_instance",0xebffadf1,"haxe.ui.toolkit.style.StyleManager.get_instance","haxe/ui/toolkit/style/StyleManager.hx",15,0x60b8f881)
	HX_STACK_LINE(16)
	if (((::haxe::ui::toolkit::style::StyleManager_obj::_instance == null()))){
		HX_STACK_LINE(17)
		::haxe::ui::toolkit::style::StyleManager_obj::_instance = ::haxe::ui::toolkit::style::StyleManager_obj::__new();
	}
	HX_STACK_LINE(19)
	return ::haxe::ui::toolkit::style::StyleManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_instance,return )


StyleManager_obj::StyleManager_obj()
{
}

void StyleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleManager);
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_MARK_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_MARK_MEMBER_NAME(hasStyles,"hasStyles");
	HX_MARK_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_MARK_MEMBER_NAME(_cachedStyles,"_cachedStyles");
	HX_MARK_END_CLASS();
}

void StyleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_VISIT_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_VISIT_MEMBER_NAME(hasStyles,"hasStyles");
	HX_VISIT_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_VISIT_MEMBER_NAME(_cachedStyles,"_cachedStyles");
}

Dynamic StyleManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"hasStyles") ) { return inCallProp ? get_hasStyles() : hasStyles; }
		if (HX_FIELD_EQ(inName,"addStyles") ) { return addStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"findStyle") ) { return findStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { return ruleMatch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { return stylesBuilt; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { return _cacheStyles; }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return findAncestor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { return _cachedStyles; }
		if (HX_FIELD_EQ(inName,"rulePartMatch") ) { return rulePartMatch_dyn(); }
		if (HX_FIELD_EQ(inName,"buildStyleFor") ) { return buildStyleFor_dyn(); }
		if (HX_FIELD_EQ(inName,"buildCacheKey") ) { return buildCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasStyles") ) { return get_hasStyles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { return stylesBuiltFor; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildFullCacheKey") ) { return buildFullCacheKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasStyles") ) { hasStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { stylesBuilt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { _cacheStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { _cachedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { stylesBuiltFor=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_styles"));
	outFields->push(HX_CSTRING("_rules"));
	outFields->push(HX_CSTRING("stylesBuilt"));
	outFields->push(HX_CSTRING("stylesBuiltFor"));
	outFields->push(HX_CSTRING("hasStyles"));
	outFields->push(HX_CSTRING("_cacheStyles"));
	outFields->push(HX_CSTRING("_cachedStyles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_styles),HX_CSTRING("_styles")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StyleManager_obj,_rules),HX_CSTRING("_rules")},
	{hx::fsInt,(int)offsetof(StyleManager_obj,stylesBuilt),HX_CSTRING("stylesBuilt")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,stylesBuiltFor),HX_CSTRING("stylesBuiltFor")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,hasStyles),HX_CSTRING("hasStyles")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,_cacheStyles),HX_CSTRING("_cacheStyles")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_cachedStyles),HX_CSTRING("_cachedStyles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_styles"),
	HX_CSTRING("_rules"),
	HX_CSTRING("stylesBuilt"),
	HX_CSTRING("stylesBuiltFor"),
	HX_CSTRING("hasStyles"),
	HX_CSTRING("_cacheStyles"),
	HX_CSTRING("_cachedStyles"),
	HX_CSTRING("addStyle"),
	HX_CSTRING("addStyles"),
	HX_CSTRING("findStyle"),
	HX_CSTRING("clear"),
	HX_CSTRING("findAncestor"),
	HX_CSTRING("rulePartMatch"),
	HX_CSTRING("ruleMatch"),
	HX_CSTRING("buildStyleFor"),
	HX_CSTRING("buildCacheKey"),
	HX_CSTRING("buildFullCacheKey"),
	HX_CSTRING("dump"),
	HX_CSTRING("get_hasStyles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#endif

Class StyleManager_obj::__mClass;

void StyleManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleManager"), hx::TCanCast< StyleManager_obj> ,sStaticFields,sMemberFields,
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

void StyleManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
