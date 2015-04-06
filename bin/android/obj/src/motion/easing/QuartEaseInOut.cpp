#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseInOut
#include <motion/easing/QuartEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuartEaseInOut","new",0xb1a2b599,"motion.easing.QuartEaseInOut.new","motion/easing/Quart.hx",73,0x09ba724a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuartEaseInOut_obj::~QuartEaseInOut_obj() { }

Dynamic QuartEaseInOut_obj::__CreateEmpty() { return  new QuartEaseInOut_obj; }
hx::ObjectPtr< QuartEaseInOut_obj > QuartEaseInOut_obj::__new()
{  hx::ObjectPtr< QuartEaseInOut_obj > result = new QuartEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic QuartEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseInOut_obj > result = new QuartEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *QuartEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuartEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuartEaseInOut","calculate",0x9abaab5f,"motion.easing.QuartEaseInOut.calculate","motion/easing/Quart.hx",80,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	Float _g = hx::MultEq(k,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(82)
	if (((_g < (int)1))){
		HX_STACK_LINE(82)
		return ((((0.5 * k) * k) * k) * k);
	}
	HX_STACK_LINE(83)
	Float _g1 = hx::SubEq(k,(int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(83)
	Float _g2 = (_g1 * k);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(83)
	Float _g3 = (_g2 * k);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(83)
	Float _g4 = (_g3 * k);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(83)
	Float _g5 = (_g4 - (int)2);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(83)
	return (-0.5 * _g5);
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseInOut_obj,calculate,return )

Float QuartEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuartEaseInOut","ease",0xb6c63895,"motion.easing.QuartEaseInOut.ease","motion/easing/Quart.hx",88,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(90)
	Float _g = hx::DivEq(t,(Float(d) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	if (((_g < (int)1))){
		HX_STACK_LINE(91)
		return ((((((Float(c) / Float((int)2)) * t) * t) * t) * t) + b);
	}
	HX_STACK_LINE(93)
	Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(93)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(93)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(93)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(93)
	Float _g5 = (_g4 - (int)2);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(93)
	Float _g6 = ((Float(-(c)) / Float((int)2)) * _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(93)
	return (_g6 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseInOut_obj,ease,return )


QuartEaseInOut_obj::QuartEaseInOut_obj()
{
}

Dynamic QuartEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuartEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuartEaseInOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class QuartEaseInOut_obj::__mClass;

void QuartEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuartEaseInOut"), hx::TCanCast< QuartEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void QuartEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
