#include <hxcpp.h>

#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_filters_BlurFilter
#include <flash/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_flash_filters_DropShadowFilter
#include <flash/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_GradientTheme
#include <haxe/ui/toolkit/themes/GradientTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void GradientTheme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.GradientTheme","new",0x750828e9,"haxe.ui.toolkit.themes.GradientTheme.new","haxe/ui/toolkit/themes/GradientTheme.hx",6,0x7744d627)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->name = HX_CSTRING("gradient");
}
;
	return null();
}

//GradientTheme_obj::~GradientTheme_obj() { }

Dynamic GradientTheme_obj::__CreateEmpty() { return  new GradientTheme_obj; }
hx::ObjectPtr< GradientTheme_obj > GradientTheme_obj::__new()
{  hx::ObjectPtr< GradientTheme_obj > result = new GradientTheme_obj();
	result->__construct();
	return result;}

Dynamic GradientTheme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GradientTheme_obj > result = new GradientTheme_obj();
	result->__construct();
	return result;}

Void GradientTheme_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.GradientTheme","apply",0x711dd237,"haxe.ui.toolkit.themes.GradientTheme.apply","haxe/ui/toolkit/themes/GradientTheme.hx",11,0x7744d627)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::apply();
		HX_STACK_LINE(16)
		{
			HX_STACK_LINE(16)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)760,false);
							__result->Add(HX_CSTRING("height") , (int)560,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("spacingY") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)4,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Root.popup"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::BlurFilter_obj::__new(null(),null(),null()),false);
							__result->Add(HX_CSTRING("alpha") , .6,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("#modalOverlay"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Text"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							__result->Add(HX_CSTRING("spacing") , (int)5,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VBox, ContinuousBox, Box, HBox, Grid"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ScrollView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)0,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)0,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("spacingX") , (int)5,false);
							__result->Add(HX_CSTRING("spacingY") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ScrollView VBox"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)8,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)8,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("fontScale") , (int)1,false);
							__result->Add(HX_CSTRING("spacing") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9213353,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7765909,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)17,false);
							__result->Add(HX_CSTRING("height") , (int)100,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("spacingY") , (int)1,false);
							__result->Add(HX_CSTRING("hasButtons") , true,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)6319240,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)1,false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4936810,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4936810,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4936810,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4936810,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)9211020,false);
							__result->Add(HX_CSTRING("borderColor") , (int)9211020,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_up.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.up"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_vertical.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.thumb"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_vertical_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.thumb:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_up_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.up:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VScroll Button.down:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)17,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("spacingX") , (int)1,false);
							__result->Add(HX_CSTRING("hasButtons") , true,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)6319240,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)1,false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4936810,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4936810,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4936810,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4936810,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)9211020,false);
							__result->Add(HX_CSTRING("borderColor") , (int)9211020,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_left.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.left"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.right"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_horizontal.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.thumb"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_horizontal_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.thumb:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_left_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.left:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HScroll Button.right:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)20,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress #background"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress #background:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress #value"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HProgress #value:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)20,false);
							__result->Add(HX_CSTRING("height") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress #background"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress #background:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress #value"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VProgress #value:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)24,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)10,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,false,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider #background"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider #background:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("height") , (int)10,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("cornerRadiusTopRight") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadiusBottomRight") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider #value"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider #value:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)10,false);
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("HSlider Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)24,false);
							__result->Add(HX_CSTRING("height") , (int)100,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)10,false);
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,false,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider #background"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider #background:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)10,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("cornerRadiusTopRight") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadiusTopLeft") , (int)0,false);
							__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider #value"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider #value:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)30,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_vertical.png"),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/gripper_vertical_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("VSlider Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("spacing") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView #content"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)4,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)4,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16119285,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)4,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)4,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".odd"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even:over, .odd:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4148331,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even:selected, .odd:selected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even #text, .odd #text"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even #text:over, .odd #text:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING(".even #text:selected, .odd #text:selected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBox"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)18,false);
							__result->Add(HX_CSTRING("height") , (int)18,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBoxValue"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBoxValue #unselected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBoxValue #unselected:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/cross_dark.png"),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBoxValue #selected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/cross_dark_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CheckBoxValue #selected:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBox"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)18,false);
							__result->Add(HX_CSTRING("height") , (int)18,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBoxValue"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBoxValue #unselected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBoxValue #unselected:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)1,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)1,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)1,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/circle_dark.png"),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBoxValue #selected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("OptionBoxValue #selected:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)150,false);
							__result->Add(HX_CSTRING("height") , (int)30,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,true,null(),null()),false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TextInput, Code, RTF"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							__result->Add(HX_CSTRING("color") , (int)8947848,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TextInput:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)11184810,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TextInput #placeholder"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("height") , (int)45,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)16,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				style->addDynamicValue(HX_CSTRING("borderColor"),HX_CSTRING("-1"));
				HX_STACK_LINE(19)
				style->addDynamicValue(HX_CSTRING("borderSize"),HX_CSTRING("-1"));
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabBar"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)3,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabBar HBox"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("height") , (int)30,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8231370,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("cornerRadiusBottomLeft") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadiusBottomRight") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabBar Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6127548,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabBar Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16053749,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
							__result->Add(HX_CSTRING("color") , (int)3554636,false);
							__result->Add(HX_CSTRING("borderColor") , (int)14671325,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabBar Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Stack"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)10,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)10,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)10,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)10,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TabView Stack"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("height") , (int)40,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)90,(int)8421504,(int)1,(int)0,(int)4,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)0,false);
							__result->Add(HX_CSTRING("spacingY") , (int)0,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("width") , (int)150,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Menu"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)13421772,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right_dark.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem.expandable"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem.expandable:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuItem.expandable:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar MenuButton"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16053749,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
							__result->Add(HX_CSTRING("color") , (int)3554636,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8421504,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar MenuButton:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8421504,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar MenuButton:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)8,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)8,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down.png"),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
							__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("left"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListSelector, DateSelector"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListSelector:over, DateSelector:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9213353,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7765909,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListSelector:down, DateSelector:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListSelector:disabled, DateSelector:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar ListSelector"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar ListSelector:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("MenuBar ListSelector:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("DropDownList"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox Button, TableView #tableContent Button"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox Button:over, TableView #tableContent Button:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox Button:down, TableView #tableContent Button:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox Button:disabled, TableView #tableContent Button:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox ListSelector, TableView #tableContent ListSelector"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox ListSelector:over, TableView #tableContent ListSelector:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox ListSelector:down, TableView #tableContent ListSelector:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)13421772,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)9211020,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7105644,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6710886,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down_disabled.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListView VBox ListSelector:disabled, TableView #tableContent ListSelector:disabled"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("width") , (int)300,false);
							__result->Add(HX_CSTRING("spacing") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Popup"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("height") , (int)30,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)4,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Popup #titleBar"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Popup #popupContent"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Popup #titleBar Text"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingTop") , (int)10,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("height") , (int)45,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Popup #buttonBar"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ListPopupContent ListView, ListPopupContent #popupContent"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)0,false);
							__result->Add(HX_CSTRING("spacingY") , (int)0,false);
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Accordion"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("padding") , (int)5,false);
							__result->Add(HX_CSTRING("spacing") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Accordion .page"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)8,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)8,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_right2.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button.expandable"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button.expandable:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)4148331,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Button.expandable:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingX") , (int)0,false);
							__result->Add(HX_CSTRING("spacingY") , (int)0,false);
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ExpandablePanel"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("padding") , (int)5,false);
							__result->Add(HX_CSTRING("spacing") , (int)5,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("ExpandablePanel #content"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("spacingY") , (int)8,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16053749,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
							__result->Add(HX_CSTRING("color") , (int)3554636,false);
							__result->Add(HX_CSTRING("borderColor") , (int)14671325,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down_dark.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView ListSelector"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8231370,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView ListSelector:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6127548,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/gradient/arrow_down.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView ListSelector:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)8,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)8,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16053749,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
							__result->Add(HX_CSTRING("color") , (int)3554636,false);
							__result->Add(HX_CSTRING("borderColor") , (int)14671325,false);
							__result->Add(HX_CSTRING("width") , (int)32,false);
							__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView RTFToolButton"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8231370,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView RTFToolButton:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)8494027,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)5468061,false);
							__result->Add(HX_CSTRING("borderColor") , (int)6127548,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView RTFToolButton:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-bold.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #bold"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-italic.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #italic"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-underline.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #underline"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-list.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #bullet"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-alignment-left.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #alignLeft"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-alignment-center.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #alignCenter"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-alignment-right.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #alignRight"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/rtfview/edit-alignment-justify.png"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("RTFView #alignJustify"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)270,false);
							__result->Add(HX_CSTRING("height") , (int)270,false);
							__result->Add(HX_CSTRING("spacingX") , (int)5,false);
							__result->Add(HX_CSTRING("spacingY") , (int)5,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("borderColor") , (int)4805223,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("center"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarView #currentMonthYear"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("width") , (int)270,false);
							__result->Add(HX_CSTRING("height") , (int)270,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)0,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Calendar"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)8,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)8,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7375283,false);
							__result->Add(HX_CSTRING("borderColor") , (int)8231370,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)3,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("fontSize") , (int)13,false);
							__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
							__result->Add(HX_CSTRING("filter") , ::flash::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null()),false);
							__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("left"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarDay"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarDay:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)9213353,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)7765909,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarDay:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Calendar #selectedDay"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Calendar #selectedDay:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4936810,false);
							__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)2897227,false);
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							__result->Add(HX_CSTRING("borderColor") , (int)3554636,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("Calendar #selectedDay:down"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)0,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
							__result->Add(HX_CSTRING("borderSize") , (int)0,false);
							__result->Add(HX_CSTRING("filter") , null(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("CalendarPopupContent CalendarView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("borderColor") , (int)10860762,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("paddingLeft") , (int)2,false);
							__result->Add(HX_CSTRING("paddingTop") , (int)2,false);
							__result->Add(HX_CSTRING("paddingBottom") , (int)2,false);
							__result->Add(HX_CSTRING("paddingRight") , (int)2,false);
							__result->Add(HX_CSTRING("borderSize") , (int)1,false);
							__result->Add(HX_CSTRING("spacingX") , (int)2,false);
							__result->Add(HX_CSTRING("spacingY") , (int)2,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableView"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("padding") , (int)0,false);
							__result->Add(HX_CSTRING("spacing") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableView #tableContent"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("padding") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableViewRow"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)15330805,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableView #even"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
							__result->Add(HX_CSTRING("color") , (int)0,false);
							__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableView #odd"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)6319240,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableViewRow:over"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("backgroundColor") , (int)4148331,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableViewRow:selected"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableViewRow Text"),style);
			}
			HX_STACK_LINE(19)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/themes/GradientTheme.hx",19,0x7744d627)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("color") , (int)16777215,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_3_1::Block());		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(19)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyle(HX_CSTRING("TableViewRow Text:over, TableViewRow Text:selected"),style);
			}
		}
	}
return null();
}



GradientTheme_obj::GradientTheme_obj()
{
}

Dynamic GradientTheme_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GradientTheme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GradientTheme_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GradientTheme_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientTheme_obj::__mClass,"__mClass");
};

#endif

Class GradientTheme_obj::__mClass;

void GradientTheme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.themes.GradientTheme"), hx::TCanCast< GradientTheme_obj> ,sStaticFields,sMemberFields,
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

void GradientTheme_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
