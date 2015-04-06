#ifndef INCLUDED_com_slurm_Screen
#define INCLUDED_com_slurm_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(com,slurm,Asset)
HX_DECLARE_CLASS2(com,slurm,Screen)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace slurm{


class HXCPP_CLASS_ATTRIBUTES  Screen_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct(::Xml script);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Screen_obj > __new(::Xml script);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Screen"); }

		Dynamic assets;
		::Xml scriptObjects;
		::Xml scriptTweens;
		virtual Void tweenTime( ::String time);
		Dynamic tweenTime_dyn();

		virtual ::com::slurm::Asset getAsset( ::String name);
		Dynamic getAsset_dyn();

};

} // end namespace com
} // end namespace slurm

#endif /* INCLUDED_com_slurm_Screen */ 
