#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cx_FileTools
#include <cx/FileTools.h>
#endif
#ifndef INCLUDED_cx_PathTools
#include <cx/PathTools.h>
#endif
#ifndef INCLUDED_cx_StrTools
#include <cx/StrTools.h>
#endif
#ifndef INCLUDED_cx_Tools
#include <cx/Tools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace cx{

Void FileTools_obj::__construct()
{
	return null();
}

//FileTools_obj::~FileTools_obj() { }

Dynamic FileTools_obj::__CreateEmpty() { return  new FileTools_obj; }
hx::ObjectPtr< FileTools_obj > FileTools_obj::__new()
{  hx::ObjectPtr< FileTools_obj > result = new FileTools_obj();
	result->__construct();
	return result;}

Dynamic FileTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileTools_obj > result = new FileTools_obj();
	result->__construct();
	return result;}

::String FileTools_obj::test( ){
	HX_STACK_FRAME("cx.FileTools","test",0xdf6b6eda,"cx.FileTools.test","cx/FileTools.hx",24,0x84864d19)
	HX_STACK_LINE(24)
	return HX_CSTRING("test");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FileTools_obj,test,return )

Void FileTools_obj::deleteFile( ::String path){
{
		HX_STACK_FRAME("cx.FileTools","deleteFile",0x16a1e8cf,"cx.FileTools.deleteFile","cx/FileTools.hx",28,0x84864d19)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(28)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(29)
			::sys::FileSystem_obj::deleteFile(path);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(30)
					HX_STACK_DO_THROW((HX_CSTRING("Can't delete file ") + path));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,deleteFile,(void))

Void FileTools_obj::deleteDirectory( ::String dir){
{
		HX_STACK_FRAME("cx.FileTools","deleteDirectory",0x729f8b3a,"cx.FileTools.deleteDirectory","cx/FileTools.hx",33,0x84864d19)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(34)
		::cx::FileTools_obj::deleteFilesInDirectory(dir);
		HX_STACK_LINE(35)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(36)
			::sys::FileSystem_obj::deleteDirectory(dir);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(37)
					HX_STACK_DO_THROW((HX_CSTRING("Can't delete directory ") + dir));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,deleteDirectory,(void))

Void FileTools_obj::deleteFilesInDirectory( ::String dir){
{
		HX_STACK_FRAME("cx.FileTools","deleteFilesInDirectory",0x77058b64,"cx.FileTools.deleteFilesInDirectory","cx/FileTools.hx",40,0x84864d19)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(41)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(dir))))){
			HX_STACK_LINE(41)
			HX_STACK_DO_THROW(HX_CSTRING("Directory doesnt exist!"));
		}
		HX_STACK_LINE(42)
		Array< ::String > files = ::cx::FileTools_obj::getFilesInDirectories(dir,null(),null(),null());		HX_STACK_VAR(files,"files");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while(((_g < files->length))){
				HX_STACK_LINE(43)
				::String file = files->__get(_g);		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(44)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(45)
					::cx::FileTools_obj::deleteFile(file);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(46)
							HX_STACK_DO_THROW((HX_CSTRING("Can't delete file ") + file));
						}
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,deleteFilesInDirectory,(void))

Void FileTools_obj::createDirectory( ::String dir){
{
		HX_STACK_FRAME("cx.FileTools","createDirectory",0xd1300249,"cx.FileTools.createDirectory","cx/FileTools.hx",50,0x84864d19)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(51)
		if ((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(dir)))){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(52)
		::sys::FileSystem_obj::createDirectory(dir);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,createDirectory,(void))

bool FileTools_obj::exists( ::String path){
	HX_STACK_FRAME("cx.FileTools","exists",0x0eee7664,"cx.FileTools.exists","cx/FileTools.hx",57,0x84864d19)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(57)
	return ::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(path));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,exists,return )

::String FileTools_obj::safeSlashes( ::String path,hx::Null< bool >  __o_endSlash){
bool endSlash = __o_endSlash.Default(false);
	HX_STACK_FRAME("cx.FileTools","safeSlashes",0x53e5ba96,"cx.FileTools.safeSlashes","cx/FileTools.hx",60,0x84864d19)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(endSlash,"endSlash")
{
		HX_STACK_LINE(61)
		path = ::StringTools_obj::replace(path,HX_CSTRING("\\"),HX_CSTRING("/"));
		HX_STACK_LINE(62)
		if ((endSlash)){
			HX_STACK_LINE(62)
			if ((::StringTools_obj::endsWith(path,HX_CSTRING("/")))){
				HX_STACK_LINE(62)
				path = path;
			}
			else{
				HX_STACK_LINE(62)
				path = (path + HX_CSTRING("/"));
			}
		}
		HX_STACK_LINE(63)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,safeSlashes,return )

Void FileTools_obj::putContent( ::String filename,::String content){
{
		HX_STACK_FRAME("cx.FileTools","putContent",0xda2716b2,"cx.FileTools.putContent","cx/FileTools.hx",66,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(67)
		::sys::io::FileOutput f = ::sys::io::File_obj::write(filename,false);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(68)
		f->writeString(content);
		HX_STACK_LINE(69)
		f->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,putContent,(void))

::String FileTools_obj::getContent( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getContent",0xe8724fcb,"cx.FileTools.getContent","cx/FileTools.hx",73,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(73)
	return ::sys::io::File_obj::getContent(filename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getContent,return )

Array< ::String > FileTools_obj::getFilesNamesInDirectory( ::String dir,::String __o_ext,::String __o_startsWith){
::String ext = __o_ext.Default(HX_CSTRING(""));
::String startsWith = __o_startsWith.Default(HX_CSTRING(""));
	HX_STACK_FRAME("cx.FileTools","getFilesNamesInDirectory",0x1e5b1589,"cx.FileTools.getFilesNamesInDirectory","cx/FileTools.hx",78,0x84864d19)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(ext,"ext")
	HX_STACK_ARG(startsWith,"startsWith")
{
		HX_STACK_LINE(79)
		Array< ::String > filenames = ::sys::FileSystem_obj::readDirectory(dir);		HX_STACK_VAR(filenames,"filenames");
		HX_STACK_LINE(81)
		if (((ext != HX_CSTRING("")))){
			HX_STACK_LINE(82)
			Array< ::String > validFilenames = Array_obj< ::String >::__new();		HX_STACK_VAR(validFilenames,"validFilenames");
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(83)
				while(((_g < filenames->length))){
					HX_STACK_LINE(83)
					::String filename = filenames->__get(_g);		HX_STACK_VAR(filename,"filename");
					HX_STACK_LINE(83)
					++(_g);
					HX_STACK_LINE(84)
					if ((::StringTools_obj::endsWith(filename,ext))){
						HX_STACK_LINE(84)
						validFilenames->push(filename);
					}
				}
			}
			HX_STACK_LINE(86)
			filenames = validFilenames;
		}
		HX_STACK_LINE(89)
		if (((startsWith != HX_CSTRING("")))){
			HX_STACK_LINE(90)
			Array< ::String > validFilenames = Array_obj< ::String >::__new();		HX_STACK_VAR(validFilenames,"validFilenames");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(91)
				while(((_g < filenames->length))){
					HX_STACK_LINE(91)
					::String filename = filenames->__get(_g);		HX_STACK_VAR(filename,"filename");
					HX_STACK_LINE(91)
					++(_g);
					HX_STACK_LINE(92)
					if ((::StringTools_obj::startsWith(filename,startsWith))){
						HX_STACK_LINE(92)
						validFilenames->push(filename);
					}
				}
			}
			HX_STACK_LINE(94)
			filenames = validFilenames;
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::String a,::String b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","cx/FileTools.hx",97,0x84864d19)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(97)
				::String _g = a.toLowerCase();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(97)
				return ::Reflect_obj::compare(_g,b.toLowerCase());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(97)
		filenames->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(98)
		return filenames;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FileTools_obj,getFilesNamesInDirectory,return )

Array< ::String > FileTools_obj::getDirectories( ::String dir,hx::Null< bool >  __o_includeFiles,Array< ::String > dirs,::String __o_giveDirsExt){
bool includeFiles = __o_includeFiles.Default(false);
::String giveDirsExt = __o_giveDirsExt.Default(HX_CSTRING(""));
	HX_STACK_FRAME("cx.FileTools","getDirectories",0x0230cf9d,"cx.FileTools.getDirectories","cx/FileTools.hx",101,0x84864d19)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(includeFiles,"includeFiles")
	HX_STACK_ARG(dirs,"dirs")
	HX_STACK_ARG(giveDirsExt,"giveDirsExt")
{
		HX_STACK_LINE(102)
		Array< ::String > items = ::sys::FileSystem_obj::readDirectory(dir);		HX_STACK_VAR(items,"items");
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			while(((_g < items->length))){
				HX_STACK_LINE(103)
				::String item = items->__get(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(103)
				++(_g);
				HX_STACK_LINE(104)
				::String testdir = ((dir + HX_CSTRING("/")) + item);		HX_STACK_VAR(testdir,"testdir");
				HX_STACK_LINE(105)
				if ((::sys::FileSystem_obj::isDirectory(testdir))){
					HX_STACK_LINE(106)
					if (((dirs == null()))){
						HX_STACK_LINE(106)
						dirs = Array_obj< ::String >::__new();
					}
					HX_STACK_LINE(108)
					::String dirname;		HX_STACK_VAR(dirname,"dirname");
					HX_STACK_LINE(108)
					if (((giveDirsExt != HX_CSTRING("")))){
						HX_STACK_LINE(108)
						dirname = (testdir + giveDirsExt);
					}
					else{
						HX_STACK_LINE(108)
						dirname = testdir;
					}
					HX_STACK_LINE(109)
					dirs->push(dirname);
					HX_STACK_LINE(111)
					::cx::FileTools_obj::getDirectories(testdir,includeFiles,dirs,giveDirsExt);
				}
				else{
					HX_STACK_LINE(113)
					if ((includeFiles)){
						HX_STACK_LINE(114)
						if (((dirs == null()))){
							HX_STACK_LINE(114)
							dirs = Array_obj< ::String >::__new();
						}
						HX_STACK_LINE(115)
						dirs->push(testdir);
					}
				}
			}
		}
		HX_STACK_LINE(119)
		return dirs;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FileTools_obj,getDirectories,return )

Array< ::String > FileTools_obj::getFilesInDirectories( ::String dir,::String __o_ext,Dynamic __o_recursive,Array< ::String > dirs){
::String ext = __o_ext.Default(HX_CSTRING(""));
Dynamic recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("cx.FileTools","getFilesInDirectories",0x464efddd,"cx.FileTools.getFilesInDirectories","cx/FileTools.hx",122,0x84864d19)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_ARG(ext,"ext")
	HX_STACK_ARG(recursive,"recursive")
	HX_STACK_ARG(dirs,"dirs")
{
		HX_STACK_LINE(123)
		if (((dirs == null()))){
			HX_STACK_LINE(123)
			dirs = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(124)
		Array< ::String > items = ::sys::FileSystem_obj::readDirectory(dir);		HX_STACK_VAR(items,"items");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			while(((_g < items->length))){
				HX_STACK_LINE(125)
				::String item = items->__get(_g);		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(125)
				++(_g);
				HX_STACK_LINE(126)
				::String testdir = ((dir + HX_CSTRING("/")) + item);		HX_STACK_VAR(testdir,"testdir");
				HX_STACK_LINE(127)
				if ((::sys::FileSystem_obj::isDirectory(testdir))){
					HX_STACK_LINE(129)
					::cx::FileTools_obj::getFilesInDirectories(testdir,ext,recursive,dirs);
				}
				else{
					HX_STACK_LINE(131)
					if (((ext != HX_CSTRING("")))){
						HX_STACK_LINE(132)
						if ((::StringTools_obj::endsWith(testdir,ext))){
							HX_STACK_LINE(132)
							dirs->push(testdir);
						}
					}
					else{
						HX_STACK_LINE(133)
						dirs->push(testdir);
					}
				}
			}
		}
		HX_STACK_LINE(136)
		return dirs;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FileTools_obj,getFilesInDirectories,return )

::haxe::io::Bytes FileTools_obj::getBytes( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getBytes",0x0f2aa27d,"cx.FileTools.getBytes","cx/FileTools.hx",179,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(179)
	return ::sys::io::File_obj::getBytes(filename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getBytes,return )

Void FileTools_obj::putBytes( ::String filename,::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("cx.FileTools","putBytes",0xab4811a4,"cx.FileTools.putBytes","cx/FileTools.hx",182,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(183)
		::sys::io::FileOutput f = ::sys::io::File_obj::write(filename,true);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(184)
		f->write(bytes);
		HX_STACK_LINE(185)
		f->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,putBytes,(void))

Void FileTools_obj::putBinaryContent( ::String filename,::String content){
{
		HX_STACK_FRAME("cx.FileTools","putBinaryContent",0x58405571,"cx.FileTools.putBinaryContent","cx/FileTools.hx",188,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(189)
		::sys::io::FileOutput f = ::sys::io::File_obj::write(filename,true);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(190)
		f->writeString(content);
		HX_STACK_LINE(191)
		f->close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,putBinaryContent,(void))

Void FileTools_obj::executeFile( ::String filename){
{
		HX_STACK_FRAME("cx.FileTools","executeFile",0x31a77dc9,"cx.FileTools.executeFile","cx/FileTools.hx",194,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_LINE(195)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename))))){
			HX_STACK_LINE(195)
			HX_STACK_DO_THROW((HX_CSTRING("Can't find file: ") + filename));
		}
		HX_STACK_LINE(196)
		::String command;		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(197)
		command = (((HX_CSTRING("\"") + ::Sys_obj::getCwd()) + filename) + HX_CSTRING("\""));
		HX_STACK_LINE(198)
		command = ::StringTools_obj::replace(command,HX_CSTRING("/"),HX_CSTRING("\\"));
		HX_STACK_LINE(200)
		if ((!(::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(command))))){
			HX_STACK_LINE(201)
			command = ((HX_CSTRING("\"") + ::sys::FileSystem_obj::fullPath(filename)) + HX_CSTRING("\""));
			HX_STACK_LINE(202)
			command = ::StringTools_obj::replace(command,HX_CSTRING("/"),HX_CSTRING("\\"));
		}
		HX_STACK_LINE(204)
		::Sys_obj::command(command,null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,executeFile,(void))

Void FileTools_obj::putContentExecute( ::String filename,::String content){
{
		HX_STACK_FRAME("cx.FileTools","putContentExecute",0x7cf935a3,"cx.FileTools.putContentExecute","cx/FileTools.hx",207,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(208)
		::cx::FileTools_obj::putContent(filename,content);
		HX_STACK_LINE(209)
		::cx::FileTools_obj::executeFile(filename);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,putContentExecute,(void))

Void FileTools_obj::putBinaryContentExecute( ::String filename,::String content){
{
		HX_STACK_FRAME("cx.FileTools","putBinaryContentExecute",0xc846dcc4,"cx.FileTools.putBinaryContentExecute","cx/FileTools.hx",212,0x84864d19)
		HX_STACK_ARG(filename,"filename")
		HX_STACK_ARG(content,"content")
		HX_STACK_LINE(213)
		::cx::FileTools_obj::putBinaryContent(filename,content);
		HX_STACK_LINE(214)
		::cx::FileTools_obj::executeFile(filename);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,putBinaryContentExecute,(void))

::String FileTools_obj::stripLastSlash( ::String path){
	HX_STACK_FRAME("cx.FileTools","stripLastSlash",0xd8ca8097,"cx.FileTools.stripLastSlash","cx/FileTools.hx",217,0x84864d19)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(218)
	if ((::StringTools_obj::endsWith(path,HX_CSTRING("/")))){
		HX_STACK_LINE(218)
		path = path.substr((int)0,(path.length - (int)1));
	}
	HX_STACK_LINE(219)
	if ((::StringTools_obj::endsWith(path,HX_CSTRING("\\")))){
		HX_STACK_LINE(219)
		path = path.substr((int)0,(path.length - (int)1));
	}
	HX_STACK_LINE(220)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,stripLastSlash,return )

::String FileTools_obj::stripPath( ::String filename){
	HX_STACK_FRAME("cx.FileTools","stripPath",0x71bf5d15,"cx.FileTools.stripPath","cx/FileTools.hx",224,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(225)
	filename = ::StringTools_obj::replace(filename,HX_CSTRING("\\"),HX_CSTRING("/"));
	HX_STACK_LINE(226)
	return filename.substr((filename.lastIndexOf(HX_CSTRING("/"),null()) + (int)1),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,stripPath,return )

::String FileTools_obj::getFirstFilenameSegment( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getFirstFilenameSegment",0x66590f8a,"cx.FileTools.getFirstFilenameSegment","cx/FileTools.hx",230,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(231)
	filename = ::cx::FileTools_obj::stripPath(filename);
	HX_STACK_LINE(232)
	Array< ::String > segments = filename.split(HX_CSTRING("."));		HX_STACK_VAR(segments,"segments");
	HX_STACK_LINE(233)
	return segments->__get((int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getFirstFilenameSegment,return )

Dynamic FileTools_obj::getFileAgeSeconds( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getFileAgeSeconds",0x69db68ca,"cx.FileTools.getFileAgeSeconds","cx/FileTools.hx",236,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(237)
	if ((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(filename)))){
		HX_STACK_LINE(238)
		Dynamic stat = ::sys::FileSystem_obj::stat(filename);		HX_STACK_VAR(stat,"stat");
		HX_STACK_LINE(239)
		::Date a = stat->__Field(HX_CSTRING("atime"),true);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(240)
		Float _g = ::Date_obj::now()->getTime();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(240)
		return ::Std_obj::_int((Float(((_g - stat->__Field(HX_CSTRING("atime"),true)->__Field(HX_CSTRING("getTime"),true)()))) / Float((int)1000)));
	}
	HX_STACK_LINE(242)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getFileAgeSeconds,return )

::String FileTools_obj::getDirectory( ::String fullfilename,::String __o_slash){
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.FileTools","getDirectory",0xa562fd7f,"cx.FileTools.getDirectory","cx/FileTools.hx",246,0x84864d19)
	HX_STACK_ARG(fullfilename,"fullfilename")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(246)
		return ::cx::Tools_obj::stringBeforeIncludingLast(::cx::FileTools_obj::safeSlashes(fullfilename,null()),slash);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,getDirectory,return )

::String FileTools_obj::getFilename( ::String fullfilename,hx::Null< bool >  __o_includeExt){
bool includeExt = __o_includeExt.Default(true);
	HX_STACK_FRAME("cx.FileTools","getFilename",0xc3d9abf5,"cx.FileTools.getFilename","cx/FileTools.hx",249,0x84864d19)
	HX_STACK_ARG(fullfilename,"fullfilename")
	HX_STACK_ARG(includeExt,"includeExt")
{
		HX_STACK_LINE(250)
		::String filename = ::cx::StrTools_obj::afterLast(::cx::FileTools_obj::safeSlashes(fullfilename,null()),HX_CSTRING("/"),null());		HX_STACK_VAR(filename,"filename");
		HX_STACK_LINE(251)
		if ((!(includeExt))){
			HX_STACK_LINE(251)
			filename = ::cx::PathTools_obj::excludeExtension(filename);
		}
		HX_STACK_LINE(252)
		return filename;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,getFilename,return )

Array< ::String > FileTools_obj::getArrayFromItemsFile( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getArrayFromItemsFile",0x90ed7d27,"cx.FileTools.getArrayFromItemsFile","cx/FileTools.hx",255,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(256)
	Array< ::String > ret = Array_obj< ::String >::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(257)
	::sys::io::FileInput file = ::sys::io::File_obj::read(filename,false);		HX_STACK_VAR(file,"file");
	HX_STACK_LINE(258)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(259)
		while((true)){
			HX_STACK_LINE(260)
			::String line = ::StringTools_obj::trim(file->readLine());		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(261)
			ret->push(line);
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(265)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getArrayFromItemsFile,return )

::String FileTools_obj::getExtension( ::String filename){
	HX_STACK_FRAME("cx.FileTools","getExtension",0x7a2e9e91,"cx.FileTools.getExtension","cx/FileTools.hx",269,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(269)
	return ::cx::PathTools_obj::getExtension(filename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,getExtension,return )

::String FileTools_obj::excludeExtension( ::String filename){
	HX_STACK_FRAME("cx.FileTools","excludeExtension",0xc1685bcd,"cx.FileTools.excludeExtension","cx/FileTools.hx",273,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(273)
	return ::cx::PathTools_obj::excludeExtension(filename);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileTools_obj,excludeExtension,return )

Void FileTools_obj::rename( ::String path,::String newpath){
{
		HX_STACK_FRAME("cx.FileTools","rename",0x54358406,"cx.FileTools.rename","cx/FileTools.hx",277,0x84864d19)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(newpath,"newpath")
		HX_STACK_LINE(277)
		::sys::FileSystem_obj::rename(path,newpath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FileTools_obj,rename,(void))

::String FileTools_obj::correctPath( ::String path,hx::Null< bool >  __o_endSlash,::String __o_slash){
bool endSlash = __o_endSlash.Default(false);
::String slash = __o_slash.Default(HX_CSTRING("/"));
	HX_STACK_FRAME("cx.FileTools","correctPath",0xc1b3b1a7,"cx.FileTools.correctPath","cx/FileTools.hx",280,0x84864d19)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(endSlash,"endSlash")
	HX_STACK_ARG(slash,"slash")
{
		HX_STACK_LINE(281)
		path = ::StringTools_obj::replace(path,HX_CSTRING("\\"),slash);
		HX_STACK_LINE(283)
		if ((endSlash)){
			HX_STACK_LINE(284)
			if ((!(::StringTools_obj::endsWith(path,slash)))){
				HX_STACK_LINE(284)
				hx::AddEq(path,slash);
			}
		}
		else{
			HX_STACK_LINE(286)
			if ((::StringTools_obj::endsWith(path,slash))){
				HX_STACK_LINE(286)
				path = path.substr((int)0,(path.length - (int)1));
			}
		}
		HX_STACK_LINE(289)
		path = ::StringTools_obj::replace(path,HX_CSTRING("//"),HX_CSTRING("/"));
		HX_STACK_LINE(290)
		return path;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FileTools_obj,correctPath,return )

Void FileTools_obj::backup( ::String filename,::String __o_backupDir,hx::Null< int >  __o_generations){
::String backupDir = __o_backupDir.Default(HX_CSTRING(""));
int generations = __o_generations.Default(2);
	HX_STACK_FRAME("cx.FileTools","backup",0x99a7b0ca,"cx.FileTools.backup","cx/FileTools.hx",293,0x84864d19)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(backupDir,"backupDir")
	HX_STACK_ARG(generations,"generations")
{
		HX_STACK_LINE(294)
		filename = ::cx::FileTools_obj::correctPath(filename,null(),null());
		HX_STACK_LINE(295)
		(generations)--;
		HX_STACK_LINE(296)
		::String directory = ::cx::FileTools_obj::getDirectory(filename,null());		HX_STACK_VAR(directory,"directory");
		HX_STACK_LINE(297)
		::String filename1 = ::cx::FileTools_obj::getFilename(filename,null());		HX_STACK_VAR(filename1,"filename1");
		HX_STACK_LINE(298)
		::String backupDir1;		HX_STACK_VAR(backupDir1,"backupDir1");
		HX_STACK_LINE(298)
		if (((backupDir != HX_CSTRING("")))){
			HX_STACK_LINE(298)
			backupDir1 = ::cx::FileTools_obj::correctPath(backupDir,true,null());
		}
		else{
			HX_STACK_LINE(298)
			backupDir1 = HX_CSTRING("");
		}
		HX_STACK_LINE(300)
		while(((generations > (int)0))){
			HX_STACK_LINE(301)
			::String testfilename = ((((directory + backupDir1) + filename1) + HX_CSTRING(".backup")) + generations);		HX_STACK_VAR(testfilename,"testfilename");
			HX_STACK_LINE(302)
			::String newfilename = ((((directory + backupDir1) + filename1) + HX_CSTRING(".backup")) + ((generations + (int)1)));		HX_STACK_VAR(newfilename,"newfilename");
			HX_STACK_LINE(303)
			if ((::cx::FileTools_obj::exists(testfilename))){
				HX_STACK_LINE(305)
				::cx::FileTools_obj::rename(testfilename,newfilename);
			}
			HX_STACK_LINE(307)
			(generations)--;
		}
		HX_STACK_LINE(310)
		::String testfilename = (directory + filename1);		HX_STACK_VAR(testfilename,"testfilename");
		HX_STACK_LINE(311)
		::String newfilename = (((directory + backupDir1) + filename1) + HX_CSTRING(".backup1"));		HX_STACK_VAR(newfilename,"newfilename");
		HX_STACK_LINE(313)
		if ((::cx::FileTools_obj::exists(testfilename))){
			HX_STACK_LINE(315)
			::cx::FileTools_obj::rename(testfilename,newfilename);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FileTools_obj,backup,(void))


FileTools_obj::FileTools_obj()
{
}

Dynamic FileTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"rename") ) { return rename_dyn(); }
		if (HX_FIELD_EQ(inName,"backup") ) { return backup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"putBytes") ) { return putBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stripPath") ) { return stripPath_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deleteFile") ) { return deleteFile_dyn(); }
		if (HX_FIELD_EQ(inName,"putContent") ) { return putContent_dyn(); }
		if (HX_FIELD_EQ(inName,"getContent") ) { return getContent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"safeSlashes") ) { return safeSlashes_dyn(); }
		if (HX_FIELD_EQ(inName,"executeFile") ) { return executeFile_dyn(); }
		if (HX_FIELD_EQ(inName,"getFilename") ) { return getFilename_dyn(); }
		if (HX_FIELD_EQ(inName,"correctPath") ) { return correctPath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getDirectory") ) { return getDirectory_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDirectories") ) { return getDirectories_dyn(); }
		if (HX_FIELD_EQ(inName,"stripLastSlash") ) { return stripLastSlash_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deleteDirectory") ) { return deleteDirectory_dyn(); }
		if (HX_FIELD_EQ(inName,"createDirectory") ) { return createDirectory_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"putBinaryContent") ) { return putBinaryContent_dyn(); }
		if (HX_FIELD_EQ(inName,"excludeExtension") ) { return excludeExtension_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"putContentExecute") ) { return putContentExecute_dyn(); }
		if (HX_FIELD_EQ(inName,"getFileAgeSeconds") ) { return getFileAgeSeconds_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFilesInDirectories") ) { return getFilesInDirectories_dyn(); }
		if (HX_FIELD_EQ(inName,"getArrayFromItemsFile") ) { return getArrayFromItemsFile_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"deleteFilesInDirectory") ) { return deleteFilesInDirectory_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"putBinaryContentExecute") ) { return putBinaryContentExecute_dyn(); }
		if (HX_FIELD_EQ(inName,"getFirstFilenameSegment") ) { return getFirstFilenameSegment_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getFilesNamesInDirectory") ) { return getFilesNamesInDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FileTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FileTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("test"),
	HX_CSTRING("deleteFile"),
	HX_CSTRING("deleteDirectory"),
	HX_CSTRING("deleteFilesInDirectory"),
	HX_CSTRING("createDirectory"),
	HX_CSTRING("exists"),
	HX_CSTRING("safeSlashes"),
	HX_CSTRING("putContent"),
	HX_CSTRING("getContent"),
	HX_CSTRING("getFilesNamesInDirectory"),
	HX_CSTRING("getDirectories"),
	HX_CSTRING("getFilesInDirectories"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("putBytes"),
	HX_CSTRING("putBinaryContent"),
	HX_CSTRING("executeFile"),
	HX_CSTRING("putContentExecute"),
	HX_CSTRING("putBinaryContentExecute"),
	HX_CSTRING("stripLastSlash"),
	HX_CSTRING("stripPath"),
	HX_CSTRING("getFirstFilenameSegment"),
	HX_CSTRING("getFileAgeSeconds"),
	HX_CSTRING("getDirectory"),
	HX_CSTRING("getFilename"),
	HX_CSTRING("getArrayFromItemsFile"),
	HX_CSTRING("getExtension"),
	HX_CSTRING("excludeExtension"),
	HX_CSTRING("rename"),
	HX_CSTRING("correctPath"),
	HX_CSTRING("backup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileTools_obj::__mClass,"__mClass");
};

#endif

Class FileTools_obj::__mClass;

void FileTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("cx.FileTools"), hx::TCanCast< FileTools_obj> ,sStaticFields,sMemberFields,
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

void FileTools_obj::__boot()
{
}

} // end namespace cx
