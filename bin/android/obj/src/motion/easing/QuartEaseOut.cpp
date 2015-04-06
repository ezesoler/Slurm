#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseOut
#include <motion/easing/QuartEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuartEaseOut","new",0xe94e377e,"motion.easing.QuartEaseOut.new","motion/easing/Quart.hx",104,0x09ba724a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuartEaseOut_obj::~QuartEaseOut_obj() { }

Dynamic QuartEaseOut_obj::__CreateEmpty() { return  new QuartEaseOut_obj; }
hx::ObjectPtr< QuartEaseOut_obj > QuartEaseOut_obj::__new()
{  hx::ObjectPtr< QuartEaseOut_obj > result = new QuartEaseOut_obj();
	result->__construct();
	return result;}

Dynamic QuartEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseOut_obj > result = new QuartEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *QuartEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuartEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuartEaseOut","calculate",0xe8302704,"motion.easing.QuartEaseOut.calculate","motion/easing/Quart.hx",111,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(113)
	Float _g = --(k);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	Float _g1 = (_g * k);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	Float _g2 = (_g1 * k);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	Float _g3 = (_g2 * k);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(113)
	return -(((_g3 - (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseOut_obj,calculate,return )

Float QuartEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuartEaseOut","ease",0x352c5f10,"motion.easing.QuartEaseOut.ease","motion/easing/Quart.hx",118,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(120)
	Float _g = t = ((Float(t) / Float(d)) - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(120)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(120)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(120)
	Float _g4 = (_g3 - (int)1);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(120)
	Float _g5 = (-(c) * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(120)
	return (_g5 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseOut_obj,ease,return )


QuartEaseOut_obj::QuartEaseOut_obj()
{
}

Dynamic QuartEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuartEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuartEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

#endif

Class QuartEaseOut_obj::__mClass;

void QuartEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuartEaseOut"), hx::TCanCast< QuartEaseOut_obj> ,sStaticFields,sMemberFields,
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

void QuartEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
