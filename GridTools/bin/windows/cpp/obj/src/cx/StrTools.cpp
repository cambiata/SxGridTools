#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cx_StrTools
#include <cx/StrTools.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace cx{

Void StrTools_obj::__construct()
{
	return null();
}

//StrTools_obj::~StrTools_obj() { }

Dynamic StrTools_obj::__CreateEmpty() { return  new StrTools_obj; }
hx::ObjectPtr< StrTools_obj > StrTools_obj::__new()
{  hx::ObjectPtr< StrTools_obj > result = new StrTools_obj();
	result->__construct();
	return result;}

Dynamic StrTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StrTools_obj > result = new StrTools_obj();
	result->__construct();
	return result;}

int StrTools_obj::countSub( ::String str,::String lookForStr){
	HX_STACK_FRAME("cx.StrTools","countSub",0x2d00fd1c,"cx.StrTools.countSub","cx/StrTools.hx",13,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(lookForStr,"lookForStr")
	HX_STACK_LINE(13)
	return (str.split(lookForStr)->length - (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,countSub,return )

::String StrTools_obj::leadingChars( ::String str,hx::Null< int >  __o_toLength,::String __o_leadingChar){
int toLength = __o_toLength.Default(8);
::String leadingChar = __o_leadingChar.Default(HX_CSTRING("0"));
	HX_STACK_FRAME("cx.StrTools","leadingChars",0xf0fcb2e2,"cx.StrTools.leadingChars","cx/StrTools.hx",17,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(toLength,"toLength")
	HX_STACK_ARG(leadingChar,"leadingChar")
{
		HX_STACK_LINE(18)
		while(((str.length < toLength))){
			HX_STACK_LINE(20)
			str = (leadingChar + str);
		}
		HX_STACK_LINE(22)
		return str.substr((int)0,toLength);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,leadingChars,return )

::String StrTools_obj::intWithLeadingChars( int num,hx::Null< int >  __o_toLength,::String __o_leadingChar){
int toLength = __o_toLength.Default(8);
::String leadingChar = __o_leadingChar.Default(HX_CSTRING("0"));
	HX_STACK_FRAME("cx.StrTools","intWithLeadingChars",0xed090b21,"cx.StrTools.intWithLeadingChars","cx/StrTools.hx",27,0x90297b9a)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(toLength,"toLength")
	HX_STACK_ARG(leadingChar,"leadingChar")
{
		HX_STACK_LINE(27)
		return ::cx::StrTools_obj::leadingChars(::Std_obj::string(num),toLength,leadingChar);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,intWithLeadingChars,return )

::String StrTools_obj::until( ::String str,::String untilStr,hx::Null< bool >  __o_includeUntilStr){
bool includeUntilStr = __o_includeUntilStr.Default(false);
	HX_STACK_FRAME("cx.StrTools","until",0xc3766a93,"cx.StrTools.until","cx/StrTools.hx",31,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(untilStr,"untilStr")
	HX_STACK_ARG(includeUntilStr,"includeUntilStr")
{
		HX_STACK_LINE(32)
		int pos = str.indexOf(untilStr,null());		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(33)
		if ((includeUntilStr)){
			HX_STACK_LINE(33)
			(pos)++;
		}
		HX_STACK_LINE(34)
		return str.substring((int)0,pos);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,until,return )

::String StrTools_obj::untilLast( ::String str,::String untilStr,hx::Null< bool >  __o_includeUntilStr){
bool includeUntilStr = __o_includeUntilStr.Default(false);
	HX_STACK_FRAME("cx.StrTools","untilLast",0x0660e689,"cx.StrTools.untilLast","cx/StrTools.hx",38,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(untilStr,"untilStr")
	HX_STACK_ARG(includeUntilStr,"includeUntilStr")
{
		HX_STACK_LINE(39)
		int pos = str.lastIndexOf(untilStr,null());		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(40)
		if ((includeUntilStr)){
			HX_STACK_LINE(40)
			(pos)++;
		}
		HX_STACK_LINE(41)
		return str.substring((int)0,pos);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,untilLast,return )

::String StrTools_obj::tab( ::String str){
	HX_STACK_FRAME("cx.StrTools","tab",0x4e6b350a,"cx.StrTools.tab","cx/StrTools.hx",46,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(46)
	return (str + HX_CSTRING("\t"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,tab,return )

::String StrTools_obj::newline( ::String str){
	HX_STACK_FRAME("cx.StrTools","newline",0x5db57189,"cx.StrTools.newline","cx/StrTools.hx",50,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(50)
	return (str + HX_CSTRING("\n"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,newline,return )

::String StrTools_obj::repeat( ::String repeatString,int count){
	HX_STACK_FRAME("cx.StrTools","repeat",0xdfd19bc6,"cx.StrTools.repeat","cx/StrTools.hx",53,0x90297b9a)
	HX_STACK_ARG(repeatString,"repeatString")
	HX_STACK_ARG(count,"count")
	HX_STACK_LINE(54)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		while(((_g < count))){
			HX_STACK_LINE(55)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(55)
			hx::AddEq(result,repeatString);
		}
	}
	HX_STACK_LINE(56)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,repeat,return )

::String StrTools_obj::fill( ::String str,hx::Null< int >  __o_toLength,::String __o_with,::String __o_replaceNull){
int toLength = __o_toLength.Default(32);
::String with = __o_with.Default(HX_CSTRING(" "));
::String replaceNull = __o_replaceNull.Default(HX_CSTRING("-"));
	HX_STACK_FRAME("cx.StrTools","fill",0x4628522e,"cx.StrTools.fill","cx/StrTools.hx",59,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(toLength,"toLength")
	HX_STACK_ARG(with,"with")
	HX_STACK_ARG(replaceNull,"replaceNull")
{
		HX_STACK_LINE(60)
		if (((str == null()))){
			HX_STACK_LINE(60)
			str = replaceNull;
		}
		HX_STACK_LINE(61)
		do{
			HX_STACK_LINE(61)
			hx::AddEq(str,with);
		}
while(((str.length < toLength)));
		HX_STACK_LINE(62)
		return str.substr((int)0,toLength);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StrTools_obj,fill,return )

Array< ::String > StrTools_obj::splitTrim( ::String str,::String __o_delimiter){
::String delimiter = __o_delimiter.Default(HX_CSTRING(","));
	HX_STACK_FRAME("cx.StrTools","splitTrim",0x26c27951,"cx.StrTools.splitTrim","cx/StrTools.hx",65,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(delimiter,"delimiter")
{
		HX_STACK_LINE(66)
		if (((str == null()))){
			HX_STACK_LINE(66)
			return Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(67)
		Array< ::String > a = str.split(delimiter);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(68)
		Array< ::String > a2 = Array_obj< ::String >::__new();		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while(((_g < a->length))){
				HX_STACK_LINE(69)
				::String part = a->__get(_g);		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(69)
				++(_g);
				HX_STACK_LINE(70)
				::String part2 = ::StringTools_obj::trim(part);		HX_STACK_VAR(part2,"part2");
				HX_STACK_LINE(71)
				if (((part2.length > (int)0))){
					HX_STACK_LINE(71)
					a2->push(part2);
				}
			}
		}
		HX_STACK_LINE(73)
		return a2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,splitTrim,return )

::String StrTools_obj::replaceNull( ::String str,::String __o_with){
::String with = __o_with.Default(HX_CSTRING("-"));
	HX_STACK_FRAME("cx.StrTools","replaceNull",0xc5d65490,"cx.StrTools.replaceNull","cx/StrTools.hx",84,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(with,"with")
{
		HX_STACK_LINE(84)
		if (((str == null()))){
			HX_STACK_LINE(84)
			return with;
		}
		else{
			HX_STACK_LINE(84)
			return str;
		}
		HX_STACK_LINE(84)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,replaceNull,return )

::String StrTools_obj::firstUpperCase( ::String str,hx::Null< bool >  __o_restToLowercase){
bool restToLowercase = __o_restToLowercase.Default(true);
	HX_STACK_FRAME("cx.StrTools","firstUpperCase",0x94b4864d,"cx.StrTools.firstUpperCase","cx/StrTools.hx",87,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(restToLowercase,"restToLowercase")
{
		HX_STACK_LINE(88)
		::String rest;		HX_STACK_VAR(rest,"rest");
		HX_STACK_LINE(88)
		if ((restToLowercase)){
			HX_STACK_LINE(88)
			rest = str.substr((int)1,null()).toLowerCase();
		}
		else{
			HX_STACK_LINE(88)
			rest = str.substr((int)1,null());
		}
		HX_STACK_LINE(89)
		return (str.substr((int)0,(int)1).toUpperCase() + rest);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,firstUpperCase,return )

::String StrTools_obj::afterLast( ::String str,::String _char,hx::Null< bool >  __o_includeChar){
bool includeChar = __o_includeChar.Default(false);
	HX_STACK_FRAME("cx.StrTools","afterLast",0x9ceb2b07,"cx.StrTools.afterLast","cx/StrTools.hx",92,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(_char,"char")
	HX_STACK_ARG(includeChar,"includeChar")
{
		HX_STACK_LINE(93)
		int idx = str.lastIndexOf(_char,null());		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(94)
		if (((idx == (int)-1))){
			HX_STACK_LINE(94)
			return str;
		}
		HX_STACK_LINE(95)
		if ((!(includeChar))){
			HX_STACK_LINE(95)
			hx::AddEq(idx,_char.length);
		}
		HX_STACK_LINE(96)
		return str.substr(idx,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,afterLast,return )

Float StrTools_obj::similarityCaseIgnore( ::String strA,::String strB){
	HX_STACK_FRAME("cx.StrTools","similarityCaseIgnore",0x127f3050,"cx.StrTools.similarityCaseIgnore","cx/StrTools.hx",99,0x90297b9a)
	HX_STACK_ARG(strA,"strA")
	HX_STACK_ARG(strB,"strB")
	HX_STACK_LINE(100)
	::String _g = strA.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	return ::cx::StrTools_obj::similarity(_g,strB.toLowerCase());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,similarityCaseIgnore,return )

Float StrTools_obj::similarityCaseBalance( ::String strA,::String strB){
	HX_STACK_FRAME("cx.StrTools","similarityCaseBalance",0x637f7c1e,"cx.StrTools.similarityCaseBalance","cx/StrTools.hx",103,0x90297b9a)
	HX_STACK_ARG(strA,"strA")
	HX_STACK_ARG(strB,"strB")
	HX_STACK_LINE(104)
	Float _g = ::cx::StrTools_obj::similarity(strA,strB);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(104)
	::String _g1 = strA.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(104)
	return (Float(((_g + ::cx::StrTools_obj::similarity(_g1,strB.toLowerCase())))) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,similarityCaseBalance,return )

Float StrTools_obj::similarity( ::String strA,::String strB){
	HX_STACK_FRAME("cx.StrTools","similarity",0x815aeece,"cx.StrTools.similarity","cx/StrTools.hx",107,0x90297b9a)
	HX_STACK_ARG(strA,"strA")
	HX_STACK_ARG(strB,"strB")
	HX_STACK_LINE(108)
	if (((strA == strB))){
		HX_STACK_LINE(108)
		return (int)1;
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Float run(::String strA1,::String strB1){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","cx/StrTools.hx",109,0x90297b9a)
		HX_STACK_ARG(strA1,"strA1")
		HX_STACK_ARG(strB1,"strB1")
		{
			HX_STACK_LINE(110)
			Float score = ::cx::StrTools_obj::_similarity(strA1,strB1);		HX_STACK_VAR(score,"score");
			HX_STACK_LINE(112)
			if (((strA1.length != strB1.length))){
				HX_STACK_LINE(112)
				score = (Float(((score + ::cx::StrTools_obj::_similarity(strB1,strA1)))) / Float((int)2));
			}
			HX_STACK_LINE(113)
			return score;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(109)
	Dynamic sim =  Dynamic(new _Function_1_1());		HX_STACK_VAR(sim,"sim");
	HX_STACK_LINE(115)
	return sim(strA,strB).Cast< Float >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,similarity,return )

Float StrTools_obj::similarityAssymetric( ::String strShorter,::String strLonger){
	HX_STACK_FRAME("cx.StrTools","similarityAssymetric",0xe89644b6,"cx.StrTools.similarityAssymetric","cx/StrTools.hx",118,0x90297b9a)
	HX_STACK_ARG(strShorter,"strShorter")
	HX_STACK_ARG(strLonger,"strLonger")
	HX_STACK_LINE(119)
	if (((strShorter == strLonger))){
		HX_STACK_LINE(119)
		return (int)1;
	}
	HX_STACK_LINE(120)
	return ::cx::StrTools_obj::_similarity(strShorter,strShorter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,similarityAssymetric,return )

Float StrTools_obj::_similarity( ::String strA,::String strB){
	HX_STACK_FRAME("cx.StrTools","_similarity",0xde09bdb7,"cx.StrTools._similarity","cx/StrTools.hx",123,0x90297b9a)
	HX_STACK_ARG(strA,"strA")
	HX_STACK_ARG(strB,"strB")
	HX_STACK_LINE(124)
	int lengthA = strA.length;		HX_STACK_VAR(lengthA,"lengthA");
	HX_STACK_LINE(125)
	int lengthB = strB.length;		HX_STACK_VAR(lengthB,"lengthB");
	HX_STACK_LINE(126)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(127)
	int segmentCount = (int)0;		HX_STACK_VAR(segmentCount,"segmentCount");
	HX_STACK_LINE(128)
	Dynamic segmentsInfos = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(segmentsInfos,"segmentsInfos");
	HX_STACK_LINE(129)
	::String segment = HX_CSTRING("");		HX_STACK_VAR(segment,"segment");
	HX_STACK_LINE(130)
	while(((i < lengthA))){
		HX_STACK_LINE(131)
		::String _char = strA.charAt(i);		HX_STACK_VAR(_char,"char");
		HX_STACK_LINE(132)
		if (((strB.indexOf(_char,null()) > (int)-1))){
			HX_STACK_LINE(133)
			hx::AddEq(segment,_char);
			HX_STACK_LINE(134)
			if (((strB.indexOf(segment,null()) > (int)-1))){
				HX_STACK_LINE(135)
				int segmentPosA = ((i - segment.length) + (int)1);		HX_STACK_VAR(segmentPosA,"segmentPosA");
				HX_STACK_LINE(136)
				int segmentPosB = strB.indexOf(segment,null());		HX_STACK_VAR(segmentPosB,"segmentPosB");
				HX_STACK_LINE(137)
				Float positionDiff = ::Math_obj::abs((segmentPosA - segmentPosB));		HX_STACK_VAR(positionDiff,"positionDiff");
				HX_STACK_LINE(138)
				Float posFactor = (Float(((lengthA - positionDiff))) / Float(lengthB));		HX_STACK_VAR(posFactor,"posFactor");
				HX_STACK_LINE(139)
				Float lengthFactor = (Float(segment.length) / Float(lengthA));		HX_STACK_VAR(lengthFactor,"lengthFactor");
				struct _Function_4_1{
					inline static Dynamic Block( Float &lengthFactor,::String &segment,Float &posFactor){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","cx/StrTools.hx",140,0x90297b9a)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("segment") , segment,false);
							__result->Add(HX_CSTRING("score") , (posFactor * lengthFactor),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(140)
				hx::IndexRef((segmentsInfos).mPtr,segmentCount) = _Function_4_1::Block(lengthFactor,segment,posFactor);
			}
			else{
				HX_STACK_LINE(142)
				segment = HX_CSTRING("");
				HX_STACK_LINE(143)
				(segmentCount)++;
				HX_STACK_LINE(144)
				(i)--;
			}
		}
		else{
			HX_STACK_LINE(147)
			segment = HX_CSTRING("");
			HX_STACK_LINE(148)
			(segmentCount)++;
		}
		HX_STACK_LINE(150)
		(i)++;
	}
	HX_STACK_LINE(153)
	int usedSegmentsCount = (int)-2;		HX_STACK_VAR(usedSegmentsCount,"usedSegmentsCount");
	HX_STACK_LINE(154)
	Float totalScore = 0.0;		HX_STACK_VAR(totalScore,"totalScore");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		while(((_g < segmentsInfos->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(155)
			Dynamic si = segmentsInfos->__GetItem(_g);		HX_STACK_VAR(si,"si");
			HX_STACK_LINE(155)
			++(_g);
			HX_STACK_LINE(156)
			if (((si != null()))){
				HX_STACK_LINE(157)
				hx::AddEq(totalScore,si->__Field(HX_CSTRING("score"),true));
				HX_STACK_LINE(158)
				(usedSegmentsCount)++;
			}
		}
	}
	HX_STACK_LINE(162)
	totalScore = (totalScore - (::Math_obj::max(usedSegmentsCount,(int)0) * 0.02));
	HX_STACK_LINE(163)
	return ::Math_obj::max((int)0,::Math_obj::min(totalScore,(int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,_similarity,return )

bool StrTools_obj::has( ::String str,::String substr){
	HX_STACK_FRAME("cx.StrTools","has",0x4e621a0f,"cx.StrTools.has","cx/StrTools.hx",167,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(substr,"substr")
	HX_STACK_LINE(167)
	return (str.indexOf(substr,null()) > (int)-1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,has,return )

::String StrTools_obj::reverse( ::String string){
	HX_STACK_FRAME("cx.StrTools","reverse",0x6c0b1257,"cx.StrTools.reverse","cx/StrTools.hx",170,0x90297b9a)
	HX_STACK_ARG(string,"string")
	HX_STACK_LINE(171)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		int _g = string.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while(((_g1 < _g))){
			HX_STACK_LINE(172)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(172)
			result = (string.charAt(i) + result);
		}
	}
	HX_STACK_LINE(173)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,reverse,return )

::String StrTools_obj::intToChar( int _int,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(65);
	HX_STACK_FRAME("cx.StrTools","intToChar",0x71d778b5,"cx.StrTools.intToChar","cx/StrTools.hx",176,0x90297b9a)
	HX_STACK_ARG(_int,"int")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(177)
		if (((_int > (int)9))){
			HX_STACK_LINE(177)
			HX_STACK_DO_THROW(HX_CSTRING("int to char error"));
		}
		HX_STACK_LINE(178)
		if (((_int < (int)0))){
			HX_STACK_LINE(178)
			HX_STACK_DO_THROW(HX_CSTRING("int to char error"));
		}
		HX_STACK_LINE(179)
		int c = (_int + offset);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(181)
		::String _char = ::String::fromCharCode(c);		HX_STACK_VAR(_char,"char");
		HX_STACK_LINE(183)
		return _char;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,intToChar,return )

int StrTools_obj::charToInt( ::String _char,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(65);
	HX_STACK_FRAME("cx.StrTools","charToInt",0xa2c997f3,"cx.StrTools.charToInt","cx/StrTools.hx",186,0x90297b9a)
	HX_STACK_ARG(_char,"char")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(187)
		if (((_char.length > (int)1))){
			HX_STACK_LINE(187)
			HX_STACK_DO_THROW(HX_CSTRING("char to int error"));
		}
		HX_STACK_LINE(188)
		return (_char.charCodeAt((int)0) - offset);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,charToInt,return )

::String StrTools_obj::numToStr( ::String numStr,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(65);
	HX_STACK_FRAME("cx.StrTools","numToStr",0x6d18a2fb,"cx.StrTools.numToStr","cx/StrTools.hx",191,0x90297b9a)
	HX_STACK_ARG(numStr,"numStr")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(192)
		Dynamic testParse = ::Std_obj::parseInt(numStr);		HX_STACK_VAR(testParse,"testParse");
		HX_STACK_LINE(194)
		::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			int _g = numStr.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			while(((_g1 < _g))){
				HX_STACK_LINE(195)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(196)
				Dynamic _int = ::Std_obj::parseInt(numStr.charAt(i));		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(197)
				::String _char = ::cx::StrTools_obj::intToChar(_int,offset);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(198)
				hx::AddEq(result,_char);
			}
		}
		HX_STACK_LINE(201)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,numToStr,return )

::String StrTools_obj::strToNum( ::String str,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(65);
	HX_STACK_FRAME("cx.StrTools","strToNum",0x61446a45,"cx.StrTools.strToNum","cx/StrTools.hx",204,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(205)
		::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			int _g = str.length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(206)
			while(((_g1 < _g))){
				HX_STACK_LINE(206)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(207)
				::String _char = str.charAt(i);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(208)
				int _int = ::cx::StrTools_obj::charToInt(_char,offset);		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(209)
				hx::AddEq(result,::Std_obj::string(_int));
			}
		}
		HX_STACK_LINE(212)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,strToNum,return )

::String StrTools_obj::rotate( ::String str,hx::Null< int >  __o_positions){
int positions = __o_positions.Default(1);
	HX_STACK_FRAME("cx.StrTools","rotate",0xa4754ac6,"cx.StrTools.rotate","cx/StrTools.hx",220,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(positions,"positions")
{
		HX_STACK_LINE(221)
		::String result = str;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			while(((_g < positions))){
				HX_STACK_LINE(222)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(223)
				::String _g1 = result.substr((int)1,result.length);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(223)
				result = (_g1 + result.substr((int)0,(int)1));
			}
		}
		HX_STACK_LINE(225)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,rotate,return )

::String StrTools_obj::rotateBack( ::String str,hx::Null< int >  __o_positions){
int positions = __o_positions.Default(1);
	HX_STACK_FRAME("cx.StrTools","rotateBack",0x57232c0d,"cx.StrTools.rotateBack","cx/StrTools.hx",228,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(positions,"positions")
{
		HX_STACK_LINE(229)
		::String result = str;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(230)
			while(((_g < positions))){
				HX_STACK_LINE(230)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(231)
				::String _g1 = result.substr((int)-1,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(231)
				result = (_g1 + result.substr((int)0,(result.length - (int)1)));
			}
		}
		HX_STACK_LINE(233)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrTools_obj,rotateBack,return )

::String StrTools_obj::toLatin1( ::String str){
	HX_STACK_FRAME("cx.StrTools","toLatin1",0x1893e6b3,"cx.StrTools.toLatin1","cx/StrTools.hx",236,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(257)
	return ::haxe::Utf8_obj::decode(str);
	HX_STACK_LINE(260)
	return str;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,toLatin1,return )

int StrTools_obj::lastIdxOf( ::String str,::String search,hx::Null< int >  __o_lastPos){
int lastPos = __o_lastPos.Default(0);
	HX_STACK_FRAME("cx.StrTools","lastIdxOf",0xd99410f3,"cx.StrTools.lastIdxOf","cx/StrTools.hx",263,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(search,"search")
	HX_STACK_ARG(lastPos,"lastPos")
{
		HX_STACK_LINE(264)
		if (((lastPos == (int)0))){
			HX_STACK_LINE(264)
			return str.lastIndexOf(search,null());
		}
		HX_STACK_LINE(265)
		{
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			while(((_g < lastPos))){
				HX_STACK_LINE(265)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(266)
				str = str.substr((int)0,str.lastIndexOf(search,null()));
			}
		}
		HX_STACK_LINE(268)
		return str.lastIndexOf(search,null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StrTools_obj,lastIdxOf,return )

int StrTools_obj::toInt( ::String str){
	HX_STACK_FRAME("cx.StrTools","toInt",0x30987029,"cx.StrTools.toInt","cx/StrTools.hx",271,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(271)
	return ::Std_obj::parseInt(str);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,toInt,return )

Float StrTools_obj::toFloat( ::String str){
	HX_STACK_FRAME("cx.StrTools","toFloat",0x2029eb56,"cx.StrTools.toFloat","cx/StrTools.hx",272,0x90297b9a)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(272)
	return ::Std_obj::parseFloat(str);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StrTools_obj,toFloat,return )


StrTools_obj::StrTools_obj()
{
}

Dynamic StrTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { return tab_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"until") ) { return until_dyn(); }
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newline") ) { return newline_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"toFloat") ) { return toFloat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"countSub") ) { return countSub_dyn(); }
		if (HX_FIELD_EQ(inName,"numToStr") ) { return numToStr_dyn(); }
		if (HX_FIELD_EQ(inName,"strToNum") ) { return strToNum_dyn(); }
		if (HX_FIELD_EQ(inName,"toLatin1") ) { return toLatin1_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"untilLast") ) { return untilLast_dyn(); }
		if (HX_FIELD_EQ(inName,"splitTrim") ) { return splitTrim_dyn(); }
		if (HX_FIELD_EQ(inName,"afterLast") ) { return afterLast_dyn(); }
		if (HX_FIELD_EQ(inName,"intToChar") ) { return intToChar_dyn(); }
		if (HX_FIELD_EQ(inName,"charToInt") ) { return charToInt_dyn(); }
		if (HX_FIELD_EQ(inName,"lastIdxOf") ) { return lastIdxOf_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"similarity") ) { return similarity_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateBack") ) { return rotateBack_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"replaceNull") ) { return replaceNull_dyn(); }
		if (HX_FIELD_EQ(inName,"_similarity") ) { return _similarity_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"leadingChars") ) { return leadingChars_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"firstUpperCase") ) { return firstUpperCase_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"intWithLeadingChars") ) { return intWithLeadingChars_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"similarityCaseIgnore") ) { return similarityCaseIgnore_dyn(); }
		if (HX_FIELD_EQ(inName,"similarityAssymetric") ) { return similarityAssymetric_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"similarityCaseBalance") ) { return similarityCaseBalance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StrTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StrTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("countSub"),
	HX_CSTRING("leadingChars"),
	HX_CSTRING("intWithLeadingChars"),
	HX_CSTRING("until"),
	HX_CSTRING("untilLast"),
	HX_CSTRING("tab"),
	HX_CSTRING("newline"),
	HX_CSTRING("repeat"),
	HX_CSTRING("fill"),
	HX_CSTRING("splitTrim"),
	HX_CSTRING("replaceNull"),
	HX_CSTRING("firstUpperCase"),
	HX_CSTRING("afterLast"),
	HX_CSTRING("similarityCaseIgnore"),
	HX_CSTRING("similarityCaseBalance"),
	HX_CSTRING("similarity"),
	HX_CSTRING("similarityAssymetric"),
	HX_CSTRING("_similarity"),
	HX_CSTRING("has"),
	HX_CSTRING("reverse"),
	HX_CSTRING("intToChar"),
	HX_CSTRING("charToInt"),
	HX_CSTRING("numToStr"),
	HX_CSTRING("strToNum"),
	HX_CSTRING("rotate"),
	HX_CSTRING("rotateBack"),
	HX_CSTRING("toLatin1"),
	HX_CSTRING("lastIdxOf"),
	HX_CSTRING("toInt"),
	HX_CSTRING("toFloat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StrTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StrTools_obj::__mClass,"__mClass");
};

#endif

Class StrTools_obj::__mClass;

void StrTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.StrTools"), hx::TCanCast< StrTools_obj> ,sStaticFields,sMemberFields,
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

void StrTools_obj::__boot()
{
}

} // end namespace cx
