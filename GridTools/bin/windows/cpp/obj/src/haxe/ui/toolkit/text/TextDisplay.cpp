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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldAutoSize
#include <flash/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldType
#include <flash/text/TextFieldType.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#include <haxe/ui/toolkit/text/TextDisplay.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{

Void TextDisplay_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","new",0x28faa668,"haxe.ui.toolkit.text.TextDisplay.new","haxe/ui/toolkit/text/TextDisplay.hx",11,0x5bd82fc8)
{
	HX_STACK_LINE(22)
	this->_autoSize = true;
	HX_STACK_LINE(25)
	this->_tf = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(26)
	this->_tf->set_type(::flash::text::TextFieldType_obj::DYNAMIC);
	HX_STACK_LINE(27)
	this->_tf->set_selectable(false);
	HX_STACK_LINE(28)
	this->_tf->set_multiline(false);
	HX_STACK_LINE(29)
	this->_tf->set_mouseEnabled(false);
	HX_STACK_LINE(30)
	this->_tf->set_wordWrap(false);
	HX_STACK_LINE(31)
	this->_tf->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(32)
	this->_tf->set_text(HX_CSTRING(""));
}
;
	return null();
}

//TextDisplay_obj::~TextDisplay_obj() { }

Dynamic TextDisplay_obj::__CreateEmpty() { return  new TextDisplay_obj; }
hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__new()
{  hx::ObjectPtr< TextDisplay_obj > result = new TextDisplay_obj();
	result->__construct();
	return result;}

Dynamic TextDisplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextDisplay_obj > result = new TextDisplay_obj();
	result->__construct();
	return result;}

hx::Object *TextDisplay_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::text::ITextDisplay_obj)) return operator ::haxe::ui::toolkit::text::ITextDisplay_obj *();
	return super::__ToInterface(inType);
}

::String TextDisplay_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_text",0x1c60d52e,"haxe.ui.toolkit.text.TextDisplay.get_text","haxe/ui/toolkit/text/TextDisplay.hx",53,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return this->_tf->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_text,return )

::String TextDisplay_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_text",0xcabe2ea2,"haxe.ui.toolkit.text.TextDisplay.set_text","haxe/ui/toolkit/text/TextDisplay.hx",56,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(57)
	if (((value != null()))){
		HX_STACK_LINE(58)
		if (((this->_tf->get_multiline() == false))){
			HX_STACK_LINE(59)
			this->_tf->set_text(::StringTools_obj::replace(value,HX_CSTRING("\\n"),HX_CSTRING("\n")));
		}
		else{
			HX_STACK_LINE(61)
			this->_tf->set_text(::StringTools_obj::replace(value,HX_CSTRING("\\n"),HX_CSTRING("\n")));
		}
	}
	HX_STACK_LINE(65)
	this->set_style(this->_style);
	HX_STACK_LINE(66)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_text,return )

::haxe::ui::toolkit::style::Style TextDisplay_obj::get_style( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_style",0x2ede0d90,"haxe.ui.toolkit.text.TextDisplay.get_style","haxe/ui/toolkit/text/TextDisplay.hx",70,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return this->_style;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_style,return )

::haxe::ui::toolkit::style::Style TextDisplay_obj::set_style( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_style",0x122ef99c,"haxe.ui.toolkit.text.TextDisplay.set_style","haxe/ui/toolkit/text/TextDisplay.hx",73,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(74)
	if (((value == null()))){
		HX_STACK_LINE(75)
		return value;
	}
	HX_STACK_LINE(78)
	this->_style = value;
	HX_STACK_LINE(79)
	::flash::text::TextFormat format = this->_tf->getTextFormat(null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(80)
	if (((this->_style->get_fontName() != null()))){
		HX_STACK_LINE(81)
		this->_tf->set_embedFonts(this->_style->get_fontEmbedded());
		HX_STACK_LINE(82)
		format->font = this->_style->get_fontName();
	}
	HX_STACK_LINE(84)
	if (((this->_style->get_fontSize() != (int)-1))){
		HX_STACK_LINE(85)
		format->size = this->_style->get_fontSize();
	}
	HX_STACK_LINE(87)
	if (((this->_style->get_color() != (int)-1))){
		HX_STACK_LINE(88)
		format->color = this->_style->get_color();
	}
	HX_STACK_LINE(90)
	this->_tf->set_defaultTextFormat(format);
	HX_STACK_LINE(91)
	this->_tf->setTextFormat(format,null(),null());
	HX_STACK_LINE(92)
	if (((this->_style->get_textAlign() != null()))){
		HX_STACK_LINE(93)
		this->set_textAlign(this->_style->get_textAlign());
	}
	HX_STACK_LINE(95)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_style,return )

::flash::display::DisplayObject TextDisplay_obj::get_display( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_display",0xe53ca861,"haxe.ui.toolkit.text.TextDisplay.get_display","haxe/ui/toolkit/text/TextDisplay.hx",99,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	return this->_tf;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_display,return )

bool TextDisplay_obj::get_interactive( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_interactive",0x9dceb781,"haxe.ui.toolkit.text.TextDisplay.get_interactive","haxe/ui/toolkit/text/TextDisplay.hx",103,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	return (this->_tf->get_type() == ::flash::text::TextFieldType_obj::INPUT);
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_interactive,return )

bool TextDisplay_obj::set_interactive( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_interactive",0x999a348d,"haxe.ui.toolkit.text.TextDisplay.set_interactive","haxe/ui/toolkit/text/TextDisplay.hx",106,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(107)
	if (((value == true))){
		HX_STACK_LINE(108)
		this->_tf->set_type(::flash::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(109)
		this->_tf->set_selectable(true);
		HX_STACK_LINE(110)
		this->_tf->set_mouseEnabled(true);
	}
	else{
		HX_STACK_LINE(112)
		this->_tf->set_type(::flash::text::TextFieldType_obj::DYNAMIC);
		HX_STACK_LINE(113)
		this->_tf->set_selectable(false);
		HX_STACK_LINE(114)
		this->_tf->set_mouseEnabled(false);
	}
	HX_STACK_LINE(116)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_interactive,return )

bool TextDisplay_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_multiline",0x083756cc,"haxe.ui.toolkit.text.TextDisplay.get_multiline","haxe/ui/toolkit/text/TextDisplay.hx",120,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->_tf->get_multiline();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_multiline,return )

bool TextDisplay_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_multiline",0x4d3d38d8,"haxe.ui.toolkit.text.TextDisplay.set_multiline","haxe/ui/toolkit/text/TextDisplay.hx",123,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	this->_tf->set_multiline(value);
	HX_STACK_LINE(125)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_multiline,return )

bool TextDisplay_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_wrapLines",0x829ddbb4,"haxe.ui.toolkit.text.TextDisplay.get_wrapLines","haxe/ui/toolkit/text/TextDisplay.hx",129,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->_tf->get_wordWrap();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_wrapLines,return )

bool TextDisplay_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_wrapLines",0xc7a3bdc0,"haxe.ui.toolkit.text.TextDisplay.set_wrapLines","haxe/ui/toolkit/text/TextDisplay.hx",132,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(133)
	this->_tf->set_wordWrap(value);
	HX_STACK_LINE(134)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_wrapLines,return )

bool TextDisplay_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_displayAsPassword",0xcac1c5ee,"haxe.ui.toolkit.text.TextDisplay.get_displayAsPassword","haxe/ui/toolkit/text/TextDisplay.hx",138,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return this->_tf->get_displayAsPassword();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_displayAsPassword,return )

bool TextDisplay_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_displayAsPassword",0x1eca93fa,"haxe.ui.toolkit.text.TextDisplay.set_displayAsPassword","haxe/ui/toolkit/text/TextDisplay.hx",141,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	this->_tf->set_displayAsPassword(value);
	HX_STACK_LINE(143)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_displayAsPassword,return )

bool TextDisplay_obj::get_visible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_visible",0xcd16f691,"haxe.ui.toolkit.text.TextDisplay.get_visible","haxe/ui/toolkit/text/TextDisplay.hx",147,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->_tf->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_visible,return )

bool TextDisplay_obj::set_visible( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_visible",0xd783fd9d,"haxe.ui.toolkit.text.TextDisplay.set_visible","haxe/ui/toolkit/text/TextDisplay.hx",150,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(151)
	this->_tf->set_visible(value);
	HX_STACK_LINE(152)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_visible,return )

bool TextDisplay_obj::get_selectable( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_selectable",0x3ad895d7,"haxe.ui.toolkit.text.TextDisplay.get_selectable","haxe/ui/toolkit/text/TextDisplay.hx",156,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->_tf->get_selectable();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_selectable,return )

bool TextDisplay_obj::set_selectable( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_selectable",0x5af87e4b,"haxe.ui.toolkit.text.TextDisplay.set_selectable","haxe/ui/toolkit/text/TextDisplay.hx",159,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	this->_tf->set_mouseEnabled(value);
	HX_STACK_LINE(161)
	return this->_tf->set_selectable(value);
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_selectable,return )

bool TextDisplay_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_autoSize",0xb9b56cd1,"haxe.ui.toolkit.text.TextDisplay.get_autoSize","haxe/ui/toolkit/text/TextDisplay.hx",165,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return (this->_tf->get_autoSize() != ::flash::text::TextFieldAutoSize_obj::NONE);
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_autoSize,return )

bool TextDisplay_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_autoSize",0xceae9045,"haxe.ui.toolkit.text.TextDisplay.set_autoSize","haxe/ui/toolkit/text/TextDisplay.hx",168,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(169)
	if (((value == true))){
		HX_STACK_LINE(170)
		this->_tf->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
	}
	else{
		HX_STACK_LINE(172)
		this->_tf->set_autoSize(::flash::text::TextFieldAutoSize_obj::NONE);
	}
	HX_STACK_LINE(174)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_autoSize,return )

::String TextDisplay_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_textAlign",0x24a46ab7,"haxe.ui.toolkit.text.TextDisplay.get_textAlign","haxe/ui/toolkit/text/TextDisplay.hx",177,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::flash::text::TextFormat format = this->_tf->getTextFormat(null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(179)
	::String align = HX_CSTRING("left");		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		::String _g = format->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		::String _switch_1 = (_g);
		if (  ( _switch_1==::flash::text::TextFormatAlign_obj::LEFT)){
			HX_STACK_LINE(182)
			align = HX_CSTRING("left");
		}
		else if (  ( _switch_1==::flash::text::TextFormatAlign_obj::CENTER)){
			HX_STACK_LINE(184)
			align = HX_CSTRING("center");
		}
		else if (  ( _switch_1==::flash::text::TextFormatAlign_obj::RIGHT)){
			HX_STACK_LINE(186)
			align = HX_CSTRING("right");
		}
		else  {
			HX_STACK_LINE(188)
			align = HX_CSTRING("left");
		}
;
;
	}
	HX_STACK_LINE(190)
	return align;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textAlign,return )

::String TextDisplay_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_textAlign",0x69aa4cc3,"haxe.ui.toolkit.text.TextDisplay.set_textAlign","haxe/ui/toolkit/text/TextDisplay.hx",193,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(194)
	::flash::text::TextFormat format = this->_tf->getTextFormat(null(),null());		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(195)
	::String _switch_2 = (value);
	if (  ( _switch_2==HX_CSTRING("left"))){
		HX_STACK_LINE(197)
		format->align = ::flash::text::TextFormatAlign_obj::LEFT;
	}
	else if (  ( _switch_2==HX_CSTRING("center"))){
		HX_STACK_LINE(199)
		format->align = ::flash::text::TextFormatAlign_obj::CENTER;
	}
	else if (  ( _switch_2==HX_CSTRING("right"))){
		HX_STACK_LINE(201)
		format->align = ::flash::text::TextFormatAlign_obj::RIGHT;
	}
	else  {
		HX_STACK_LINE(203)
		format->align = ::flash::text::TextFormatAlign_obj::LEFT;
	}
;
;
	HX_STACK_LINE(205)
	this->_tf->set_defaultTextFormat(format);
	HX_STACK_LINE(206)
	this->_tf->setTextFormat(format,null(),null());
	HX_STACK_LINE(207)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_textAlign,return )

int TextDisplay_obj::get_maxChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_maxChars",0x7a0ccc9a,"haxe.ui.toolkit.text.TextDisplay.get_maxChars","haxe/ui/toolkit/text/TextDisplay.hx",211,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	return this->_tf->get_maxChars();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_maxChars,return )

int TextDisplay_obj::set_maxChars( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_maxChars",0x8f05f00e,"haxe.ui.toolkit.text.TextDisplay.set_maxChars","haxe/ui/toolkit/text/TextDisplay.hx",215,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	return this->_tf->set_maxChars(value);
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_maxChars,return )

::String TextDisplay_obj::get_restrictChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_restrictChars",0x7f2a6760,"haxe.ui.toolkit.text.TextDisplay.get_restrictChars","haxe/ui/toolkit/text/TextDisplay.hx",223,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_restrictChars,return )

::String TextDisplay_obj::set_restrictChars( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_restrictChars",0xa2983f6c,"haxe.ui.toolkit.text.TextDisplay.set_restrictChars","haxe/ui/toolkit/text/TextDisplay.hx",231,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(231)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_restrictChars,return )

int TextDisplay_obj::X_PADDING;

int TextDisplay_obj::Y_PADDING;


TextDisplay_obj::TextDisplay_obj()
{
}

void TextDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplay);
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_tf,"_tf");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_END_CLASS();
}

void TextDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_tf,"_tf");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(display,"display");
}

Dynamic TextDisplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { return _tf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return get_style(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { return _style; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return inCallProp ? get_display() : display; }
		if (HX_FIELD_EQ(inName,"visible") ) { return get_visible(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"multiline") ) { return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return get_textAlign(); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { return get_selectable(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { return get_interactive(); }
		if (HX_FIELD_EQ(inName,"get_display") ) { return get_display_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { return get_restrictChars(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactive") ) { return get_interactive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactive") ) { return set_interactive_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return get_restrictChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return set_restrictChars_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextDisplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { _tf=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return set_style(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::flash::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return set_maxChars(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { return set_selectable(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { return set_interactive(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { return set_restrictChars(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return set_displayAsPassword(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_style"));
	outFields->push(HX_CSTRING("_tf"));
	outFields->push(HX_CSTRING("_autoSize"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("display"));
	outFields->push(HX_CSTRING("interactive"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("wrapLines"));
	outFields->push(HX_CSTRING("displayAsPassword"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("selectable"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("textAlign"));
	outFields->push(HX_CSTRING("maxChars"));
	outFields->push(HX_CSTRING("restrictChars"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("X_PADDING"),
	HX_CSTRING("Y_PADDING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(TextDisplay_obj,_style),HX_CSTRING("_style")},
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(TextDisplay_obj,_tf),HX_CSTRING("_tf")},
	{hx::fsBool,(int)offsetof(TextDisplay_obj,_autoSize),HX_CSTRING("_autoSize")},
	{hx::fsObject /*::flash::display::DisplayObject*/ ,(int)offsetof(TextDisplay_obj,display),HX_CSTRING("display")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_style"),
	HX_CSTRING("_tf"),
	HX_CSTRING("_autoSize"),
	HX_CSTRING("display"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_style"),
	HX_CSTRING("set_style"),
	HX_CSTRING("get_display"),
	HX_CSTRING("get_interactive"),
	HX_CSTRING("set_interactive"),
	HX_CSTRING("get_multiline"),
	HX_CSTRING("set_multiline"),
	HX_CSTRING("get_wrapLines"),
	HX_CSTRING("set_wrapLines"),
	HX_CSTRING("get_displayAsPassword"),
	HX_CSTRING("set_displayAsPassword"),
	HX_CSTRING("get_visible"),
	HX_CSTRING("set_visible"),
	HX_CSTRING("get_selectable"),
	HX_CSTRING("set_selectable"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_textAlign"),
	HX_CSTRING("set_textAlign"),
	HX_CSTRING("get_maxChars"),
	HX_CSTRING("set_maxChars"),
	HX_CSTRING("get_restrictChars"),
	HX_CSTRING("set_restrictChars"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextDisplay_obj::X_PADDING,"X_PADDING");
	HX_MARK_MEMBER_NAME(TextDisplay_obj::Y_PADDING,"Y_PADDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::X_PADDING,"X_PADDING");
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::Y_PADDING,"Y_PADDING");
};

#endif

Class TextDisplay_obj::__mClass;

void TextDisplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.text.TextDisplay"), hx::TCanCast< TextDisplay_obj> ,sStaticFields,sMemberFields,
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

void TextDisplay_obj::__boot()
{
	X_PADDING= (int)4;
	Y_PADDING= (int)4;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text
