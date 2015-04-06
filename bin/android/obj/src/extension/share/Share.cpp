#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_extension_share_Share
#include <extension/share/Share.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNI
#include <openfl/_v2/utils/JNI.h>
#endif
namespace extension{
namespace share{

Void Share_obj::__construct()
{
	return null();
}

//Share_obj::~Share_obj() { }

Dynamic Share_obj::__CreateEmpty() { return  new Share_obj; }
hx::ObjectPtr< Share_obj > Share_obj::__new()
{  hx::ObjectPtr< Share_obj > result = new Share_obj();
	result->__construct();
	return result;}

Dynamic Share_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Share_obj > result = new Share_obj();
	result->__construct();
	return result;}

Dynamic Share_obj::__share;

::String Share_obj::defaultSocialNetwork;

::String Share_obj::facebookAppID;

::String Share_obj::defaultURL;

Dynamic Share_obj::defaultFallback;

::String Share_obj::facebookRedirectURI;

::String Share_obj::defaultSubject;

::String Share_obj::FACEBOOK;

::String Share_obj::TWITTER;

Void Share_obj::init( ::String defaultSocialNetwork,::String __o_facebookAppID,::String __o_defaultURL,Dynamic defaultFallback,::String facebookRedirectURI,::String __o_defaultSubject){
::String facebookAppID = __o_facebookAppID.Default(HX_CSTRING(""));
::String defaultURL = __o_defaultURL.Default(HX_CSTRING(""));
::String defaultSubject = __o_defaultSubject.Default(HX_CSTRING(""));
	HX_STACK_FRAME("extension.share.Share","init",0xbe53aa1d,"extension.share.Share.init","extension/share/Share.hx",21,0xed40059f)
	HX_STACK_ARG(defaultSocialNetwork,"defaultSocialNetwork")
	HX_STACK_ARG(facebookAppID,"facebookAppID")
	HX_STACK_ARG(defaultURL,"defaultURL")
	HX_STACK_ARG(defaultFallback,"defaultFallback")
	HX_STACK_ARG(facebookRedirectURI,"facebookRedirectURI")
	HX_STACK_ARG(defaultSubject,"defaultSubject")
{
		HX_STACK_LINE(22)
		::extension::share::Share_obj::defaultSocialNetwork = defaultSocialNetwork;
		HX_STACK_LINE(23)
		::extension::share::Share_obj::facebookAppID = facebookAppID;
		HX_STACK_LINE(24)
		::extension::share::Share_obj::defaultURL = defaultURL;
		HX_STACK_LINE(25)
		::extension::share::Share_obj::defaultFallback = defaultFallback;
		HX_STACK_LINE(26)
		::extension::share::Share_obj::facebookRedirectURI = facebookRedirectURI;
		HX_STACK_LINE(27)
		::extension::share::Share_obj::defaultSubject = defaultSubject;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Share_obj,init,(void))

Void Share_obj::share( ::String text,::String subject,::String __o_image,::String __o_html,::String __o_email,::String url,::String socialNetwork,Dynamic fallback){
::String image = __o_image.Default(HX_CSTRING(""));
::String html = __o_html.Default(HX_CSTRING(""));
::String email = __o_email.Default(HX_CSTRING(""));
	HX_STACK_FRAME("extension.share.Share","share",0x88e5a132,"extension.share.Share.share","extension/share/Share.hx",30,0xed40059f)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(subject,"subject")
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(html,"html")
	HX_STACK_ARG(email,"email")
	HX_STACK_ARG(url,"url")
	HX_STACK_ARG(socialNetwork,"socialNetwork")
	HX_STACK_ARG(fallback,"fallback")
{
		HX_STACK_LINE(31)
		if (((url == null()))){
			HX_STACK_LINE(31)
			url = ::extension::share::Share_obj::defaultURL;
		}
		HX_STACK_LINE(32)
		if (((subject == null()))){
			HX_STACK_LINE(32)
			subject = ::extension::share::Share_obj::defaultSubject;
		}
		HX_STACK_LINE(33)
		if (((socialNetwork == null()))){
			HX_STACK_LINE(33)
			socialNetwork = ::extension::share::Share_obj::defaultSocialNetwork;
		}
		HX_STACK_LINE(34)
		if (((fallback == null()))){
			HX_STACK_LINE(34)
			fallback = ::extension::share::Share_obj::defaultFallback_dyn();
		}
		HX_STACK_LINE(35)
		::String _g = ::StringTools_obj::replace(url,HX_CSTRING("http://"),HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		::String cleanUrl = ::StringTools_obj::replace(_g,HX_CSTRING("https://"),HX_CSTRING(""));		HX_STACK_VAR(cleanUrl,"cleanUrl");
		HX_STACK_LINE(36)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(38)
			::extension::share::Share_obj::__share((text + ((  (((cleanUrl != HX_CSTRING("")))) ? ::String((HX_CSTRING(" ") + cleanUrl)) : ::String(HX_CSTRING("")) ))),subject,html,email);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(68)
					::String _g1 = ::Std_obj::string(e);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(68)
					::String _g2 = (HX_CSTRING("Share SHARE Exception: ") + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(68)
					::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("Share.hx"),68,HX_CSTRING("extension.share.Share"),HX_CSTRING("share")));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Share_obj,share,(void))


Share_obj::Share_obj()
{
}

Dynamic Share_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"share") ) { return share_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__share") ) { return __share; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultURL") ) { return defaultURL; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"facebookAppID") ) { return facebookAppID; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultSubject") ) { return defaultSubject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultFallback") ) { return defaultFallback; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"facebookRedirectURI") ) { return facebookRedirectURI; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"defaultSocialNetwork") ) { return defaultSocialNetwork; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Share_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__share") ) { __share=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultURL") ) { defaultURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"facebookAppID") ) { facebookAppID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultSubject") ) { defaultSubject=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultFallback") ) { defaultFallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"facebookRedirectURI") ) { facebookRedirectURI=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"defaultSocialNetwork") ) { defaultSocialNetwork=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Share_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__share"),
	HX_CSTRING("defaultSocialNetwork"),
	HX_CSTRING("facebookAppID"),
	HX_CSTRING("defaultURL"),
	HX_CSTRING("defaultFallback"),
	HX_CSTRING("facebookRedirectURI"),
	HX_CSTRING("defaultSubject"),
	HX_CSTRING("FACEBOOK"),
	HX_CSTRING("TWITTER"),
	HX_CSTRING("init"),
	HX_CSTRING("share"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Share_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Share_obj::__share,"__share");
	HX_MARK_MEMBER_NAME(Share_obj::defaultSocialNetwork,"defaultSocialNetwork");
	HX_MARK_MEMBER_NAME(Share_obj::facebookAppID,"facebookAppID");
	HX_MARK_MEMBER_NAME(Share_obj::defaultURL,"defaultURL");
	HX_MARK_MEMBER_NAME(Share_obj::defaultFallback,"defaultFallback");
	HX_MARK_MEMBER_NAME(Share_obj::facebookRedirectURI,"facebookRedirectURI");
	HX_MARK_MEMBER_NAME(Share_obj::defaultSubject,"defaultSubject");
	HX_MARK_MEMBER_NAME(Share_obj::FACEBOOK,"FACEBOOK");
	HX_MARK_MEMBER_NAME(Share_obj::TWITTER,"TWITTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Share_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Share_obj::__share,"__share");
	HX_VISIT_MEMBER_NAME(Share_obj::defaultSocialNetwork,"defaultSocialNetwork");
	HX_VISIT_MEMBER_NAME(Share_obj::facebookAppID,"facebookAppID");
	HX_VISIT_MEMBER_NAME(Share_obj::defaultURL,"defaultURL");
	HX_VISIT_MEMBER_NAME(Share_obj::defaultFallback,"defaultFallback");
	HX_VISIT_MEMBER_NAME(Share_obj::facebookRedirectURI,"facebookRedirectURI");
	HX_VISIT_MEMBER_NAME(Share_obj::defaultSubject,"defaultSubject");
	HX_VISIT_MEMBER_NAME(Share_obj::FACEBOOK,"FACEBOOK");
	HX_VISIT_MEMBER_NAME(Share_obj::TWITTER,"TWITTER");
};

#endif

Class Share_obj::__mClass;

void Share_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("extension.share.Share"), hx::TCanCast< Share_obj> ,sStaticFields,sMemberFields,
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

void Share_obj::__boot()
{
	__share= ::openfl::_v2::utils::JNI_obj::createStaticMethod(HX_CSTRING("shareex/ShareEx"),HX_CSTRING("share"),HX_CSTRING("(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"),null(),null());
	defaultSocialNetwork= HX_CSTRING("twitter");
	facebookAppID= HX_CSTRING("");
	defaultURL= HX_CSTRING("");
	defaultFallback= null();
	facebookRedirectURI= null();
	defaultSubject= HX_CSTRING("");
	FACEBOOK= HX_CSTRING("facebook");
	TWITTER= HX_CSTRING("twitter");
}

} // end namespace extension
} // end namespace share
