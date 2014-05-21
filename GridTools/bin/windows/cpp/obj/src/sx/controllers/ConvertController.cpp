#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
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
#ifndef INCLUDED_sx_Environment
#include <sx/Environment.h>
#endif
#ifndef INCLUDED_sx_controllers_ConvertController
#include <sx/controllers/ConvertController.h>
#endif
#ifndef INCLUDED_sx_data_Files
#include <sx/data/Files.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_systools_Dialogs
#include <systools/Dialogs.h>
#endif
namespace sx{
namespace controllers{

Void ConvertController_obj::__construct()
{
HX_STACK_FRAME("sx.controllers.ConvertController","new",0x64395f61,"sx.controllers.ConvertController.new","haxe/ui/toolkit/core/Macros.hx",139,0x3fba9eca)
{
	HX_STACK_LINE(24)
	super::__construct(HX_CSTRING("assets/convert.xml"));
	HX_STACK_LINE(33)
	this->btnConvert = this->getComponent(HX_CSTRING("btnConvert"));
	HX_STACK_LINE(35)
	this->attachEvent(HX_CSTRING("btnDirectoryPdf"),HX_CSTRING("haxeui_click"),this->onBtnSelectPdf_dyn());
	HX_STACK_LINE(36)
	this->attachEvent(HX_CSTRING("btnConvert"),HX_CSTRING("haxeui_click"),this->onBtnConvert_dyn());
}
;
	return null();
}

//ConvertController_obj::~ConvertController_obj() { }

Dynamic ConvertController_obj::__CreateEmpty() { return  new ConvertController_obj; }
hx::ObjectPtr< ConvertController_obj > ConvertController_obj::__new()
{  hx::ObjectPtr< ConvertController_obj > result = new ConvertController_obj();
	result->__construct();
	return result;}

Dynamic ConvertController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvertController_obj > result = new ConvertController_obj();
	result->__construct();
	return result;}

Void ConvertController_obj::onBtnConvert( Dynamic e){
{
		HX_STACK_FRAME("sx.controllers.ConvertController","onBtnConvert",0x56ac51d5,"sx.controllers.ConvertController.onBtnConvert","sx/controllers/ConvertController.hx",44,0xa05c71b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(44)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(47)
			int numberOfPages = this->getPdfNrOfPages(::sx::data::Files_obj::pdfFileName);		HX_STACK_VAR(numberOfPages,"numberOfPages");
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e1 = __e;{
					HX_STACK_LINE(66)
					::haxe::Log_obj::trace(e1,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),66,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("onBtnConvert")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConvertController_obj,onBtnConvert,(void))

Void ConvertController_obj::onBtnSelectPdf( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("sx.controllers.ConvertController","onBtnSelectPdf",0x461086b8,"sx.controllers.ConvertController.onBtnSelectPdf","sx/controllers/ConvertController.hx",72,0xa05c71b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(76)
		Array< ::String > _g = Array_obj< ::String >::__new().Add(HX_CSTRING("PDF files"));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Array< ::String > &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","sx/controllers/ConvertController.hx",74,0xa05c71b1)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("count") , (int)1,false);
					__result->Add(HX_CSTRING("descriptions") , _g,false);
					__result->Add(HX_CSTRING("extensions") , Array_obj< ::String >::__new().Add(HX_CSTRING("*.pdf")),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(74)
		Dynamic filters = _Function_1_1::Block(_g);		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(79)
		Array< ::String > result = ::systools::Dialogs_obj::openFile(HX_CSTRING("Select PDF file to convert!"),HX_CSTRING("Message"),filters);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(85)
		::haxe::Log_obj::trace(result,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),85,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("onBtnSelectPdf")));
		HX_STACK_LINE(86)
		if (((result != null()))){
			HX_STACK_LINE(86)
			::sx::data::Files_obj::pdfFileName = result->__get((int)0);
		}
		HX_STACK_LINE(87)
		::sx::data::Files_obj::notify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConvertController_obj,onBtnSelectPdf,(void))

Void ConvertController_obj::onFilesNotify( ){
{
		HX_STACK_FRAME("sx.controllers.ConvertController","onFilesNotify",0x1031b802,"sx.controllers.ConvertController.onFilesNotify","sx/controllers/ConvertController.hx",92,0xa05c71b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		::haxe::Log_obj::trace(HX_CSTRING("Convert Notify"),hx::SourceInfo(HX_CSTRING("ConvertController.hx"),92,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("onFilesNotify")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConvertController_obj,onFilesNotify,(void))

int ConvertController_obj::getPdfNrOfPages( ::String pdfFileName){
	HX_STACK_FRAME("sx.controllers.ConvertController","getPdfNrOfPages",0x7a7e5eae,"sx.controllers.ConvertController.getPdfNrOfPages","sx/controllers/ConvertController.hx",96,0xa05c71b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pdfFileName,"pdfFileName")
	HX_STACK_LINE(97)
	::haxe::Log_obj::trace(pdfFileName,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),97,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("getPdfNrOfPages")));
	HX_STACK_LINE(103)
	::String _g = this->path(::sx::Environment_obj::exePdfTk);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(103)
	::sys::io::Process process = ::sys::io::Process_obj::__new(_g,Array_obj< ::String >::__new().Add(this->path(pdfFileName)).Add(HX_CSTRING("dump_data")));		HX_STACK_VAR(process,"process");
	HX_STACK_LINE(104)
	int exitCode = process->exitCode();		HX_STACK_VAR(exitCode,"exitCode");
	HX_STACK_LINE(105)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(ConvertController_obj,getPdfNrOfPages,return )

::String ConvertController_obj::extractPdfPage( ::String pdfFileName,::String targetDir,int pageIdx){
	HX_STACK_FRAME("sx.controllers.ConvertController","extractPdfPage",0xaf7a86bf,"sx.controllers.ConvertController.extractPdfPage","sx/controllers/ConvertController.hx",132,0xa05c71b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pdfFileName,"pdfFileName")
	HX_STACK_ARG(targetDir,"targetDir")
	HX_STACK_ARG(pageIdx,"pageIdx")
	HX_STACK_LINE(133)
	::haxe::Log_obj::trace(pdfFileName,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),133,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
	HX_STACK_LINE(134)
	::haxe::Log_obj::trace(targetDir,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),134,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
	HX_STACK_LINE(135)
	::haxe::Log_obj::trace(pageIdx,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),135,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
	HX_STACK_LINE(137)
	::String pdfPageName = (targetDir + (((HX_CSTRING("\\page") + pageIdx) + HX_CSTRING(".pdf"))));		HX_STACK_VAR(pdfPageName,"pdfPageName");
	HX_STACK_LINE(138)
	::haxe::Log_obj::trace(pdfPageName,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),138,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
	HX_STACK_LINE(141)
	int exitCode = ::Sys_obj::command(::sx::Environment_obj::exePdfTk,Array_obj< ::String >::__new().Add(pdfFileName).Add(HX_CSTRING("cat")).Add((HX_CSTRING("") + pageIdx)).Add(HX_CSTRING("output")).Add(pdfPageName));		HX_STACK_VAR(exitCode,"exitCode");
	HX_STACK_LINE(143)
	if (((exitCode == (int)0))){
		HX_STACK_LINE(145)
		::haxe::Log_obj::trace(HX_CSTRING("Ok"),hx::SourceInfo(HX_CSTRING("ConvertController.hx"),145,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
		HX_STACK_LINE(146)
		return pdfPageName;
	}
	else{
		HX_STACK_LINE(150)
		::haxe::Log_obj::trace(HX_CSTRING("Error"),hx::SourceInfo(HX_CSTRING("ConvertController.hx"),150,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("extractPdfPage")));
		HX_STACK_LINE(151)
		return HX_CSTRING("ERROR");
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConvertController_obj,extractPdfPage,return )

::String ConvertController_obj::convertPdfPageToPng( ::String pdfPageName,::String targetFilename){
	HX_STACK_FRAME("sx.controllers.ConvertController","convertPdfPageToPng",0xe590ae61,"sx.controllers.ConvertController.convertPdfPageToPng","sx/controllers/ConvertController.hx",156,0xa05c71b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pdfPageName,"pdfPageName")
	HX_STACK_ARG(targetFilename,"targetFilename")
	HX_STACK_LINE(157)
	pdfPageName = ::StringTools_obj::replace(pdfPageName,HX_CSTRING("//"),HX_CSTRING("/"));
	HX_STACK_LINE(158)
	targetFilename = ::StringTools_obj::replace(targetFilename,HX_CSTRING("//"),HX_CSTRING("/"));
	HX_STACK_LINE(159)
	::haxe::Log_obj::trace(pdfPageName,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),159,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("convertPdfPageToPng")));
	HX_STACK_LINE(160)
	::haxe::Log_obj::trace(targetFilename,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),160,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("convertPdfPageToPng")));
	HX_STACK_LINE(161)
	::String command = ((::sx::Environment_obj::exeConvert + (((HX_CSTRING(" -background white -mosaic +matte -resize 630x891 -density 300 ") + pdfPageName) + HX_CSTRING(" ")))) + targetFilename);		HX_STACK_VAR(command,"command");
	HX_STACK_LINE(162)
	::haxe::Log_obj::trace(command,hx::SourceInfo(HX_CSTRING("ConvertController.hx"),162,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("convertPdfPageToPng")));
	HX_STACK_LINE(163)
	int exitCode = ::Sys_obj::command(command,Array_obj< ::String >::__new());		HX_STACK_VAR(exitCode,"exitCode");
	HX_STACK_LINE(164)
	if (((exitCode == (int)0))){
		HX_STACK_LINE(166)
		::haxe::Log_obj::trace(HX_CSTRING("Ok"),hx::SourceInfo(HX_CSTRING("ConvertController.hx"),166,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("convertPdfPageToPng")));
		HX_STACK_LINE(167)
		return targetFilename;
	}
	else{
		HX_STACK_LINE(171)
		::haxe::Log_obj::trace(HX_CSTRING("Error"),hx::SourceInfo(HX_CSTRING("ConvertController.hx"),171,HX_CSTRING("sx.controllers.ConvertController"),HX_CSTRING("convertPdfPageToPng")));
		HX_STACK_LINE(172)
		return HX_CSTRING("ERROR");
	}
	HX_STACK_LINE(164)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConvertController_obj,convertPdfPageToPng,return )

::String ConvertController_obj::path( ::String path){
	HX_STACK_FRAME("sx.controllers.ConvertController","path",0x4f497784,"sx.controllers.ConvertController.path","sx/controllers/ConvertController.hx",177,0xa05c71b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(179)
	path = ::StringTools_obj::replace(path,HX_CSTRING("/"),HX_CSTRING("\\"));
	HX_STACK_LINE(180)
	path = ::StringTools_obj::replace(path,HX_CSTRING("\\\\"),HX_CSTRING("\\"));
	HX_STACK_LINE(182)
	return path;
}


HX_DEFINE_DYNAMIC_FUNC1(ConvertController_obj,path,return )


ConvertController_obj::ConvertController_obj()
{
}

void ConvertController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConvertController);
	HX_MARK_MEMBER_NAME(btnConvert,"btnConvert");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConvertController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(btnConvert,"btnConvert");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ConvertController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"btnConvert") ) { return btnConvert; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onBtnConvert") ) { return onBtnConvert_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onFilesNotify") ) { return onFilesNotify_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onBtnSelectPdf") ) { return onBtnSelectPdf_dyn(); }
		if (HX_FIELD_EQ(inName,"extractPdfPage") ) { return extractPdfPage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getPdfNrOfPages") ) { return getPdfNrOfPages_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"convertPdfPageToPng") ) { return convertPdfPageToPng_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConvertController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"btnConvert") ) { btnConvert=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvertController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("btnConvert"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ConvertController_obj,btnConvert),HX_CSTRING("btnConvert")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("btnConvert"),
	HX_CSTRING("onBtnConvert"),
	HX_CSTRING("onBtnSelectPdf"),
	HX_CSTRING("onFilesNotify"),
	HX_CSTRING("getPdfNrOfPages"),
	HX_CSTRING("extractPdfPage"),
	HX_CSTRING("convertPdfPageToPng"),
	HX_CSTRING("path"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertController_obj::__mClass,"__mClass");
};

#endif

Class ConvertController_obj::__mClass;

void ConvertController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sx.controllers.ConvertController"), hx::TCanCast< ConvertController_obj> ,sStaticFields,sMemberFields,
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

void ConvertController_obj::__boot()
{
}

} // end namespace sx
} // end namespace controllers
