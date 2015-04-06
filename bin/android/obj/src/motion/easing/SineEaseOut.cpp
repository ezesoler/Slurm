#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseOut
#include <motion/easing/SineEaseOut.h>
#endif
namespace motion{
namespace easing{

Void SineEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseOut","new",0xf528023a,"motion.easing.SineEaseOut.new","motion/easing/Sine.hx",99,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseOut_obj::~SineEaseOut_obj() { }

Dynamic SineEaseOut_obj::__CreateEmpty() { return  new SineEaseOut_obj; }
hx::ObjectPtr< SineEaseOut_obj > SineEaseOut_obj::__new()
{  hx::ObjectPtr< SineEaseOut_obj > result = new SineEaseOut_obj();
	result->__construct();
	return result;}

Dynamic SineEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseOut_obj > result = new SineEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *SineEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float SineEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseOut","calculate",0x5640a6c0,"motion.easing.SineEaseOut.calculate","motion/easing/Sine.hx",108,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(108)
	return ::Math_obj::sin((k * ((Float(::Math_obj::PI) / Float((int)2)))));
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseOut_obj,calculate,return )

Float SineEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseOut","ease",0x87e3f8d4,"motion.easing.SineEaseOut.ease","motion/easing/Sine.hx",113,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(115)
	Float _g = ::Math_obj::sin(((Float(t) / Float(d)) * ((Float(::Math_obj::PI) / Float((int)2)))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	Float _g1 = (c * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(115)
	return (_g1 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseOut_obj,ease,return )


SineEaseOut_obj::SineEaseOut_obj()
{
}

Dynamic SineEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SineEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SineEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#endif

Class SineEaseOut_obj::__mClass;

void SineEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.SineEaseOut"), hx::TCanCast< SineEaseOut_obj> ,sStaticFields,sMemberFields,
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

void SineEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
