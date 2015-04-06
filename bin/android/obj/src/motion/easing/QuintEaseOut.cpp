#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseOut
#include <motion/easing/QuintEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuintEaseOut","new",0xe7b6dc72,"motion.easing.QuintEaseOut.new","motion/easing/Quint.hx",104,0xeefb033e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuintEaseOut_obj::~QuintEaseOut_obj() { }

Dynamic QuintEaseOut_obj::__CreateEmpty() { return  new QuintEaseOut_obj; }
hx::ObjectPtr< QuintEaseOut_obj > QuintEaseOut_obj::__new()
{  hx::ObjectPtr< QuintEaseOut_obj > result = new QuintEaseOut_obj();
	result->__construct();
	return result;}

Dynamic QuintEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseOut_obj > result = new QuintEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *QuintEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuintEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuintEaseOut","calculate",0x0720faf8,"motion.easing.QuintEaseOut.calculate","motion/easing/Quint.hx",111,0xeefb033e)
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
	Float _g4 = (_g3 * k);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(113)
	return (_g4 + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseOut_obj,calculate,return )

Float QuintEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuintEaseOut","ease",0xd2540f9c,"motion.easing.QuintEaseOut.ease","motion/easing/Quint.hx",118,0xeefb033e)
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
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(120)
	Float _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(120)
	Float _g6 = (c * _g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(120)
	return (_g6 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseOut_obj,ease,return )


QuintEaseOut_obj::QuintEaseOut_obj()
{
}

Dynamic QuintEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic QuintEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuintEaseOut_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

#endif

Class QuintEaseOut_obj::__mClass;

void QuintEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuintEaseOut"), hx::TCanCast< QuintEaseOut_obj> ,sStaticFields,sMemberFields,
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

void QuintEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
