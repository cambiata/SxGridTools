#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(::String r,::String opt)
{
HX_STACK_FRAME("EReg","new",0x8b859e81,"EReg.new","F:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",28,0xeadb2946)

HX_STACK_ARG(r,"r")

HX_STACK_ARG(opt,"opt")
{
	HX_STACK_LINE(29)
	Array< ::String > a = opt.split(HX_CSTRING("g"));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(30)
	this->global = (a->length > (int)1);
	HX_STACK_LINE(31)
	if ((this->global)){
		HX_STACK_LINE(32)
		opt = a->join(HX_CSTRING(""));
	}
	HX_STACK_LINE(33)
	this->r = ::EReg_obj::regexp_new_options(r,opt);
}
;
	return null();
}

//EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{  hx::ObjectPtr< EReg_obj > result = new EReg_obj();
	result->__construct(r,opt);
	return result;}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EReg_obj > result = new EReg_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic EReg_obj::matchedPos( ){
	HX_STACK_FRAME("EReg","matchedPos",0x7007a70f,"EReg.matchedPos","F:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",62,0xeadb2946)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return ::EReg_obj::regexp_matched_pos(this->r,(int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

bool EReg_obj::matchSub( ::String s,int pos,hx::Null< int >  __o_len){
int len = __o_len.Default(-1);
	HX_STACK_FRAME("EReg","matchSub",0xbc75cb7a,"EReg.matchSub","F:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",65,0xeadb2946)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
{
		HX_STACK_LINE(66)
		bool p = ::EReg_obj::regexp_match(this->r,s,pos,(  (((len < (int)0))) ? int((s.length - pos)) : int(len) ));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(67)
		if ((p)){
			HX_STACK_LINE(68)
			this->last = s;
		}
		else{
			HX_STACK_LINE(70)
			this->last = null();
		}
		HX_STACK_LINE(71)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(EReg_obj,matchSub,return )

::String EReg_obj::map( ::String s,Dynamic f){
	HX_STACK_FRAME("EReg","map",0x8b84d8bd,"EReg.map","F:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",149,0xeadb2946)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(150)
	int offset = (int)0;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(151)
	::StringBuf buf = ::StringBuf_obj::__new();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(152)
	do{
		HX_STACK_LINE(153)
		if (((offset >= s.length))){
			HX_STACK_LINE(154)
			break;
		}
		else{
			HX_STACK_LINE(155)
			if ((!(this->matchSub(s,offset,null())))){
				HX_STACK_LINE(156)
				buf->add(s.substr(offset,null()));
				HX_STACK_LINE(157)
				break;
			}
		}
		HX_STACK_LINE(159)
		Dynamic p = ::EReg_obj::regexp_matched_pos(this->r,(int)0);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(160)
		buf->add(s.substr(offset,(p->__Field(HX_CSTRING("pos"),true) - offset)));
		HX_STACK_LINE(161)
		buf->add(f(hx::ObjectPtr<OBJ_>(this)).Cast< ::String >());
		HX_STACK_LINE(162)
		if (((p->__Field(HX_CSTRING("len"),true) == (int)0))){
			HX_STACK_LINE(163)
			buf->add(s.substr(p->__Field(HX_CSTRING("pos"),true),(int)1));
			HX_STACK_LINE(164)
			offset = (p->__Field(HX_CSTRING("pos"),true) + (int)1);
		}
		else{
			HX_STACK_LINE(167)
			offset = (p->__Field(HX_CSTRING("pos"),true) + p->__Field(HX_CSTRING("len"),true));
		}
	}
while((this->global));
	HX_STACK_LINE(169)
	if (((bool((bool(!(this->global)) && bool((offset > (int)0)))) && bool((offset < s.length))))){
		HX_STACK_LINE(170)
		buf->add(s.substr(offset,null()));
	}
	HX_STACK_LINE(171)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,map,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched_pos;


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

Dynamic EReg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return global; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matchSub") ) { return matchSub_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return matchedPos_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { return regexp_match; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { return regexp_new_options; }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { return regexp_matched_pos; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regexp_match") ) { regexp_match=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"regexp_new_options") ) { regexp_new_options=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regexp_matched_pos") ) { regexp_matched_pos=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("global"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("regexp_new_options"),
	HX_CSTRING("regexp_match"),
	HX_CSTRING("regexp_matched_pos"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_CSTRING("r")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_CSTRING("last")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_CSTRING("global")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("last"),
	HX_CSTRING("global"),
	HX_CSTRING("matchedPos"),
	HX_CSTRING("matchSub"),
	HX_CSTRING("map"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_MARK_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_new_options,"regexp_new_options");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_match,"regexp_match");
	HX_VISIT_MEMBER_NAME(EReg_obj::regexp_matched_pos,"regexp_matched_pos");
};

#endif

Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("EReg"), hx::TCanCast< EReg_obj> ,sStaticFields,sMemberFields,
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

void EReg_obj::__boot()
{
	regexp_new_options= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_new_options"),(int)2);
	regexp_match= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_match"),(int)4);
	regexp_matched_pos= ::cpp::Lib_obj::load(HX_CSTRING("regexp"),HX_CSTRING("regexp_matched_pos"),(int)2);
}

