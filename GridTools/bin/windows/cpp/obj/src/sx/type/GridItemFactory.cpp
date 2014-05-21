#include <hxcpp.h>

#ifndef INCLUDED_sx_type_GridItemFactory
#include <sx/type/GridItemFactory.h>
#endif
namespace sx{
namespace type{

Void GridItemFactory_obj::__construct()
{
	return null();
}

//GridItemFactory_obj::~GridItemFactory_obj() { }

Dynamic GridItemFactory_obj::__CreateEmpty() { return  new GridItemFactory_obj; }
hx::ObjectPtr< GridItemFactory_obj > GridItemFactory_obj::__new()
{  hx::ObjectPtr< GridItemFactory_obj > result = new GridItemFactory_obj();
	result->__construct();
	return result;}

Dynamic GridItemFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridItemFactory_obj > result = new GridItemFactory_obj();
	result->__construct();
	return result;}

Dynamic GridItemFactory_obj::getNew( Float pos,int page,::String type){
	HX_STACK_FRAME("sx.type.GridItemFactory","getNew",0x055ced72,"sx.type.GridItemFactory.getNew","sx/type/TGridItem.hx",26,0x7fcc49fc)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(page,"page")
	HX_STACK_ARG(type,"type")
	struct _Function_1_1{
		inline static Dynamic Block( Float &pos,int &page,::String &type){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/type/TGridItem.hx",28,0x7fcc49fc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("pos") , pos,false);
				__result->Add(HX_CSTRING("page") , page,false);
				__result->Add(HX_CSTRING("x") , 0.1,false);
				__result->Add(HX_CSTRING("y") , 0.2,false);
				__result->Add(HX_CSTRING("width") , 0.8,false);
				__result->Add(HX_CSTRING("height") , 0.3,false);
				__result->Add(HX_CSTRING("type") , type,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	Dynamic gi = _Function_1_1::Block(pos,page,type);		HX_STACK_VAR(gi,"gi");
	HX_STACK_LINE(38)
	return gi;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GridItemFactory_obj,getNew,return )


GridItemFactory_obj::GridItemFactory_obj()
{
}

Dynamic GridItemFactory_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getNew") ) { return getNew_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GridItemFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GridItemFactory_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getNew"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridItemFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridItemFactory_obj::__mClass,"__mClass");
};

#endif

Class GridItemFactory_obj::__mClass;

void GridItemFactory_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.type.GridItemFactory"), hx::TCanCast< GridItemFactory_obj> ,sStaticFields,sMemberFields,
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

void GridItemFactory_obj::__boot()
{
}

} // end namespace sx
} // end namespace type
