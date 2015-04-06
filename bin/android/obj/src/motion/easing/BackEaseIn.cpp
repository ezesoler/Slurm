#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseIn_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseIn","new",0xaa9a5f37,"motion.easing.BackEaseIn.new","motion/easing/Back.hx",51,0x81c0c12c)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(51)
	this->s = s;
}
;
	return null();
}

//BackEaseIn_obj::~BackEaseIn_obj() { }

Dynamic BackEaseIn_obj::__CreateEmpty() { return  new BackEaseIn_obj; }
hx::ObjectPtr< BackEaseIn_obj > BackEaseIn_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseIn_obj > result = new BackEaseIn_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseIn_obj > result = new BackEaseIn_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseIn","calculate",0x7c965f7d,"motion.easing.BackEaseIn.calculate","motion/easing/Back.hx",58,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(58)
	return ((k * k) * (((((this->s + (int)1)) * k) - this->s)));
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseIn_obj,calculate,return )

Float BackEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseIn","ease",0x9682f937,"motion.easing.BackEaseIn.ease","motion/easing/Back.hx",63,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(65)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	Float _g1 = (c * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(65)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(65)
	Float _g3 = (_g2 * (((((this->s + (int)1)) * t) - this->s)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(65)
	return (_g3 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseIn_obj,ease,return )


BackEaseIn_obj::BackEaseIn_obj()
{
}

Dynamic BackEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic BackEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseIn_obj,s),HX_CSTRING("s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

#endif

Class BackEaseIn_obj::__mClass;

void BackEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseIn"), hx::TCanCast< BackEaseIn_obj> ,sStaticFields,sMemberFields,
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

void BackEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
