#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseIn
#include <motion/easing/SineEaseIn.h>
#endif
namespace motion{
namespace easing{

Void SineEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseIn","new",0x942406dd,"motion.easing.SineEaseIn.new","motion/easing/Sine.hx",45,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseIn_obj::~SineEaseIn_obj() { }

Dynamic SineEaseIn_obj::__CreateEmpty() { return  new SineEaseIn_obj; }
hx::ObjectPtr< SineEaseIn_obj > SineEaseIn_obj::__new()
{  hx::ObjectPtr< SineEaseIn_obj > result = new SineEaseIn_obj();
	result->__construct();
	return result;}

Dynamic SineEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseIn_obj > result = new SineEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *SineEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float SineEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseIn","calculate",0x2a4247a3,"motion.easing.SineEaseIn.calculate","motion/easing/Sine.hx",52,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(54)
	Float _g = ::Math_obj::cos((k * ((Float(::Math_obj::PI) / Float((int)2)))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	return ((int)1 - _g);
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseIn_obj,calculate,return )

Float SineEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseIn","ease",0x056c02d1,"motion.easing.SineEaseIn.ease","motion/easing/Sine.hx",59,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(61)
	Float _g = ::Math_obj::cos(((Float(t) / Float(d)) * ((Float(::Math_obj::PI) / Float((int)2)))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	Float _g1 = (-(c) * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(61)
	Float _g2 = (_g1 + c);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(61)
	return (_g2 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseIn_obj,ease,return )


SineEaseIn_obj::SineEaseIn_obj()
{
}

Dynamic SineEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SineEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SineEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#endif

Class SineEaseIn_obj::__mClass;

void SineEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.SineEaseIn"), hx::TCanCast< SineEaseIn_obj> ,sStaticFields,sMemberFields,
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

void SineEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
