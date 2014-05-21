#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_GradientType
#include <flash/display/GradientType.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InterpolationMethod
#include <flash/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_SpreadMethod
#include <flash/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleHelper_obj::__construct()
{
	return null();
}

//StyleHelper_obj::~StyleHelper_obj() { }

Dynamic StyleHelper_obj::__CreateEmpty() { return  new StyleHelper_obj; }
hx::ObjectPtr< StyleHelper_obj > StyleHelper_obj::__new()
{  hx::ObjectPtr< StyleHelper_obj > result = new StyleHelper_obj();
	result->__construct();
	return result;}

Dynamic StyleHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleHelper_obj > result = new StyleHelper_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap StyleHelper_obj::sectionCache;

Void StyleHelper_obj::clearCache( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","clearCache",0xb8865983,"haxe.ui.toolkit.style.StyleHelper.clearCache","haxe/ui/toolkit/style/StyleHelper.hx",18,0xc4c90a00)
		HX_STACK_LINE(18)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleHelper_obj,clearCache,(void))

Void StyleHelper_obj::paintStyle( ::flash::display::Graphics g,::haxe::ui::toolkit::style::Style style,::flash::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintStyle",0x7d0f80c1,"haxe.ui.toolkit.style.StyleHelper.paintStyle","haxe/ui/toolkit/style/StyleHelper.hx",21,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(style,"style")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(22)
		g->clear();
		HX_STACK_LINE(23)
		if (((bool((bool((style == null())) || bool((rc->width == (int)0)))) || bool((rc->height == (int)0))))){
			HX_STACK_LINE(24)
			return null();
		}
		HX_STACK_LINE(27)
		if (((  ((!(((style->get_backgroundColor() != (int)-1))))) ? bool((style->get_borderColor() != (int)-1)) : bool(true) ))){
			HX_STACK_LINE(28)
			if (((style->get_borderColor() != (int)-1))){
				HX_STACK_LINE(29)
				int borderSize = (int)1;		HX_STACK_VAR(borderSize,"borderSize");
				HX_STACK_LINE(30)
				if (((style->get_borderSize() != (int)-1))){
					HX_STACK_LINE(31)
					borderSize = style->get_borderSize();
				}
				HX_STACK_LINE(33)
				if (((borderSize > (int)0))){
					HX_STACK_LINE(34)
					g->lineStyle(borderSize,style->get_borderColor(),null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(35)
					rc->inflate(-(((Float(borderSize) / Float((int)2)))),-(((Float(borderSize) / Float((int)2)))));
				}
			}
			HX_STACK_LINE(43)
			if (((style->get_backgroundColor() != (int)-1))){
				HX_STACK_LINE(44)
				if (((style->get_backgroundColorGradientEnd() != (int)-1))){
					HX_STACK_LINE(45)
					int w = ::Std_obj::_int(rc->width);		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(46)
					int h = ::Std_obj::_int(rc->height);		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(47)
					int _g = style->get_backgroundColor();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(47)
					Array< int > colors = Array_obj< int >::__new().Add(_g).Add(style->get_backgroundColorGradientEnd());		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(48)
					Array< int > alphas = Array_obj< int >::__new().Add((int)1).Add((int)1);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(49)
					Array< int > ratios = Array_obj< int >::__new().Add((int)0).Add((int)255);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(50)
					::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(52)
					::String gradientType = HX_CSTRING("vertical");		HX_STACK_VAR(gradientType,"gradientType");
					HX_STACK_LINE(53)
					if (((style->get_gradientType() != null()))){
						HX_STACK_LINE(54)
						gradientType = style->get_gradientType();
					}
					HX_STACK_LINE(57)
					if (((gradientType == HX_CSTRING("vertical")))){
						HX_STACK_LINE(58)
						matrix->createGradientBox((w - (int)2),(h - (int)2),(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
					}
					else{
						HX_STACK_LINE(59)
						if (((gradientType == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(60)
							matrix->createGradientBox((w - (int)2),(h - (int)2),(int)0,(int)0,(int)0);
						}
					}
					HX_STACK_LINE(63)
					g->beginGradientFill(::flash::display::GradientType_obj::LINEAR,colors,alphas,ratios,matrix,::flash::display::SpreadMethod_obj::PAD,::flash::display::InterpolationMethod_obj::LINEAR_RGB,(int)0);
				}
				else{
					HX_STACK_LINE(72)
					g->beginFill(style->get_backgroundColor(),null());
				}
			}
			HX_STACK_LINE(76)
			if (((  ((!(((  ((!(((  ((!(((style->get_cornerRadiusTopLeft() != (int)-1))))) ? bool((style->get_cornerRadiusTopRight() != (int)-1)) : bool(true) ))))) ? bool((style->get_cornerRadiusBottomLeft() != (int)-1)) : bool(true) ))))) ? bool((style->get_cornerRadiusBottomRight() != (int)-1)) : bool(true) ))){
				HX_STACK_LINE(77)
				Float radiusTopLeft = style->get_cornerRadiusTopLeft();		HX_STACK_VAR(radiusTopLeft,"radiusTopLeft");
				HX_STACK_LINE(78)
				Float radiusTopRight = style->get_cornerRadiusTopRight();		HX_STACK_VAR(radiusTopRight,"radiusTopRight");
				HX_STACK_LINE(79)
				Float radiusBottomLeft = style->get_cornerRadiusBottomLeft();		HX_STACK_VAR(radiusBottomLeft,"radiusBottomLeft");
				HX_STACK_LINE(80)
				Float radiusBottomRight = style->get_cornerRadiusBottomRight();		HX_STACK_VAR(radiusBottomRight,"radiusBottomRight");
				HX_STACK_LINE(87)
				int _g1 = ::Std_obj::_int(radiusTopLeft);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(87)
				int _g2 = (int(_g1) & int(::Std_obj::_int(radiusTopRight)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(87)
				int _g3 = (int(_g2) & int(::Std_obj::_int(radiusBottomLeft)));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(87)
				if (((((int(_g3) & int(::Std_obj::_int(radiusBottomRight)))) == radiusTopLeft))){
					HX_STACK_LINE(89)
					Float _g4 = rc->get_left();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(89)
					g->drawRoundRect(_g4,rc->get_top(),rc->width,rc->height,(radiusTopLeft + (int)2),(radiusTopLeft + (int)2));
				}
				else{
					HX_STACK_LINE(92)
					Float _g5 = rc->get_left();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(92)
					g->drawRect(_g5,rc->get_top(),rc->width,rc->height);
				}
			}
			else{
				HX_STACK_LINE(96)
				Float _g6 = rc->get_left();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(96)
				g->drawRect(_g6,rc->get_top(),rc->width,rc->height);
			}
			HX_STACK_LINE(99)
			g->endFill();
		}
		HX_STACK_LINE(102)
		if (((style->get_backgroundImage() != null()))){
			HX_STACK_LINE(103)
			::flash::geom::Rectangle backgroundImageRect = null();		HX_STACK_VAR(backgroundImageRect,"backgroundImageRect");
			HX_STACK_LINE(104)
			if (((style->get_backgroundImageRect() != null()))){
				HX_STACK_LINE(105)
				backgroundImageRect = style->get_backgroundImageRect();
			}
			HX_STACK_LINE(108)
			if (((style->get_backgroundImageScale9() != null()))){
				HX_STACK_LINE(109)
				::String _g7 = style->get_backgroundImage();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(109)
				::haxe::ui::toolkit::style::StyleHelper_obj::paintScale9(g,_g7,backgroundImageRect,style->get_backgroundImageScale9(),rc);
			}
			else{
				HX_STACK_LINE(111)
				::haxe::ds::StringMap rects = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(rects,"rects");
				HX_STACK_LINE(112)
				::flash::display::BitmapData bitmapData = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(style->get_backgroundImage(),backgroundImageRect);		HX_STACK_VAR(bitmapData,"bitmapData");
				HX_STACK_LINE(113)
				if (((bitmapData != null()))){
					HX_STACK_LINE(114)
					int _g8 = bitmapData->get_width();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(114)
					rects->set(HX_CSTRING("middle"),::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g8,bitmapData->get_height()));
					HX_STACK_LINE(115)
					::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(g,style->get_backgroundImage(),backgroundImageRect,rects,rc);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StyleHelper_obj,paintStyle,(void))

Void StyleHelper_obj::paintScale9( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::flash::geom::Rectangle scale9,::flash::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintScale9",0x16d42cdf,"haxe.ui.toolkit.style.StyleHelper.paintScale9","haxe/ui/toolkit/style/StyleHelper.hx",122,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(scale9,"scale9")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(122)
		if (((scale9 != null()))){
			HX_STACK_LINE(123)
			::flash::display::BitmapData resource = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(resourceId,resourceRect);		HX_STACK_VAR(resource,"resource");
			HX_STACK_LINE(124)
			if (((resource == null()))){
				HX_STACK_LINE(125)
				return null();
			}
			HX_STACK_LINE(128)
			int w = resource->get_width();		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(129)
			int h = resource->get_height();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(130)
			int x1 = ::Std_obj::_int(scale9->get_left());		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(131)
			int y1 = ::Std_obj::_int(scale9->get_top());		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(132)
			int x2 = ::Std_obj::_int(scale9->get_right());		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(133)
			int y2 = ::Std_obj::_int(scale9->get_bottom());		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(135)
			::haxe::ds::StringMap rects = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(rects,"rects");
			HX_STACK_LINE(137)
			rects->set(HX_CSTRING("top.left"),::flash::geom::Rectangle_obj::__new((int)0,(int)0,x1,y1));
			HX_STACK_LINE(138)
			rects->set(HX_CSTRING("top"),::flash::geom::Rectangle_obj::__new(x1,(int)0,(x2 - x1),y1));
			HX_STACK_LINE(139)
			rects->set(HX_CSTRING("top.right"),::flash::geom::Rectangle_obj::__new(x2,(int)0,(w - x2),y1));
			HX_STACK_LINE(141)
			rects->set(HX_CSTRING("left"),::flash::geom::Rectangle_obj::__new((int)0,y1,x1,(y2 - y1)));
			HX_STACK_LINE(142)
			rects->set(HX_CSTRING("middle"),::flash::geom::Rectangle_obj::__new(x1,y1,(x2 - x1),(y2 - y1)));
			HX_STACK_LINE(143)
			rects->set(HX_CSTRING("right"),::flash::geom::Rectangle_obj::__new(x2,y1,(w - x2),(y2 - y1)));
			HX_STACK_LINE(145)
			rects->set(HX_CSTRING("bottom.left"),::flash::geom::Rectangle_obj::__new((int)0,y2,x1,(h - y2)));
			HX_STACK_LINE(146)
			rects->set(HX_CSTRING("bottom"),::flash::geom::Rectangle_obj::__new(x1,y2,(x2 - x1),(h - y2)));
			HX_STACK_LINE(147)
			rects->set(HX_CSTRING("bottom.right"),::flash::geom::Rectangle_obj::__new(x2,y2,(w - x2),(h - y2)));
			HX_STACK_LINE(149)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(g,resourceId,resourceRect,rects,rc);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintScale9,(void))

Void StyleHelper_obj::paintCompoundBitmap( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::haxe::ds::StringMap sourceRects,::flash::geom::Rectangle targetRect){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintCompoundBitmap",0x66fb5c2a,"haxe.ui.toolkit.style.StyleHelper.paintCompoundBitmap","haxe/ui/toolkit/style/StyleHelper.hx",153,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(sourceRects,"sourceRects")
		HX_STACK_ARG(targetRect,"targetRect")
		HX_STACK_LINE(154)
		targetRect->set_left(::Std_obj::_int(targetRect->get_left()));
		HX_STACK_LINE(155)
		targetRect->set_top(::Std_obj::_int(targetRect->get_top()));
		HX_STACK_LINE(156)
		targetRect->set_right(::Std_obj::_int(targetRect->get_right()));
		HX_STACK_LINE(157)
		targetRect->set_bottom(::Std_obj::_int(targetRect->get_bottom()));
		HX_STACK_LINE(160)
		::flash::geom::Rectangle tl = sourceRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(161)
		if (((tl != null()))){
			HX_STACK_LINE(162)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,tl,::flash::geom::Rectangle_obj::__new((int)0,(int)0,tl->width,tl->height));
		}
		else{
			HX_STACK_LINE(164)
			tl = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(167)
		::flash::geom::Rectangle tr = sourceRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(168)
		if (((tr != null()))){
			HX_STACK_LINE(169)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,tr,::flash::geom::Rectangle_obj::__new((targetRect->width - tr->width),(int)0,tr->width,tr->height));
		}
		else{
			HX_STACK_LINE(171)
			tr = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(174)
		::flash::geom::Rectangle t = sourceRects->get(HX_CSTRING("top"));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(175)
		if (((t != null()))){
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,t,::flash::geom::Rectangle_obj::__new(tl->width,(int)0,((targetRect->width - tl->width) - tr->width),t->height));
		}
		else{
			HX_STACK_LINE(178)
			t = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(182)
		::flash::geom::Rectangle bl = sourceRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(183)
		if (((bl != null()))){
			HX_STACK_LINE(184)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,bl,::flash::geom::Rectangle_obj::__new((int)0,(targetRect->height - bl->height),bl->width,bl->height));
		}
		else{
			HX_STACK_LINE(186)
			bl = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(189)
		::flash::geom::Rectangle br = sourceRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(190)
		if (((br != null()))){
			HX_STACK_LINE(191)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,br,::flash::geom::Rectangle_obj::__new((targetRect->width - br->width),(targetRect->height - br->height),br->width,br->height));
		}
		else{
			HX_STACK_LINE(193)
			br = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(196)
		::flash::geom::Rectangle b = sourceRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(197)
		if (((b != null()))){
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,b,::flash::geom::Rectangle_obj::__new(bl->width,(targetRect->height - b->height),((targetRect->width - bl->width) - br->width),b->height));
		}
		else{
			HX_STACK_LINE(200)
			b = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(204)
		::flash::geom::Rectangle l = sourceRects->get(HX_CSTRING("left"));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(205)
		if (((l != null()))){
			HX_STACK_LINE(206)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,l,::flash::geom::Rectangle_obj::__new((int)0,tl->height,l->width,((targetRect->height - tl->height) - bl->height)));
		}
		else{
			HX_STACK_LINE(208)
			l = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(211)
		::flash::geom::Rectangle r = sourceRects->get(HX_CSTRING("right"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(212)
		if (((r != null()))){
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,r,::flash::geom::Rectangle_obj::__new((targetRect->width - r->width),tr->height,r->width,((targetRect->height - tl->height) - bl->height)));
		}
		else{
			HX_STACK_LINE(215)
			r = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
		HX_STACK_LINE(218)
		::flash::geom::Rectangle m = sourceRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(219)
		if (((m != null()))){
			HX_STACK_LINE(220)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,m,::flash::geom::Rectangle_obj::__new(l->width,t->height,((targetRect->width - l->width) - r->width),((targetRect->height - t->height) - b->height)));
		}
		else{
			HX_STACK_LINE(222)
			m = ::flash::geom::Rectangle_obj::__new(null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintCompoundBitmap,(void))

Void StyleHelper_obj::paintBitmapSection( ::flash::display::Graphics g,::String resourceId,::flash::geom::Rectangle resourceRect,::flash::geom::Rectangle src,::flash::geom::Rectangle dst){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintBitmapSection",0x0cf57546,"haxe.ui.toolkit.style.StyleHelper.paintBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",226,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(227)
		::flash::display::BitmapData srcData = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(resourceId,resourceRect);		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(228)
		if (((srcData == null()))){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(232)
		if (((bool((bool((bool((src->width <= (int)0)) || bool((src->height <= (int)0)))) || bool((dst->width <= (int)0)))) || bool((dst->height <= (int)0))))){
			HX_STACK_LINE(233)
			return null();
		}
		HX_STACK_LINE(236)
		if (((resourceRect == null()))){
			HX_STACK_LINE(237)
			int _g = srcData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(237)
			resourceRect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,srcData->get_height());
		}
		HX_STACK_LINE(240)
		::String _g1 = (((resourceId + HX_CSTRING("_")) + resourceRect->get_left()) + HX_CSTRING("_"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(240)
		::String _g2 = ((((((_g1 + resourceRect->get_top()) + HX_CSTRING("_")) + resourceRect->width) + HX_CSTRING("_")) + resourceRect->height) + HX_CSTRING("___"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(240)
		::String _g3 = ((_g2 + src->get_left()) + HX_CSTRING("_"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(240)
		::String cacheId = (((((_g3 + src->get_top()) + HX_CSTRING("_")) + src->width) + HX_CSTRING("_")) + src->height);		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(241)
		::flash::display::BitmapData section = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->get(cacheId);		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(242)
		if (((section == null()))){
			HX_STACK_LINE(243)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(244)
			int _g4 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(244)
			section = ::flash::display::BitmapData_obj::__new(_g4,::Std_obj::_int(src->height),true,fillcolor,null());
			HX_STACK_LINE(245)
			section->copyPixels(srcData,src,::flash::geom::Point_obj::__new((int)0,(int)0),null(),null(),null());
			HX_STACK_LINE(246)
			::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->set(cacheId,section);
		}
		HX_STACK_LINE(249)
		src->set_left(::Std_obj::_int(src->get_left()));
		HX_STACK_LINE(250)
		src->set_top(::Std_obj::_int(src->get_top()));
		HX_STACK_LINE(251)
		src->set_bottom(::Std_obj::_int(src->get_bottom()));
		HX_STACK_LINE(252)
		src->set_right(::Std_obj::_int(src->get_right()));
		HX_STACK_LINE(253)
		dst->set_left(::Std_obj::_int(dst->get_left()));
		HX_STACK_LINE(254)
		dst->set_top(::Std_obj::_int(dst->get_top()));
		HX_STACK_LINE(255)
		dst->set_bottom(::Std_obj::_int(dst->get_bottom()));
		HX_STACK_LINE(256)
		dst->set_right(::Std_obj::_int(dst->get_right()));
		HX_STACK_LINE(258)
		::flash::geom::Matrix mat = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(259)
		Float _g5 = (Float(dst->width) / Float(section->get_width()));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(259)
		mat->scale(_g5,(Float(dst->height) / Float(section->get_height())));
		HX_STACK_LINE(260)
		Float _g6 = dst->get_left();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(260)
		mat->translate(_g6,dst->get_top());
		HX_STACK_LINE(262)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(263)
		g->beginBitmapFill(section,mat,false,false);
		HX_STACK_LINE(264)
		g->drawRect(dst->x,dst->y,dst->width,dst->height);
		HX_STACK_LINE(265)
		g->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintBitmapSection,(void))

::flash::display::BitmapData StyleHelper_obj::getBitmapSection( ::String resourceId,::flash::geom::Rectangle rc){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","getBitmapSection",0x63ba31ce,"haxe.ui.toolkit.style.StyleHelper.getBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",268,0xc4c90a00)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_LINE(269)
	if (((bool((resourceId == null())) || bool((resourceId.length == (int)0))))){
		HX_STACK_LINE(270)
		return null();
	}
	HX_STACK_LINE(273)
	if (((::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache == null()))){
		HX_STACK_LINE(274)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = ::haxe::ds::StringMap_obj::__new();
	}
	HX_STACK_LINE(277)
	if (((rc == null()))){
		HX_STACK_LINE(278)
		::flash::display::BitmapData resource = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getBitmapData(resourceId,null());		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(279)
		if (((resource != null()))){
			HX_STACK_LINE(280)
			int _g = resource->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(280)
			rc = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,resource->get_height());
		}
	}
	HX_STACK_LINE(284)
	::String _g1 = (((resourceId + HX_CSTRING("_")) + rc->get_left()) + HX_CSTRING("_"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(284)
	::String cacheId = (((((_g1 + rc->get_top()) + HX_CSTRING("_")) + rc->width) + HX_CSTRING("_")) + rc->height);		HX_STACK_VAR(cacheId,"cacheId");
	HX_STACK_LINE(285)
	::flash::display::BitmapData section = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->get(cacheId);		HX_STACK_VAR(section,"section");
	HX_STACK_LINE(287)
	if (((section == null()))){
		HX_STACK_LINE(288)
		::flash::display::BitmapData resource = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getBitmapData(resourceId,null());		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(289)
		if (((resource != null()))){
			HX_STACK_LINE(290)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(291)
			int _g2 = ::Std_obj::_int(rc->width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(291)
			section = ::flash::display::BitmapData_obj::__new(_g2,::Std_obj::_int(rc->height),true,fillcolor,null());
			HX_STACK_LINE(292)
			section->copyPixels(resource,rc,::flash::geom::Point_obj::__new((int)0,(int)0),null(),null(),null());
			HX_STACK_LINE(293)
			::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->set(cacheId,section);
		}
	}
	HX_STACK_LINE(297)
	return section;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleHelper_obj,getBitmapSection,return )


StyleHelper_obj::StyleHelper_obj()
{
}

Dynamic StyleHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"paintStyle") ) { return paintStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paintScale9") ) { return paintScale9_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { return sectionCache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBitmapSection") ) { return getBitmapSection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { return paintBitmapSection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { return paintCompoundBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleHelper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sectionCache"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("paintStyle"),
	HX_CSTRING("paintScale9"),
	HX_CSTRING("paintCompoundBitmap"),
	HX_CSTRING("paintBitmapSection"),
	HX_CSTRING("getBitmapSection"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#endif

Class StyleHelper_obj::__mClass;

void StyleHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleHelper"), hx::TCanCast< StyleHelper_obj> ,sStaticFields,sMemberFields,
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

void StyleHelper_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
