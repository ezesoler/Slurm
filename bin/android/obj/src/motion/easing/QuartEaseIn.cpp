#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseIn
#include <motion/easing/QuartEaseIn.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuartEaseIn","new",0x2a792619,"motion.easing.QuartEaseIn.new","motion/easing/Quart.hx",46,0x09ba724a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuartEaseIn_obj::~QuartEaseIn_obj() { }

Dynamic QuartEaseIn_obj::__CreateEmpty() { return  new QuartEaseIn_obj; }
hx::ObjectPtr< QuartEaseIn_obj > QuartEaseIn_obj::__new()
{  hx::ObjectPtr< QuartEaseIn_obj > result = new QuartEaseIn_obj();
	result->__construct();
	return result;}

Dynamic QuartEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseIn_obj > result = new QuartEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *QuartEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuartEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuartEaseIn","calculate",0x86c07bdf,"motion.easing.QuartEaseIn.calculate","motion/easing/Quart.hx",55,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(55)
	return (((k * k) * k) * k);
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseIn_obj,calculate,return )

Float QuartEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuartEaseIn","ease",0xf9923815,"motion.easing.QuartEaseIn.ease","motion/easing/Quart.hx",60,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	Float _g1 = (c * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(62)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(62)
	return (_g4 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseIn_obj,ease,return )


QuartEaseIn_obj::QuartEaseIn_obj()
{
}

Dynamic QuartEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuartEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuartEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuartEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseIn_obj::__mClass,"__mClass");
};

#endif

Class QuartEaseIn_obj::__mClass;

void QuartEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuartEaseIn"), hx::TCanCast< QuartEaseIn_obj> ,sStaticFields,sMemberFields,
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

void QuartEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
