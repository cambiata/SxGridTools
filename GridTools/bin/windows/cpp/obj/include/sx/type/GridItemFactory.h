#ifndef INCLUDED_sx_type_GridItemFactory
#define INCLUDED_sx_type_GridItemFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,type,GridItemFactory)
namespace sx{
namespace type{


class HXCPP_CLASS_ATTRIBUTES  GridItemFactory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GridItemFactory_obj OBJ_;
		GridItemFactory_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GridItemFactory_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridItemFactory_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GridItemFactory"); }

		static Dynamic getNew( Float pos,int page,::String type);
		static Dynamic getNew_dyn();

};

} // end namespace sx
} // end namespace type

#endif /* INCLUDED_sx_type_GridItemFactory */ 
