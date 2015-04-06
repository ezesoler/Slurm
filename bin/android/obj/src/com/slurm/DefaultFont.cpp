#include <hxcpp.h>

#ifndef INCLUDED_com_slurm_DefaultFont
#include <com/slurm/DefaultFont.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontStyle
#include <openfl/_v2/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontType
#include <openfl/_v2/text/FontType.h>
#endif
namespace com{
namespace slurm{

Void DefaultFont_obj::__construct(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type)
{
HX_STACK_FRAME("com.slurm.DefaultFont","new",0xd6431c1e,"com.slurm.DefaultFont.new","com/slurm/Asset.hx",17,0x9bf94414)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(17)
	super::__construct(filename,style,type);
}
;
	return null();
}

//DefaultFont_obj::~DefaultFont_obj() { }

Dynamic DefaultFont_obj::__CreateEmpty() { return  new DefaultFont_obj; }
hx::ObjectPtr< DefaultFont_obj > DefaultFont_obj::__new(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type)
{  hx::ObjectPtr< DefaultFont_obj > result = new DefaultFont_obj();
	result->__construct(__o_filename,style,type);
	return result;}

Dynamic DefaultFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultFont_obj > result = new DefaultFont_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String DefaultFont_obj::resourceName;


DefaultFont_obj::DefaultFont_obj()
{
}

Dynamic DefaultFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultFont_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultFont_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultFont_obj::resourceName,"resourceName");
};

#endif

Class DefaultFont_obj::__mClass;

void DefaultFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.slurm.DefaultFont"), hx::TCanCast< DefaultFont_obj> ,sStaticFields,sMemberFields,
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

void DefaultFont_obj::__boot()
{
	resourceName= HX_CSTRING("NME_font_com_slurm_DefaultFont");
}

} // end namespace com
} // end namespace slurm
