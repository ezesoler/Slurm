#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseIn
#include <motion/easing/QuartEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseInOut
#include <motion/easing/QuartEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseOut
#include <motion/easing/QuartEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Quart_obj::__construct()
{
	return null();
}

//Quart_obj::~Quart_obj() { }

Dynamic Quart_obj::__CreateEmpty() { return  new Quart_obj; }
hx::ObjectPtr< Quart_obj > Quart_obj::__new()
{  hx::ObjectPtr< Quart_obj > result = new Quart_obj();
	result->__construct();
	return result;}

Dynamic Quart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quart_obj > result = new Quart_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Quart_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeIn",0x186bc256,"motion.easing.Quart.get_easeIn","motion/easing/Quart.hx",21,0x09ba724a)
	HX_STACK_LINE(21)
	return ::motion::easing::QuartEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeIn,return )

::motion::easing::IEasing Quart_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeInOut",0x30ee2fd8,"motion.easing.Quart.get_easeInOut","motion/easing/Quart.hx",28,0x09ba724a)
	HX_STACK_LINE(28)
	return ::motion::easing::QuartEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeInOut,return )

::motion::easing::IEasing Quart_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeOut",0x45e2dcfd,"motion.easing.Quart.get_easeOut","motion/easing/Quart.hx",35,0x09ba724a)
	HX_STACK_LINE(35)
	return ::motion::easing::QuartEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeOut,return )


Quart_obj::Quart_obj()
{
}

Dynamic Quart_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return get_easeIn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return get_easeOut(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return get_easeInOut(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { return get_easeIn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { return get_easeOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { return get_easeInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quart_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Quart_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeIn"),
	HX_CSTRING("get_easeInOut"),
	HX_CSTRING("get_easeOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
};

#endif

Class Quart_obj::__mClass;

void Quart_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Quart"), hx::TCanCast< Quart_obj> ,sStaticFields,sMemberFields,
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

void Quart_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing