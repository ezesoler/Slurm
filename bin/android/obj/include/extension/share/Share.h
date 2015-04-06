#ifndef INCLUDED_extension_share_Share
#define INCLUDED_extension_share_Share

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(extension,share,Share)
namespace extension{
namespace share{


class HXCPP_CLASS_ATTRIBUTES  Share_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Share_obj OBJ_;
		Share_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Share_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Share_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Share"); }

		static Dynamic __share;
		static Dynamic &__share_dyn() { return __share;}
		static ::String defaultSocialNetwork;
		static ::String facebookAppID;
		static ::String defaultURL;
		static Dynamic defaultFallback;
		static Dynamic &defaultFallback_dyn() { return defaultFallback;}
		static ::String facebookRedirectURI;
		static ::String defaultSubject;
		static ::String FACEBOOK;
		static ::String TWITTER;
		static Void init( ::String defaultSocialNetwork,::String facebookAppID,::String defaultURL,Dynamic defaultFallback,::String facebookRedirectURI,::String defaultSubject);
		static Dynamic init_dyn();

		static Void share( ::String text,::String subject,::String image,::String html,::String email,::String url,::String socialNetwork,Dynamic fallback);
		static Dynamic share_dyn();

};

} // end namespace extension
} // end namespace share

#endif /* INCLUDED_extension_share_Share */ 
