#ifndef INCLUDED_cx_FileTools
#define INCLUDED_cx_FileTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cx,FileTools)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace cx{


class HXCPP_CLASS_ATTRIBUTES  FileTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FileTools_obj OBJ_;
		FileTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FileTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FileTools"); }

		static ::String test( );
		static Dynamic test_dyn();

		static Void deleteFile( ::String path);
		static Dynamic deleteFile_dyn();

		static Void deleteDirectory( ::String dir);
		static Dynamic deleteDirectory_dyn();

		static Void deleteFilesInDirectory( ::String dir);
		static Dynamic deleteFilesInDirectory_dyn();

		static Void createDirectory( ::String dir);
		static Dynamic createDirectory_dyn();

		static bool exists( ::String path);
		static Dynamic exists_dyn();

		static ::String safeSlashes( ::String path,hx::Null< bool >  endSlash);
		static Dynamic safeSlashes_dyn();

		static Void putContent( ::String filename,::String content);
		static Dynamic putContent_dyn();

		static ::String getContent( ::String filename);
		static Dynamic getContent_dyn();

		static Array< ::String > getFilesNamesInDirectory( ::String dir,::String ext,::String startsWith);
		static Dynamic getFilesNamesInDirectory_dyn();

		static Array< ::String > getDirectories( ::String dir,hx::Null< bool >  includeFiles,Array< ::String > dirs,::String giveDirsExt);
		static Dynamic getDirectories_dyn();

		static Array< ::String > getFilesInDirectories( ::String dir,::String ext,Dynamic recursive,Array< ::String > dirs);
		static Dynamic getFilesInDirectories_dyn();

		static ::haxe::io::Bytes getBytes( ::String filename);
		static Dynamic getBytes_dyn();

		static Void putBytes( ::String filename,::haxe::io::Bytes bytes);
		static Dynamic putBytes_dyn();

		static Void putBinaryContent( ::String filename,::String content);
		static Dynamic putBinaryContent_dyn();

		static Void executeFile( ::String filename);
		static Dynamic executeFile_dyn();

		static Void putContentExecute( ::String filename,::String content);
		static Dynamic putContentExecute_dyn();

		static Void putBinaryContentExecute( ::String filename,::String content);
		static Dynamic putBinaryContentExecute_dyn();

		static ::String stripLastSlash( ::String path);
		static Dynamic stripLastSlash_dyn();

		static ::String stripPath( ::String filename);
		static Dynamic stripPath_dyn();

		static ::String getFirstFilenameSegment( ::String filename);
		static Dynamic getFirstFilenameSegment_dyn();

		static Dynamic getFileAgeSeconds( ::String filename);
		static Dynamic getFileAgeSeconds_dyn();

		static ::String getDirectory( ::String fullfilename,::String slash);
		static Dynamic getDirectory_dyn();

		static ::String getFilename( ::String fullfilename,hx::Null< bool >  includeExt);
		static Dynamic getFilename_dyn();

		static Array< ::String > getArrayFromItemsFile( ::String filename);
		static Dynamic getArrayFromItemsFile_dyn();

		static ::String getExtension( ::String filename);
		static Dynamic getExtension_dyn();

		static ::String excludeExtension( ::String filename);
		static Dynamic excludeExtension_dyn();

		static Void rename( ::String path,::String newpath);
		static Dynamic rename_dyn();

		static ::String correctPath( ::String path,hx::Null< bool >  endSlash,::String slash);
		static Dynamic correctPath_dyn();

		static Void backup( ::String filename,::String backupDir,hx::Null< int >  generations);
		static Dynamic backup_dyn();

};

} // end namespace cx

#endif /* INCLUDED_cx_FileTools */ 
