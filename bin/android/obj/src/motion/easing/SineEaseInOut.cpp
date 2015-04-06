#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseInOut
#include <motion/easing/SineEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void SineEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseInOut","new",0xbf91a755,"motion.easing.SineEaseInOut.new","motion/easing/Sine.hx",72,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseInOut_obj::~SineEaseInOut_obj() { }

Dynamic SineEaseInOut_obj::__CreateEmpty() { return  new SineEaseInOut_obj; }
hx::ObjectPtr< SineEaseInOut_obj > SineEaseInOut_obj::__new()
{  hx::ObjectPtr< SineEaseInOut_obj > result = new SineEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic SineEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseInOut_obj > result = new SineEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *SineEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float SineEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseInOut","calculate",0x0db7921b,"motion.easing.SineEaseInOut.calculate","motion/easing/Sine.hx",79,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(81)
	Float _g = ::Math_obj::cos((::Math_obj::PI * k));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	Float _g1 = -(((_g - (int)1)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(81)
	return (Float(_g1) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseInOut_obj,calculate,return )

Float SineEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseInOut","ease",0xd9eacb59,"motion.easing.SineEaseInOut.ease","motion/easing/Sine.hx",86,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(88)
	Float _g = ::Math_obj::cos((Float((::Math_obj::PI * t)) / Float(d)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(88)
	Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(88)
	Float _g2 = ((Float(-(c)) / Float((int)2)) * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(88)
	return (_g2 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseInOut_obj,ease,return )


SineEaseInOut_obj::SineEaseInOut_obj()
{
}

Dynamic SineEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SineEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SineEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class SineEaseInOut_obj::__mClass;

void SineEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.SineEaseInOut"), hx::TCanCast< SineEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void SineEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
