#include <hxcpp.h>

#ifndef INCLUDED_cx_FileTools
#include <cx/FileTools.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_sx_controllers_SQLiteController
#include <sx/controllers/SQLiteController.h>
#endif
#ifndef INCLUDED_sx_data_Files
#include <sx/data/Files.h>
#endif
#ifndef INCLUDED_sx_util_ScorxDb
#include <sx/util/ScorxDb.h>
#endif
#ifndef INCLUDED_systools_Dialogs
#include <systools/Dialogs.h>
#endif
namespace sx{
namespace controllers{

Void SQLiteController_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.SQLiteController","new",0x3dfe7afa,"sx.controllers.SQLiteController.new","haxe/ui/toolkit/core/Macros.hx",139,0x3fba9eca)
{
	HX_STACK_LINE(21)
	super::__construct(HX_CSTRING("assets/sqlitefile.xml"));
	HX_STACK_LINE(31)
	this->tiProjectName = this->getComponentAs(HX_CSTRING("tiProjectName"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","sx/controllers/SQLiteController.hx",35,0xfc54bd74)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(35)
			::haxe::Log_obj::trace(HX_CSTRING("onChange"),hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),35,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("new")));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(33)
	this->tiProjectName->set_onChange( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(40)
	this->attachEvent(HX_CSTRING("btnCreateSQLite"),HX_CSTRING("haxeui_click"),this->onBtnSqliteClick_dyn());
	HX_STACK_LINE(43)
	this->attachEvent(HX_CSTRING("btnPngFiles"),HX_CSTRING("haxeui_click"),this->onBtnPngFilesClick_dyn());
	HX_STACK_LINE(44)
	this->attachEvent(HX_CSTRING("btnDirectoryMp3"),HX_CSTRING("haxeui_click"),this->onBtnMp3FilesClick_dyn());
}
;
	return null();
}

//SQLiteController_obj::~SQLiteController_obj() { }

Dynamic SQLiteController_obj::__CreateEmpty() { return  new SQLiteController_obj; }
hx::ObjectPtr< SQLiteController_obj > SQLiteController_obj::__new()
{  hx::ObjectPtr< SQLiteController_obj > result = new SQLiteController_obj();
	result->__construct();
	return result;}

Dynamic SQLiteController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SQLiteController_obj > result = new SQLiteController_obj();
	result->__construct();
	return result;}

Void SQLiteController_obj::onProjectnameChange( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("sx.controllers.SQLiteController","onProjectnameChange",0xe09d68af,"sx.controllers.SQLiteController.onProjectnameChange","sx/controllers/SQLiteController.hx",48,0xfc54bd74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(49)
		::haxe::Log_obj::trace(HX_CSTRING("change"),hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),49,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("onProjectnameChange")));
		HX_STACK_LINE(50)
		::sx::data::Files_obj::projectName = this->tiProjectName->get_text();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SQLiteController_obj,onProjectnameChange,(void))

Void SQLiteController_obj::onBtnPngFilesClick( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("sx.controllers.SQLiteController","onBtnPngFilesClick",0x9ffbae43,"sx.controllers.SQLiteController.onBtnPngFilesClick","sx/controllers/SQLiteController.hx",55,0xfc54bd74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		Array< ::String > _g = Array_obj< ::String >::__new().Add(HX_CSTRING("PNG files"));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/controllers/SQLiteController.hx",58,0xfc54bd74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("count") , (int)1,false);
					__result->Add(HX_CSTRING("descriptions") , _g,false);
					__result->Add(HX_CSTRING("extensions") , Array_obj< ::String >::__new().Add(HX_CSTRING("*.png")),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		Dynamic filters = _Function_1_1::Block(_g);		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(63)
		Array< ::String > result = ::systools::Dialogs_obj::openFile(HX_CSTRING("Select PNG files please!"),HX_CSTRING("Message"),filters);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(69)
		::haxe::Log_obj::trace(result,hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),69,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("onBtnPngFilesClick")));
		HX_STACK_LINE(70)
		if (((result != null()))){
			HX_STACK_LINE(70)
			::sx::data::Files_obj::pngFilesNames = result;
		}
		HX_STACK_LINE(71)
		::sx::data::Files_obj::notify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SQLiteController_obj,onBtnPngFilesClick,(void))

Void SQLiteController_obj::onBtnMp3FilesClick( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("sx.controllers.SQLiteController","onBtnMp3FilesClick",0x250b47ca,"sx.controllers.SQLiteController.onBtnMp3FilesClick","sx/controllers/SQLiteController.hx",76,0xfc54bd74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(77)
		::haxe::Log_obj::trace(HX_CSTRING("btnDirectoryPdf click"),hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),77,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("onBtnMp3FilesClick")));
		HX_STACK_LINE(83)
		Array< ::String > _g = Array_obj< ::String >::__new().Add(HX_CSTRING("Mp3 files"));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/controllers/SQLiteController.hx",81,0xfc54bd74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("count") , (int)1,false);
					__result->Add(HX_CSTRING("descriptions") , _g,false);
					__result->Add(HX_CSTRING("extensions") , Array_obj< ::String >::__new().Add(HX_CSTRING("*.mp3")),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		Dynamic filters = _Function_1_1::Block(_g);		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(86)
		Array< ::String > result = ::systools::Dialogs_obj::openFile(HX_CSTRING("Select Mp3 files please!"),HX_CSTRING("Message"),filters);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		::haxe::Log_obj::trace(result,hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),92,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("onBtnMp3FilesClick")));
		HX_STACK_LINE(93)
		::sx::data::Files_obj::mp3FilesNames = result;
		HX_STACK_LINE(94)
		::sx::data::Files_obj::notify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SQLiteController_obj,onBtnMp3FilesClick,(void))

Void SQLiteController_obj::onBtnSqliteClick( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("sx.controllers.SQLiteController","onBtnSqliteClick",0xd5b72585,"sx.controllers.SQLiteController.onBtnSqliteClick","sx/controllers/SQLiteController.hx",98,0xfc54bd74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(109)
		if (((::sx::data::Files_obj::mp3FilesNames->length < (int)1))){
			HX_STACK_LINE(111)
			::systools::Dialogs_obj::message(HX_CSTRING("GridTools"),HX_CSTRING("No mp3 files selected"),false);
			HX_STACK_LINE(112)
			return null();
		}
		HX_STACK_LINE(114)
		if (((::sx::data::Files_obj::pngFilesNames->length < (int)1))){
			HX_STACK_LINE(116)
			::systools::Dialogs_obj::message(HX_CSTRING("GridTools"),HX_CSTRING("No png files selected"),false);
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(127)
		Array< ::String > _g = Array_obj< ::String >::__new().Add(HX_CSTRING("SQLite files"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		int filters_count = (int)1;		HX_STACK_VAR(filters_count,"filters_count");
		HX_STACK_LINE(127)
		Array< ::String > filters_descriptions = _g;		HX_STACK_VAR(filters_descriptions,"filters_descriptions");
		HX_STACK_LINE(128)
		Array< ::String > filters_extensions = Array_obj< ::String >::__new().Add(HX_CSTRING("*.sqlite"));		HX_STACK_VAR(filters_extensions,"filters_extensions");
		HX_STACK_LINE(130)
		::String filename = ::systools::Dialogs_obj::saveFile(HX_CSTRING("Select filename for SQLite file to save"),HX_CSTRING("Select file name"),HX_CSTRING("test.sqlite"));		HX_STACK_VAR(filename,"filename");
		HX_STACK_LINE(136)
		::haxe::Log_obj::trace(filename,hx::SourceInfo(HX_CSTRING("SQLiteController.hx"),136,HX_CSTRING("sx.controllers.SQLiteController"),HX_CSTRING("onBtnSqliteClick")));
		HX_STACK_LINE(137)
		if (((filename != null()))){
			HX_STACK_LINE(139)
			if ((::cx::FileTools_obj::exists(filename))){
				HX_STACK_LINE(141)
				::systools::Dialogs_obj::message(HX_CSTRING("GridTools"),HX_CSTRING("File already exists!"),false);
				HX_STACK_LINE(142)
				return null();
			}
			HX_STACK_LINE(144)
			::sx::util::ScorxDb_obj::createNew(filename);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SQLiteController_obj,onBtnSqliteClick,(void))


SQLiteController_obj::SQLiteController_obj()
{
}

void SQLiteController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SQLiteController);
	HX_MARK_MEMBER_NAME(tiProjectName,"tiProjectName");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SQLiteController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiProjectName,"tiProjectName");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SQLiteController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"tiProjectName") ) { return tiProjectName; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onBtnSqliteClick") ) { return onBtnSqliteClick_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onBtnPngFilesClick") ) { return onBtnPngFilesClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onBtnMp3FilesClick") ) { return onBtnMp3FilesClick_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onProjectnameChange") ) { return onProjectnameChange_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SQLiteController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"tiProjectName") ) { tiProjectName=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SQLiteController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tiProjectName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(SQLiteController_obj,tiProjectName),HX_CSTRING("tiProjectName")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tiProjectName"),
	HX_CSTRING("onProjectnameChange"),
	HX_CSTRING("onBtnPngFilesClick"),
	HX_CSTRING("onBtnMp3FilesClick"),
	HX_CSTRING("onBtnSqliteClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SQLiteController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SQLiteController_obj::__mClass,"__mClass");
};

#endif

Class SQLiteController_obj::__mClass;

void SQLiteController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.SQLiteController"), hx::TCanCast< SQLiteController_obj> ,sStaticFields,sMemberFields,
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

void SQLiteController_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
