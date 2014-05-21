#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void DateTools_obj::__construct()
{
	return null();
}

//DateTools_obj::~DateTools_obj() { }

Dynamic DateTools_obj::__CreateEmpty() { return  new DateTools_obj; }
hx::ObjectPtr< DateTools_obj > DateTools_obj::__new()
{  hx::ObjectPtr< DateTools_obj > result = new DateTools_obj();
	result->__construct();
	return result;}

Dynamic DateTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateTools_obj > result = new DateTools_obj();
	result->__construct();
	return result;}

::String DateTools_obj::__format_get( ::Date d,::String e){
	HX_STACK_FRAME("DateTools","__format_get",0xabb90f8f,"DateTools.__format_get","F:\\HaxeToolkit\\haxe\\std/DateTools.hx",37,0x787b6527)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(37)
	::String _switch_1 = (e);
	if (  ( _switch_1==HX_CSTRING("%"))){
		HX_STACK_LINE(39)
		return HX_CSTRING("%");
	}
	else if (  ( _switch_1==HX_CSTRING("C"))){
		HX_STACK_LINE(41)
		return ::StringTools_obj::lpad(::Std_obj::string(::Std_obj::_int((Float(d->getFullYear()) / Float((int)100)))),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("d"))){
		HX_STACK_LINE(43)
		return ::StringTools_obj::lpad(::Std_obj::string(d->getDate()),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("D"))){
		HX_STACK_LINE(45)
		return ::DateTools_obj::__format(d,HX_CSTRING("%m/%d/%y"));
	}
	else if (  ( _switch_1==HX_CSTRING("e"))){
		HX_STACK_LINE(47)
		return ::Std_obj::string(d->getDate());
	}
	else if (  ( _switch_1==HX_CSTRING("H")) ||  ( _switch_1==HX_CSTRING("k"))){
		HX_STACK_LINE(49)
		::String _g = ::Std_obj::string(d->getHours());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		return ::StringTools_obj::lpad(_g,(  (((e == HX_CSTRING("H")))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("I")) ||  ( _switch_1==HX_CSTRING("l"))){
		HX_STACK_LINE(51)
		int hour = hx::Mod(d->getHours(),(int)12);		HX_STACK_VAR(hour,"hour");
		HX_STACK_LINE(52)
		::String _g1 = ::Std_obj::string((  (((hour == (int)0))) ? Dynamic((int)12) : Dynamic(hour) ));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		return ::StringTools_obj::lpad(_g1,(  (((e == HX_CSTRING("I")))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("m"))){
		HX_STACK_LINE(54)
		return ::StringTools_obj::lpad(::Std_obj::string((d->getMonth() + (int)1)),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("M"))){
		HX_STACK_LINE(56)
		return ::StringTools_obj::lpad(::Std_obj::string(d->getMinutes()),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("n"))){
		HX_STACK_LINE(58)
		return HX_CSTRING("\n");
	}
	else if (  ( _switch_1==HX_CSTRING("p"))){
		HX_STACK_LINE(60)
		if (((d->getHours() > (int)11))){
			HX_STACK_LINE(60)
			return HX_CSTRING("PM");
		}
		else{
			HX_STACK_LINE(60)
			return HX_CSTRING("AM");
		}
	}
	else if (  ( _switch_1==HX_CSTRING("r"))){
		HX_STACK_LINE(62)
		return ::DateTools_obj::__format(d,HX_CSTRING("%I:%M:%S %p"));
	}
	else if (  ( _switch_1==HX_CSTRING("R"))){
		HX_STACK_LINE(64)
		return ::DateTools_obj::__format(d,HX_CSTRING("%H:%M"));
	}
	else if (  ( _switch_1==HX_CSTRING("s"))){
		HX_STACK_LINE(66)
		return ::Std_obj::string(::Std_obj::_int((Float(d->getTime()) / Float((int)1000))));
	}
	else if (  ( _switch_1==HX_CSTRING("S"))){
		HX_STACK_LINE(68)
		return ::StringTools_obj::lpad(::Std_obj::string(d->getSeconds()),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("t"))){
		HX_STACK_LINE(70)
		return HX_CSTRING("\t");
	}
	else if (  ( _switch_1==HX_CSTRING("T"))){
		HX_STACK_LINE(72)
		return ::DateTools_obj::__format(d,HX_CSTRING("%H:%M:%S"));
	}
	else if (  ( _switch_1==HX_CSTRING("u"))){
		HX_STACK_LINE(75)
		int t = d->getDay();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(76)
		if (((t == (int)0))){
			HX_STACK_LINE(76)
			return HX_CSTRING("7");
		}
		else{
			HX_STACK_LINE(76)
			return ::Std_obj::string(t);
		}
	}
	else if (  ( _switch_1==HX_CSTRING("w"))){
		HX_STACK_LINE(79)
		return ::Std_obj::string(d->getDay());
	}
	else if (  ( _switch_1==HX_CSTRING("y"))){
		HX_STACK_LINE(81)
		return ::StringTools_obj::lpad(::Std_obj::string(hx::Mod(d->getFullYear(),(int)100)),HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("Y"))){
		HX_STACK_LINE(83)
		return ::Std_obj::string(d->getFullYear());
	}
	else  {
		HX_STACK_LINE(85)
		HX_STACK_DO_THROW(((HX_CSTRING("Date.format %") + e) + HX_CSTRING("- not implemented yet.")));
	}
;
;
	HX_STACK_LINE(37)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format_get,return )

::String DateTools_obj::__format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","__format",0x77c4edf8,"DateTools.__format","F:\\HaxeToolkit\\haxe\\std/DateTools.hx",89,0x787b6527)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(90)
	::StringBuf r = ::StringBuf_obj::__new();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(91)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(92)
	while((true)){
		HX_STACK_LINE(93)
		int np = f.indexOf(HX_CSTRING("%"),p);		HX_STACK_VAR(np,"np");
		HX_STACK_LINE(94)
		if (((np < (int)0))){
			HX_STACK_LINE(95)
			break;
		}
		HX_STACK_LINE(97)
		r->b->push(f.substr(p,(np - p)));
		HX_STACK_LINE(98)
		r->add(::DateTools_obj::__format_get(d,f.substr((np + (int)1),(int)1)));
		HX_STACK_LINE(100)
		p = (np + (int)2);
	}
	HX_STACK_LINE(102)
	r->b->push(f.substr(p,(f.length - p)));
	HX_STACK_LINE(103)
	return r->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format,return )

::String DateTools_obj::format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","format",0x1113a898,"DateTools.format","F:\\HaxeToolkit\\haxe\\std/DateTools.hx",120,0x787b6527)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(120)
	return ::DateTools_obj::__format(d,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,format,return )


DateTools_obj::DateTools_obj()
{
}

Dynamic DateTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__format_get") ) { return __format_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DateTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DateTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__format_get"),
	HX_CSTRING("__format"),
	HX_CSTRING("format"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#endif

Class DateTools_obj::__mClass;

void DateTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DateTools"), hx::TCanCast< DateTools_obj> ,sStaticFields,sMemberFields,
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

void DateTools_obj::__boot()
{
}

