#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cx_ArrayTools
#include <cx/ArrayTools.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace cx{

Void ArrayTools_obj::__construct()
{
	return null();
}

//ArrayTools_obj::~ArrayTools_obj() { }

Dynamic ArrayTools_obj::__CreateEmpty() { return  new ArrayTools_obj; }
hx::ObjectPtr< ArrayTools_obj > ArrayTools_obj::__new()
{  hx::ObjectPtr< ArrayTools_obj > result = new ArrayTools_obj();
	result->__construct();
	return result;}

Dynamic ArrayTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayTools_obj > result = new ArrayTools_obj();
	result->__construct();
	return result;}

bool ArrayTools_obj::has( Dynamic a,Dynamic item){
	HX_STACK_FRAME("cx.ArrayTools","has",0xd4c18867,"cx.ArrayTools.has","cx/ArrayTools.hx",19,0x35480602)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(19)
	return (a->__Field(HX_CSTRING("indexOf"),true)(item,null()) != (int)-1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,has,return )

Dynamic ArrayTools_obj::indexOrNull( Dynamic a,int idx){
	HX_STACK_FRAME("cx.ArrayTools","indexOrNull",0x81ea4009,"cx.ArrayTools.indexOrNull","cx/ArrayTools.hx",25,0x35480602)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(25)
	if (((bool((idx < (int)0)) || bool((idx > a->__Field(HX_CSTRING("length"),true)))))){
		HX_STACK_LINE(25)
		return null();
	}
	else{
		HX_STACK_LINE(25)
		return a->__GetItem(idx);
	}
	HX_STACK_LINE(25)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,indexOrNull,return )

bool ArrayTools_obj::equals( Dynamic a,Dynamic b){
	HX_STACK_FRAME("cx.ArrayTools","equals",0x07ec0b52,"cx.ArrayTools.equals","cx/ArrayTools.hx",29,0x35480602)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(30)
	::String _g = a->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	return (_g == b->toString());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,equals,return )

Dynamic ArrayTools_obj::unique( Dynamic arr){
	HX_STACK_FRAME("cx.ArrayTools","unique",0xab8bb024,"cx.ArrayTools.unique","cx/ArrayTools.hx",33,0x35480602)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_LINE(34)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		while(((_g < arr->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(35)
			Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(35)
			++(_g);
			HX_STACK_LINE(35)
			if ((!(::Lambda_obj::has(result,item)))){
				HX_STACK_LINE(35)
				result->__Field(HX_CSTRING("push"),true)(item);
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(Dynamic a,Dynamic b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","cx/ArrayTools.hx",36,0x35480602)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(36)
			return ::Reflect_obj::compare(a,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(36)
	result->__Field(HX_CSTRING("sort"),true)( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(37)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,unique,return )

Dynamic ArrayTools_obj::fromIterator( Dynamic it){
	HX_STACK_FRAME("cx.ArrayTools","fromIterator",0x40f5d2cb,"cx.ArrayTools.fromIterator","cx/ArrayTools.hx",40,0x35480602)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(41)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(42)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it);  __it->hasNext(); ){
		Dynamic v = __it->next();
		result->__Field(HX_CSTRING("push"),true)(v);
	}
	HX_STACK_LINE(43)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,fromIterator,return )

Dynamic ArrayTools_obj::fromIterables( Dynamic it){
	HX_STACK_FRAME("cx.ArrayTools","fromIterables",0x8a3a7604,"cx.ArrayTools.fromIterables","cx/ArrayTools.hx",47,0x35480602)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(47)
	return ::cx::ArrayTools_obj::fromIterator(it->__Field(HX_CSTRING("iterator"),true)());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,fromIterables,return )

Dynamic ArrayTools_obj::fromHashKeys( Dynamic it){
	HX_STACK_FRAME("cx.ArrayTools","fromHashKeys",0xba12c5bf,"cx.ArrayTools.fromHashKeys","cx/ArrayTools.hx",51,0x35480602)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(51)
	return ::cx::ArrayTools_obj::fromIterator(it);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,fromHashKeys,return )

bool ArrayTools_obj::allNull( Dynamic it){
	HX_STACK_FRAME("cx.ArrayTools","allNull",0x055bbbd5,"cx.ArrayTools.allNull","cx/ArrayTools.hx",55,0x35480602)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		while(((_g < it->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(56)
			Dynamic v = it->__GetItem(_g);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(56)
			++(_g);
			HX_STACK_LINE(56)
			if (((v != null()))){
				HX_STACK_LINE(56)
				return false;
			}
		}
	}
	HX_STACK_LINE(57)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,allNull,return )

bool ArrayTools_obj::doOverlap( Dynamic array1,Dynamic array2){
	HX_STACK_FRAME("cx.ArrayTools","doOverlap",0x1af3fc09,"cx.ArrayTools.doOverlap","cx/ArrayTools.hx",72,0x35480602)
	HX_STACK_ARG(array1,"array1")
	HX_STACK_ARG(array2,"array2")
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while(((_g < array1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(73)
			Dynamic item = array1->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(73)
			++(_g);
			HX_STACK_LINE(74)
			if ((::Lambda_obj::has(array2,item))){
				HX_STACK_LINE(74)
				return true;
			}
		}
	}
	HX_STACK_LINE(76)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,doOverlap,return )

Dynamic ArrayTools_obj::overlap( Dynamic array1,Dynamic array2){
	HX_STACK_FRAME("cx.ArrayTools","overlap",0x5b109714,"cx.ArrayTools.overlap","cx/ArrayTools.hx",79,0x35480602)
	HX_STACK_ARG(array1,"array1")
	HX_STACK_ARG(array2,"array2")
	HX_STACK_LINE(79)
	Dynamic array21 = Dynamic( Array_obj<Dynamic>::__new().Add(array2));		HX_STACK_VAR(array21,"array21");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,array21)
	bool run(Dynamic value1){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","cx/ArrayTools.hx",80,0x35480602)
		HX_STACK_ARG(value1,"value1")
		{
			HX_STACK_LINE(81)
			bool ret = ::Lambda_obj::has(array21->__GetItem((int)0),value1);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(82)
			return ret;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(80)
	return ::Lambda_obj::array(array1->__Field(HX_CSTRING("filter"),true)( Dynamic(new _Function_1_1(array21))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,overlap,return )

Dynamic ArrayTools_obj::diff( Dynamic array1,Dynamic array2){
	HX_STACK_FRAME("cx.ArrayTools","diff",0x51f6fe58,"cx.ArrayTools.diff","cx/ArrayTools.hx",86,0x35480602)
	HX_STACK_ARG(array1,"array1")
	HX_STACK_ARG(array2,"array2")
	HX_STACK_LINE(88)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		while(((_g < array1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(90)
			Dynamic item = array1->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(91)
			if ((!(::Lambda_obj::has(array2,item)))){
				HX_STACK_LINE(91)
				result->__Field(HX_CSTRING("push"),true)(item);
			}
		}
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while(((_g < array2->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(93)
			Dynamic item = array2->__GetItem(_g);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(93)
			++(_g);
			HX_STACK_LINE(94)
			if ((!(::Lambda_obj::has(array1,item)))){
				HX_STACK_LINE(94)
				result->__Field(HX_CSTRING("push"),true)(item);
			}
		}
	}
	HX_STACK_LINE(96)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,diff,return )

Dynamic ArrayTools_obj::first( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","first",0x8cfdde7d,"cx.ArrayTools.first","cx/ArrayTools.hx",101,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(101)
	return array->__GetItem((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,first,return )

bool ArrayTools_obj::isFirst( Dynamic array,Dynamic item){
	HX_STACK_FRAME("cx.ArrayTools","isFirst",0x4f236f73,"cx.ArrayTools.isFirst","cx/ArrayTools.hx",105,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(105)
	return (array->__GetItem((int)0) == item);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,isFirst,return )

Dynamic ArrayTools_obj::last( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","last",0x573aaca9,"cx.ArrayTools.last","cx/ArrayTools.hx",110,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(110)
	return array->__GetItem((array->__Field(HX_CSTRING("length"),true) - (int)1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,last,return )

bool ArrayTools_obj::isLast( Dynamic array,Dynamic item){
	HX_STACK_FRAME("cx.ArrayTools","isLast",0xad0cec73,"cx.ArrayTools.isLast","cx/ArrayTools.hx",114,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(114)
	return (array->__GetItem((array->__Field(HX_CSTRING("length"),true) - (int)1)) == item);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,isLast,return )

int ArrayTools_obj::index( Dynamic array,Dynamic item){
	HX_STACK_FRAME("cx.ArrayTools","index",0x4a75015f,"cx.ArrayTools.index","cx/ArrayTools.hx",118,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(118)
	return ::Lambda_obj::indexOf(array,item);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,index,return )

Dynamic ArrayTools_obj::second( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","second",0xac40ec87,"cx.ArrayTools.second","cx/ArrayTools.hx",122,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(122)
	return array->__GetItem((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,second,return )

Dynamic ArrayTools_obj::third( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","third",0x9be9f1b4,"cx.ArrayTools.third","cx/ArrayTools.hx",126,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(126)
	return array->__GetItem((int)2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,third,return )

Dynamic ArrayTools_obj::fourth( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","fourth",0x47872bed,"cx.ArrayTools.fourth","cx/ArrayTools.hx",130,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(130)
	return array->__GetItem((int)3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,fourth,return )

Dynamic ArrayTools_obj::fifth( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","fifth",0x8cf4c444,"cx.ArrayTools.fifth","cx/ArrayTools.hx",134,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(134)
	return array->__GetItem((int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,fifth,return )

Dynamic ArrayTools_obj::sixth( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","sixth",0x0937f763,"cx.ArrayTools.sixth","cx/ArrayTools.hx",138,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(138)
	return array->__GetItem((int)5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,sixth,return )

Dynamic ArrayTools_obj::seventh( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","seventh",0xf68efb4e,"cx.ArrayTools.seventh","cx/ArrayTools.hx",142,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(142)
	return array->__GetItem((int)6);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,seventh,return )

Dynamic ArrayTools_obj::eighth( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","eighth",0x637bc14c,"cx.ArrayTools.eighth","cx/ArrayTools.hx",146,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(146)
	return array->__GetItem((int)7);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,eighth,return )

Dynamic ArrayTools_obj::nineth( Dynamic array){
	HX_STACK_FRAME("cx.ArrayTools","nineth",0x01503839,"cx.ArrayTools.nineth","cx/ArrayTools.hx",150,0x35480602)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(150)
	return array->__GetItem((int)8);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,nineth,return )

Dynamic ArrayTools_obj::shuffle( Dynamic a){
	HX_STACK_FRAME("cx.ArrayTools","shuffle",0x96dd9986,"cx.ArrayTools.shuffle","cx/ArrayTools.hx",155,0x35480602)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(156)
	Array< int > t = ::cx::ArrayTools_obj::range(a->__Field(HX_CSTRING("length"),true),null(),null());		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(157)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(158)
	while(((t->length > (int)0))){
		HX_STACK_LINE(160)
		int pos = ::Std_obj::random(t->length);		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(161)
		int index = t->__get(pos);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(162)
		t->splice(pos,(int)1);
		HX_STACK_LINE(163)
		arr->__Field(HX_CSTRING("push"),true)(a->__GetItem(index));
	}
	HX_STACK_LINE(165)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,shuffle,return )

int ArrayTools_obj::countItem( Dynamic a,Dynamic item){
	HX_STACK_FRAME("cx.ArrayTools","countItem",0xc9465a4f,"cx.ArrayTools.countItem","cx/ArrayTools.hx",169,0x35480602)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(170)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		while(((_g < a->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(171)
			Dynamic ai = a->__GetItem(_g);		HX_STACK_VAR(ai,"ai");
			HX_STACK_LINE(171)
			++(_g);
			HX_STACK_LINE(172)
			if (((ai == item))){
				HX_STACK_LINE(172)
				(cnt)++;
			}
		}
	}
	HX_STACK_LINE(174)
	return cnt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTools_obj,countItem,return )

Dynamic ArrayTools_obj::sorta( Dynamic a){
	HX_STACK_FRAME("cx.ArrayTools","sorta",0x0d2ab190,"cx.ArrayTools.sorta","cx/ArrayTools.hx",179,0x35480602)
	HX_STACK_ARG(a,"a")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(Dynamic a1,Dynamic b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","cx/ArrayTools.hx",180,0x35480602)
		HX_STACK_ARG(a1,"a1")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(180)
			return ::Reflect_obj::compare(a1,b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(180)
	a->__Field(HX_CSTRING("sort"),true)( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(181)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTools_obj,sorta,return )

Array< int > ArrayTools_obj::range( int start,Dynamic stop,hx::Null< int >  __o_step){
int step = __o_step.Default(1);
	HX_STACK_FRAME("cx.ArrayTools","range",0x70800c0a,"cx.ArrayTools.range","cx/ArrayTools.hx",187,0x35480602)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(stop,"stop")
	HX_STACK_ARG(step,"step")
{
		HX_STACK_LINE(188)
		if (((null() == stop))){
			HX_STACK_LINE(190)
			stop = start;
			HX_STACK_LINE(191)
			start = (int)0;
		}
		HX_STACK_LINE(193)
		if ((((Float(((stop - start))) / Float(step)) == ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(193)
			HX_STACK_DO_THROW(HX_CSTRING("infinite range"));
		}
		HX_STACK_LINE(194)
		Array< int > range = Array_obj< int >::__new();		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(194)
		int i = (int)-1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(194)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(195)
		if (((step < (int)0))){
			HX_STACK_LINE(196)
			while((((j = (start + (step * ++(i)))) > stop))){
				HX_STACK_LINE(196)
				range->push(j);
			}
		}
		else{
			HX_STACK_LINE(198)
			while((((j = (start + (step * ++(i)))) < stop))){
				HX_STACK_LINE(198)
				range->push(j);
			}
		}
		HX_STACK_LINE(199)
		return range;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayTools_obj,range,return )


ArrayTools_obj::ArrayTools_obj()
{
}

Dynamic ArrayTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { return diff_dyn(); }
		if (HX_FIELD_EQ(inName,"last") ) { return last_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"index") ) { return index_dyn(); }
		if (HX_FIELD_EQ(inName,"third") ) { return third_dyn(); }
		if (HX_FIELD_EQ(inName,"fifth") ) { return fifth_dyn(); }
		if (HX_FIELD_EQ(inName,"sixth") ) { return sixth_dyn(); }
		if (HX_FIELD_EQ(inName,"sorta") ) { return sorta_dyn(); }
		if (HX_FIELD_EQ(inName,"range") ) { return range_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"unique") ) { return unique_dyn(); }
		if (HX_FIELD_EQ(inName,"isLast") ) { return isLast_dyn(); }
		if (HX_FIELD_EQ(inName,"second") ) { return second_dyn(); }
		if (HX_FIELD_EQ(inName,"fourth") ) { return fourth_dyn(); }
		if (HX_FIELD_EQ(inName,"eighth") ) { return eighth_dyn(); }
		if (HX_FIELD_EQ(inName,"nineth") ) { return nineth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"allNull") ) { return allNull_dyn(); }
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"isFirst") ) { return isFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"seventh") ) { return seventh_dyn(); }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doOverlap") ) { return doOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"countItem") ) { return countItem_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexOrNull") ) { return indexOrNull_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromIterator") ) { return fromIterator_dyn(); }
		if (HX_FIELD_EQ(inName,"fromHashKeys") ) { return fromHashKeys_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromIterables") ) { return fromIterables_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("has"),
	HX_CSTRING("indexOrNull"),
	HX_CSTRING("equals"),
	HX_CSTRING("unique"),
	HX_CSTRING("fromIterator"),
	HX_CSTRING("fromIterables"),
	HX_CSTRING("fromHashKeys"),
	HX_CSTRING("allNull"),
	HX_CSTRING("doOverlap"),
	HX_CSTRING("overlap"),
	HX_CSTRING("diff"),
	HX_CSTRING("first"),
	HX_CSTRING("isFirst"),
	HX_CSTRING("last"),
	HX_CSTRING("isLast"),
	HX_CSTRING("index"),
	HX_CSTRING("second"),
	HX_CSTRING("third"),
	HX_CSTRING("fourth"),
	HX_CSTRING("fifth"),
	HX_CSTRING("sixth"),
	HX_CSTRING("seventh"),
	HX_CSTRING("eighth"),
	HX_CSTRING("nineth"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("countItem"),
	HX_CSTRING("sorta"),
	HX_CSTRING("range"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayTools_obj::__mClass,"__mClass");
};

#endif

Class ArrayTools_obj::__mClass;

void ArrayTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.ArrayTools"), hx::TCanCast< ArrayTools_obj> ,sStaticFields,sMemberFields,
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

void ArrayTools_obj::__boot()
{
}

} // end namespace cx
