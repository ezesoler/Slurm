#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Elastic
#include <motion/easing/Elastic.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#include <motion/easing/ElasticEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseOut
#include <motion/easing/ElasticEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Elastic_obj::__construct()
{
	return null();
}

//Elastic_obj::~Elastic_obj() { }

Dynamic Elastic_obj::__CreateEmpty() { return  new Elastic_obj; }
hx::ObjectPtr< Elastic_obj > Elastic_obj::__new()
{  hx::ObjectPtr< Elastic_obj > result = new Elastic_obj();
	result->__construct();
	return result;}

Dynamic Elastic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Elastic_obj > result = new Elastic_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Elastic_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeIn",0xc0bedf00,"motion.easing.Elastic.get_easeIn","motion/easing/Elastic.hx",22,0x73ac9cf4)
	HX_STACK_LINE(22)
	return ::motion::easing::ElasticEaseIn_obj::__new(0.1,0.4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeIn,return )

::motion::easing::IEasing Elastic_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeInOut",0x30d2d96e,"motion.easing.Elastic.get_easeInOut","motion/easing/Elastic.hx",29,0x73ac9cf4)
	HX_STACK_LINE(29)
	return ::motion::easing::ElasticEaseInOut_obj::__new(0.1,0.4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeInOut,return )

::motion::easing::IEasing Elastic_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeOut",0xe648d513,"motion.easing.Elastic.get_easeOut","motion/easing/Elastic.hx",36,0x73ac9cf4)
	HX_STACK_LINE(36)
	return ::motion::easing::ElasticEaseOut_obj::__new(0.1,0.4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeOut,return )


Elastic_obj::Elastic_obj()
{
}

Dynamic Elastic_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Elastic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Elastic_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Elastic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Elastic_obj::__mClass,"__mClass");
};

#endif

Class Elastic_obj::__mClass;

void Elastic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Elastic"), hx::TCanCast< Elastic_obj> ,sStaticFields,sMemberFields,
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

void Elastic_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
