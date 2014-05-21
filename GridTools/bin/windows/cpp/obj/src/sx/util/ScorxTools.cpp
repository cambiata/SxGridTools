#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cx_FileTools
#include <cx/FileTools.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_sx_util_ScorxTools
#include <sx/util/ScorxTools.h>
#endif
namespace sx{
namespace util{

Void ScorxTools_obj::__construct()
{
	return null();
}

//ScorxTools_obj::~ScorxTools_obj() { }

Dynamic ScorxTools_obj::__CreateEmpty() { return  new ScorxTools_obj; }
hx::ObjectPtr< ScorxTools_obj > ScorxTools_obj::__new()
{  hx::ObjectPtr< ScorxTools_obj > result = new ScorxTools_obj();
	result->__construct();
	return result;}

Dynamic ScorxTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScorxTools_obj > result = new ScorxTools_obj();
	result->__construct();
	return result;}

int ScorxTools_obj::getId( ::String filename){
	HX_STACK_FRAME("sx.util.ScorxTools","getId",0x942e4b9c,"sx.util.ScorxTools.getId","sx/util/ScorxTools.hx",28,0x5c0e7445)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(29)
	::String idString = ::StringTools_obj::replace(::cx::FileTools_obj::getFirstFilenameSegment(filename),HX_CSTRING("_"),HX_CSTRING(""));		HX_STACK_VAR(idString,"idString");
	HX_STACK_LINE(30)
	return ::Std_obj::parseInt(idString);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxTools_obj,getId,return )

Array< ::String > ScorxTools_obj::getDirectories( ::String dir,hx::Null< bool >  __o_stripBaseDir){
bool stripBaseDir = __o_stripBaseDir.Default(true);
	HX_STACK_FRAME("sx.util.ScorxTools","getDirectories",0xdd6cec2a,"sx.util.ScorxTools.getDirectories","sx/util/ScorxTools.hx",33,0x5c0e7445)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(stripBaseDir,"stripBaseDir")
{
		HX_STACK_LINE(34)
		Array< ::String > dirs = ::cx::FileTools_obj::getDirectories(dir,null(),null(),null());		HX_STACK_VAR(dirs,"dirs");
		HX_STACK_LINE(35)
		if ((stripBaseDir)){
			HX_STACK_LINE(36)
			Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(37)
			int baseLength = (dir.length + (int)1);		HX_STACK_VAR(baseLength,"baseLength");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(38)
				while(((_g < dirs->length))){
					HX_STACK_LINE(38)
					::String d = dirs->__get(_g);		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(38)
					++(_g);
					HX_STACK_LINE(39)
					::String dname = d.substr(baseLength,null());		HX_STACK_VAR(dname,"dname");
					HX_STACK_LINE(40)
					result->push(dname);
				}
			}
			HX_STACK_LINE(42)
			return result;
		}
		HX_STACK_LINE(44)
		return dirs;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxTools_obj,getDirectories,return )

Array< int > ScorxTools_obj::getIdsInDirectory( ::String dir,Array< ::String > subdirs){
	HX_STACK_FRAME("sx.util.ScorxTools","getIdsInDirectory",0xa1c16db1,"sx.util.ScorxTools.getIdsInDirectory","sx/util/ScorxTools.hx",47,0x5c0e7445)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(subdirs,"subdirs")
	HX_STACK_LINE(48)
	::haxe::ds::IntMap files = ::sx::util::ScorxTools_obj::getFilesInDirectory(dir,subdirs);		HX_STACK_VAR(files,"files");
	HX_STACK_LINE(49)
	return ::sx::util::ScorxTools_obj::getIdsFromFiles(files);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxTools_obj,getIdsInDirectory,return )

::haxe::ds::IntMap ScorxTools_obj::getFilesInDirectory( ::String dir,Array< ::String > subdirs){
	HX_STACK_FRAME("sx.util.ScorxTools","getFilesInDirectory",0x9dbd6012,"sx.util.ScorxTools.getFilesInDirectory","sx/util/ScorxTools.hx",52,0x5c0e7445)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(subdirs,"subdirs")
	HX_STACK_LINE(53)
	::haxe::ds::IntMap ret = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(54)
	Array< ::String > dirs = Array_obj< ::String >::__new();		HX_STACK_VAR(dirs,"dirs");
	HX_STACK_LINE(56)
	if (((subdirs != null()))){
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while(((_g < subdirs->length))){
			HX_STACK_LINE(57)
			::String subdir = subdirs->__get(_g);		HX_STACK_VAR(subdir,"subdir");
			HX_STACK_LINE(57)
			++(_g);
			HX_STACK_LINE(58)
			::String fulldir = ((dir + HX_CSTRING("/")) + subdir);		HX_STACK_VAR(fulldir,"fulldir");
			HX_STACK_LINE(59)
			if ((!(::Lambda_obj::has(dirs,fulldir)))){
				HX_STACK_LINE(59)
				dirs->push(fulldir);
			}
		}
	}
	else{
		HX_STACK_LINE(62)
		dirs = Array_obj< ::String >::__new().Add(dir);
	}
	HX_STACK_LINE(65)
	Array< ::String > scorxFiles = Array_obj< ::String >::__new();		HX_STACK_VAR(scorxFiles,"scorxFiles");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		while(((_g < dirs->length))){
			HX_STACK_LINE(66)
			::String dr = dirs->__get(_g);		HX_STACK_VAR(dr,"dr");
			HX_STACK_LINE(66)
			++(_g);
			HX_STACK_LINE(67)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(68)
				Array< ::String > files = ::cx::FileTools_obj::getFilesInDirectories(dr,HX_CSTRING(".sqlite"),null(),null());		HX_STACK_VAR(files,"files");
				HX_STACK_LINE(69)
				{
					HX_STACK_LINE(69)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(69)
					while(((_g1 < files->length))){
						HX_STACK_LINE(69)
						::String file = files->__get(_g1);		HX_STACK_VAR(file,"file");
						HX_STACK_LINE(69)
						++(_g1);
						HX_STACK_LINE(70)
						scorxFiles->push(file);
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
		}
	}
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		while(((_g < scorxFiles->length))){
			HX_STACK_LINE(77)
			::String file = scorxFiles->__get(_g);		HX_STACK_VAR(file,"file");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(78)
			int id = ::sx::util::ScorxTools_obj::getId(file);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(79)
			ret->set(id,file);
		}
	}
	HX_STACK_LINE(82)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxTools_obj,getFilesInDirectory,return )

Array< int > ScorxTools_obj::getIdsFromFiles( ::haxe::ds::IntMap files){
	HX_STACK_FRAME("sx.util.ScorxTools","getIdsFromFiles",0x430be856,"sx.util.ScorxTools.getIdsFromFiles","sx/util/ScorxTools.hx",85,0x5c0e7445)
	HX_STACK_ARG(files,"files")
	HX_STACK_LINE(86)
	Array< int > ids = Array_obj< int >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(87)
	Dynamic keys = files->keys();		HX_STACK_VAR(keys,"keys");
	HX_STACK_LINE(88)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(keys);  __it->hasNext(); ){
		int key = __it->next();
		ids->push(key);
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(int a,int b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","sx/util/ScorxTools.hx",89,0x5c0e7445)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(89)
			return ::Reflect_obj::compare(a,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(89)
	ids->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(90)
	return ids;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScorxTools_obj,getIdsFromFiles,return )

::String ScorxTools_obj::getOriginatorshort( Dynamic originator,hx::Null< bool >  __o_firstNameFirst){
bool firstNameFirst = __o_firstNameFirst.Default(true);
	HX_STACK_FRAME("sx.util.ScorxTools","getOriginatorshort",0xefa9a8df,"sx.util.ScorxTools.getOriginatorshort","sx/util/ScorxTools.hx",93,0x5c0e7445)
	HX_STACK_ARG(originator,"originator")
	HX_STACK_ARG(firstNameFirst,"firstNameFirst")
{
		HX_STACK_LINE(94)
		::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(96)
		if ((firstNameFirst)){
			HX_STACK_LINE(97)
			if (((originator->__Field(HX_CSTRING("firstname"),true) != HX_CSTRING("")))){
				HX_STACK_LINE(97)
				hx::AddEq(s,(originator->__Field(HX_CSTRING("firstname"),true) + HX_CSTRING(" ")));
			}
			HX_STACK_LINE(98)
			hx::AddEq(s,originator->__Field(HX_CSTRING("lastname"),true));
		}
		else{
			HX_STACK_LINE(100)
			if (((originator->__Field(HX_CSTRING("lastname"),true) != HX_CSTRING("")))){
				HX_STACK_LINE(100)
				hx::AddEq(s,(originator->__Field(HX_CSTRING("lastname"),true) + HX_CSTRING(", ")));
			}
			HX_STACK_LINE(101)
			hx::AddEq(s,originator->__Field(HX_CSTRING("firstname"),true));
		}
		HX_STACK_LINE(104)
		::String b = originator->__Field(HX_CSTRING("birth"),true);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(105)
		::String d = originator->__Field(HX_CSTRING("death"),true);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(106)
		::String y = ((HX_CSTRING("(") + Array_obj< ::String >::__new().Add(b).Add(d)->join(HX_CSTRING("-"))) + HX_CSTRING(")"));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(107)
		if (((y != HX_CSTRING("(-)")))){
			HX_STACK_LINE(107)
			hx::AddEq(s,(HX_CSTRING(" ") + y));
		}
		HX_STACK_LINE(108)
		return s;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ScorxTools_obj,getOriginatorshort,return )


ScorxTools_obj::ScorxTools_obj()
{
}

Dynamic ScorxTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDirectories") ) { return getDirectories_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getIdsFromFiles") ) { return getIdsFromFiles_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getIdsInDirectory") ) { return getIdsInDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getOriginatorshort") ) { return getOriginatorshort_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getFilesInDirectory") ) { return getFilesInDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScorxTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScorxTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getId"),
	HX_CSTRING("getDirectories"),
	HX_CSTRING("getIdsInDirectory"),
	HX_CSTRING("getFilesInDirectory"),
	HX_CSTRING("getIdsFromFiles"),
	HX_CSTRING("getOriginatorshort"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScorxTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScorxTools_obj::__mClass,"__mClass");
};

#endif

Class ScorxTools_obj::__mClass;

void ScorxTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.util.ScorxTools"), hx::TCanCast< ScorxTools_obj> ,sStaticFields,sMemberFields,
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

void ScorxTools_obj::__boot()
{
}

} // end namespace sx
} // end namespace util
