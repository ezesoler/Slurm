#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_ScreenDemo1
#include <com/ScreenDemo1.h>
#endif
#ifndef INCLUDED_com_slurm_Asset
#include <com/slurm/Asset.h>
#endif
#ifndef INCLUDED_com_slurm_Screen
#include <com/slurm/Screen.h>
#endif
#ifndef INCLUDED_extension_share_Share
#include <extension/share/Share.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_TouchEvent
#include <openfl/_v2/events/TouchEvent.h>
#endif
namespace com{

Void ScreenDemo1_obj::__construct(::Xml script)
{
HX_STACK_FRAME("com.ScreenDemo1","new",0x8d1aca47,"com.ScreenDemo1.new","com/ScreenDemo1.hx",20,0xfe14faca)
HX_STACK_THIS(this)
HX_STACK_ARG(script,"script")
{
	HX_STACK_LINE(21)
	super::__construct(script);
	HX_STACK_LINE(23)
	this->getAsset(HX_CSTRING("demo1Btn"))->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_END,this->sharedContent_dyn(),null(),null(),null());
}
;
	return null();
}

//ScreenDemo1_obj::~ScreenDemo1_obj() { }

Dynamic ScreenDemo1_obj::__CreateEmpty() { return  new ScreenDemo1_obj; }
hx::ObjectPtr< ScreenDemo1_obj > ScreenDemo1_obj::__new(::Xml script)
{  hx::ObjectPtr< ScreenDemo1_obj > result = new ScreenDemo1_obj();
	result->__construct(script);
	return result;}

Dynamic ScreenDemo1_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenDemo1_obj > result = new ScreenDemo1_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ScreenDemo1_obj::sharedContent( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.ScreenDemo1","sharedContent",0x17b3a5bb,"com.ScreenDemo1.sharedContent","com/ScreenDemo1.hx",29,0xfe14faca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(30)
		::extension::share::Share_obj::init(HX_CSTRING("facebook"),null(),null(),null(),null(),null());
		HX_STACK_LINE(31)
		::extension::share::Share_obj::facebookAppID = HX_CSTRING("711338032231185");
		HX_STACK_LINE(32)
		::extension::share::Share_obj::defaultURL = HX_CSTRING("http://www.puralax.com/mobile/");
		HX_STACK_LINE(33)
		::extension::share::Share_obj::defaultSubject = HX_CSTRING("Try puralax!");
		HX_STACK_LINE(34)
		::extension::share::Share_obj::share(HX_CSTRING("Hi, I'm testing the OpenFL-Sharing extension!"),null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDemo1_obj,sharedContent,(void))


ScreenDemo1_obj::ScreenDemo1_obj()
{
}

Dynamic ScreenDemo1_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"sharedContent") ) { return sharedContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenDemo1_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenDemo1_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sharedContent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenDemo1_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenDemo1_obj::__mClass,"__mClass");
};

#endif

Class ScreenDemo1_obj::__mClass;

void ScreenDemo1_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.ScreenDemo1"), hx::TCanCast< ScreenDemo1_obj> ,sStaticFields,sMemberFields,
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

void ScreenDemo1_obj::__boot()
{
}

} // end namespace com
