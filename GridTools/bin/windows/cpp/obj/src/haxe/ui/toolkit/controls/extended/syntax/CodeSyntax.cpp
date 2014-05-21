#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CSSSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CSSSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_HaxeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/HaxeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_XMLSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/XMLSyntax.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace syntax{

Void CodeSyntax_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","new",0x0799f72e,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.new","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",11,0x160aaca2)
{
	HX_STACK_LINE(12)
	this->_identifier = HX_CSTRING("");
	HX_STACK_LINE(13)
	this->_rules = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(14)
	this->_compiledRules = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(15)
	this->_defaultFormat = ::flash::text::TextFormat_obj::__new(HX_CSTRING("_typewriter"),(int)13,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
}
;
	return null();
}

//CodeSyntax_obj::~CodeSyntax_obj() { }

Dynamic CodeSyntax_obj::__CreateEmpty() { return  new CodeSyntax_obj; }
hx::ObjectPtr< CodeSyntax_obj > CodeSyntax_obj::__new()
{  hx::ObjectPtr< CodeSyntax_obj > result = new CodeSyntax_obj();
	result->__construct();
	return result;}

Dynamic CodeSyntax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeSyntax_obj > result = new CodeSyntax_obj();
	result->__construct();
	return result;}

Void CodeSyntax_obj::addRule( ::String regex,int color,hx::Null< bool >  __o_bold){
bool bold = __o_bold.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","addRule",0x80cd618b,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.addRule","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",18,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(regex,"regex")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(bold,"bold")
{
		HX_STACK_LINE(19)
		::flash::text::TextFormat f = ::flash::text::TextFormat_obj::__new(this->_defaultFormat->font,this->_defaultFormat->size,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(20)
		f->bold = bold;
		HX_STACK_LINE(21)
		this->_rules->set(regex,f);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CodeSyntax_obj,addRule,(void))

::String CodeSyntax_obj::get_identifier( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","get_identifier",0xe8ec20a4,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.get_identifier","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",44,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return this->_identifier;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_identifier,return )

::flash::text::TextFormat CodeSyntax_obj::get_defaultFormat( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","get_defaultFormat",0x306ea17d,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.get_defaultFormat","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",48,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return this->_defaultFormat;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_defaultFormat,return )

::flash::text::TextFormat CodeSyntax_obj::set_defaultFormat( ::flash::text::TextFormat value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","set_defaultFormat",0x53dc7989,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.set_defaultFormat","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",51,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(52)
	this->_defaultFormat = value;
	HX_STACK_LINE(53)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,set_defaultFormat,return )

::haxe::ds::StringMap CodeSyntax_obj::get_rules( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","get_rules",0x9aabf59c,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.get_rules","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",57,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return this->_rules;
}


HX_DEFINE_DYNAMIC_FUNC0(CodeSyntax_obj,get_rules,return )

::EReg CodeSyntax_obj::getCompiledRule( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","getCompiledRule",0x52ea5ab1,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.getCompiledRule","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",63,0x160aaca2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(64)
	::EReg r = this->_compiledRules->get(rule);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(65)
	if (((r == null()))){
		HX_STACK_LINE(66)
		r = ::EReg_obj::__new(rule,HX_CSTRING("g"));
		HX_STACK_LINE(67)
		this->_compiledRules->set(rule,r);
	}
	HX_STACK_LINE(69)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,getCompiledRule,return )

::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax CodeSyntax_obj::getSyntax( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax","getSyntax",0xd19740e7,"haxe.ui.toolkit.controls.extended.syntax.CodeSyntax.getSyntax","haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.hx",24,0x160aaca2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax syntax = ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax_obj::__new();		HX_STACK_VAR(syntax,"syntax");
	HX_STACK_LINE(26)
	if (((id == HX_CSTRING("haxe")))){
		HX_STACK_LINE(27)
		syntax = ::haxe::ui::toolkit::controls::extended::syntax::HaxeSyntax_obj::__new();
	}
	else{
		HX_STACK_LINE(28)
		if (((id == HX_CSTRING("xml")))){
			HX_STACK_LINE(29)
			syntax = ::haxe::ui::toolkit::controls::extended::syntax::XMLSyntax_obj::__new();
		}
		else{
			HX_STACK_LINE(30)
			if (((id == HX_CSTRING("css")))){
				HX_STACK_LINE(31)
				syntax = ::haxe::ui::toolkit::controls::extended::syntax::CSSSyntax_obj::__new();
			}
		}
	}
	HX_STACK_LINE(33)
	return syntax;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CodeSyntax_obj,getSyntax,return )


CodeSyntax_obj::CodeSyntax_obj()
{
}

void CodeSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodeSyntax);
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(_compiledRules,"_compiledRules");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_identifier,"_identifier");
	HX_MARK_MEMBER_NAME(identifier,"identifier");
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_END_CLASS();
}

void CodeSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(_compiledRules,"_compiledRules");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_identifier,"_identifier");
	HX_VISIT_MEMBER_NAME(identifier,"identifier");
	HX_VISIT_MEMBER_NAME(rules,"rules");
}

Dynamic CodeSyntax_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return inCallProp ? get_rules() : rules; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addRule") ) { return addRule_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getSyntax") ) { return getSyntax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rules") ) { return get_rules_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identifier") ) { return inCallProp ? get_identifier() : identifier; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_identifier") ) { return _identifier; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return get_defaultFormat(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_compiledRules") ) { return _compiledRules; }
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"get_identifier") ) { return get_identifier_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCompiledRule") ) { return getCompiledRule_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_defaultFormat") ) { return get_defaultFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultFormat") ) { return set_defaultFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodeSyntax_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identifier") ) { identifier=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_identifier") ) { _identifier=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defaultFormat") ) { return set_defaultFormat(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_compiledRules") ) { _compiledRules=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeSyntax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rules"));
	outFields->push(HX_CSTRING("_compiledRules"));
	outFields->push(HX_CSTRING("_defaultFormat"));
	outFields->push(HX_CSTRING("_identifier"));
	outFields->push(HX_CSTRING("identifier"));
	outFields->push(HX_CSTRING("defaultFormat"));
	outFields->push(HX_CSTRING("rules"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getSyntax"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,_rules),HX_CSTRING("_rules")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,_compiledRules),HX_CSTRING("_compiledRules")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(CodeSyntax_obj,_defaultFormat),HX_CSTRING("_defaultFormat")},
	{hx::fsString,(int)offsetof(CodeSyntax_obj,_identifier),HX_CSTRING("_identifier")},
	{hx::fsString,(int)offsetof(CodeSyntax_obj,identifier),HX_CSTRING("identifier")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(CodeSyntax_obj,rules),HX_CSTRING("rules")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_rules"),
	HX_CSTRING("_compiledRules"),
	HX_CSTRING("_defaultFormat"),
	HX_CSTRING("_identifier"),
	HX_CSTRING("addRule"),
	HX_CSTRING("identifier"),
	HX_CSTRING("rules"),
	HX_CSTRING("get_identifier"),
	HX_CSTRING("get_defaultFormat"),
	HX_CSTRING("set_defaultFormat"),
	HX_CSTRING("get_rules"),
	HX_CSTRING("getCompiledRule"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeSyntax_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeSyntax_obj::__mClass,"__mClass");
};

#endif

Class CodeSyntax_obj::__mClass;

void CodeSyntax_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended.syntax.CodeSyntax"), hx::TCanCast< CodeSyntax_obj> ,sStaticFields,sMemberFields,
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

void CodeSyntax_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace syntax
