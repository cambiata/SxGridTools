#ifndef INCLUDED_haxe_ui_toolkit_controls_extended__Code_SyntaxHighlightRunner
#define INCLUDED_haxe_ui_toolkit_controls_extended__Code_SyntaxHighlightRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS6(haxe,ui,toolkit,controls,extended,_Code,SyntaxHighlightRunner)
HX_DECLARE_CLASS6(haxe,ui,toolkit,controls,extended,syntax,CodeSyntax)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,Runner)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace _Code{


class HXCPP_CLASS_ATTRIBUTES  SyntaxHighlightRunner_obj : public ::haxe::ui::toolkit::util::pseudothreads::Runner_obj{
	public:
		typedef ::haxe::ui::toolkit::util::pseudothreads::Runner_obj super;
		typedef SyntaxHighlightRunner_obj OBJ_;
		SyntaxHighlightRunner_obj();
		Void __construct(::flash::text::TextField tf,::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SyntaxHighlightRunner_obj > __new(::flash::text::TextField tf,::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SyntaxHighlightRunner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SyntaxHighlightRunner"); }

		::flash::text::TextField _tf;
		::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax _syntax;
		Array< ::String > _syntaxRules;
		::haxe::ds::StringMap _matches;
		::String _txt;
		bool _matchedSyntax;
		int _matchIndex;
		int _ruleIndex;
		virtual Void run( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace _Code

#endif /* INCLUDED_haxe_ui_toolkit_controls_extended__Code_SyntaxHighlightRunner */ 
