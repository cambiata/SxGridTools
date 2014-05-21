#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cx_PathTools
#include <cx/PathTools.h>
#endif
#ifndef INCLUDED_cx_StrTools
#include <cx/StrTools.h>
#endif
namespace cx{

Void PathTools_obj::__construct()
{
	return null();
}

//PathTools_obj::~PathTools_obj() { }

Dynamic PathTools_obj::__CreateEmpty() { return  new PathTools_obj; }
hx::ObjectPtr< PathTools_obj > PathTools_obj::__new()
{  hx::ObjectPtr< PathTools_obj > result = new PathTools_obj();
	result->__construct();
	return result;}

Dynamic PathTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathTools_obj > result = new PathTools_obj();
	result->__construct();
	return result;}

::String PathTools_obj::addSlash( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","addSlash",0x82975dcd,"cx.PathTools.addSlash","cx/PathTools.hx",10,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(11)
		if ((!(::StringTools_obj::endsWith(path,slash)))){
			HX_STACK_LINE(11)
			return (path + slash);
		}
		HX_STACK_LINE(12)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,addSlash,return )

::String PathTools_obj::addSlashBefore( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","addSlashBefore",0x7571fe2c,"cx.PathTools.addSlashBefore","cx/PathTools.hx",15,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(16)
		if ((!(::StringTools_obj::startsWith(path,slash)))){
			HX_STACK_LINE(16)
			return (slash + path);
		}
		HX_STACK_LINE(17)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,addSlashBefore,return )

::String PathTools_obj::removeSlash( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","removeSlash",0xc092a288,"cx.PathTools.removeSlash","cx/PathTools.hx",20,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(21)
		while((::StringTools_obj::endsWith(path,slash))){
			HX_STACK_LINE(21)
			path = path.substr((int)0,(int)-1);
		}
		HX_STACK_LINE(22)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,removeSlash,return )

::String PathTools_obj::removeSlashBefore( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","removeSlashBefore",0xf5660127,"cx.PathTools.removeSlashBefore","cx/PathTools.hx",25,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(26)
		while((::StringTools_obj::startsWith(path,slash))){
			HX_STACK_LINE(26)
			path = path.substr((int)1,null());
		}
		HX_STACK_LINE(27)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,removeSlashBefore,return )

::String PathTools_obj::firstSegment( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","firstSegment",0xb5de6954,"cx.PathTools.firstSegment","cx/PathTools.hx",31,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(31)
		return path.split(slash)->shift();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,firstSegment,return )

::String PathTools_obj::lastSegment( ::String path,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.PathTools","lastSegment",0x9f17892c,"cx.PathTools.lastSegment","cx/PathTools.hx",35,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(35)
		return path.split(slash)->pop();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,lastSegment,return )

::String PathTools_obj::getExtension( ::String filename){
	HX_STACK_FRAME("cx.PathTools","getExtension",0xda2eb3fa,"cx.PathTools.getExtension","cx/PathTools.hx",38,0x8a353542)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(39)
	if (((filename.indexOf(HX_CSTRING("."),null()) == (int)-1))){
		HX_STACK_LINE(39)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(40)
	return filename.substr((filename.lastIndexOf(HX_CSTRING("."),null()) + (int)1),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathTools_obj,getExtension,return )

::String PathTools_obj::excludeExtension( ::String filename){
	HX_STACK_FRAME("cx.PathTools","excludeExtension",0x00a9d9b6,"cx.PathTools.excludeExtension","cx/PathTools.hx",43,0x8a353542)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(44)
	::String ext = ::cx::PathTools_obj::getExtension(filename);		HX_STACK_VAR(ext,"ext");
	HX_STACK_LINE(45)
	if (((ext.length == (int)0))){
		HX_STACK_LINE(45)
		return filename;
	}
	HX_STACK_LINE(46)
	if ((::StringTools_obj::endsWith(filename,ext))){
		HX_STACK_LINE(46)
		return filename.substr((int)0,((filename.length - ext.length) - (int)1));
	}
	HX_STACK_LINE(47)
	return HX_CSTRING("");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathTools_obj,excludeExtension,return )

::String PathTools_obj::addHttp( ::String path,::String __o_http){
::String http = __o_http.Default(HX_CSTRING("http://"));
	HX_STACK_FRAME("cx.PathTools","addHttp",0x32bcdff8,"cx.PathTools.addHttp","cx/PathTools.hx",50,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(http,"http")
{
		HX_STACK_LINE(51)
		if ((!(::StringTools_obj::startsWith(path,http)))){
			HX_STACK_LINE(51)
			return (http + path);
		}
		HX_STACK_LINE(52)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PathTools_obj,addHttp,return )

::String PathTools_obj::getUpperLevel( ::String path){
	HX_STACK_FRAME("cx.PathTools","getUpperLevel",0xb92e73e7,"cx.PathTools.getUpperLevel","cx/PathTools.hx",56,0x8a353542)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(57)
	path = ::cx::PathTools_obj::removeSlash(path,null());
	HX_STACK_LINE(58)
	path = ::cx::StrTools_obj::untilLast(path,HX_CSTRING("/"),null());
	HX_STACK_LINE(59)
	if (((path == HX_CSTRING("")))){
		HX_STACK_LINE(59)
		path = HX_CSTRING("/");
	}
	HX_STACK_LINE(60)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PathTools_obj,getUpperLevel,return )


PathTools_obj::PathTools_obj()
{
}

Dynamic PathTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addHttp") ) { return addHttp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addSlash") ) { return addSlash_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSlash") ) { return removeSlash_dyn(); }
		if (HX_FIELD_EQ(inName,"lastSegment") ) { return lastSegment_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"firstSegment") ) { return firstSegment_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getUpperLevel") ) { return getUpperLevel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addSlashBefore") ) { return addSlashBefore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"excludeExtension") ) { return excludeExtension_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeSlashBefore") ) { return removeSlashBefore_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PathTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("addSlash"),
	HX_CSTRING("addSlashBefore"),
	HX_CSTRING("removeSlash"),
	HX_CSTRING("removeSlashBefore"),
	HX_CSTRING("firstSegment"),
	HX_CSTRING("lastSegment"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("excludeExtension"),
	HX_CSTRING("addHttp"),
	HX_CSTRING("getUpperLevel"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathTools_obj::__mClass,"__mClass");
};

#endif

Class PathTools_obj::__mClass;

void PathTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.PathTools"), hx::TCanCast< PathTools_obj> ,sStaticFields,sMemberFields,
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

void PathTools_obj::__boot()
{
}

} // end namespace cx
