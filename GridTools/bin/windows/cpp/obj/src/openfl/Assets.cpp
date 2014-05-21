#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_AssetCache
#include <openfl/AssetCache.h>
#endif
#ifndef INCLUDED_openfl_AssetLibrary
#include <openfl/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::openfl::AssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

bool Assets_obj::initialized;

bool Assets_obj::exists( ::String id,::openfl::AssetType type){
	HX_STACK_FRAME("openfl.Assets","exists",0xd3fc5ce9,"openfl.Assets.exists","openfl/Assets.hx",43,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(45)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(49)
	if (((type == null()))){
		HX_STACK_LINE(51)
		type = ::openfl::AssetType_obj::BINARY;
	}
	HX_STACK_LINE(55)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(56)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(57)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(59)
	if (((library != null()))){
		HX_STACK_LINE(61)
		return library->exists(symbolName,type);
	}
	HX_STACK_LINE(67)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::flash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getBitmapData",0xc93c7e82,"openfl.Assets.getBitmapData","openfl/Assets.hx",79,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(81)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(85)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->bitmapData->exists(id)) : bool(false) ))){
			HX_STACK_LINE(87)
			::flash::display::BitmapData bitmapData = ::openfl::Assets_obj::cache->bitmapData->get(id);		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(89)
			if ((::openfl::Assets_obj::isValidBitmapData(bitmapData))){
				HX_STACK_LINE(91)
				return bitmapData;
			}
		}
		HX_STACK_LINE(97)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(98)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(99)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(101)
		if (((library != null()))){
			HX_STACK_LINE(103)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(105)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::IMAGE))){
					HX_STACK_LINE(107)
					::flash::display::BitmapData bitmapData = library->getBitmapData(symbolName);		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(109)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(111)
						::openfl::Assets_obj::cache->bitmapData->set(id,bitmapData);
					}
					HX_STACK_LINE(115)
					return bitmapData;
				}
				else{
					HX_STACK_LINE(119)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] BitmapData asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),119,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(125)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),125,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(131)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),131,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
		}
		HX_STACK_LINE(137)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::flash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl.Assets","getBytes",0xa062f442,"openfl.Assets.getBytes","openfl/Assets.hx",148,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(150)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(154)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(155)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(156)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(158)
	::haxe::Log_obj::trace(symbolName,hx::SourceInfo(HX_CSTRING("Assets.hx"),158,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	HX_STACK_LINE(162)
	if (((library != null()))){
		HX_STACK_LINE(164)
		::haxe::Log_obj::trace(HX_CSTRING(" exists"),hx::SourceInfo(HX_CSTRING("Assets.hx"),164,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(167)
		if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
			HX_STACK_LINE(169)
			if ((library->isLocal(symbolName,::openfl::AssetType_obj::BINARY))){
				HX_STACK_LINE(171)
				::haxe::Log_obj::trace(HX_CSTRING("library getBytes"),hx::SourceInfo(HX_CSTRING("Assets.hx"),171,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
				HX_STACK_LINE(172)
				return library->getBytes(symbolName);
			}
			else{
				HX_STACK_LINE(176)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] String or ByteArray asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),176,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
			}
		}
		else{
			HX_STACK_LINE(182)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),182,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
		}
	}
	else{
		HX_STACK_LINE(188)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),188,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(194)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::flash::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getFont",0x9addf9d8,"openfl.Assets.getFont","openfl/Assets.hx",205,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(207)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(211)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->font->exists(id)) : bool(false) ))){
			HX_STACK_LINE(213)
			return ::openfl::Assets_obj::cache->font->get(id);
		}
		HX_STACK_LINE(217)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(218)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(219)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(221)
		if (((library != null()))){
			HX_STACK_LINE(223)
			if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
				HX_STACK_LINE(225)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::FONT))){
					HX_STACK_LINE(227)
					::flash::text::Font font = library->getFont(symbolName);		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(229)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(231)
						::openfl::Assets_obj::cache->font->set(id,font);
					}
					HX_STACK_LINE(235)
					return font;
				}
				else{
					HX_STACK_LINE(239)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Font asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),239,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
				}
			}
			else{
				HX_STACK_LINE(245)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),245,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
			}
		}
		else{
			HX_STACK_LINE(251)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),251,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
		}
		HX_STACK_LINE(257)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::openfl::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl.Assets","getLibrary",0x9baef692,"openfl.Assets.getLibrary","openfl/Assets.hx",262,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(264)
	if (((bool((name == null())) || bool((name == HX_CSTRING("")))))){
		HX_STACK_LINE(266)
		name = HX_CSTRING("default");
	}
	HX_STACK_LINE(270)
	return ::openfl::Assets_obj::libraries->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::flash::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl.Assets","getMovieClip",0x1d5e25f7,"openfl.Assets.getMovieClip","openfl/Assets.hx",281,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(283)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(287)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(288)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(289)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(291)
	if (((library != null()))){
		HX_STACK_LINE(293)
		if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
			HX_STACK_LINE(295)
			if ((library->isLocal(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
				HX_STACK_LINE(297)
				return library->getMovieClip(symbolName);
			}
			else{
				HX_STACK_LINE(301)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] MovieClip asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),301,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
			}
		}
		else{
			HX_STACK_LINE(307)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),307,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
		}
	}
	else{
		HX_STACK_LINE(313)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),313,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMovieClip")));
	}
	HX_STACK_LINE(319)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::flash::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getMusic",0xf325bc7c,"openfl.Assets.getMusic","openfl/Assets.hx",330,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(332)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(336)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->sound->exists(id)) : bool(false) ))){
			HX_STACK_LINE(338)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id);		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(340)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(342)
				return sound;
			}
		}
		HX_STACK_LINE(348)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(349)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(350)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(352)
		if (((library != null()))){
			HX_STACK_LINE(354)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MUSIC))){
				HX_STACK_LINE(356)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::MUSIC))){
					HX_STACK_LINE(358)
					::flash::media::Sound sound = library->getMusic(symbolName);		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(360)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(362)
						::openfl::Assets_obj::cache->sound->set(id,sound);
					}
					HX_STACK_LINE(366)
					return sound;
				}
				else{
					HX_STACK_LINE(370)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Sound asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),370,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
				}
			}
			else{
				HX_STACK_LINE(376)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),376,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
			}
		}
		else{
			HX_STACK_LINE(382)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),382,HX_CSTRING("openfl.Assets"),HX_CSTRING("getMusic")));
		}
		HX_STACK_LINE(388)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl.Assets","getPath",0xa16f81ae,"openfl.Assets.getPath","openfl/Assets.hx",399,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(401)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(405)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(406)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(407)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(409)
	if (((library != null()))){
		HX_STACK_LINE(411)
		if ((library->exists(symbolName,null()))){
			HX_STACK_LINE(413)
			return library->getPath(symbolName);
		}
		else{
			HX_STACK_LINE(417)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),417,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
		}
	}
	else{
		HX_STACK_LINE(423)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),423,HX_CSTRING("openfl.Assets"),HX_CSTRING("getPath")));
	}
	HX_STACK_LINE(429)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::flash::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","getSound",0x639778a6,"openfl.Assets.getSound","openfl/Assets.hx",440,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(442)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(446)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->sound->exists(id)) : bool(false) ))){
			HX_STACK_LINE(448)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id);		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(450)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(452)
				return sound;
			}
		}
		HX_STACK_LINE(458)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(459)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(460)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(462)
		if (((library != null()))){
			HX_STACK_LINE(464)
			if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
				HX_STACK_LINE(466)
				if ((library->isLocal(symbolName,::openfl::AssetType_obj::SOUND))){
					HX_STACK_LINE(468)
					::flash::media::Sound sound = library->getSound(symbolName);		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(470)
					if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
						HX_STACK_LINE(472)
						::openfl::Assets_obj::cache->sound->set(id,sound);
					}
					HX_STACK_LINE(476)
					return sound;
				}
				else{
					HX_STACK_LINE(480)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] Sound asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),480,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
				}
			}
			else{
				HX_STACK_LINE(486)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),486,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
			}
		}
		else{
			HX_STACK_LINE(492)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),492,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
		}
		HX_STACK_LINE(498)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl.Assets","getText",0xa41768b6,"openfl.Assets.getText","openfl/Assets.hx",509,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(511)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(515)
	::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(516)
	::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(517)
	::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(519)
	if (((library != null()))){
		HX_STACK_LINE(521)
		if ((library->exists(symbolName,::openfl::AssetType_obj::TEXT))){
			HX_STACK_LINE(523)
			if ((library->isLocal(symbolName,::openfl::AssetType_obj::TEXT))){
				HX_STACK_LINE(525)
				return library->getText(symbolName);
			}
			else{
				HX_STACK_LINE(529)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] String asset \"") + id) + HX_CSTRING("\" exists, but only asynchronously")),hx::SourceInfo(HX_CSTRING("Assets.hx"),529,HX_CSTRING("openfl.Assets"),HX_CSTRING("getText")));
			}
		}
		else{
			HX_STACK_LINE(535)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),535,HX_CSTRING("openfl.Assets"),HX_CSTRING("getText")));
		}
	}
	else{
		HX_STACK_LINE(541)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),541,HX_CSTRING("openfl.Assets"),HX_CSTRING("getText")));
	}
	HX_STACK_LINE(547)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("openfl.Assets","initialize",0xf9987add,"openfl.Assets.initialize","openfl/Assets.hx",554,0x989d477c)
		HX_STACK_LINE(554)
		if ((!(::openfl::Assets_obj::initialized))){
			HX_STACK_LINE(558)
			::openfl::Assets_obj::registerLibrary(HX_CSTRING("default"),::DefaultAssetLibrary_obj::__new());
			HX_STACK_LINE(562)
			::openfl::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::openfl::AssetType type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","isLocal",0x9a115974,"openfl.Assets.isLocal","openfl/Assets.hx",569,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(571)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(575)
		if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){
			HX_STACK_LINE(577)
			if (((bool((type == ::openfl::AssetType_obj::IMAGE)) || bool((type == null()))))){
				HX_STACK_LINE(579)
				if ((::openfl::Assets_obj::cache->bitmapData->exists(id))){
					HX_STACK_LINE(579)
					return true;
				}
			}
			HX_STACK_LINE(583)
			if (((bool((type == ::openfl::AssetType_obj::FONT)) || bool((type == null()))))){
				HX_STACK_LINE(585)
				if ((::openfl::Assets_obj::cache->font->exists(id))){
					HX_STACK_LINE(585)
					return true;
				}
			}
			HX_STACK_LINE(589)
			if (((bool((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC)))) || bool((type == null()))))){
				HX_STACK_LINE(591)
				if ((::openfl::Assets_obj::cache->sound->exists(id))){
					HX_STACK_LINE(591)
					return true;
				}
			}
		}
		HX_STACK_LINE(597)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(598)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(599)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(601)
		if (((library != null()))){
			HX_STACK_LINE(603)
			return library->isLocal(symbolName,type);
		}
		HX_STACK_LINE(609)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::flash::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl.Assets","isValidBitmapData",0xc2fb171e,"openfl.Assets.isValidBitmapData","openfl/Assets.hx",614,0x989d477c)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(619)
	return (bitmapData->__handle != null());
	HX_STACK_LINE(640)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::flash::media::Sound sound){
	HX_STACK_FRAME("openfl.Assets","isValidSound",0x9717a58a,"openfl.Assets.isValidSound","openfl/Assets.hx",645,0x989d477c)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(650)
	return (bool((sound->__handle != null())) && bool((sound->__handle != (int)0)));
	HX_STACK_LINE(655)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Void Assets_obj::loadBitmapData( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadBitmapData",0x79a7538c,"openfl.Assets.loadBitmapData","openfl/Assets.hx",660,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(660)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(660)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(662)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(666)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->bitmapData->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(668)
			::flash::display::BitmapData bitmapData = ::openfl::Assets_obj::cache->bitmapData->get(id1->__get((int)0));		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(670)
			if ((::openfl::Assets_obj::isValidBitmapData(bitmapData))){
				HX_STACK_LINE(672)
				handler1->__GetItem((int)0)(bitmapData).Cast< Void >();
				HX_STACK_LINE(673)
				return null();
			}
		}
		HX_STACK_LINE(679)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(680)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(681)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(683)
		if (((library != null()))){
			HX_STACK_LINE(685)
			if ((library->exists(symbolName,::openfl::AssetType_obj::IMAGE))){
				HX_STACK_LINE(687)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::display::BitmapData bitmapData){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/Assets.hx",689,0x989d477c)
						HX_STACK_ARG(bitmapData,"bitmapData")
						{
							HX_STACK_LINE(691)
							::openfl::Assets_obj::cache->bitmapData->set(id1->__get((int)0),bitmapData);
							HX_STACK_LINE(692)
							handler1->__GetItem((int)0)(bitmapData).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(689)
					library->loadBitmapData(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(698)
					library->loadBitmapData(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(702)
				return null();
			}
			else{
				HX_STACK_LINE(706)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),706,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
			}
		}
		else{
			HX_STACK_LINE(712)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),712,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBitmapData")));
		}
		HX_STACK_LINE(718)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,(void))

Void Assets_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadBytes",0xeb3c3b78,"openfl.Assets.loadBytes","openfl/Assets.hx",723,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(725)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(731)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(732)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(733)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(735)
		if (((library != null()))){
			HX_STACK_LINE(737)
			if ((library->exists(symbolName,::openfl::AssetType_obj::BINARY))){
				HX_STACK_LINE(739)
				library->loadBytes(symbolName,handler);
				HX_STACK_LINE(740)
				return null();
			}
			else{
				HX_STACK_LINE(744)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),744,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
			}
		}
		else{
			HX_STACK_LINE(750)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),750,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadBytes")));
		}
		HX_STACK_LINE(756)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,(void))

Void Assets_obj::loadFont( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadFont",0x37540b62,"openfl.Assets.loadFont","openfl/Assets.hx",761,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(761)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(761)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(763)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(767)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->font->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(769)
			handler1->__GetItem((int)0)(::openfl::Assets_obj::cache->font->get(id1->__get((int)0))).Cast< Void >();
			HX_STACK_LINE(770)
			return null();
		}
		HX_STACK_LINE(774)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(775)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(776)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(778)
		if (((library != null()))){
			HX_STACK_LINE(780)
			if ((library->exists(symbolName,::openfl::AssetType_obj::FONT))){
				HX_STACK_LINE(782)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::text::Font font){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/Assets.hx",784,0x989d477c)
						HX_STACK_ARG(font,"font")
						{
							HX_STACK_LINE(786)
							::openfl::Assets_obj::cache->font->set(id1->__get((int)0),font);
							HX_STACK_LINE(787)
							handler1->__GetItem((int)0)(font).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(784)
					library->loadFont(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(793)
					library->loadFont(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(797)
				return null();
			}
			else{
				HX_STACK_LINE(801)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),801,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
			}
		}
		else{
			HX_STACK_LINE(807)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),807,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadFont")));
		}
		HX_STACK_LINE(813)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,(void))

Void Assets_obj::loadLibrary( ::String name,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadLibrary",0x44d0f748,"openfl.Assets.loadLibrary","openfl/Assets.hx",818,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(820)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(824)
		::String data = ::openfl::Assets_obj::getText(((HX_CSTRING("libraries/") + name) + HX_CSTRING(".dat")));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(826)
		if (((bool((data != null())) && bool((data != HX_CSTRING("")))))){
			HX_STACK_LINE(828)
			::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(data);		HX_STACK_VAR(unserializer,"unserializer");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/Assets.hx",829,0x989d477c)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("resolveEnum") , ::openfl::Assets_obj::resolveEnum_dyn(),false);
						__result->Add(HX_CSTRING("resolveClass") , ::openfl::Assets_obj::resolveClass_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(829)
			unserializer->setResolver(_Function_2_1::Block());
			HX_STACK_LINE(831)
			::openfl::AssetLibrary library = unserializer->unserialize();		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(832)
			::openfl::Assets_obj::libraries->set(name,library);
			HX_STACK_LINE(833)
			library->load(handler);
		}
		else{
			HX_STACK_LINE(837)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + name) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),837,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadLibrary")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,(void))

Void Assets_obj::loadMusic( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadMusic",0x3dff03b2,"openfl.Assets.loadMusic","openfl/Assets.hx",846,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(846)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(846)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(848)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(852)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->sound->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(854)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id1->__get((int)0));		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(856)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(858)
				handler1->__GetItem((int)0)(sound).Cast< Void >();
				HX_STACK_LINE(859)
				return null();
			}
		}
		HX_STACK_LINE(865)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(866)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(867)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(869)
		if (((library != null()))){
			HX_STACK_LINE(871)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MUSIC))){
				HX_STACK_LINE(873)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::media::Sound sound){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/Assets.hx",875,0x989d477c)
						HX_STACK_ARG(sound,"sound")
						{
							HX_STACK_LINE(877)
							::openfl::Assets_obj::cache->sound->set(id1->__get((int)0),sound);
							HX_STACK_LINE(878)
							handler1->__GetItem((int)0)(sound).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(875)
					library->loadMusic(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(884)
					library->loadMusic(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(888)
				return null();
			}
			else{
				HX_STACK_LINE(892)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),892,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMusic")));
			}
		}
		else{
			HX_STACK_LINE(898)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),898,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMusic")));
		}
		HX_STACK_LINE(904)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,(void))

Void Assets_obj::loadMovieClip( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadMovieClip",0xd38a402d,"openfl.Assets.loadMovieClip","openfl/Assets.hx",909,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(911)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(915)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(916)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(917)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(919)
		if (((library != null()))){
			HX_STACK_LINE(921)
			if ((library->exists(symbolName,::openfl::AssetType_obj::MOVIE_CLIP))){
				HX_STACK_LINE(923)
				library->loadMovieClip(symbolName,handler);
				HX_STACK_LINE(924)
				return null();
			}
			else{
				HX_STACK_LINE(928)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),928,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
			}
		}
		else{
			HX_STACK_LINE(934)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),934,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadMovieClip")));
		}
		HX_STACK_LINE(940)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,(void))

Void Assets_obj::loadSound( ::String id,Dynamic handler,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl.Assets","loadSound",0xae70bfdc,"openfl.Assets.loadSound","openfl/Assets.hx",945,0x989d477c)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(945)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");
		HX_STACK_LINE(945)
		Array< ::String > id1 = Array_obj< ::String >::__new().Add(id);		HX_STACK_VAR(id1,"id1");
		HX_STACK_LINE(947)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(951)
		if (((  (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))) ? bool(::openfl::Assets_obj::cache->sound->exists(id1->__get((int)0))) : bool(false) ))){
			HX_STACK_LINE(953)
			::flash::media::Sound sound = ::openfl::Assets_obj::cache->sound->get(id1->__get((int)0));		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(955)
			if ((::openfl::Assets_obj::isValidSound(sound))){
				HX_STACK_LINE(957)
				handler1->__GetItem((int)0)(sound).Cast< Void >();
				HX_STACK_LINE(958)
				return null();
			}
		}
		HX_STACK_LINE(964)
		::String libraryName = id1->__get((int)0).substring((int)0,id1->__get((int)0).indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(965)
		::String symbolName = id1->__get((int)0).substr((id1->__get((int)0).indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(966)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(968)
		if (((library != null()))){
			HX_STACK_LINE(970)
			if ((library->exists(symbolName,::openfl::AssetType_obj::SOUND))){
				HX_STACK_LINE(972)
				if (((bool(useCache) && bool(::openfl::Assets_obj::cache->enabled)))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,handler1,Array< ::String >,id1)
					Void run(::flash::media::Sound sound){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/Assets.hx",974,0x989d477c)
						HX_STACK_ARG(sound,"sound")
						{
							HX_STACK_LINE(976)
							::openfl::Assets_obj::cache->sound->set(id1->__get((int)0),sound);
							HX_STACK_LINE(977)
							handler1->__GetItem((int)0)(sound).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(974)
					library->loadSound(symbolName, Dynamic(new _Function_4_1(handler1,id1)));
				}
				else{
					HX_STACK_LINE(983)
					library->loadSound(symbolName,handler1->__GetItem((int)0));
				}
				HX_STACK_LINE(987)
				return null();
			}
			else{
				HX_STACK_LINE(991)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id1->__get((int)0)) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),991,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
			}
		}
		else{
			HX_STACK_LINE(997)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),997,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadSound")));
		}
		HX_STACK_LINE(1003)
		handler1->__GetItem((int)0)(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,(void))

Void Assets_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl.Assets","loadText",0x408d7a40,"openfl.Assets.loadText","openfl/Assets.hx",1008,0x989d477c)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1010)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(1014)
		::String libraryName = id.substring((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(1015)
		::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(1016)
		::openfl::AssetLibrary library = ::openfl::Assets_obj::getLibrary(libraryName);		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(1018)
		if (((library != null()))){
			HX_STACK_LINE(1020)
			if ((library->exists(symbolName,::openfl::AssetType_obj::TEXT))){
				HX_STACK_LINE(1022)
				library->loadText(symbolName,handler);
				HX_STACK_LINE(1023)
				return null();
			}
			else{
				HX_STACK_LINE(1027)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),1027,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadText")));
			}
		}
		else{
			HX_STACK_LINE(1033)
			::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),1033,HX_CSTRING("openfl.Assets"),HX_CSTRING("loadText")));
		}
		HX_STACK_LINE(1039)
		handler(null()).Cast< Void >();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,(void))

Void Assets_obj::registerLibrary( ::String name,::openfl::AssetLibrary library){
{
		HX_STACK_FRAME("openfl.Assets","registerLibrary",0x9230822b,"openfl.Assets.registerLibrary","openfl/Assets.hx",1044,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(1046)
		if ((::openfl::Assets_obj::libraries->exists(name))){
			HX_STACK_LINE(1048)
			::openfl::Assets_obj::unloadLibrary(name);
		}
		HX_STACK_LINE(1052)
		::openfl::Assets_obj::libraries->set(name,library);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveClass",0x76ca4479,"openfl.Assets.resolveClass","openfl/Assets.hx",1059,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1059)
	return ::Type_obj::resolveClass(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl.Assets","resolveEnum",0x1314a1e0,"openfl.Assets.resolveEnum","openfl/Assets.hx",1064,0x989d477c)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1066)
	::Enum value = ::Type_obj::resolveEnum(name);		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1078)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl.Assets","unloadLibrary",0x6a51c84f,"openfl.Assets.unloadLibrary","openfl/Assets.hx",1083,0x989d477c)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(1085)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(1089)
		Dynamic keys = ::openfl::Assets_obj::cache->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(1091)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(1093)
				::String libraryName = key.substring((int)0,key.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(1094)
				::String symbolName = key.substr((key.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(1096)
				if (((libraryName == name))){
					HX_STACK_LINE(1098)
					::openfl::Assets_obj::cache->bitmapData->remove(key);
				}
			}
;
		}
		HX_STACK_LINE(1104)
		::openfl::Assets_obj::libraries->remove(name);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))


Assets_obj::Assets_obj()
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return libraries; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { return loadLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return resolveEnum_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { return isValidSound_dyn(); }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { return unloadLibrary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { return registerLibrary_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { return isValidBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::openfl::AssetCache >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cache"),
	HX_CSTRING("libraries"),
	HX_CSTRING("initialized"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("getMovieClip"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("initialize"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("isValidBitmapData"),
	HX_CSTRING("isValidSound"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadLibrary"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadMovieClip"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	HX_CSTRING("registerLibrary"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("resolveEnum"),
	HX_CSTRING("unloadLibrary"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
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

void Assets_obj::__boot()
{
	cache= ::openfl::AssetCache_obj::__new();
	libraries= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace openfl
