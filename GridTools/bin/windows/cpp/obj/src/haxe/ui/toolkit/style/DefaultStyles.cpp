#include <hxcpp.h>

#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_filters_DropShadowFilter
#include <flash/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#include <haxe/ui/toolkit/style/DefaultStyles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void DefaultStyles_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.DefaultStyles","new",0xfac61f16,"haxe.ui.toolkit.style.DefaultStyles.new","haxe/ui/toolkit/style/DefaultStyles.hx",7,0xce5e3e7c)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(10)
	::flash::text::Font f = ::openfl::Assets_obj::getFont(HX_CSTRING("fonts/Oxygen.ttf"),null());		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(11)
	::flash::text::Font fb = ::openfl::Assets_obj::getFont(HX_CSTRING("fonts/Oxygen-Bold.ttf"),null());		HX_STACK_VAR(fb,"fb");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",13,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	this->addStyle(HX_CSTRING("Component"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_1::Block()));
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",18,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("alpha") , .7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	this->addStyle(HX_CSTRING("#modalOverlay"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_2::Block()));
	struct _Function_1_3{
		inline static Dynamic Block( ::flash::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",23,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	this->addStyle(HX_CSTRING("Text"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_3::Block(f)));
	struct _Function_1_4{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",30,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
				__result->Add(HX_CSTRING("fontEmbedded") , false,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	this->addStyle(HX_CSTRING("Code"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_4::Block()));
	struct _Function_1_5{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",37,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->addStyle(HX_CSTRING("Container"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_5::Block()));
	struct _Function_1_6{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",42,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	this->addStyle(HX_CSTRING("Accordion"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_6::Block()));
	struct _Function_1_7{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",46,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->addStyle(HX_CSTRING(".page"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_7::Block()));
	struct _Function_1_8{
		inline static Dynamic Block( ::flash::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",51,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(51)
	this->addStyle(HX_CSTRING("Button"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_8::Block(f)));
	struct _Function_1_9{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",68,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	this->addStyle(HX_CSTRING("Button:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_9::Block()));
	struct _Function_1_10{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",74,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	this->addStyle(HX_CSTRING("Button:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_10::Block()));
	struct _Function_1_11{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",81,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/expand.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	this->addStyle(HX_CSTRING("Button.expandable"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_11::Block()));
	struct _Function_1_12{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",85,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/collapse.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	this->addStyle(HX_CSTRING("Button.expandable:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_12::Block()));
	struct _Function_1_13{
		inline static Dynamic Block( ::flash::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",89,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacingX") , (int)2,false);
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(89)
	this->addStyle(HX_CSTRING("CheckBox, OptionBox"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_13::Block(f)));
	struct _Function_1_14{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",97,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)32,false);
				__result->Add(HX_CSTRING("height") , (int)32,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	this->addStyle(HX_CSTRING("CheckBoxValue, OptionBoxValue"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_14::Block()));
	struct _Function_1_15{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",102,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(102)
	this->addStyle(HX_CSTRING("CheckBoxValue #unselected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_15::Block()));
	struct _Function_1_16{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",106,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(106)
	this->addStyle(HX_CSTRING("CheckBoxValue #unselected:disabled"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_16::Block()));
	struct _Function_1_17{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",109,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/cross.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(109)
	this->addStyle(HX_CSTRING("CheckBoxValue #selected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_17::Block()));
	struct _Function_1_18{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",114,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	this->addStyle(HX_CSTRING("CheckBoxValue #selected:disabled"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_18::Block()));
	struct _Function_1_19{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",117,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(117)
	this->addStyle(HX_CSTRING("OptionBoxValue #unselected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_19::Block()));
	struct _Function_1_20{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",121,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(121)
	this->addStyle(HX_CSTRING("OptionBoxValue #unselected:disabled"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_20::Block()));
	struct _Function_1_21{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",124,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/circle.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(124)
	this->addStyle(HX_CSTRING("OptionBoxValue #selected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_21::Block()));
	struct _Function_1_22{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",129,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(129)
	this->addStyle(HX_CSTRING("OptionBoxValue #selected:disabled"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_22::Block()));
	struct _Function_1_23{
		inline static Dynamic Block( ::flash::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",132,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)42,false);
				__result->Add(HX_CSTRING("borderColor") , (int)2236962,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)12566463,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null()),false);
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	this->addStyle(HX_CSTRING("TextInput"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_23::Block(f)));
	struct _Function_1_24{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",147,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)11184810,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(147)
	this->addStyle(HX_CSTRING("TextInput #placeholder"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_24::Block()));
	struct _Function_1_25{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",151,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/up_down.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
				__result->Add(HX_CSTRING("selectionMethod") , HX_CSTRING("popup"),false);
				__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("left"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(151)
	this->addStyle(HX_CSTRING("ListSelector, DateSelector"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_25::Block()));
	struct _Function_1_26{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",158,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)310,false);
				__result->Add(HX_CSTRING("height") , (int)310,false);
				__result->Add(HX_CSTRING("spacing") , (int)3,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(158)
	this->addStyle(HX_CSTRING("CalendarView, Calendar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_26::Block()));
	struct _Function_1_27{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",166,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)2236962,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(166)
	this->addStyle(HX_CSTRING("CalendarView"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_27::Block()));
	struct _Function_1_28{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",176,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	this->addStyle(HX_CSTRING("CalendarView Calendar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_28::Block()));
	struct _Function_1_29{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",180,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)50,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(180)
	this->addStyle(HX_CSTRING("CalendarPopupContent"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_29::Block()));
	struct _Function_1_30{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",184,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(184)
	this->addStyle(HX_CSTRING("CalendarDay"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_30::Block()));
	struct _Function_1_31{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",192,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	this->addStyle(HX_CSTRING("CalendarView #currentMonthYear"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_31::Block()));
	struct _Function_1_32{
		inline static Dynamic Block( ::flash::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",196,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(196)
	this->addStyle(HX_CSTRING("Calendar #selectedDay"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_32::Block(f)));
	struct _Function_1_33{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",213,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(213)
	this->addStyle(HX_CSTRING("CalendarDay:over, Calendar #selectedDay:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_33::Block()));
	struct _Function_1_34{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",219,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(219)
	this->addStyle(HX_CSTRING("CalendarDay:down, Calendar #selectedDay:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_34::Block()));
	struct _Function_1_35{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",225,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(225)
	this->addStyle(HX_CSTRING("TabView"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_35::Block()));
	struct _Function_1_36{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",231,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(231)
	this->addStyle(HX_CSTRING("TabView Container"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_36::Block()));
	struct _Function_1_37{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",235,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("height") , (int)41,false);
				__result->Add(HX_CSTRING("paddingTop") , (int)0,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(235)
	this->addStyle(HX_CSTRING("TabBar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_37::Block()));
	struct _Function_1_38{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",248,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(248)
	this->addStyle(HX_CSTRING("TabBar #content"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_38::Block()));
	struct _Function_1_39{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",253,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(253)
	this->addStyle(HX_CSTRING("TabBar #container"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_39::Block()));
	struct _Function_1_40{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",256,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("height") , (int)42,false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("top"),false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("autoSize") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)20,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)20,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(256)
	this->addStyle(HX_CSTRING("TabBar Button"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_40::Block()));
	struct _Function_1_41{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",271,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)15658734,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(271)
	this->addStyle(HX_CSTRING("TabBar Button:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_41::Block()));
	struct _Function_1_42{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",276,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)30,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(276)
	this->addStyle(HX_CSTRING("HProgress"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_42::Block()));
	struct _Function_1_43{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",287,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(287)
	this->addStyle(HX_CSTRING("HProgress #background"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_43::Block()));
	struct _Function_1_44{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",295,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(295)
	this->addStyle(HX_CSTRING("HProgress #value"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_44::Block()));
	struct _Function_1_45{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",303,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)30,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(303)
	this->addStyle(HX_CSTRING("HSlider"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_45::Block()));
	struct _Function_1_46{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",316,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(316)
	this->addStyle(HX_CSTRING("HSlider #background"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_46::Block()));
	struct _Function_1_47{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",324,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentHeight") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(324)
	this->addStyle(HX_CSTRING("HSlider #value"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_47::Block()));
	struct _Function_1_48{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",332,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)26,false);
				__result->Add(HX_CSTRING("height") , (int)26,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("vertical"),false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)6710886,(int)1,(int)2,(int)2,(int)1,(int)3,false,null(),null()),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(332)
	this->addStyle(HX_CSTRING("HSlider Button"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_48::Block()));
	struct _Function_1_49{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",339,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null()),false);
				__result->Add(HX_CSTRING("inlineScrolls") , true,false);
				__result->Add(HX_CSTRING("autoHideScrolls") , true,false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(339)
	this->addStyle(HX_CSTRING("ScrollView"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_49::Block()));
	struct _Function_1_50{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",352,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(352)
	this->addStyle(HX_CSTRING("ListView"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_50::Block()));
	struct _Function_1_51{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",356,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(356)
	this->addStyle(HX_CSTRING("ListView #content"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_51::Block()));
	struct _Function_1_52{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",363,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(363)
	this->addStyle(HX_CSTRING(".even, .odd"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_52::Block()));
	struct _Function_1_53{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",368,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	this->addStyle(HX_CSTRING(".even:over, .odd:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_53::Block()));
	struct _Function_1_54{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",374,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(374)
	this->addStyle(HX_CSTRING(".even:selected, .odd:selected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_54::Block()));
	struct _Function_1_55{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",380,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)16754764,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(380)
	this->addStyle(HX_CSTRING(".even #text, .odd #text"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_55::Block()));
	struct _Function_1_56{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",383,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(383)
	this->addStyle(HX_CSTRING(".even #text:over, .odd #text:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_56::Block()));
	struct _Function_1_57{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",386,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(386)
	this->addStyle(HX_CSTRING(".even #text:selected, .odd #text:selected"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_57::Block()));
	struct _Function_1_58{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",390,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)10,false);
				__result->Add(HX_CSTRING("height") , (int)100,false);
				__result->Add(HX_CSTRING("hasButtons") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(390)
	this->addStyle(HX_CSTRING("VScroll"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_58::Block()));
	struct _Function_1_59{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",395,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(395)
	this->addStyle(HX_CSTRING("VScroll Button"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_59::Block()));
	struct _Function_1_60{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",401,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)100,false);
				__result->Add(HX_CSTRING("height") , (int)10,false);
				__result->Add(HX_CSTRING("hasButtons") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(401)
	this->addStyle(HX_CSTRING("HScroll"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_60::Block()));
	struct _Function_1_61{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",406,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("vertical"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(406)
	this->addStyle(HX_CSTRING("HScroll Button"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_61::Block()));
	struct _Function_1_62{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",412,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("height") , (int)10,false);
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("autoSize") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(412)
	this->addStyle(HX_CSTRING("MenuBar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_62::Block()));
	struct _Function_1_63{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",423,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(423)
	this->addStyle(HX_CSTRING("MenuBar Container"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_63::Block()));
	struct _Function_1_64{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",427,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("borderColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				__result->Add(HX_CSTRING("width") , (int)400,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(427)
	this->addStyle(HX_CSTRING("Popup"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_64::Block()));
	struct _Function_1_65{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",438,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)-2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(438)
	this->addStyle(HX_CSTRING("Popup Container"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_65::Block()));
	struct _Function_1_66{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",443,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("height") , (int)45,false);
				__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(443)
	this->addStyle(HX_CSTRING("Popup #titleBar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_66::Block()));
	struct _Function_1_67{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",452,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(452)
	this->addStyle(HX_CSTRING("Popup #popupContent"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_67::Block()));
	struct _Function_1_68{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",457,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
				__result->Add(HX_CSTRING("height") , (int)55,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(457)
	this->addStyle(HX_CSTRING("Popup #buttonBar"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_68::Block()));
	struct _Function_1_69{
		inline static Dynamic Block( ::flash::text::Font &fb){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",464,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontName") , fb->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("fontSize") , (int)24,false);
				__result->Add(HX_CSTRING("color") , (int)8947848,false);
				__result->Add(HX_CSTRING("horizontalAlignment") , HX_CSTRING("right"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(464)
	this->addStyle(HX_CSTRING("Popup #titleBar #title"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_69::Block(fb)));
	struct _Function_1_70{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",472,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(472)
	this->addStyle(HX_CSTRING("ListPopupContent ListView, ListPopupContent #popupContent"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_70::Block()));
	struct _Function_1_71{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",477,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)1,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("width") , (int)175,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(477)
	this->addStyle(HX_CSTRING("Menu"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_71::Block()));
	struct _Function_1_72{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",488,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(488)
	this->addStyle(HX_CSTRING("MenuButton"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_72::Block()));
	struct _Function_1_73{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",500,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(500)
	this->addStyle(HX_CSTRING("MenuButton:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_73::Block()));
	struct _Function_1_74{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",507,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(507)
	this->addStyle(HX_CSTRING("MenuButton:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_74::Block()));
	struct _Function_1_75{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",516,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(516)
	this->addStyle(HX_CSTRING("MenuItem"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_75::Block()));
	struct _Function_1_76{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",526,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(526)
	this->addStyle(HX_CSTRING("MenuItem:over"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_76::Block()));
	struct _Function_1_77{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",532,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(532)
	this->addStyle(HX_CSTRING("MenuItem:down"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_77::Block()));
	struct _Function_1_78{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",538,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/expand.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(538)
	this->addStyle(HX_CSTRING("MenuItem.expandable"),::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_78::Block()));
}
;
	return null();
}

//DefaultStyles_obj::~DefaultStyles_obj() { }

Dynamic DefaultStyles_obj::__CreateEmpty() { return  new DefaultStyles_obj; }
hx::ObjectPtr< DefaultStyles_obj > DefaultStyles_obj::__new()
{  hx::ObjectPtr< DefaultStyles_obj > result = new DefaultStyles_obj();
	result->__construct();
	return result;}

Dynamic DefaultStyles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultStyles_obj > result = new DefaultStyles_obj();
	result->__construct();
	return result;}


DefaultStyles_obj::DefaultStyles_obj()
{
}

Dynamic DefaultStyles_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultStyles_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultStyles_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#endif

Class DefaultStyles_obj::__mClass;

void DefaultStyles_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.DefaultStyles"), hx::TCanCast< DefaultStyles_obj> ,sStaticFields,sMemberFields,
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

void DefaultStyles_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
