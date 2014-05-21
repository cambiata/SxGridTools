#ifndef INCLUDED_systools_Dialogs
#define INCLUDED_systools_Dialogs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(systools,Dialogs)
namespace systools{


class HXCPP_CLASS_ATTRIBUTES  Dialogs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Dialogs_obj OBJ_;
		Dialogs_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Dialogs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dialogs_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Dialogs"); }

		static Dynamic _message_box;
		static Dynamic &_message_box_dyn() { return _message_box;}
		static Void message( ::String title,::String msg,bool isError);
		static Dynamic message_dyn();

		static Dynamic _dialog_box;
		static Dynamic &_dialog_box_dyn() { return _dialog_box;}
		static bool confirm( ::String title,::String msg,bool isError);
		static Dynamic confirm_dyn();

		static Dynamic _dialog_save_file;
		static Dynamic &_dialog_save_file_dyn() { return _dialog_save_file;}
		static ::String saveFile( ::String title,::String msg,::String initialDir);
		static Dynamic saveFile_dyn();

		static Dynamic _dialog_open_file;
		static Dynamic &_dialog_open_file_dyn() { return _dialog_open_file;}
		static Array< ::String > openFile( ::String title,::String msg,Dynamic mask);
		static Dynamic openFile_dyn();

		static Dynamic _dialog_folder;
		static Dynamic &_dialog_folder_dyn() { return _dialog_folder;}
		static ::String folder( ::String title,::String msg);
		static Dynamic folder_dyn();

};

} // end namespace systools

#endif /* INCLUDED_systools_Dialogs */ 
