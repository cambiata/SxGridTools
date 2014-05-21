#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cx_Tools
#include <cx/Tools.h>
#endif
namespace cx{

Void Tools_obj::__construct()
{
	return null();
}

//Tools_obj::~Tools_obj() { }

Dynamic Tools_obj::__CreateEmpty() { return  new Tools_obj; }
hx::ObjectPtr< Tools_obj > Tools_obj::__new()
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

Dynamic Tools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tools_obj > result = new Tools_obj();
	result->__construct();
	return result;}

::String Tools_obj::stringAfterLast( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringAfterLast",0x8e03de95,"cx.Tools.stringAfterLast","cx/Tools.hx",27,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(28)
	int idx = (str.lastIndexOf(_char,null()) + _char.length);		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(29)
	return str.substr(idx,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringAfterLast,return )

::String Tools_obj::stringAfterIncludingLast( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringAfterIncludingLast",0x5889ba3c,"cx.Tools.stringAfterIncludingLast","cx/Tools.hx",32,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(33)
	int idx = str.lastIndexOf(_char,null());		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(34)
	return str.substr(idx,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringAfterIncludingLast,return )

::String Tools_obj::stringBeforeFirst( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringBeforeFirst",0xdd7e31f4,"cx.Tools.stringBeforeFirst","cx/Tools.hx",37,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(38)
	int idx = str.indexOf(_char,null());		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(39)
	return str.substr((int)0,idx);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringBeforeFirst,return )

::String Tools_obj::stringIncludingFirst( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringIncludingFirst",0x628209a8,"cx.Tools.stringIncludingFirst","cx/Tools.hx",42,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(43)
	int idx = (str.indexOf(_char,null()) + _char.length);		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(44)
	return str.substr((int)0,idx);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringIncludingFirst,return )

::String Tools_obj::stringBeforeLast( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringBeforeLast",0x78e1b512,"cx.Tools.stringBeforeLast","cx/Tools.hx",48,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(49)
	int idx = str.lastIndexOf(_char,null());		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(50)
	return str.substr((int)0,idx);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringBeforeLast,return )

::String Tools_obj::stringBeforeIncludingLast( ::String str,::String _char){
	HX_STACK_FRAME("cx.Tools","stringBeforeIncludingLast",0xce9dac1f,"cx.Tools.stringBeforeIncludingLast","cx/Tools.hx",53,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(54)
	int idx = (str.lastIndexOf(_char,null()) + (int)1);		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(55)
	return str.substr((int)0,idx);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tools_obj,stringBeforeIncludingLast,return )

int Tools_obj::toInt( Float _float){
	HX_STACK_FRAME("cx.Tools","toInt",0x33824c48,"cx.Tools.toInt","cx/Tools.hx",59,0x5ca4617d)
	HX_STACK_ARG(_float,"float")
	HX_STACK_LINE(59)
	return ::Std_obj::_int(_float);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,toInt,return )

::String Tools_obj::fillString( ::String str,hx::Null< int >  __o_toLength,::String __o_with,::String __o_replaceNull){
int toLength = __o_toLength.Default(32);
::String with = __o_with.Default(HX_CSTRING(" "));
::String replaceNull = __o_replaceNull.Default(HX_CSTRING("-"));
	HX_STACK_FRAME("cx.Tools","fillString",0xabba9920,"cx.Tools.fillString","cx/Tools.hx",62,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(toLength,"toLength")
	HX_STACK_ARG(with,"with")
	HX_STACK_ARG(replaceNull,"replaceNull")
{
		HX_STACK_LINE(63)
		if (((str == null()))){
			HX_STACK_LINE(63)
			str = replaceNull;
		}
		HX_STACK_LINE(64)
		do{
			HX_STACK_LINE(64)
			hx::AddEq(str,with);
		}
while(((str.length < toLength)));
		HX_STACK_LINE(65)
		return str.substr((int)0,toLength);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tools_obj,fillString,return )

::String Tools_obj::stringAscii( ::String str){
	HX_STACK_FRAME("cx.Tools","stringAscii",0xac2c4fd4,"cx.Tools.stringAscii","cx/Tools.hx",68,0x5ca4617d)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(69)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xa5"""),::String::fromCharCode((int)229));
	HX_STACK_LINE(70)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xa4"""),::String::fromCharCode((int)228));
	HX_STACK_LINE(71)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xb6"""),::String::fromCharCode((int)246));
	HX_STACK_LINE(72)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\x85"""),::String::fromCharCode((int)197));
	HX_STACK_LINE(73)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\x84"""),::String::fromCharCode((int)196));
	HX_STACK_LINE(74)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\x96"""),::String::fromCharCode((int)214));
	HX_STACK_LINE(75)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xa9"""),::String::fromCharCode((int)233));
	HX_STACK_LINE(76)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xa8"""),::String::fromCharCode((int)232));
	HX_STACK_LINE(77)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\xbc"""),::String::fromCharCode((int)252));
	HX_STACK_LINE(78)
	str = ::StringTools_obj::replace(str,HX_CSTRING("\xc3""\x9c"""),::String::fromCharCode((int)220));
	HX_STACK_LINE(79)
	return str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tools_obj,stringAscii,return )


Tools_obj::Tools_obj()
{
}

Dynamic Tools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fillString") ) { return fillString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stringAscii") ) { return stringAscii_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stringAfterLast") ) { return stringAfterLast_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stringBeforeLast") ) { return stringBeforeLast_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stringBeforeFirst") ) { return stringBeforeFirst_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"stringIncludingFirst") ) { return stringIncludingFirst_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stringAfterIncludingLast") ) { return stringAfterIncludingLast_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"stringBeforeIncludingLast") ) { return stringBeforeIncludingLast_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stringAfterLast"),
	HX_CSTRING("stringAfterIncludingLast"),
	HX_CSTRING("stringBeforeFirst"),
	HX_CSTRING("stringIncludingFirst"),
	HX_CSTRING("stringBeforeLast"),
	HX_CSTRING("stringBeforeIncludingLast"),
	HX_CSTRING("toInt"),
	HX_CSTRING("fillString"),
	HX_CSTRING("stringAscii"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tools_obj::__mClass,"__mClass");
};

#endif

Class Tools_obj::__mClass;

void Tools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.Tools"), hx::TCanCast< Tools_obj> ,sStaticFields,sMemberFields,
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

void Tools_obj::__boot()
{
}

} // end namespace cx
