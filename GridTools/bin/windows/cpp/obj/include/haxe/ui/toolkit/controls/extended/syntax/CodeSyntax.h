#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax
#define INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS6(haxe,ui,toolkit,controls,extended,syntax,CodeSyntax)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  CodeSyntax_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodeSyntax_obj OBJ_;
		CodeSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CodeSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodeSyntax_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CodeSyntax"); }

		::haxe::ds::StringMap _rules;
		::haxe::ds::StringMap _compiledRules;
		::flash::text::TextFormat _defaultFormat;
		::String _identifier;
		virtual Void addRule( ::String regex,int color,hx::Null< bool >  bold);
		Dynamic addRule_dyn();

		::String identifier;
		::haxe::ds::StringMap rules;
		virtual ::String get_identifier( );
		Dynamic get_identifier_dyn();

		virtual ::flash::text::TextFormat get_defaultFormat( );
		Dynamic get_defaultFormat_dyn();

		virtual ::flash::text::TextFormat set_defaultFormat( ::flash::text::TextFormat value);
		Dynamic set_defaultFormat_dyn();

		virtual ::haxe::ds::StringMap get_rules( );
		Dynamic get_rules_dyn();

		virtual ::EReg getCompiledRule( ::String rule);
		Dynamic getCompiledRule_dyn();

		static ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax getSyntax( ::String id);
		static Dynamic getSyntax_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CodeSyntax */ 
