#include <hxcpp.h>

#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_RTFToolButton
#include <haxe/ui/toolkit/containers/RTFToolButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_RTFView
#include <haxe/ui/toolkit/containers/RTFView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_RTF
#include <haxe/ui/toolkit/controls/extended/RTF.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void RTFView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","new",0x41cd3a21,"haxe.ui.toolkit.containers.RTFView.new","haxe/ui/toolkit/containers/RTFView.hx",14,0xdc0dbf6f)
{
	HX_STACK_LINE(28)
	this->_systemFonts = false;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->_rtf = ::haxe::ui::toolkit::controls::extended::RTF_obj::__new();
	HX_STACK_LINE(33)
	this->_rtf->set_multiline(true);
	HX_STACK_LINE(34)
	this->_rtf->set_wrapLines(true);
	HX_STACK_LINE(35)
	this->_rtf->set_percentWidth((int)100);
	HX_STACK_LINE(36)
	this->_rtf->set_percentHeight((int)100);
}
;
	return null();
}

//RTFView_obj::~RTFView_obj() { }

Dynamic RTFView_obj::__CreateEmpty() { return  new RTFView_obj; }
hx::ObjectPtr< RTFView_obj > RTFView_obj::__new()
{  hx::ObjectPtr< RTFView_obj > result = new RTFView_obj();
	result->__construct();
	return result;}

Dynamic RTFView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RTFView_obj > result = new RTFView_obj();
	result->__construct();
	return result;}

Void RTFView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","initialize",0x8c38f1af,"haxe.ui.toolkit.containers.RTFView.initialize","haxe/ui/toolkit/containers/RTFView.hx",42,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->super::initialize();
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::containers::HBox hbox = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(hbox,"hbox");
		HX_STACK_LINE(47)
		this->_fontNameList = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();
		HX_STACK_LINE(48)
		this->_fontNameList->set_width((int)200);
		HX_STACK_LINE(49)
		this->_fontNameList->set_text(HX_CSTRING("_sans"));
		HX_STACK_LINE(50)
		if (((this->_systemFonts == true))){
			HX_STACK_LINE(52)
			Array< ::Dynamic > fonts = ::flash::text::Font_obj::enumerateFonts(true);		HX_STACK_VAR(fonts,"fonts");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int run(::flash::text::Font f1,::flash::text::Font f2){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/containers/RTFView.hx",53,0xdc0dbf6f)
				HX_STACK_ARG(f1,"f1")
				HX_STACK_ARG(f2,"f2")
				{
					HX_STACK_LINE(54)
					::String a = f1->fontName.toLowerCase();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(55)
					::String b = f2->fontName.toLowerCase();		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(56)
					if (((a < b))){
						HX_STACK_LINE(56)
						return (int)-1;
					}
					HX_STACK_LINE(57)
					if (((a > b))){
						HX_STACK_LINE(57)
						return (int)1;
					}
					HX_STACK_LINE(58)
					return (int)0;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(53)
			fonts->sort( Dynamic(new _Function_2_1()));
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(61)
				while(((_g1 < fonts->length))){
					HX_STACK_LINE(61)
					::flash::text::Font font = fonts->__get(_g1).StaticCast< ::flash::text::Font >();		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(61)
					++(_g1);
					struct _Function_4_1{
						inline static Dynamic Block( ::flash::text::Font &font){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",62,0xdc0dbf6f)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("text") , font->fontName,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(62)
					this->_fontNameList->get_dataSource()->add(_Function_4_1::Block(font));
				}
			}
		}
		else{
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",66,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("_sans"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			this->_fontNameList->get_dataSource()->add(_Function_2_1::Block());
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",67,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("_serif"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(67)
			this->_fontNameList->get_dataSource()->add(_Function_2_2::Block());
			struct _Function_2_3{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",68,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("_typewriter"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(68)
			this->_fontNameList->get_dataSource()->add(_Function_2_3::Block());
			struct _Function_2_4{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",69,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Arial"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(69)
			this->_fontNameList->get_dataSource()->add(_Function_2_4::Block());
			struct _Function_2_5{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",70,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Courier"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(70)
			this->_fontNameList->get_dataSource()->add(_Function_2_5::Block());
			struct _Function_2_6{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",71,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Courier New"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(71)
			this->_fontNameList->get_dataSource()->add(_Function_2_6::Block());
			struct _Function_2_7{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",72,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Geneva"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(72)
			this->_fontNameList->get_dataSource()->add(_Function_2_7::Block());
			struct _Function_2_8{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",73,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Georgia"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(73)
			this->_fontNameList->get_dataSource()->add(_Function_2_8::Block());
			struct _Function_2_9{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",74,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Helvetica"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(74)
			this->_fontNameList->get_dataSource()->add(_Function_2_9::Block());
			struct _Function_2_10{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",75,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Times New Roman"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(75)
			this->_fontNameList->get_dataSource()->add(_Function_2_10::Block());
			struct _Function_2_11{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",76,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Times"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(76)
			this->_fontNameList->get_dataSource()->add(_Function_2_11::Block());
			struct _Function_2_12{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",77,0xdc0dbf6f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("text") , HX_CSTRING("Verdana"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(77)
			this->_fontNameList->get_dataSource()->add(_Function_2_12::Block());
		}
		HX_STACK_LINE(79)
		this->_fontNameList->addEventListener(::flash::events::Event_obj::CHANGE,this->_onFontNameChange_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		hbox->addChild(this->_fontNameList);
		HX_STACK_LINE(82)
		this->_fontSizeList = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();
		HX_STACK_LINE(83)
		this->_fontSizeList->set_text(HX_CSTRING("13"));
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",84,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		this->_fontSizeList->get_dataSource()->add(_Function_1_1::Block());
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",85,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)12,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(85)
		this->_fontSizeList->get_dataSource()->add(_Function_1_2::Block());
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",86,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)13,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(86)
		this->_fontSizeList->get_dataSource()->add(_Function_1_3::Block());
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",87,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)14,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(87)
		this->_fontSizeList->get_dataSource()->add(_Function_1_4::Block());
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",88,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)16,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(88)
		this->_fontSizeList->get_dataSource()->add(_Function_1_5::Block());
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",89,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)18,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(89)
		this->_fontSizeList->get_dataSource()->add(_Function_1_6::Block());
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",90,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)20,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(90)
		this->_fontSizeList->get_dataSource()->add(_Function_1_7::Block());
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",91,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)24,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(91)
		this->_fontSizeList->get_dataSource()->add(_Function_1_8::Block());
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",92,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)26,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(92)
		this->_fontSizeList->get_dataSource()->add(_Function_1_9::Block());
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",93,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)28,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(93)
		this->_fontSizeList->get_dataSource()->add(_Function_1_10::Block());
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",94,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)36,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		this->_fontSizeList->get_dataSource()->add(_Function_1_11::Block());
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",95,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)48,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		this->_fontSizeList->get_dataSource()->add(_Function_1_12::Block());
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/RTFView.hx",96,0xdc0dbf6f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("text") , (int)72,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(96)
		this->_fontSizeList->get_dataSource()->add(_Function_1_13::Block());
		HX_STACK_LINE(97)
		this->_fontSizeList->addEventListener(::flash::events::Event_obj::CHANGE,this->_onFontSizeChange_dyn(),null(),null(),null());
		HX_STACK_LINE(98)
		hbox->addChild(this->_fontSizeList);
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
		HX_STACK_LINE(101)
		spacer->set_width((int)10);
		HX_STACK_LINE(102)
		hbox->addChild(spacer);
		HX_STACK_LINE(104)
		this->_boldButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(105)
		this->_boldButton->set_id(HX_CSTRING("bold"));
		HX_STACK_LINE(106)
		this->_boldButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onBoldClick_dyn(),null(),null(),null());
		HX_STACK_LINE(107)
		hbox->addChild(this->_boldButton);
		HX_STACK_LINE(109)
		this->_italicButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(110)
		this->_italicButton->set_id(HX_CSTRING("italic"));
		HX_STACK_LINE(111)
		this->_italicButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onItalicClick_dyn(),null(),null(),null());
		HX_STACK_LINE(112)
		hbox->addChild(this->_italicButton);
		HX_STACK_LINE(114)
		this->_underlineButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(115)
		this->_underlineButton->set_id(HX_CSTRING("underline"));
		HX_STACK_LINE(116)
		this->_underlineButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onUnderlineClick_dyn(),null(),null(),null());
		HX_STACK_LINE(117)
		hbox->addChild(this->_underlineButton);
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::controls::Spacer spacer1 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer1,"spacer1");
		HX_STACK_LINE(120)
		spacer1->set_width((int)10);
		HX_STACK_LINE(121)
		hbox->addChild(spacer1);
		HX_STACK_LINE(123)
		this->_bulletButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(124)
		this->_bulletButton->set_id(HX_CSTRING("bullet"));
		HX_STACK_LINE(125)
		this->_bulletButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onBulletClick_dyn(),null(),null(),null());
		HX_STACK_LINE(126)
		hbox->addChild(this->_bulletButton);
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::controls::Spacer spacer2 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer2,"spacer2");
		HX_STACK_LINE(129)
		spacer2->set_width((int)10);
		HX_STACK_LINE(130)
		hbox->addChild(spacer2);
		HX_STACK_LINE(132)
		this->_leftAlignButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(133)
		this->_leftAlignButton->set_id(HX_CSTRING("alignLeft"));
		HX_STACK_LINE(134)
		this->_leftAlignButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onLeftAlignClick_dyn(),null(),null(),null());
		HX_STACK_LINE(135)
		hbox->addChild(this->_leftAlignButton);
		HX_STACK_LINE(137)
		this->_centerAlignButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(138)
		this->_centerAlignButton->set_id(HX_CSTRING("alignCenter"));
		HX_STACK_LINE(139)
		this->_centerAlignButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onCenterAlignClick_dyn(),null(),null(),null());
		HX_STACK_LINE(140)
		hbox->addChild(this->_centerAlignButton);
		HX_STACK_LINE(142)
		this->_rightAlignButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(143)
		this->_rightAlignButton->set_id(HX_CSTRING("alignRight"));
		HX_STACK_LINE(144)
		this->_rightAlignButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onRightAlignClick_dyn(),null(),null(),null());
		HX_STACK_LINE(145)
		hbox->addChild(this->_rightAlignButton);
		HX_STACK_LINE(147)
		this->_justifyAlignButton = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();
		HX_STACK_LINE(148)
		this->_justifyAlignButton->set_id(HX_CSTRING("alignJustify"));
		HX_STACK_LINE(149)
		this->_justifyAlignButton->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->_onJustifyAlignClick_dyn(),null(),null(),null());
		HX_STACK_LINE(150)
		hbox->addChild(this->_justifyAlignButton);
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::controls::Button button = ::haxe::ui::toolkit::containers::RTFToolButton_obj::__new();		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(153)
		button->set_text(HX_CSTRING(""));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_14",0x6ecea31d,"*._Function_1_14","haxe/ui/toolkit/containers/RTFView.hx",155,0xdc0dbf6f)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(155)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::RTFView >()->_rtf->set_text(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::RTFView >()->_rtf->get_htmlText());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(154)
		button->addEventListener(::flash::events::MouseEvent_obj::CLICK, Dynamic(new _Function_1_14(_g)),null(),null(),null());
		HX_STACK_LINE(157)
		hbox->addChild(button);
		HX_STACK_LINE(159)
		this->addChild(hbox);
		HX_STACK_LINE(160)
		this->addChild(this->_rtf);
	}
return null();
}


::String RTFView_obj::get_htmlText( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","get_htmlText",0x9007a9e0,"haxe.ui.toolkit.containers.RTFView.get_htmlText","haxe/ui/toolkit/containers/RTFView.hx",172,0xdc0dbf6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	return this->_rtf->get_htmlText();
}


HX_DEFINE_DYNAMIC_FUNC0(RTFView_obj,get_htmlText,return )

::String RTFView_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","set_htmlText",0xa500cd54,"haxe.ui.toolkit.containers.RTFView.set_htmlText","haxe/ui/toolkit/containers/RTFView.hx",175,0xdc0dbf6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(176)
	this->_rtf->set_htmlText(value);
	HX_STACK_LINE(177)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,set_htmlText,return )

::String RTFView_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","set_text",0xe6bc7c49,"haxe.ui.toolkit.containers.RTFView.set_text","haxe/ui/toolkit/containers/RTFView.hx",180,0xdc0dbf6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(181)
	this->_rtf->set_text(value);
	HX_STACK_LINE(182)
	return value;
}


Void RTFView_obj::_onBoldClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onBoldClick",0x42962f84,"haxe.ui.toolkit.containers.RTFView._onBoldClick","haxe/ui/toolkit/containers/RTFView.hx",189,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(189)
		this->_rtf->bold();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onBoldClick,(void))

Void RTFView_obj::_onItalicClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onItalicClick",0x70928079,"haxe.ui.toolkit.containers.RTFView._onItalicClick","haxe/ui/toolkit/containers/RTFView.hx",193,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(193)
		this->_rtf->italic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onItalicClick,(void))

Void RTFView_obj::_onUnderlineClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onUnderlineClick",0x573aa0fb,"haxe.ui.toolkit.containers.RTFView._onUnderlineClick","haxe/ui/toolkit/containers/RTFView.hx",197,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(197)
		this->_rtf->underline();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onUnderlineClick,(void))

Void RTFView_obj::_onBulletClick( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onBulletClick",0xe0e2d3e7,"haxe.ui.toolkit.containers.RTFView._onBulletClick","haxe/ui/toolkit/containers/RTFView.hx",201,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(201)
		this->_rtf->bullet();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onBulletClick,(void))

Void RTFView_obj::_onFontNameChange( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onFontNameChange",0x5575b229,"haxe.ui.toolkit.containers.RTFView._onFontNameChange","haxe/ui/toolkit/containers/RTFView.hx",204,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onFontNameChange,(void))

Void RTFView_obj::_onFontSizeChange( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onFontSizeChange",0x96051d1f,"haxe.ui.toolkit.containers.RTFView._onFontSizeChange","haxe/ui/toolkit/containers/RTFView.hx",211,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onFontSizeChange,(void))

Void RTFView_obj::_onLeftAlignClick( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onLeftAlignClick",0xc3c47b89,"haxe.ui.toolkit.containers.RTFView._onLeftAlignClick","haxe/ui/toolkit/containers/RTFView.hx",220,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(220)
		this->_rtf->alignLeft();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onLeftAlignClick,(void))

Void RTFView_obj::_onCenterAlignClick( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onCenterAlignClick",0xb2e77c97,"haxe.ui.toolkit.containers.RTFView._onCenterAlignClick","haxe/ui/toolkit/containers/RTFView.hx",224,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(224)
		this->_rtf->alignCenter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onCenterAlignClick,(void))

Void RTFView_obj::_onRightAlignClick( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onRightAlignClick",0x01650400,"haxe.ui.toolkit.containers.RTFView._onRightAlignClick","haxe/ui/toolkit/containers/RTFView.hx",228,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(228)
		this->_rtf->alignRight();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onRightAlignClick,(void))

Void RTFView_obj::_onJustifyAlignClick( ::flash::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","_onJustifyAlignClick",0x0e78e2b4,"haxe.ui.toolkit.containers.RTFView._onJustifyAlignClick","haxe/ui/toolkit/containers/RTFView.hx",232,0xdc0dbf6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(232)
		this->_rtf->alignJustify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTFView_obj,_onJustifyAlignClick,(void))

Dynamic RTFView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","clone",0xea5b2f5e,"haxe.ui.toolkit.containers.RTFView.clone","haxe/ui/toolkit/containers/RTFView.hx",1,0xdc0dbf6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::RTFView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic RTFView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.RTFView","self",0x5513aaab,"haxe.ui.toolkit.containers.RTFView.self","haxe/ui/toolkit/containers/RTFView.hx",2,0xdc0dbf6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::RTFView_obj::__new();
}



RTFView_obj::RTFView_obj()
{
}

void RTFView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RTFView);
	HX_MARK_MEMBER_NAME(_rtf,"_rtf");
	HX_MARK_MEMBER_NAME(_fontNameList,"_fontNameList");
	HX_MARK_MEMBER_NAME(_fontSizeList,"_fontSizeList");
	HX_MARK_MEMBER_NAME(_boldButton,"_boldButton");
	HX_MARK_MEMBER_NAME(_italicButton,"_italicButton");
	HX_MARK_MEMBER_NAME(_underlineButton,"_underlineButton");
	HX_MARK_MEMBER_NAME(_bulletButton,"_bulletButton");
	HX_MARK_MEMBER_NAME(_leftAlignButton,"_leftAlignButton");
	HX_MARK_MEMBER_NAME(_centerAlignButton,"_centerAlignButton");
	HX_MARK_MEMBER_NAME(_rightAlignButton,"_rightAlignButton");
	HX_MARK_MEMBER_NAME(_justifyAlignButton,"_justifyAlignButton");
	HX_MARK_MEMBER_NAME(_systemFonts,"_systemFonts");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RTFView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rtf,"_rtf");
	HX_VISIT_MEMBER_NAME(_fontNameList,"_fontNameList");
	HX_VISIT_MEMBER_NAME(_fontSizeList,"_fontSizeList");
	HX_VISIT_MEMBER_NAME(_boldButton,"_boldButton");
	HX_VISIT_MEMBER_NAME(_italicButton,"_italicButton");
	HX_VISIT_MEMBER_NAME(_underlineButton,"_underlineButton");
	HX_VISIT_MEMBER_NAME(_bulletButton,"_bulletButton");
	HX_VISIT_MEMBER_NAME(_leftAlignButton,"_leftAlignButton");
	HX_VISIT_MEMBER_NAME(_centerAlignButton,"_centerAlignButton");
	HX_VISIT_MEMBER_NAME(_rightAlignButton,"_rightAlignButton");
	HX_VISIT_MEMBER_NAME(_justifyAlignButton,"_justifyAlignButton");
	HX_VISIT_MEMBER_NAME(_systemFonts,"_systemFonts");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RTFView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_rtf") ) { return _rtf; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_boldButton") ) { return _boldButton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_systemFonts") ) { return _systemFonts; }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"_onBoldClick") ) { return _onBoldClick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fontNameList") ) { return _fontNameList; }
		if (HX_FIELD_EQ(inName,"_fontSizeList") ) { return _fontSizeList; }
		if (HX_FIELD_EQ(inName,"_italicButton") ) { return _italicButton; }
		if (HX_FIELD_EQ(inName,"_bulletButton") ) { return _bulletButton; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onItalicClick") ) { return _onItalicClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onBulletClick") ) { return _onBulletClick_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_underlineButton") ) { return _underlineButton; }
		if (HX_FIELD_EQ(inName,"_leftAlignButton") ) { return _leftAlignButton; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rightAlignButton") ) { return _rightAlignButton; }
		if (HX_FIELD_EQ(inName,"_onUnderlineClick") ) { return _onUnderlineClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFontNameChange") ) { return _onFontNameChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFontSizeChange") ) { return _onFontSizeChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onLeftAlignClick") ) { return _onLeftAlignClick_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerAlignButton") ) { return _centerAlignButton; }
		if (HX_FIELD_EQ(inName,"_onRightAlignClick") ) { return _onRightAlignClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_justifyAlignButton") ) { return _justifyAlignButton; }
		if (HX_FIELD_EQ(inName,"_onCenterAlignClick") ) { return _onCenterAlignClick_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onJustifyAlignClick") ) { return _onJustifyAlignClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RTFView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_rtf") ) { _rtf=inValue.Cast< ::haxe::ui::toolkit::controls::extended::RTF >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_boldButton") ) { _boldButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_systemFonts") ) { _systemFonts=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fontNameList") ) { _fontNameList=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontSizeList") ) { _fontSizeList=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_italicButton") ) { _italicButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bulletButton") ) { _bulletButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_underlineButton") ) { _underlineButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftAlignButton") ) { _leftAlignButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_rightAlignButton") ) { _rightAlignButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerAlignButton") ) { _centerAlignButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_justifyAlignButton") ) { _justifyAlignButton=inValue.Cast< ::haxe::ui::toolkit::containers::RTFToolButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RTFView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_rtf"));
	outFields->push(HX_CSTRING("_fontNameList"));
	outFields->push(HX_CSTRING("_fontSizeList"));
	outFields->push(HX_CSTRING("_boldButton"));
	outFields->push(HX_CSTRING("_italicButton"));
	outFields->push(HX_CSTRING("_underlineButton"));
	outFields->push(HX_CSTRING("_bulletButton"));
	outFields->push(HX_CSTRING("_leftAlignButton"));
	outFields->push(HX_CSTRING("_centerAlignButton"));
	outFields->push(HX_CSTRING("_rightAlignButton"));
	outFields->push(HX_CSTRING("_justifyAlignButton"));
	outFields->push(HX_CSTRING("_systemFonts"));
	outFields->push(HX_CSTRING("htmlText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::extended::RTF*/ ,(int)offsetof(RTFView_obj,_rtf),HX_CSTRING("_rtf")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(RTFView_obj,_fontNameList),HX_CSTRING("_fontNameList")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(RTFView_obj,_fontSizeList),HX_CSTRING("_fontSizeList")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_boldButton),HX_CSTRING("_boldButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_italicButton),HX_CSTRING("_italicButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_underlineButton),HX_CSTRING("_underlineButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_bulletButton),HX_CSTRING("_bulletButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_leftAlignButton),HX_CSTRING("_leftAlignButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_centerAlignButton),HX_CSTRING("_centerAlignButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_rightAlignButton),HX_CSTRING("_rightAlignButton")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::RTFToolButton*/ ,(int)offsetof(RTFView_obj,_justifyAlignButton),HX_CSTRING("_justifyAlignButton")},
	{hx::fsBool,(int)offsetof(RTFView_obj,_systemFonts),HX_CSTRING("_systemFonts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_rtf"),
	HX_CSTRING("_fontNameList"),
	HX_CSTRING("_fontSizeList"),
	HX_CSTRING("_boldButton"),
	HX_CSTRING("_italicButton"),
	HX_CSTRING("_underlineButton"),
	HX_CSTRING("_bulletButton"),
	HX_CSTRING("_leftAlignButton"),
	HX_CSTRING("_centerAlignButton"),
	HX_CSTRING("_rightAlignButton"),
	HX_CSTRING("_justifyAlignButton"),
	HX_CSTRING("_systemFonts"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_htmlText"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("set_text"),
	HX_CSTRING("_onBoldClick"),
	HX_CSTRING("_onItalicClick"),
	HX_CSTRING("_onUnderlineClick"),
	HX_CSTRING("_onBulletClick"),
	HX_CSTRING("_onFontNameChange"),
	HX_CSTRING("_onFontSizeChange"),
	HX_CSTRING("_onLeftAlignClick"),
	HX_CSTRING("_onCenterAlignClick"),
	HX_CSTRING("_onRightAlignClick"),
	HX_CSTRING("_onJustifyAlignClick"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTFView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTFView_obj::__mClass,"__mClass");
};

#endif

Class RTFView_obj::__mClass;

void RTFView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.RTFView"), hx::TCanCast< RTFView_obj> ,sStaticFields,sMemberFields,
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

void RTFView_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
