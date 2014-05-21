#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldType
#include <haxe/macro/FieldType.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Macros
#include <haxe/ui/toolkit/core/Macros.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Macros_obj::__construct()
{
	return null();
}

//Macros_obj::~Macros_obj() { }

Dynamic Macros_obj::__CreateEmpty() { return  new Macros_obj; }
hx::ObjectPtr< Macros_obj > Macros_obj::__new()
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}

Dynamic Macros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}

Void Macros_obj::processNode( ::Xml node,::haxe::ds::StringMap types,Array< ::String > paths){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","processNode",0xd621bf57,"haxe.ui.toolkit.core.Macros.processNode","haxe/ui/toolkit/core/Macros.hx",166,0x3fba9eca)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(types,"types")
		HX_STACK_ARG(paths,"paths")
		HX_STACK_LINE(167)
		::String nodeName = node->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
		HX_STACK_LINE(168)
		int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(169)
		if (((n != (int)-1))){
			HX_STACK_LINE(170)
			nodeName = nodeName.substr((n + (int)1),nodeName.length);
		}
		HX_STACK_LINE(172)
		nodeName = nodeName.toLowerCase();
		HX_STACK_LINE(174)
		if (((nodeName == HX_CSTRING("import")))){
			HX_STACK_LINE(176)
			::String resourcePath = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(resourcePath,"resourcePath");
			HX_STACK_LINE(177)
			resourcePath = ::haxe::ui::toolkit::core::Macros_obj::resolveResource(resourcePath,paths);
			HX_STACK_LINE(178)
			if (((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(resourcePath)) == false))){
				HX_STACK_LINE(179)
				::haxe::Log_obj::trace(((HX_CSTRING("WARNING: ") + resourcePath) + HX_CSTRING(" not found")),hx::SourceInfo(HX_CSTRING("Macros.hx"),179,HX_CSTRING("haxe.ui.toolkit.core.Macros"),HX_CSTRING("processNode")));
			}
			else{
				HX_STACK_LINE(181)
				::String contents = ::sys::io::File_obj::getContent(resourcePath);		HX_STACK_VAR(contents,"contents");
				HX_STACK_LINE(182)
				::Xml xml = ::Xml_obj::parse(contents);		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(183)
				::haxe::ui::toolkit::core::Macros_obj::processNode(xml->firstElement(),types,paths);
				HX_STACK_LINE(184)
				return null();
			}
		}
		HX_STACK_LINE(189)
		::String id = node->get(HX_CSTRING("id"));		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(190)
		if (((bool((id != null())) && bool((id.length > (int)0))))){
			HX_STACK_LINE(191)
			::String cls = ::haxe::ui::toolkit::core::Macros_obj::componentClasses->get(nodeName);		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(192)
			if (((cls != null()))){
				HX_STACK_LINE(193)
				types->set(id,cls);
			}
		}
		HX_STACK_LINE(196)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
			::Xml child = __it->next();
			::haxe::ui::toolkit::core::Macros_obj::processNode(child,types,paths);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,processNode,(void))

Dynamic Macros_obj::getFunction( ::String name,Dynamic fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFunction",0xaac6f114,"haxe.ui.toolkit.core.Macros.getFunction","haxe/ui/toolkit/core/Macros.hx",201,0x3fba9eca)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(202)
	Dynamic fn = null();		HX_STACK_VAR(fn,"fn");
	HX_STACK_LINE(203)
	{
		HX_STACK_LINE(203)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		while(((_g < fields->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(203)
			Dynamic f = fields->__GetItem(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(203)
			++(_g);
			HX_STACK_LINE(204)
			if (((f->__Field(HX_CSTRING("name"),true) == name))){
				HX_STACK_LINE(205)
				{
					HX_STACK_LINE(205)
					::haxe::macro::FieldType _g1 = f->__Field(HX_CSTRING("kind"),true);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(205)
					int _switch_1 = (_g1->__Index());
					if (  ( _switch_1==(int)1)){
						HX_STACK_LINE(205)
						Dynamic f1 = (::haxe::macro::FieldType(_g1))->__Param(0);		HX_STACK_VAR(f1,"f1");
						HX_STACK_LINE(206)
						{
							HX_STACK_LINE(207)
							fn = f1;
							HX_STACK_LINE(208)
							break;
						}
					}
					else  {
					}
;
;
				}
				HX_STACK_LINE(211)
				break;
			}
		}
	}
	HX_STACK_LINE(214)
	return fn;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFunction,return )

Void Macros_obj::addFunction( ::String name,Dynamic e,Array< ::Dynamic > access,Dynamic fields,Dynamic pos){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","addFunction",0xb62f659f,"haxe.ui.toolkit.core.Macros.addFunction","haxe/ui/toolkit/core/Macros.hx",217,0x3fba9eca)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(access,"access")
		HX_STACK_ARG(fields,"fields")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(218)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::haxe::macro::ExprDef _g = e->__Field(HX_CSTRING("expr"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			switch( (int)(_g->__Index())){
				case (int)11: {
					HX_STACK_LINE(218)
					Dynamic f = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(219)
					fn = f;
				}
				;break;
				default: {
					HX_STACK_LINE(220)
					HX_STACK_DO_THROW(HX_CSTRING("false"));
				}
			}
		}
		HX_STACK_LINE(222)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &pos,Dynamic &_g,Array< ::Dynamic > &access,Dynamic &fn,::String &name){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",222,0x3fba9eca)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , name,false);
					__result->Add(HX_CSTRING("doc") , null(),false);
					__result->Add(HX_CSTRING("meta") , _g,false);
					__result->Add(HX_CSTRING("access") , access,false);
					__result->Add(HX_CSTRING("kind") , ::haxe::macro::FieldType_obj::FFun(fn),false);
					__result->Add(HX_CSTRING("pos") , pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(222)
		fields->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(pos,_g,access,fn,name));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Macros_obj,addFunction,(void))

Dynamic Macros_obj::getFieldsWithMeta( ::String meta,Dynamic fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFieldsWithMeta",0x6d353e80,"haxe.ui.toolkit.core.Macros.getFieldsWithMeta","haxe/ui/toolkit/core/Macros.hx",225,0x3fba9eca)
	HX_STACK_ARG(meta,"meta")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(226)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		while(((_g < fields->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(228)
			Dynamic f = fields->__GetItem(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(229)
			if ((::haxe::ui::toolkit::core::Macros_obj::hasMeta(f,meta))){
				HX_STACK_LINE(230)
				arr->__Field(HX_CSTRING("push"),true)(f);
			}
		}
	}
	HX_STACK_LINE(234)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFieldsWithMeta,return )

Dynamic Macros_obj::getSuperClass( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getSuperClass",0xf89665b9,"haxe.ui.toolkit.core.Macros.getSuperClass","haxe/ui/toolkit/core/Macros.hx",237,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(238)
	Dynamic superClass = null();		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(239)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(240)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(241)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(242)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(243)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(239)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(244)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(246)
			superClass = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(248)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(249)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(239)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(250)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(252)
	return superClass;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getSuperClass,return )

Void Macros_obj::insertLine( Dynamic fn,Dynamic e,int location){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertLine",0xea641f47,"haxe.ui.toolkit.core.Macros.insertLine","haxe/ui/toolkit/core/Macros.hx",256,0x3fba9eca)
		HX_STACK_ARG(fn,"fn")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(location,"location")
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			::haxe::macro::ExprDef _g = fn->__Field(HX_CSTRING("expr"),true)->__Field(HX_CSTRING("expr"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(256)
			switch( (int)(_g->__Index())){
				case (int)12: {
					HX_STACK_LINE(256)
					Dynamic el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(257)
					{
						HX_STACK_LINE(257)
						::haxe::macro::ExprDef _g1 = ::haxe::macro::ExprDef_obj::EBlock(::haxe::ui::toolkit::core::Macros_obj::insertExpr(el,location,e));		HX_STACK_VAR(_g1,"_g1");
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::macro::ExprDef &_g1){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",257,0x3fba9eca)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("expr") , _g1,false);
									struct _Function_5_1{
										inline static Dynamic Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",257,0x3fba9eca)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_CSTRING("file") , HX_CSTRING("F:\\_haxelib/haxeui/1,3,3/haxe/ui/toolkit/core/Macros.hx"),false);
												__result->Add(HX_CSTRING("min") , (int)8519,false);
												__result->Add(HX_CSTRING("max") , (int)8548,false);
												return __result;
											}
											return null();
										}
									};
									__result->Add(HX_CSTRING("pos") , _Function_5_1::Block(),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(256)
						fn->__FieldRef(HX_CSTRING("expr")) = _Function_4_1::Block(_g1);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(258)
					::haxe::macro::ExprDef _g1 = ::haxe::macro::ExprDef_obj::EBlock(::haxe::ui::toolkit::core::Macros_obj::insertExpr(Dynamic( Array_obj<Dynamic>::__new().Add(fn->__Field(HX_CSTRING("expr"),true))),location,e));		HX_STACK_VAR(_g1,"_g1");
					struct _Function_3_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &_g1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",258,0x3fba9eca)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("expr") , _g1,false);
								struct _Function_4_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",258,0x3fba9eca)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("file") , HX_CSTRING("F:\\_haxelib/haxeui/1,3,3/haxe/ui/toolkit/core/Macros.hx"),false);
											__result->Add(HX_CSTRING("min") , (int)8571,false);
											__result->Add(HX_CSTRING("max") , (int)8609,false);
											return __result;
										}
										return null();
									}
								};
								__result->Add(HX_CSTRING("pos") , _Function_4_1::Block(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(256)
					fn->__FieldRef(HX_CSTRING("expr")) = _Function_3_1::Block(_g1);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertLine,(void))

Dynamic Macros_obj::insertExpr( Dynamic arr,int pos,Dynamic item){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertExpr",0xe5cf0488,"haxe.ui.toolkit.core.Macros.insertExpr","haxe/ui/toolkit/core/Macros.hx",262,0x3fba9eca)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(263)
	if (((pos == (int)-1))){
		HX_STACK_LINE(264)
		arr->__Field(HX_CSTRING("push"),true)(item);
	}
	else{
		HX_STACK_LINE(266)
		arr->__Field(HX_CSTRING("insert"),true)(pos,item);
	}
	HX_STACK_LINE(268)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertExpr,return )

::haxe::ds::StringMap Macros_obj::componentClasses;

::String Macros_obj::getClassNameFromType( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getClassNameFromType",0xba05058b,"haxe.ui.toolkit.core.Macros.getClassNameFromType","haxe/ui/toolkit/core/Macros.hx",462,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(463)
	::String className = HX_CSTRING("");		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(464)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(465)
			className = t1->toString();
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(466)
			className = t1->toString();
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(467)
			className = HX_CSTRING("");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(468)
			className = t1->toString();
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(464)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(469)
			className = HX_CSTRING("");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(470)
			className = t1->toString();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(471)
			className = t1->toString();
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(472)
			className = t1->toString();
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(464)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(473)
			className = t1->toString();
		}
		;break;
	}
	HX_STACK_LINE(475)
	return className;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getClassNameFromType,return )

bool Macros_obj::hasMeta( Dynamic f,::String meta){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasMeta",0x27fd5385,"haxe.ui.toolkit.core.Macros.hasMeta","haxe/ui/toolkit/core/Macros.hx",478,0x3fba9eca)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(meta,"meta")
	HX_STACK_LINE(479)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(480)
	{
		HX_STACK_LINE(480)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(480)
		Dynamic _g1 = f->__Field(HX_CSTRING("meta"),true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(480)
		while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(480)
			Dynamic m = _g1->__GetItem(_g);		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(480)
			++(_g);
			HX_STACK_LINE(481)
			if (((bool((m->__Field(HX_CSTRING("name"),true) == meta)) || bool((m->__Field(HX_CSTRING("name"),true) == (HX_CSTRING(":") + meta)))))){
				HX_STACK_LINE(482)
				has = true;
				HX_STACK_LINE(483)
				break;
			}
		}
	}
	HX_STACK_LINE(486)
	return has;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasMeta,return )

bool Macros_obj::hasInterface( ::haxe::macro::Type t,::String interfaceRequired){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasInterface",0xc71e70f9,"haxe.ui.toolkit.core.Macros.hasInterface","haxe/ui/toolkit/core/Macros.hx",489,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(interfaceRequired,"interfaceRequired")
	HX_STACK_LINE(490)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(491)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(492)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(493)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(494)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(495)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(491)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(496)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(498)
			while(((t1 != null()))){
				HX_STACK_LINE(499)
				{
					HX_STACK_LINE(499)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(499)
					Dynamic _g1 = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("interfaces"),true);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(499)
					while(((_g < _g1->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(499)
						Dynamic i = _g1->__GetItem(_g);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(499)
						++(_g);
						HX_STACK_LINE(500)
						::String interfaceName = i->__Field(HX_CSTRING("t"),true)->toString();		HX_STACK_VAR(interfaceName,"interfaceName");
						HX_STACK_LINE(501)
						if (((interfaceName == interfaceRequired))){
							HX_STACK_LINE(502)
							has = true;
							HX_STACK_LINE(503)
							break;
						}
					}
				}
				HX_STACK_LINE(507)
				if (((has == false))){
					HX_STACK_LINE(508)
					if (((t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true) != null()))){
						HX_STACK_LINE(509)
						t1 = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true)->__Field(HX_CSTRING("t"),true);
					}
					else{
						HX_STACK_LINE(511)
						t1 = null();
					}
				}
				else{
					HX_STACK_LINE(514)
					break;
				}
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(518)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(519)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(491)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(520)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(523)
	return has;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasInterface,return )

::String Macros_obj::resolveResource( ::String resourcePath,Array< ::String > paths){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","resolveResource",0xa02b9620,"haxe.ui.toolkit.core.Macros.resolveResource","haxe/ui/toolkit/core/Macros.hx",526,0x3fba9eca)
	HX_STACK_ARG(resourcePath,"resourcePath")
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(530)
	Array< ::String > subs = Array_obj< ::String >::__new().Add(HX_CSTRING("/")).Add(HX_CSTRING("/assets/"));		HX_STACK_VAR(subs,"subs");
	HX_STACK_LINE(531)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(532)
	if (((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(resourcePath)) == false))){
		HX_STACK_LINE(533)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(533)
		while(((_g < paths->length))){
			HX_STACK_LINE(533)
			::String path = paths->__get(_g);		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(533)
			++(_g);
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(535)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(535)
				while(((_g1 < subs->length))){
					HX_STACK_LINE(535)
					::String s = subs->__get(_g1);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(535)
					++(_g1);
					HX_STACK_LINE(536)
					::String test = ((path + s) + resourcePath);		HX_STACK_VAR(test,"test");
					HX_STACK_LINE(537)
					if (((  ((!(((test.indexOf(HX_CSTRING("/"),null()) == (int)0))))) ? bool((test.indexOf(HX_CSTRING("\\"),null()) == (int)0)) : bool(true) ))){
						HX_STACK_LINE(538)
						test = test.substr((int)1,test.length);
					}
					HX_STACK_LINE(540)
					if ((::sys::FileSystem_obj::sys_exists(::haxe::io::Path_obj::removeTrailingSlashes(test)))){
						HX_STACK_LINE(541)
						resourcePath = test;
						HX_STACK_LINE(542)
						found = true;
						HX_STACK_LINE(543)
						break;
					}
				}
			}
			HX_STACK_LINE(547)
			if (((found == true))){
				HX_STACK_LINE(548)
				break;
			}
		}
	}
	HX_STACK_LINE(553)
	resourcePath = ::StringTools_obj::replace(resourcePath,HX_CSTRING("\\"),HX_CSTRING("/"));
	HX_STACK_LINE(554)
	resourcePath = ::StringTools_obj::replace(resourcePath,HX_CSTRING("//"),HX_CSTRING("/"));
	HX_STACK_LINE(555)
	return resourcePath;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,resolveResource,return )


Macros_obj::Macros_obj()
{
}

Dynamic Macros_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hasMeta") ) { return hasMeta_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertLine") ) { return insertLine_dyn(); }
		if (HX_FIELD_EQ(inName,"insertExpr") ) { return insertExpr_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processNode") ) { return processNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getFunction") ) { return getFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"addFunction") ) { return addFunction_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasInterface") ) { return hasInterface_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { return getSuperClass_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveResource") ) { return resolveResource_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentClasses") ) { return componentClasses; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFieldsWithMeta") ) { return getFieldsWithMeta_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getClassNameFromType") ) { return getClassNameFromType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Macros_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"componentClasses") ) { componentClasses=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Macros_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("processNode"),
	HX_CSTRING("getFunction"),
	HX_CSTRING("addFunction"),
	HX_CSTRING("getFieldsWithMeta"),
	HX_CSTRING("getSuperClass"),
	HX_CSTRING("insertLine"),
	HX_CSTRING("insertExpr"),
	HX_CSTRING("componentClasses"),
	HX_CSTRING("getClassNameFromType"),
	HX_CSTRING("hasMeta"),
	HX_CSTRING("hasInterface"),
	HX_CSTRING("resolveResource"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
};

#endif

Class Macros_obj::__mClass;

void Macros_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Macros"), hx::TCanCast< Macros_obj> ,sStaticFields,sMemberFields,
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

void Macros_obj::__boot()
{
	componentClasses= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
