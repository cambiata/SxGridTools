#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
namespace _StyleManager{

Void StyleRule_obj::__construct(::String rule,::haxe::ui::toolkit::style::Style style)
{
HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","new",0xa985dced,"haxe.ui.toolkit.style._StyleManager.StyleRule.new","haxe/ui/toolkit/style/StyleManager.hx",329,0x60b8f881)

HX_STACK_ARG(rule,"rule")

HX_STACK_ARG(style,"style")
{
	HX_STACK_LINE(330)
	this->style = style;
	HX_STACK_LINE(331)
	this->ruleParts = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(332)
	Array< ::String > ruleArr = rule.split(HX_CSTRING(" "));		HX_STACK_VAR(ruleArr,"ruleArr");
	HX_STACK_LINE(333)
	ruleArr->reverse();
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		while(((_g < ruleArr->length))){
			HX_STACK_LINE(334)
			::String rulePart = ruleArr->__get(_g);		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(335)
			this->ruleParts->push(::haxe::ui::toolkit::style::_StyleManager::StyleRulePart_obj::__new(rulePart));
		}
	}
}
;
	return null();
}

//StyleRule_obj::~StyleRule_obj() { }

Dynamic StyleRule_obj::__CreateEmpty() { return  new StyleRule_obj; }
hx::ObjectPtr< StyleRule_obj > StyleRule_obj::__new(::String rule,::haxe::ui::toolkit::style::Style style)
{  hx::ObjectPtr< StyleRule_obj > result = new StyleRule_obj();
	result->__construct(rule,style);
	return result;}

Dynamic StyleRule_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleRule_obj > result = new StyleRule_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool StyleRule_obj::containsClassName( ::String className){
	HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","containsClassName",0x582465d1,"haxe.ui.toolkit.style._StyleManager.StyleRule.containsClassName","haxe/ui/toolkit/style/StyleManager.hx",339,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_LINE(340)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(341)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(341)
		Array< ::Dynamic > _g1 = this->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(341)
		while(((_g < _g1->length))){
			HX_STACK_LINE(341)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(341)
			++(_g);
			HX_STACK_LINE(342)
			if (((bool((rulePart->className != null())) && bool((rulePart->className == className))))){
				HX_STACK_LINE(343)
				found = true;
				HX_STACK_LINE(344)
				break;
			}
		}
	}
	HX_STACK_LINE(347)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleRule_obj,containsClassName,return )

bool StyleRule_obj::isRelevant( ::String id,::String className,::String state,::String styleName){
	HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRule","isRelevant",0x9e9ac43a,"haxe.ui.toolkit.style._StyleManager.StyleRule.isRelevant","haxe/ui/toolkit/style/StyleManager.hx",350,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(styleName,"styleName")
	HX_STACK_LINE(351)
	bool relevant = false;		HX_STACK_VAR(relevant,"relevant");
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(352)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(352)
		Array< ::Dynamic > _g1 = this->ruleParts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(352)
		while(((_g < _g1->length))){
			HX_STACK_LINE(352)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(352)
			++(_g);
			HX_STACK_LINE(353)
			if (((bool((rulePart->id != null())) && bool((rulePart->id == id))))){
				HX_STACK_LINE(354)
				relevant = true;
				HX_STACK_LINE(355)
				break;
			}
			HX_STACK_LINE(357)
			if (((bool((rulePart->className != null())) && bool((rulePart->className == className))))){
				HX_STACK_LINE(358)
				relevant = true;
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(361)
			if (((bool((rulePart->state != null())) && bool((rulePart->state == state))))){
				HX_STACK_LINE(362)
				relevant = true;
				HX_STACK_LINE(363)
				break;
			}
			HX_STACK_LINE(365)
			if (((bool((rulePart->styleName != null())) && bool((rulePart->styleName == styleName))))){
				HX_STACK_LINE(366)
				relevant = true;
				HX_STACK_LINE(367)
				break;
			}
		}
	}
	HX_STACK_LINE(370)
	return relevant;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleRule_obj,isRelevant,return )


StyleRule_obj::StyleRule_obj()
{
}

void StyleRule_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleRule);
	HX_MARK_MEMBER_NAME(ruleParts,"ruleParts");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_END_CLASS();
}

void StyleRule_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ruleParts,"ruleParts");
	HX_VISIT_MEMBER_NAME(style,"style");
}

Dynamic StyleRule_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ruleParts") ) { return ruleParts; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isRelevant") ) { return isRelevant_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"containsClassName") ) { return containsClassName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleRule_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ruleParts") ) { ruleParts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleRule_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ruleParts"));
	outFields->push(HX_CSTRING("style"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StyleRule_obj,ruleParts),HX_CSTRING("ruleParts")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleRule_obj,style),HX_CSTRING("style")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ruleParts"),
	HX_CSTRING("style"),
	HX_CSTRING("containsClassName"),
	HX_CSTRING("isRelevant"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleRule_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleRule_obj::__mClass,"__mClass");
};

#endif

Class StyleRule_obj::__mClass;

void StyleRule_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style._StyleManager.StyleRule"), hx::TCanCast< StyleRule_obj> ,sStaticFields,sMemberFields,
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

void StyleRule_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
} // end namespace _StyleManager
