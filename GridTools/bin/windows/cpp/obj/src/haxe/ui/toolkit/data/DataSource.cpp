#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void DataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","new",0xdd20de79,"haxe.ui.toolkit.data.DataSource.new","haxe/ui/toolkit/data/DataSource.hx",8,0x7931b957)
{
	HX_STACK_LINE(15)
	this->allowEvents = true;
	HX_STACK_LINE(14)
	this->allowDeletions = true;
	HX_STACK_LINE(13)
	this->allowUpdates = true;
	HX_STACK_LINE(12)
	this->allowAdditions = true;
	HX_STACK_LINE(18)
	super::__construct(null());
}
;
	return null();
}

//DataSource_obj::~DataSource_obj() { }

Dynamic DataSource_obj::__CreateEmpty() { return  new DataSource_obj; }
hx::ObjectPtr< DataSource_obj > DataSource_obj::__new()
{  hx::ObjectPtr< DataSource_obj > result = new DataSource_obj();
	result->__construct();
	return result;}

Dynamic DataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataSource_obj > result = new DataSource_obj();
	result->__construct();
	return result;}

hx::Object *DataSource_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::data::IDataSource_obj)) return operator ::haxe::ui::toolkit::data::IDataSource_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

::Xml DataSource_obj::get_config( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_config",0x17579d92,"haxe.ui.toolkit.data.DataSource.get_config","haxe/ui/toolkit/data/DataSource.hx",25,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->_config;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_config,return )

::haxe::ui::toolkit::data::DataSource DataSource_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","clone",0xbd2299b6,"haxe.ui.toolkit.data.DataSource.clone","haxe/ui/toolkit/data/DataSource.hx",28,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::data::DataSource newDS = null();		HX_STACK_VAR(newDS,"newDS");
	HX_STACK_LINE(30)
	return newDS;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

::String DataSource_obj::get_id( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_id",0x5605faab,"haxe.ui.toolkit.data.DataSource.get_id","haxe/ui/toolkit/data/DataSource.hx",39,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->_id;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_id,return )

::String DataSource_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","set_id",0x224e4f1f,"haxe.ui.toolkit.data.DataSource.set_id","haxe/ui/toolkit/data/DataSource.hx",42,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(43)
	this->_id = value;
	HX_STACK_LINE(44)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_id,return )

Void DataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","create",0x2ee56e83,"haxe.ui.toolkit.data.DataSource.create","haxe/ui/toolkit/data/DataSource.hx",47,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(48)
		this->_config = config;
		HX_STACK_LINE(50)
		if (((this->_config == null()))){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(54)
		this->_id = config->get(HX_CSTRING("id"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,create,(void))

bool DataSource_obj::open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","open",0xa0534b91,"haxe.ui.toolkit.data.DataSource.open","haxe/ui/toolkit/data/DataSource.hx",58,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->_open();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,open,return )

bool DataSource_obj::close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","close",0xbd229e11,"haxe.ui.toolkit.data.DataSource.close","haxe/ui/toolkit/data/DataSource.hx",62,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_close();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,close,return )

bool DataSource_obj::moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveFirst",0xef086e38,"haxe.ui.toolkit.data.DataSource.moveFirst","haxe/ui/toolkit/data/DataSource.hx",66,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->_moveFirst();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveFirst,return )

bool DataSource_obj::moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveNext",0x85c627eb,"haxe.ui.toolkit.data.DataSource.moveNext","haxe/ui/toolkit/data/DataSource.hx",70,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return this->_moveNext();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveNext,return )

Dynamic DataSource_obj::get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get",0xdd1b8eaf,"haxe.ui.toolkit.data.DataSource.get","haxe/ui/toolkit/data/DataSource.hx",74,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	return this->_get();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get,return )

bool DataSource_obj::add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","add",0xdd17003a,"haxe.ui.toolkit.data.DataSource.add","haxe/ui/toolkit/data/DataSource.hx",77,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(78)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(79)
	if ((this->allowAdditions)){
		HX_STACK_LINE(80)
		b = this->_add(o);
		HX_STACK_LINE(81)
		if (((b == true))){
			HX_STACK_LINE(82)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(85)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

bool DataSource_obj::update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","update",0x39db8d90,"haxe.ui.toolkit.data.DataSource.update","haxe/ui/toolkit/data/DataSource.hx",88,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(89)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(90)
	if ((this->allowUpdates)){
		HX_STACK_LINE(91)
		b = this->_update(o);
		HX_STACK_LINE(92)
		if ((b)){
			HX_STACK_LINE(93)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(96)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,update,return )

bool DataSource_obj::remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","remove",0xb75ea3cb,"haxe.ui.toolkit.data.DataSource.remove","haxe/ui/toolkit/data/DataSource.hx",99,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(101)
	if ((this->allowDeletions)){
		HX_STACK_LINE(102)
		b = this->_remove();
		HX_STACK_LINE(103)
		if ((b)){
			HX_STACK_LINE(104)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(107)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,remove,return )

Void DataSource_obj::removeAll( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","removeAll",0xfb893e16,"haxe.ui.toolkit.data.DataSource.removeAll","haxe/ui/toolkit/data/DataSource.hx",111,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		if ((this->moveFirst())){
			HX_STACK_LINE(112)
			do{
				HX_STACK_LINE(113)
				this->remove();
			}
while((this->moveFirst()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,removeAll,(void))

::String DataSource_obj::hash( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","hash",0x9ba77795,"haxe.ui.toolkit.data.DataSource.hash","haxe/ui/toolkit/data/DataSource.hx",118,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	Dynamic o = this->get();		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(120)
	if (((o == null()))){
		HX_STACK_LINE(121)
		return null();
	}
	HX_STACK_LINE(123)
	return (HX_CSTRING("") + ::__hxcpp_obj_id(o));
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,hash,return )

int DataSource_obj::size( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","size",0xa2f2e888,"haxe.ui.toolkit.data.DataSource.size","haxe/ui/toolkit/data/DataSource.hx",127,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(127)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,size,return )

bool DataSource_obj::_open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_open",0x7184a602,"haxe.ui.toolkit.data.DataSource._open","haxe/ui/toolkit/data/DataSource.hx",134,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_open,return )

bool DataSource_obj::_close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_close",0xf7206680,"haxe.ui.toolkit.data.DataSource._close","haxe/ui/toolkit/data/DataSource.hx",138,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_close,return )

bool DataSource_obj::_moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveFirst",0x79049a27,"haxe.ui.toolkit.data.DataSource._moveFirst","haxe/ui/toolkit/data/DataSource.hx",142,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveFirst,return )

bool DataSource_obj::_moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveNext",0x63f40edc,"haxe.ui.toolkit.data.DataSource._moveNext","haxe/ui/toolkit/data/DataSource.hx",146,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveNext,return )

Dynamic DataSource_obj::_get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_get",0x95b90d5e,"haxe.ui.toolkit.data.DataSource._get","haxe/ui/toolkit/data/DataSource.hx",150,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_get,return )

bool DataSource_obj::_add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_add",0x95b47ee9,"haxe.ui.toolkit.data.DataSource._add","haxe/ui/toolkit/data/DataSource.hx",154,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(154)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_add,return )

bool DataSource_obj::_update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_update",0xbded2641,"haxe.ui.toolkit.data.DataSource._update","haxe/ui/toolkit/data/DataSource.hx",158,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(158)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_update,return )

bool DataSource_obj::_remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_remove",0x3b703c7c,"haxe.ui.toolkit.data.DataSource._remove","haxe/ui/toolkit/data/DataSource.hx",162,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_remove,return )

Void DataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromString",0x6e31023e,"haxe.ui.toolkit.data.DataSource.createFromString","haxe/ui/toolkit/data/DataSource.hx",168,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromString,(void))

Void DataSource_obj::createFromResource( ::String resourceId,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromResource",0x549c2b7b,"haxe.ui.toolkit.data.DataSource.createFromResource","haxe/ui/toolkit/data/DataSource.hx",173,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(173)
		if (((resourceId != null()))){
			HX_STACK_LINE(174)
			::String data = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(resourceId,null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(175)
			this->createFromString(data,config);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromResource,(void))

Void DataSource_obj::dispatchChanged( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","dispatchChanged",0x378d04f3,"haxe.ui.toolkit.data.DataSource.dispatchChanged","haxe/ui/toolkit/data/DataSource.hx",180,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		if (((this->allowEvents == true))){
			HX_STACK_LINE(181)
			this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::CHANGE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,dispatchChanged,(void))

int DataSource_obj::getObjectId( Dynamic obj){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","getObjectId",0x683e3e49,"haxe.ui.toolkit.data.DataSource.getObjectId","haxe/ui/toolkit/data/DataSource.hx",191,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(191)
	return ::__hxcpp_obj_id(obj);
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,getObjectId,return )

int DataSource_obj::SAFE_NUM;

int DataSource_obj::clsId;


DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(_config,"_config");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_MARK_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_MARK_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_MARK_MEMBER_NAME(allowEvents,"allowEvents");
	::flash::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(_config,"_config");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_VISIT_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_VISIT_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_VISIT_MEMBER_NAME(allowEvents,"allowEvents");
	::flash::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { return clsId; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"_open") ) { return _open_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return inCallProp ? get_config() : config; }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_close") ) { return _close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { return _config; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveNext") ) { return moveNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveFirst") ) { return moveFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveNext") ) { return _moveNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_config") ) { return get_config_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveFirst") ) { return _moveFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allowEvents") ) { return allowEvents; }
		if (HX_FIELD_EQ(inName,"getObjectId") ) { return getObjectId_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { return allowUpdates; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { return allowAdditions; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { return allowDeletions; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return dispatchChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createFromResource") ) { return createFromResource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { clsId=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { _config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allowEvents") ) { allowEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { allowUpdates=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { allowAdditions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { allowDeletions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("_config"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("allowAdditions"));
	outFields->push(HX_CSTRING("allowUpdates"));
	outFields->push(HX_CSTRING("allowDeletions"));
	outFields->push(HX_CSTRING("allowEvents"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SAFE_NUM"),
	HX_CSTRING("clsId"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,_config),HX_CSTRING("_config")},
	{hx::fsString,(int)offsetof(DataSource_obj,_id),HX_CSTRING("_id")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowAdditions),HX_CSTRING("allowAdditions")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowUpdates),HX_CSTRING("allowUpdates")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowDeletions),HX_CSTRING("allowDeletions")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowEvents),HX_CSTRING("allowEvents")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("_config"),
	HX_CSTRING("_id"),
	HX_CSTRING("allowAdditions"),
	HX_CSTRING("allowUpdates"),
	HX_CSTRING("allowDeletions"),
	HX_CSTRING("allowEvents"),
	HX_CSTRING("get_config"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_id"),
	HX_CSTRING("set_id"),
	HX_CSTRING("create"),
	HX_CSTRING("open"),
	HX_CSTRING("close"),
	HX_CSTRING("moveFirst"),
	HX_CSTRING("moveNext"),
	HX_CSTRING("get"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("hash"),
	HX_CSTRING("size"),
	HX_CSTRING("_open"),
	HX_CSTRING("_close"),
	HX_CSTRING("_moveFirst"),
	HX_CSTRING("_moveNext"),
	HX_CSTRING("_get"),
	HX_CSTRING("_add"),
	HX_CSTRING("_update"),
	HX_CSTRING("_remove"),
	HX_CSTRING("createFromString"),
	HX_CSTRING("createFromResource"),
	HX_CSTRING("dispatchChanged"),
	HX_CSTRING("getObjectId"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_MARK_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_VISIT_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#endif

Class DataSource_obj::__mClass;

void DataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.DataSource"), hx::TCanCast< DataSource_obj> ,sStaticFields,sMemberFields,
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

void DataSource_obj::__boot()
{
	SAFE_NUM= (int)2147483647;
	clsId= (int)0;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
