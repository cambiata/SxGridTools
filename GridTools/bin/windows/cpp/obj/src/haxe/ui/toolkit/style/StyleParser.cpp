#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flash_filters_BitmapFilter
#include <flash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleParser_obj::__construct()
{
	return null();
}

//StyleParser_obj::~StyleParser_obj() { }

Dynamic StyleParser_obj::__CreateEmpty() { return  new StyleParser_obj; }
hx::ObjectPtr< StyleParser_obj > StyleParser_obj::__new()
{  hx::ObjectPtr< StyleParser_obj > result = new StyleParser_obj();
	result->__construct();
	return result;}

Dynamic StyleParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleParser_obj > result = new StyleParser_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::style::Styles StyleParser_obj::fromString( ::String styleString){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleParser","fromString",0xb7a75218,"haxe.ui.toolkit.style.StyleParser.fromString","haxe/ui/toolkit/style/StyleParser.hx",9,0xa41d672f)
	HX_STACK_ARG(styleString,"styleString")
	HX_STACK_LINE(10)
	if (((bool((styleString == null())) || bool((styleString.length == (int)0))))){
		HX_STACK_LINE(11)
		return ::haxe::ui::toolkit::style::Styles_obj::__new();
	}
	HX_STACK_LINE(14)
	::haxe::ui::toolkit::style::Styles styles = ::haxe::ui::toolkit::style::Styles_obj::__new();		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(16)
	int n1 = (int)-1;		HX_STACK_VAR(n1,"n1");
	HX_STACK_LINE(17)
	int n2 = styleString.indexOf(HX_CSTRING("{"),(int)0);		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(18)
	while(((n2 > (int)-1))){
		HX_STACK_LINE(19)
		int n3 = styleString.indexOf(HX_CSTRING("}"),n2);		HX_STACK_VAR(n3,"n3");
		HX_STACK_LINE(21)
		::String styleName = ::StringTools_obj::trim(styleString.substr((n1 + (int)1),((n2 - n1) - (int)1)));		HX_STACK_VAR(styleName,"styleName");
		HX_STACK_LINE(22)
		::String styleData = styleString.substr((n2 + (int)1),((n3 - n2) - (int)1));		HX_STACK_VAR(styleData,"styleData");
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(style,"style");
		HX_STACK_LINE(24)
		Array< ::String > props = styleData.split(HX_CSTRING(";"));		HX_STACK_VAR(props,"props");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			while(((_g < props->length))){
				HX_STACK_LINE(25)
				::String prop = props->__get(_g);		HX_STACK_VAR(prop,"prop");
				HX_STACK_LINE(25)
				++(_g);
				HX_STACK_LINE(26)
				prop = ::StringTools_obj::trim(prop);
				HX_STACK_LINE(27)
				if ((::StringTools_obj::startsWith(prop,HX_CSTRING("//")))){
					HX_STACK_LINE(28)
					continue;
				}
				HX_STACK_LINE(31)
				if (((bool((prop != null())) && bool((prop.length > (int)0))))){
					HX_STACK_LINE(32)
					Array< ::String > temp = prop.split(HX_CSTRING(":"));		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(33)
					::String propName = ::StringTools_obj::trim(temp->__get((int)0));		HX_STACK_VAR(propName,"propName");
					HX_STACK_LINE(34)
					propName = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeHyphens(propName);
					HX_STACK_LINE(35)
					if (((::Reflect_obj::field(style,(HX_CSTRING("set_") + propName)) == null()))){
						HX_STACK_LINE(36)
						::haxe::Log_obj::trace(((HX_CSTRING("Warning: ") + propName) + HX_CSTRING(" no found")),hx::SourceInfo(HX_CSTRING("StyleParser.hx"),36,HX_CSTRING("haxe.ui.toolkit.style.StyleParser"),HX_CSTRING("fromString")));
						HX_STACK_LINE(37)
						continue;
					}
					HX_STACK_LINE(40)
					::String propValue = ::StringTools_obj::trim(temp->__get((int)1));		HX_STACK_VAR(propValue,"propValue");
					HX_STACK_LINE(41)
					if (((temp->length == (int)3))){
						HX_STACK_LINE(42)
						hx::AddEq(propValue,(HX_CSTRING(":") + ::StringTools_obj::trim(temp->__get((int)2))));
					}
					HX_STACK_LINE(45)
					propValue = ::StringTools_obj::replace(propValue,HX_CSTRING("\""),HX_CSTRING(""));
					HX_STACK_LINE(46)
					propValue = ::StringTools_obj::replace(propValue,HX_CSTRING("'"),HX_CSTRING(""));
					HX_STACK_LINE(47)
					if (((  ((::haxe::ui::toolkit::hscript::ScriptUtils_obj::isScript(propValue))) ? bool(!(::haxe::ui::toolkit::hscript::ScriptUtils_obj::isCssException(propName))) : bool(false) ))){
						HX_STACK_LINE(48)
						style->addDynamicValue(propName,propValue);
						HX_STACK_LINE(49)
						continue;
					}
					HX_STACK_LINE(52)
					if (((  (((propName == HX_CSTRING("width")))) ? bool((propValue.indexOf(HX_CSTRING("%"),null()) != (int)-1)) : bool(false) ))){
						HX_STACK_LINE(53)
						propName = HX_CSTRING("percentWidth");
						HX_STACK_LINE(54)
						propValue = propValue.substr((int)0,(propValue.length - (int)1));
					}
					else{
						HX_STACK_LINE(55)
						if (((  (((propName == HX_CSTRING("height")))) ? bool((propValue.indexOf(HX_CSTRING("%"),null()) != (int)-1)) : bool(false) ))){
							HX_STACK_LINE(56)
							propName = HX_CSTRING("percentHeight");
							HX_STACK_LINE(57)
							propValue = propValue.substr((int)0,(propValue.length - (int)1));
						}
						else{
							HX_STACK_LINE(58)
							if (((propName == HX_CSTRING("filter")))){
								HX_STACK_LINE(59)
								style->set_filter(::haxe::ui::toolkit::util::FilterParser_obj::parseFilter(propValue));
								HX_STACK_LINE(60)
								continue;
							}
							else{
								HX_STACK_LINE(61)
								if (((propName == HX_CSTRING("backgroundImageScale9")))){
									HX_STACK_LINE(62)
									Array< ::String > coords = propValue.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
									HX_STACK_LINE(63)
									int x1 = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(64)
									int y1 = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(65)
									int x2 = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(66)
									int y2 = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(67)
									::flash::geom::Rectangle scale9 = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(scale9,"scale9");
									HX_STACK_LINE(68)
									scale9->set_left(x1);
									HX_STACK_LINE(69)
									scale9->set_top(y1);
									HX_STACK_LINE(70)
									scale9->set_right(x2);
									HX_STACK_LINE(71)
									scale9->set_bottom(y2);
									HX_STACK_LINE(72)
									style->set_backgroundImageScale9(scale9);
									HX_STACK_LINE(73)
									continue;
								}
								else{
									HX_STACK_LINE(74)
									if (((propName == HX_CSTRING("backgroundImageRect")))){
										HX_STACK_LINE(75)
										Array< ::String > arr = propValue.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(76)
										Dynamic _g1 = ::Std_obj::parseInt(arr->__get((int)0));		HX_STACK_VAR(_g1,"_g1");
										HX_STACK_LINE(76)
										Dynamic _g11 = ::Std_obj::parseInt(arr->__get((int)1));		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(76)
										Dynamic _g2 = ::Std_obj::parseInt(arr->__get((int)2));		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(76)
										style->set_backgroundImageRect(::flash::geom::Rectangle_obj::__new(_g1,_g11,_g2,::Std_obj::parseInt(arr->__get((int)3))));
										HX_STACK_LINE(77)
										continue;
									}
								}
							}
						}
					}
					struct _Function_5_1{
						inline static bool Block( ::String &propValue){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",80,0xa41d672f)
							{
								struct _Function_6_1{
									inline static bool Block( ::String &propValue){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",80,0xa41d672f)
										{
											HX_STACK_LINE(80)
											::String _g3 = ::Std_obj::string(::Std_obj::parseFloat(propValue));		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(80)
											return (_g3 == ::Std_obj::string(::Math_obj::NaN));
										}
										return null();
									}
								};
								HX_STACK_LINE(80)
								return (  ((!(::StringTools_obj::startsWith(propValue,HX_CSTRING("#"))))) ? bool(_Function_6_1::Block(propValue)) : bool(false) );
							}
							return null();
						}
					};
					HX_STACK_LINE(80)
					if (((  ((!(((propValue.indexOf(HX_CSTRING(","),null()) != (int)-1))))) ? bool(_Function_5_1::Block(propValue)) : bool(true) ))){
						HX_STACK_LINE(81)
						if (((bool((propValue == HX_CSTRING("true"))) || bool((propValue == HX_CSTRING("false")))))){
							HX_STACK_LINE(82)
							if (((style != null()))){
								HX_STACK_LINE(82)
								style->__SetField(propName,(propValue == HX_CSTRING("true")),true);
							}
						}
						else{
							HX_STACK_LINE(84)
							if (((style != null()))){
								HX_STACK_LINE(84)
								style->__SetField(propName,propValue,true);
							}
						}
					}
					else{
						HX_STACK_LINE(87)
						if ((::StringTools_obj::startsWith(propValue,HX_CSTRING("#")))){
							HX_STACK_LINE(88)
							propValue = (HX_CSTRING("0x") + propValue.substr((int)1,(propValue.length - (int)1)));
						}
						HX_STACK_LINE(90)
						if ((::StringTools_obj::startsWith(propValue,HX_CSTRING("0x")))){
							HX_STACK_LINE(91)
							Dynamic value = ::Std_obj::parseInt(propValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(91)
							if (((style != null()))){
								HX_STACK_LINE(91)
								style->__SetField(propName,value,true);
							}
						}
						else{
							HX_STACK_LINE(93)
							Dynamic value = ::Std_obj::parseFloat(propValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(93)
							if (((style != null()))){
								HX_STACK_LINE(93)
								style->__SetField(propName,value,true);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(99)
		if (((styleName.indexOf(HX_CSTRING(","),null()) == (int)-1))){
			HX_STACK_LINE(100)
			styles->addStyle(styleName,style);
		}
		else{
			HX_STACK_LINE(102)
			Array< ::String > arr = styleName.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				while(((_g < arr->length))){
					HX_STACK_LINE(103)
					::String s = arr->__get(_g);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(103)
					++(_g);
					HX_STACK_LINE(104)
					s = ::StringTools_obj::trim(s);
					HX_STACK_LINE(105)
					styles->addStyle(s,style);
				}
			}
		}
		HX_STACK_LINE(109)
		n1 = n3;
		HX_STACK_LINE(110)
		n2 = styleString.indexOf(HX_CSTRING("{"),n1);
	}
	HX_STACK_LINE(113)
	return styles;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleParser_obj,fromString,return )


StyleParser_obj::StyleParser_obj()
{
}

Dynamic StyleParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#endif

Class StyleParser_obj::__mClass;

void StyleParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleParser"), hx::TCanCast< StyleParser_obj> ,sStaticFields,sMemberFields,
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

void StyleParser_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
