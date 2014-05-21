#ifndef INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CSSSyntax
#define INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CSSSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/controls/extended/syntax/CodeSyntax.h>
HX_DECLARE_CLASS6(haxe,ui,toolkit,controls,extended,syntax,CSSSyntax)
HX_DECLARE_CLASS6(haxe,ui,toolkit,controls,extended,syntax,CodeSyntax)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace extended{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  CSSSyntax_obj : public ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::extended::syntax::CodeSyntax_obj super;
		typedef CSSSyntax_obj OBJ_;
		CSSSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CSSSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CSSSyntax_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CSSSyntax"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace extended
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_toolkit_controls_extended_syntax_CSSSyntax */ 
