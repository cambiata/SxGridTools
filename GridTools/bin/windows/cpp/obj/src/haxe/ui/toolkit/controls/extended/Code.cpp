#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_Code
#include <haxe/ui/toolkit/controls/extended/Code.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended__Code_SyntaxHighlightRunner
#include <haxe/ui/toolkit/controls/extended/_Code/SyntaxHighlightRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
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

Void Code_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","new",0x201c685e,"haxe.ui.toolkit.controls.extended.Code.new","haxe/ui/toolkit/controls/extended/Code.hx",14,0xad760c31)
{
	HX_STACK_LINE(16)
	this->_async = false;
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->set_multiline(true);
	HX_STACK_LINE(21)
	this->set_wrapLines(false);
	HX_STACK_LINE(22)
	::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(22)
	tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(26)
	this->_syntax = ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax_obj::getSyntax(HX_CSTRING(""));
}
;
	return null();
}

//Code_obj::~Code_obj() { }

Dynamic Code_obj::__CreateEmpty() { return  new Code_obj; }
hx::ObjectPtr< Code_obj > Code_obj::__new()
{  hx::ObjectPtr< Code_obj > result = new Code_obj();
	result->__construct();
	return result;}

Dynamic Code_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Code_obj > result = new Code_obj();
	result->__construct();
	return result;}

Void Code_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","initialize",0x5750b512,"haxe.ui.toolkit.controls.extended.Code.initialize","haxe/ui/toolkit/controls/extended/Code.hx",32,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::initialize();
		HX_STACK_LINE(34)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("addEventListener"),true)(::flash::events::Event_obj::CHANGE,this->_onCodeChange_dyn(),null(),null(),null());
		HX_STACK_LINE(35)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("addEventListener"),true)(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->_onCodeKeyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(37)
		this->applyRules();
	}
return null();
}


Void Code_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","dispose",0x2073ef9d,"haxe.ui.toolkit.controls.extended.Code.dispose","haxe/ui/toolkit/controls/extended/Code.hx",40,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("removeEventListener"),true)(::flash::events::Event_obj::CHANGE,this->_onCodeChange_dyn(),null());
		HX_STACK_LINE(42)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("removeEventListener"),true)(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->_onCodeKeyDown_dyn(),null());
		HX_STACK_LINE(43)
		this->super::dispose();
	}
return null();
}


::String Code_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","set_text",0x986b90ec,"haxe.ui.toolkit.controls.extended.Code.set_text","haxe/ui/toolkit/controls/extended/Code.hx",46,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(47)
	if (((value != null()))){
		HX_STACK_LINE(48)
		value = this->super::set_text(value);
		HX_STACK_LINE(49)
		value = ::StringTools_obj::replace(value,HX_CSTRING("\t"),HX_CSTRING("    "));
		HX_STACK_LINE(50)
		this->super::set_text(value);
		HX_STACK_LINE(51)
		this->applyRules();
	}
	HX_STACK_LINE(53)
	return value;
}


::String Code_obj::get_syntax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","get_syntax",0x4ab175ee,"haxe.ui.toolkit.controls.extended.Code.get_syntax","haxe/ui/toolkit/controls/extended/Code.hx",68,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->_syntax->get_identifier();
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,get_syntax,return )

::String Code_obj::set_syntax( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","set_syntax",0x4e2f1462,"haxe.ui.toolkit.controls.extended.Code.set_syntax","haxe/ui/toolkit/controls/extended/Code.hx",71,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(72)
	this->_syntax = ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax_obj::getSyntax(value);
	HX_STACK_LINE(73)
	this->applyRules();
	HX_STACK_LINE(74)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,set_syntax,return )

bool Code_obj::get_async( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","get_async",0xfb070611,"haxe.ui.toolkit.controls.extended.Code.get_async","haxe/ui/toolkit/controls/extended/Code.hx",78,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return this->_async;
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,get_async,return )

bool Code_obj::set_async( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","set_async",0xde57f21d,"haxe.ui.toolkit.controls.extended.Code.set_async","haxe/ui/toolkit/controls/extended/Code.hx",81,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(82)
	this->_async = value;
	HX_STACK_LINE(83)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,set_async,return )

Void Code_obj::_onCodeChange( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","_onCodeChange",0xf1984cd9,"haxe.ui.toolkit.controls.extended.Code._onCodeChange","haxe/ui/toolkit/controls/extended/Code.hx",90,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(90)
		this->applyRules();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,_onCodeChange,(void))

Void Code_obj::_onCodeKeyDown( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","_onCodeKeyDown",0x4325aa18,"haxe.ui.toolkit.controls.extended.Code._onCodeKeyDown","haxe/ui/toolkit/controls/extended/Code.hx",94,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(94)
		if (((bool((bool((bool((event->keyCode == (int)9)) && bool((event->ctrlKey == false)))) && bool((event->altKey == false)))) && bool((event->shiftKey == false))))){
			HX_STACK_LINE(95)
			this->replaceSelectedText(HX_CSTRING("    "));
			HX_STACK_LINE(96)
			this->applyRules();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,_onCodeKeyDown,(void))

Void Code_obj::applyRules( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","applyRules",0x073d636b,"haxe.ui.toolkit.controls.extended.Code.applyRules","haxe/ui/toolkit/controls/extended/Code.hx",105,0xad760c31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::flash::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(106)
		tf = hx::TCast< flash::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(107)
		if (((this->_async == false))){
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::extended::_Code::SyntaxHighlightRunner runner = ::haxe::ui::toolkit::controls::extended::_Code::SyntaxHighlightRunner_obj::__new(tf,this->_syntax,null());		HX_STACK_VAR(runner,"runner");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			bool run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/extended/Code.hx",109,0xad760c31)
				{
					HX_STACK_LINE(109)
					return false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(109)
			runner->set_needToExit( Dynamic(new _Function_2_1()));
			HX_STACK_LINE(110)
			runner->run();
		}
		else{
			HX_STACK_LINE(112)
			if (((this->_caller != null()))){
				HX_STACK_LINE(113)
				this->_caller->cancel();
			}
			HX_STACK_LINE(116)
			this->_caller = ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller_obj::__new(::haxe::ui::toolkit::controls::extended::_Code::SyntaxHighlightRunner_obj::__new(tf,this->_syntax,null()));
			HX_STACK_LINE(117)
			this->_caller->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,applyRules,(void))

Dynamic Code_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","clone",0x5d8026db,"haxe.ui.toolkit.controls.extended.Code.clone","haxe/ui/toolkit/controls/extended/Code.hx",1,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::extended::Code c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Code_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.extended.Code","self",0xfc0cf1ce,"haxe.ui.toolkit.controls.extended.Code.self","haxe/ui/toolkit/controls/extended/Code.hx",2,0xad760c31)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::extended::Code_obj::__new();
}



Code_obj::Code_obj()
{
}

void Code_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Code);
	HX_MARK_MEMBER_NAME(_syntax,"_syntax");
	HX_MARK_MEMBER_NAME(_async,"_async");
	HX_MARK_MEMBER_NAME(_caller,"_caller");
	::haxe::ui::toolkit::controls::TextInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Code_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_syntax,"_syntax");
	HX_VISIT_MEMBER_NAME(_async,"_async");
	HX_VISIT_MEMBER_NAME(_caller,"_caller");
	::haxe::ui::toolkit::controls::TextInput_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Code_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { return get_async(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_async") ) { return _async; }
		if (HX_FIELD_EQ(inName,"syntax") ) { return get_syntax(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { return _syntax; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_caller") ) { return _caller; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_async") ) { return get_async_dyn(); }
		if (HX_FIELD_EQ(inName,"set_async") ) { return set_async_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_syntax") ) { return get_syntax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_syntax") ) { return set_syntax_dyn(); }
		if (HX_FIELD_EQ(inName,"applyRules") ) { return applyRules_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onCodeChange") ) { return _onCodeChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onCodeKeyDown") ) { return _onCodeKeyDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Code_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { return set_async(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_async") ) { _async=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syntax") ) { return set_syntax(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { _syntax=inValue.Cast< ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_caller") ) { _caller=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Code_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_syntax"));
	outFields->push(HX_CSTRING("_async"));
	outFields->push(HX_CSTRING("syntax"));
	outFields->push(HX_CSTRING("async"));
	outFields->push(HX_CSTRING("_caller"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax*/ ,(int)offsetof(Code_obj,_syntax),HX_CSTRING("_syntax")},
	{hx::fsBool,(int)offsetof(Code_obj,_async),HX_CSTRING("_async")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller*/ ,(int)offsetof(Code_obj,_caller),HX_CSTRING("_caller")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_syntax"),
	HX_CSTRING("_async"),
	HX_CSTRING("initialize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_syntax"),
	HX_CSTRING("set_syntax"),
	HX_CSTRING("get_async"),
	HX_CSTRING("set_async"),
	HX_CSTRING("_onCodeChange"),
	HX_CSTRING("_onCodeKeyDown"),
	HX_CSTRING("_caller"),
	HX_CSTRING("applyRules"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Code_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Code_obj::__mClass,"__mClass");
};

#endif

Class Code_obj::__mClass;

void Code_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.extended.Code"), hx::TCanCast< Code_obj> ,sStaticFields,sMemberFields,
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

void Code_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
