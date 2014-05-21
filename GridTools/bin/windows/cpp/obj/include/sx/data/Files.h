#ifndef INCLUDED_sx_data_Files
#define INCLUDED_sx_data_Files

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sx,data,Files)
namespace sx{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  Files_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Files_obj OBJ_;
		Files_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Files_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Files_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Files"); }

		static ::String projectName;
		static ::String pdfFileName;
		static Array< ::String > mp3FilesNames;
		static Array< ::String > pngFilesNames;
		static Dynamic observers;
		static Void notify( );
		static Dynamic notify_dyn();

};

} // end namespace sx
} // end namespace data

#endif /* INCLUDED_sx_data_Files */ 
