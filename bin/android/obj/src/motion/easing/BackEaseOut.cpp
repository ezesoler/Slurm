#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseOut_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseOut","new",0x863ef8a0,"motion.easing.BackEaseOut.new","motion/easing/Back.hx",113,0x81c0c12c)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(113)
	this->s = s;
}
;
	return null();
}

//BackEaseOut_obj::~BackEaseOut_obj() { }

Dynamic BackEaseOut_obj::__CreateEmpty() { return  new BackEaseOut_obj; }
hx::ObjectPtr< BackEaseOut_obj > BackEaseOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseOut_obj > result = new BackEaseOut_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseOut_obj > result = new BackEaseOut_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseOut","calculate",0x0d816da6,"motion.easing.BackEaseOut.calculate","motion/easing/Back.hx",118,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(120)
	Float _g = k = (k - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(120)
	Float _g1 = (_g * k);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(120)
	Float _g2 = (_g1 * (((((this->s + (int)1)) * k) + this->s)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(120)
	return (_g2 + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseOut_obj,calculate,return )

Float BackEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseOut","ease",0xeae49bae,"motion.easing.BackEaseOut.ease","motion/easing/Back.hx",125,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(127)
	Float _g = t = ((Float(t) / Float(d)) - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(127)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(127)
	Float _g2 = (_g1 * (((((this->s + (int)1)) * t) + this->s)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(127)
	Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(127)
	Float _g4 = (c * _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(127)
	return (_g4 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseOut_obj,ease,return )


BackEaseOut_obj::BackEaseOut_obj()
{
}

Dynamic BackEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseOut_obj,s),HX_CSTRING("s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

#endif

Class BackEaseOut_obj::__mClass;

void BackEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseOut"), hx::TCanCast< BackEaseOut_obj> ,sStaticFields,sMemberFields,
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

void BackEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
