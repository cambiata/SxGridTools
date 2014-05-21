#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended__Code_SyntaxHighlightRunner
#include <haxe/ui/toolkit/controls/extended/_Code/SyntaxHighlightRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace _Code{

Void SyntaxHighlightRunner_obj::__construct(::flash::text::TextField tf,::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended._Code.SyntaxHighlightRunner","new",0xc24527f2,"haxe.ui.toolkit.controls.extended._Code.SyntaxHighlightRunner.new","haxe/ui/toolkit/controls/extended/Code.hx",122,0xad760c31)

HX_STACK_ARG(tf,"tf")

HX_STACK_ARG(syntax,"syntax")

HX_STACK_ARG(__o_timeShare,"timeShare")
Float timeShare = __o_timeShare.Default(.9);
{
	HX_STACK_LINE(148)
	this->_ruleIndex = (int)0;
	HX_STACK_LINE(129)
	this->_matchIndex = (int)0;
	HX_STACK_LINE(128)
	this->_matchedSyntax = false;
	HX_STACK_LINE(132)
	super::__construct();
	HX_STACK_LINE(133)
	this->_tf = tf;
	HX_STACK_LINE(134)
	this->_syntax = syntax;
	HX_STACK_LINE(135)
	this->_runningTimeShare = timeShare;
	HX_STACK_LINE(137)
	this->_syntaxRules = Array_obj< ::String >::__new();
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::ui::toolkit::controls::extended::_Code::SyntaxHighlightRunner_obj *__this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/extended/Code.hx",138,0xad760c31)
			{
				HX_STACK_LINE(138)
				::IMap this1 = __this->_syntax->get_rules();		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(138)
				return this1->keys();
			}
			return null();
		}
	};
	HX_STACK_LINE(138)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(_Function_1_1::Block(this));  __it->hasNext(); ){
		::String rule = __it->next();
		this->_syntaxRules->push(rule);
	}
	HX_STACK_LINE(141)
	this->_matches = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(142)
	this->_txt = tf->get_text();
	HX_STACK_LINE(143)
	if (((this->_txt != HX_CSTRING("")))){
		HX_STACK_LINE(144)
		tf->setTextFormat(this->_syntax->get_defaultFormat(),(int)0,this->_txt.length);
	}
}
;
	return null();
}

//SyntaxHighlightRunner_obj::~SyntaxHighlightRunner_obj() { }

Dynamic SyntaxHighlightRunner_obj::__CreateEmpty() { return  new SyntaxHighlightRunner_obj; }
hx::ObjectPtr< SyntaxHighlightRunner_obj > SyntaxHighlightRunner_obj::__new(::flash::text::TextField tf,::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare)
{  hx::ObjectPtr< SyntaxHighlightRunner_obj > result = new SyntaxHighlightRunner_obj();
	result->__construct(tf,syntax,__o_timeShare);
	return result;}

Dynamic SyntaxHighlightRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SyntaxHighlightRunner_obj > result = new SyntaxHighlightRunner_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SyntaxHighlightRunner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended._Code.SyntaxHighlightRunner","run",0xc2483edd,"haxe.ui.toolkit.controls.extended._Code.SyntaxHighlightRunner.run","haxe/ui/toolkit/controls/extended/Code.hx",150,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		if (((this->_matchedSyntax == false))){
			HX_STACK_LINE(152)
			{
				HX_STACK_LINE(152)
				int _g1 = this->_ruleIndex;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				int _g = this->_syntaxRules->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(152)
				while(((_g1 < _g))){
					HX_STACK_LINE(152)
					int n = (_g1)++;		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(153)
					if (((this->_needToExit() == true))){
						HX_STACK_LINE(154)
						this->_ruleIndex = n;
						HX_STACK_LINE(155)
						return null();
					}
					HX_STACK_LINE(158)
					::String rule = this->_syntaxRules->__get(n);		HX_STACK_VAR(rule,"rule");
					HX_STACK_LINE(159)
					Dynamic matches = Dynamic( Array_obj<Dynamic>::__new().Add(Dynamic( Array_obj<Dynamic>::__new() )));		HX_STACK_VAR(matches,"matches");
					HX_STACK_LINE(160)
					this->_matches->set(rule,matches->__GetItem((int)0));
					HX_STACK_LINE(161)
					::EReg r = this->_syntax->getCompiledRule(rule);		HX_STACK_VAR(r,"r");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,matches)
					::String run(::EReg e){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","haxe/ui/toolkit/controls/extended/Code.hx",162,0xad760c31)
						HX_STACK_ARG(e,"e")
						{
							HX_STACK_LINE(163)
							Dynamic pos = e->matchedPos();		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(164)
							matches->__GetItem((int)0)->__Field(HX_CSTRING("push"),true)(pos);
							HX_STACK_LINE(165)
							return HX_CSTRING("");
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_STACK_LINE(162)
					r->map(this->_txt, Dynamic(new _Function_4_1(matches)));
				}
			}
			HX_STACK_LINE(168)
			this->_ruleIndex = (int)0;
			HX_STACK_LINE(169)
			this->_matchedSyntax = true;
		}
		HX_STACK_LINE(172)
		if (((this->_matchedSyntax == true))){
			HX_STACK_LINE(173)
			int _g1 = this->_ruleIndex;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			int _g = this->_syntaxRules->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			while(((_g1 < _g))){
				HX_STACK_LINE(173)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(174)
				if (((this->_needToExit() == true))){
					HX_STACK_LINE(175)
					this->_ruleIndex = n;
					HX_STACK_LINE(176)
					return null();
				}
				HX_STACK_LINE(179)
				::String rule = this->_syntaxRules->__get(n);		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(180)
				Dynamic matches = this->_matches->get(rule);		HX_STACK_VAR(matches,"matches");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					int _g3 = this->_matchIndex;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(181)
					int _g2 = matches->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(181)
					while(((_g3 < _g2))){
						HX_STACK_LINE(181)
						int m = (_g3)++;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(182)
						if (((this->_needToExit() == true))){
							HX_STACK_LINE(183)
							this->_ruleIndex = n;
							HX_STACK_LINE(184)
							this->_matchIndex = m;
							HX_STACK_LINE(185)
							return null();
						}
						HX_STACK_LINE(188)
						Dynamic match = matches->__GetItem(m);		HX_STACK_VAR(match,"match");
						struct _Function_5_1{
							inline static ::flash::text::TextFormat Block( ::haxe::ui::toolkit::controls::extended::_Code::SyntaxHighlightRunner_obj *__this,::String &rule){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/extended/Code.hx",189,0xad760c31)
								{
									HX_STACK_LINE(189)
									::IMap this1 = __this->_syntax->get_rules();		HX_STACK_VAR(this1,"this1");
									HX_STACK_LINE(189)
									return this1->get(rule);
								}
								return null();
							}
						};
						HX_STACK_LINE(189)
						this->_tf->setTextFormat(_Function_5_1::Block(this,rule),match->__Field(HX_CSTRING("pos"),true),(match->__Field(HX_CSTRING("pos"),true) + match->__Field(HX_CSTRING("len"),true)));
					}
				}
				HX_STACK_LINE(192)
				this->_matchIndex = (int)0;
			}
		}
		HX_STACK_LINE(196)
		this->_needToExit = null();
		HX_STACK_LINE(197)
		this->_isComplete = true;
	}
return null();
}



SyntaxHighlightRunner_obj::SyntaxHighlightRunner_obj()
{
}

void SyntaxHighlightRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SyntaxHighlightRunner);
	HX_MARK_MEMBER_NAME(_tf,"_tf");
	HX_MARK_MEMBER_NAME(_syntax,"_syntax");
	HX_MARK_MEMBER_NAME(_syntaxRules,"_syntaxRules");
	HX_MARK_MEMBER_NAME(_matches,"_matches");
	HX_MARK_MEMBER_NAME(_txt,"_txt");
	HX_MARK_MEMBER_NAME(_matchedSyntax,"_matchedSyntax");
	HX_MARK_MEMBER_NAME(_matchIndex,"_matchIndex");
	HX_MARK_MEMBER_NAME(_ruleIndex,"_ruleIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SyntaxHighlightRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tf,"_tf");
	HX_VISIT_MEMBER_NAME(_syntax,"_syntax");
	HX_VISIT_MEMBER_NAME(_syntaxRules,"_syntaxRules");
	HX_VISIT_MEMBER_NAME(_matches,"_matches");
	HX_VISIT_MEMBER_NAME(_txt,"_txt");
	HX_VISIT_MEMBER_NAME(_matchedSyntax,"_matchedSyntax");
	HX_VISIT_MEMBER_NAME(_matchIndex,"_matchIndex");
	HX_VISIT_MEMBER_NAME(_ruleIndex,"_ruleIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SyntaxHighlightRunner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { return _tf; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_txt") ) { return _txt; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { return _syntax; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_matches") ) { return _matches; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ruleIndex") ) { return _ruleIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_matchIndex") ) { return _matchIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_syntaxRules") ) { return _syntaxRules; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_matchedSyntax") ) { return _matchedSyntax; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SyntaxHighlightRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { _tf=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_txt") ) { _txt=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { _syntax=inValue.Cast< ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_matches") ) { _matches=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ruleIndex") ) { _ruleIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_matchIndex") ) { _matchIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_syntaxRules") ) { _syntaxRules=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_matchedSyntax") ) { _matchedSyntax=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SyntaxHighlightRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tf"));
	outFields->push(HX_CSTRING("_syntax"));
	outFields->push(HX_CSTRING("_syntaxRules"));
	outFields->push(HX_CSTRING("_matches"));
	outFields->push(HX_CSTRING("_txt"));
	outFields->push(HX_CSTRING("_matchedSyntax"));
	outFields->push(HX_CSTRING("_matchIndex"));
	outFields->push(HX_CSTRING("_ruleIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_tf),HX_CSTRING("_tf")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_syntax),HX_CSTRING("_syntax")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_syntaxRules),HX_CSTRING("_syntaxRules")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SyntaxHighlightRunner_obj,_matches),HX_CSTRING("_matches")},
	{hx::fsString,(int)offsetof(SyntaxHighlightRunner_obj,_txt),HX_CSTRING("_txt")},
	{hx::fsBool,(int)offsetof(SyntaxHighlightRunner_obj,_matchedSyntax),HX_CSTRING("_matchedSyntax")},
	{hx::fsInt,(int)offsetof(SyntaxHighlightRunner_obj,_matchIndex),HX_CSTRING("_matchIndex")},
	{hx::fsInt,(int)offsetof(SyntaxHighlightRunner_obj,_ruleIndex),HX_CSTRING("_ruleIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_tf"),
	HX_CSTRING("_syntax"),
	HX_CSTRING("_syntaxRules"),
	HX_CSTRING("_matches"),
	HX_CSTRING("_txt"),
	HX_CSTRING("_matchedSyntax"),
	HX_CSTRING("_matchIndex"),
	HX_CSTRING("_ruleIndex"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SyntaxHighlightRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SyntaxHighlightRunner_obj::__mClass,"__mClass");
};

#endif

Class SyntaxHighlightRunner_obj::__mClass;

void SyntaxHighlightRunner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended._Code.SyntaxHighlightRunner"), hx::TCanCast< SyntaxHighlightRunner_obj> ,sStaticFields,sMemberFields,
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

void SyntaxHighlightRunner_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace _Code
