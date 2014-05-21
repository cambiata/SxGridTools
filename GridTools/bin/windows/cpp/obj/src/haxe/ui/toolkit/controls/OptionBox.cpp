#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBox
#include <haxe/ui/toolkit/controls/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBoxValue
#include <haxe/ui/toolkit/controls/OptionBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void OptionBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","new",0xd80595b2,"haxe.ui.toolkit.controls.OptionBox.new","haxe/ui/toolkit/controls/OptionBox.hx",24,0xfe98d33e)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(27)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(28)
	if (((::haxe::ui::toolkit::controls::OptionBox_obj::_groups == null()))){
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::controls::OptionBox_obj::_groups = ::haxe::ds::StringMap_obj::__new();
	}
	HX_STACK_LINE(32)
	this->_value = ::haxe::ui::toolkit::controls::OptionBoxValue_obj::__new();
	HX_STACK_LINE(33)
	this->_value->set_interactive(false);
	HX_STACK_LINE(34)
	this->_label = ::haxe::ui::toolkit::controls::Text_obj::__new();
	HX_STACK_LINE(35)
	this->_layout = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();
	HX_STACK_LINE(36)
	this->_autoSize = true;
}
;
	return null();
}

//OptionBox_obj::~OptionBox_obj() { }

Dynamic OptionBox_obj::__CreateEmpty() { return  new OptionBox_obj; }
hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__new()
{  hx::ObjectPtr< OptionBox_obj > result = new OptionBox_obj();
	result->__construct();
	return result;}

Dynamic OptionBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionBox_obj > result = new OptionBox_obj();
	result->__construct();
	return result;}

hx::Object *OptionBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void OptionBox_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","initialize",0x01249a3e,"haxe.ui.toolkit.controls.OptionBox.initialize","haxe/ui/toolkit/controls/OptionBox.hx",42,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->super::initialize();
		HX_STACK_LINE(45)
		this->_value->set_verticalAlign(HX_CSTRING("center"));
		HX_STACK_LINE(46)
		this->addChild(this->_value);
		HX_STACK_LINE(47)
		this->addChild(this->_label);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/OptionBox.hx",50,0xfe98d33e)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(50)
				if (((_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >()->get_selected() == false))){
					HX_STACK_LINE(51)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >()->set_selected(!(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >()->get_selected()));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(49)
		this->addEventListener(::flash::events::MouseEvent_obj::CLICK, Dynamic(new _Function_1_1(_g)),null(),null(),null());
	}
return null();
}


::String OptionBox_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_text",0x8abc39a4,"haxe.ui.toolkit.controls.OptionBox.get_text","haxe/ui/toolkit/controls/OptionBox.hx",60,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return this->_label->get_text();
}


::String OptionBox_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_text",0x39199318,"haxe.ui.toolkit.controls.OptionBox.set_text","haxe/ui/toolkit/controls/OptionBox.hx",63,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(64)
	value = this->super::set_text(value);
	HX_STACK_LINE(65)
	this->_label->set_text(value);
	HX_STACK_LINE(66)
	return value;
}


bool OptionBox_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_selected",0x76ceded2,"haxe.ui.toolkit.controls.OptionBox.get_selected","haxe/ui/toolkit/controls/OptionBox.hx",84,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return (this->_value->get_value() == HX_CSTRING("selected"));
}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_selected,return )

bool OptionBox_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_selected",0x8bc80246,"haxe.ui.toolkit.controls.OptionBox.set_selected","haxe/ui/toolkit/controls/OptionBox.hx",87,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(88)
	if (((this->get_selected() == value))){
		HX_STACK_LINE(89)
		return value;
	}
	HX_STACK_LINE(92)
	this->_value->set_value((  (((value == true))) ? Dynamic(HX_CSTRING("selected")) : Dynamic(HX_CSTRING("unselected")) ));
	HX_STACK_LINE(93)
	if (((bool((this->_group != null())) && bool((value == true))))){
		HX_STACK_LINE(94)
		Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups->get(this->_group);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(95)
		if (((arr != null()))){
			HX_STACK_LINE(96)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while(((_g < arr->length))){
				HX_STACK_LINE(96)
				::haxe::ui::toolkit::controls::OptionBox option = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >();		HX_STACK_VAR(option,"option");
				HX_STACK_LINE(96)
				++(_g);
				HX_STACK_LINE(97)
				if (((option != hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(98)
					option->set_selected(false);
				}
			}
		}
	}
	HX_STACK_LINE(104)
	::flash::events::Event event = ::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(105)
	this->dispatchEvent(event);
	HX_STACK_LINE(107)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_selected,return )

::String OptionBox_obj::get_group( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_group",0x66519e68,"haxe.ui.toolkit.controls.OptionBox.get_group","haxe/ui/toolkit/controls/OptionBox.hx",111,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->_group;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_group,return )

::String OptionBox_obj::set_group( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_group",0x49a28a74,"haxe.ui.toolkit.controls.OptionBox.set_group","haxe/ui/toolkit/controls/OptionBox.hx",114,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(115)
	if (((value != null()))){
		HX_STACK_LINE(116)
		Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(117)
		if (((arr != null()))){
			HX_STACK_LINE(118)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(122)
	this->_group = value;
	HX_STACK_LINE(123)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(124)
	if (((arr == null()))){
		HX_STACK_LINE(125)
		arr = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(128)
	if (((::haxe::ui::toolkit::controls::OptionBox_obj::optionInGroup(value,hx::ObjectPtr<OBJ_>(this)) == false))){
		HX_STACK_LINE(129)
		arr->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(131)
	::haxe::ui::toolkit::controls::OptionBox_obj::_groups->set(value,arr);
	HX_STACK_LINE(133)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_group,return )

Void OptionBox_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","applyStyle",0x43d889d1,"haxe.ui.toolkit.controls.OptionBox.applyStyle","haxe/ui/toolkit/controls/OptionBox.hx",156,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		this->super::applyStyle();
		HX_STACK_LINE(160)
		if (((this->_label != null()))){
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::style::Style labelStyle = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(162)
			if (((this->_style != null()))){
				HX_STACK_LINE(163)
				labelStyle->set_fontName(this->_style->get_fontName());
				HX_STACK_LINE(164)
				labelStyle->set_fontSize(this->_style->get_fontSize());
				HX_STACK_LINE(165)
				labelStyle->set_fontEmbedded(this->_style->get_fontEmbedded());
				HX_STACK_LINE(166)
				labelStyle->set_color(this->_style->get_color());
			}
			HX_STACK_LINE(168)
			this->_label->set_style(labelStyle);
		}
	}
return null();
}


Dynamic OptionBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","clone",0xc40e512f,"haxe.ui.toolkit.controls.OptionBox.clone","haxe/ui/toolkit/controls/OptionBox.hx",1,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBox c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	c->set_selected(this->get_selected());
	HX_STACK_LINE(4)
	c->set_group(this->get_group());
	HX_STACK_LINE(5)
	return c;
}


Dynamic OptionBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","self",0x302b6dfa,"haxe.ui.toolkit.controls.OptionBox.self","haxe/ui/toolkit/controls/OptionBox.hx",2,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::OptionBox_obj::__new();
}


::haxe::ds::StringMap OptionBox_obj::_groups;

bool OptionBox_obj::optionInGroup( ::String value,::haxe::ui::toolkit::controls::OptionBox option){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","optionInGroup",0x829ec5f7,"haxe.ui.toolkit.controls.OptionBox.optionInGroup","haxe/ui/toolkit/controls/OptionBox.hx",139,0xfe98d33e)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(option,"option")
	HX_STACK_LINE(140)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(141)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(142)
	if (((arr != null()))){
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		while(((_g < arr->length))){
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::controls::OptionBox test = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >();		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			if (((test == option))){
				HX_STACK_LINE(145)
				exists = true;
				HX_STACK_LINE(146)
				break;
			}
		}
	}
	HX_STACK_LINE(150)
	return exists;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionBox_obj,optionInGroup,return )


OptionBox_obj::OptionBox_obj()
{
}

void OptionBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBox);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_group,"_group");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OptionBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return get_group(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return _groups; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionInGroup") ) { return optionInGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptionBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::haxe::ui::toolkit::controls::OptionBoxValue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return set_selected(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_value"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_group"));
	outFields->push(HX_CSTRING("selected"));
	outFields->push(HX_CSTRING("group"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_groups"),
	HX_CSTRING("optionInGroup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::OptionBoxValue*/ ,(int)offsetof(OptionBox_obj,_value),HX_CSTRING("_value")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(OptionBox_obj,_label),HX_CSTRING("_label")},
	{hx::fsString,(int)offsetof(OptionBox_obj,_group),HX_CSTRING("_group")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_value"),
	HX_CSTRING("_label"),
	HX_CSTRING("_group"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_selected"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("get_group"),
	HX_CSTRING("set_group"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#endif

Class OptionBox_obj::__mClass;

void OptionBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.OptionBox"), hx::TCanCast< OptionBox_obj> ,sStaticFields,sMemberFields,
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

void OptionBox_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
