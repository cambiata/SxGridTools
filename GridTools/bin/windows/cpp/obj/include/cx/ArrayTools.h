#ifndef INCLUDED_cx_ArrayTools
#define INCLUDED_cx_ArrayTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cx,ArrayTools)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  ArrayTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayTools_obj OBJ_;
		ArrayTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ArrayTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ArrayTools"); }

		static bool has( Dynamic a,Dynamic item);
		static Dynamic has_dyn();

		static Dynamic indexOrNull( Dynamic a,int idx);
		static Dynamic indexOrNull_dyn();

		static bool equals( Dynamic a,Dynamic b);
		static Dynamic equals_dyn();

		static Dynamic unique( Dynamic arr);
		static Dynamic unique_dyn();

		static Dynamic fromIterator( Dynamic it);
		static Dynamic fromIterator_dyn();

		static Dynamic fromIterables( Dynamic it);
		static Dynamic fromIterables_dyn();

		static Dynamic fromHashKeys( Dynamic it);
		static Dynamic fromHashKeys_dyn();

		static bool allNull( Dynamic it);
		static Dynamic allNull_dyn();

		static bool doOverlap( Dynamic array1,Dynamic array2);
		static Dynamic doOverlap_dyn();

		static Dynamic overlap( Dynamic array1,Dynamic array2);
		static Dynamic overlap_dyn();

		static Dynamic diff( Dynamic array1,Dynamic array2);
		static Dynamic diff_dyn();

		static Dynamic first( Dynamic array);
		static Dynamic first_dyn();

		static bool isFirst( Dynamic array,Dynamic item);
		static Dynamic isFirst_dyn();

		static Dynamic last( Dynamic array);
		static Dynamic last_dyn();

		static bool isLast( Dynamic array,Dynamic item);
		static Dynamic isLast_dyn();

		static int index( Dynamic array,Dynamic item);
		static Dynamic index_dyn();

		static Dynamic second( Dynamic array);
		static Dynamic second_dyn();

		static Dynamic third( Dynamic array);
		static Dynamic third_dyn();

		static Dynamic fourth( Dynamic array);
		static Dynamic fourth_dyn();

		static Dynamic fifth( Dynamic array);
		static Dynamic fifth_dyn();

		static Dynamic sixth( Dynamic array);
		static Dynamic sixth_dyn();

		static Dynamic seventh( Dynamic array);
		static Dynamic seventh_dyn();

		static Dynamic eighth( Dynamic array);
		static Dynamic eighth_dyn();

		static Dynamic nineth( Dynamic array);
		static Dynamic nineth_dyn();

		static Dynamic shuffle( Dynamic a);
		static Dynamic shuffle_dyn();

		static int countItem( Dynamic a,Dynamic item);
		static Dynamic countItem_dyn();

		static Dynamic sorta( Dynamic a);
		static Dynamic sorta_dyn();

		static Array< int > range( int start,Dynamic stop,hx::Null< int >  step);
		static Dynamic range_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_ArrayTools */ 
