#ifndef INCLUDED_cx_StrTools
#define INCLUDED_cx_StrTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cx,StrTools)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  StrTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StrTools_obj OBJ_;
		StrTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StrTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StrTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StrTools"); }

		static int countSub( ::String str,::String lookForStr);
		static Dynamic countSub_dyn();

		static ::String leadingChars( ::String str,hx::Null< int >  toLength,::String leadingChar);
		static Dynamic leadingChars_dyn();

		static ::String intWithLeadingChars( int num,hx::Null< int >  toLength,::String leadingChar);
		static Dynamic intWithLeadingChars_dyn();

		static ::String until( ::String str,::String untilStr,hx::Null< bool >  includeUntilStr);
		static Dynamic until_dyn();

		static ::String untilLast( ::String str,::String untilStr,hx::Null< bool >  includeUntilStr);
		static Dynamic untilLast_dyn();

		static ::String tab( ::String str);
		static Dynamic tab_dyn();

		static ::String newline( ::String str);
		static Dynamic newline_dyn();

		static ::String repeat( ::String repeatString,int count);
		static Dynamic repeat_dyn();

		static ::String fill( ::String str,hx::Null< int >  toLength,::String with,::String replaceNull);
		static Dynamic fill_dyn();

		static Array< ::String > splitTrim( ::String str,::String delimiter);
		static Dynamic splitTrim_dyn();

		static ::String replaceNull( ::String str,::String with);
		static Dynamic replaceNull_dyn();

		static ::String firstUpperCase( ::String str,hx::Null< bool >  restToLowercase);
		static Dynamic firstUpperCase_dyn();

		static ::String afterLast( ::String str,::String _char,hx::Null< bool >  includeChar);
		static Dynamic afterLast_dyn();

		static Float similarityCaseIgnore( ::String strA,::String strB);
		static Dynamic similarityCaseIgnore_dyn();

		static Float similarityCaseBalance( ::String strA,::String strB);
		static Dynamic similarityCaseBalance_dyn();

		static Float similarity( ::String strA,::String strB);
		static Dynamic similarity_dyn();

		static Float similarityAssymetric( ::String strShorter,::String strLonger);
		static Dynamic similarityAssymetric_dyn();

		static Float _similarity( ::String strA,::String strB);
		static Dynamic _similarity_dyn();

		static bool has( ::String str,::String substr);
		static Dynamic has_dyn();

		static ::String reverse( ::String string);
		static Dynamic reverse_dyn();

		static ::String intToChar( int _int,hx::Null< int >  offset);
		static Dynamic intToChar_dyn();

		static int charToInt( ::String _char,hx::Null< int >  offset);
		static Dynamic charToInt_dyn();

		static ::String numToStr( ::String numStr,hx::Null< int >  offset);
		static Dynamic numToStr_dyn();

		static ::String strToNum( ::String str,hx::Null< int >  offset);
		static Dynamic strToNum_dyn();

		static ::String rotate( ::String str,hx::Null< int >  positions);
		static Dynamic rotate_dyn();

		static ::String rotateBack( ::String str,hx::Null< int >  positions);
		static Dynamic rotateBack_dyn();

		static ::String toLatin1( ::String str);
		static Dynamic toLatin1_dyn();

		static int lastIdxOf( ::String str,::String search,hx::Null< int >  lastPos);
		static Dynamic lastIdxOf_dyn();

		static int toInt( ::String str);
		static Dynamic toInt_dyn();

		static Float toFloat( ::String str);
		static Dynamic toFloat_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_StrTools */ 
