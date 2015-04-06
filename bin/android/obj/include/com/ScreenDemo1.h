#ifndef INCLUDED_com_ScreenDemo1
#define INCLUDED_com_ScreenDemo1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/slurm/Screen.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(com,ScreenDemo1)
HX_DECLARE_CLASS2(com,slurm,Screen)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{


class HXCPP_CLASS_ATTRIBUTES  ScreenDemo1_obj : public ::com::slurm::Screen_obj{
	public:
		typedef ::com::slurm::Screen_obj super;
		typedef ScreenDemo1_obj OBJ_;
		ScreenDemo1_obj();
		Void __construct(::Xml script);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenDemo1_obj > __new(::Xml script);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenDemo1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScreenDemo1"); }

		virtual Void sharedContent( ::openfl::_v2::events::Event e);
		Dynamic sharedContent_dyn();

};

} // end namespace com

#endif /* INCLUDED_com_ScreenDemo1 */ 
