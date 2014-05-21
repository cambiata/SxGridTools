#ifndef INCLUDED_sx_util_ScorxDb
#define INCLUDED_sx_util_ScorxDb

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sx,util,ScorxDb)
namespace sx{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ScorxDb_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScorxDb_obj OBJ_;
		ScorxDb_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScorxDb_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScorxDb_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScorxDb"); }

		static Void createNew( ::String filename);
		static Dynamic createNew_dyn();

		static Dynamic getChannelsBase( ::String filename);
		static Dynamic getChannelsBase_dyn();

		static Dynamic getChannels( ::String filename);
		static Dynamic getChannels_dyn();

		static Dynamic getPages( ::String filename);
		static Dynamic getPages_dyn();

		static Dynamic getPagesBase( ::String filename);
		static Dynamic getPagesBase_dyn();

		static Dynamic getQuickstarts( ::String filename);
		static Dynamic getQuickstarts_dyn();

		static Dynamic getCategories( ::String filename);
		static Dynamic getCategories_dyn();

		static Void insertCategory( ::String filename,Dynamic alternative);
		static Dynamic insertCategory_dyn();

		static Void removeCategory( ::String filename,Dynamic alternative);
		static Dynamic removeCategory_dyn();

		static Dynamic getCategoriesDyn( ::String filename);
		static Dynamic getCategoriesDyn_dyn();

		static Void insertCategoryDyn( ::String filename,Dynamic alternative);
		static Dynamic insertCategoryDyn_dyn();

		static Void removeCategoryDyn( ::String filename,Dynamic alternative);
		static Dynamic removeCategoryDyn_dyn();

		static Dynamic getCategoriesAll( ::String filename);
		static Dynamic getCategoriesAll_dyn();

		static Dynamic getCategoryTypes( ::String filename,::String type);
		static Dynamic getCategoryTypes_dyn();

		static int getMaxcountForCategory( ::String filename,::String categoryId);
		static Dynamic getMaxcountForCategory_dyn();

		static int getTitleCountCategory( ::String filename,::String categoryId);
		static Dynamic getTitleCountCategory_dyn();

		static Dynamic getAlternatives( ::String filename);
		static Dynamic getAlternatives_dyn();

		static Void setInformationField( ::String filename,::String field,::String value);
		static Dynamic setInformationField_dyn();

		static Dynamic getOriginators( ::String filename);
		static Dynamic getOriginators_dyn();

		static Void insertOriginator( ::String filename,Dynamic originator);
		static Dynamic insertOriginator_dyn();

		static Void insertOriginatorType( ::String filename,Dynamic originator,::String type);
		static Dynamic insertOriginatorType_dyn();

		static Void insertOriginatorItem( ::String filename,Dynamic origItem);
		static Dynamic insertOriginatorItem_dyn();

		static Void removeOriginatorItem( ::String filename,Dynamic origItem);
		static Dynamic removeOriginatorItem_dyn();

		static Dynamic getExample( ::String filename);
		static Dynamic getExample_dyn();

		static ::String getSubdir( ::String filename);
		static Dynamic getSubdir_dyn();

		static Dynamic getInformation( ::String filename);
		static Dynamic getInformation_dyn();

		static Dynamic getOriginatorItems( ::String filename);
		static Dynamic getOriginatorItems_dyn();

		static Dynamic translateResultsToDynamic( ::List results);
		static Dynamic translateResultsToDynamic_dyn();

		static Dynamic getGrid( ::String filename);
		static Dynamic getGrid_dyn();

};

} // end namespace sx
} // end namespace util

#endif /* INCLUDED_sx_util_ScorxDb */ 
