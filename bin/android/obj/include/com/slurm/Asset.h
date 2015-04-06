#ifndef INCLUDED_com_slurm_Asset
#define INCLUDED_com_slurm_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(com,slurm,Asset)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{
namespace slurm{


class HXCPP_CLASS_ATTRIBUTES  Asset_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Asset_obj OBJ_;
		Asset_obj();
		Void __construct(::Xml dataAsset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Asset_obj > __new(::Xml dataAsset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Asset"); }

		::String type;
		::openfl::_v2::display::Sprite normal;
		::openfl::_v2::display::Sprite over;
		::openfl::_v2::display::Sprite zone;
		virtual ::openfl::_v2::display::Sprite addBitmap( ::String nameBm,::String position);
		Dynamic addBitmap_dyn();

		virtual ::openfl::_v2::display::Sprite addSvg( ::String nameSvg,::String position);
		Dynamic addSvg_dyn();

		virtual Void overMe( ::openfl::_v2::events::Event e);
		Dynamic overMe_dyn();

		virtual Void outMe( ::openfl::_v2::events::Event e);
		Dynamic outMe_dyn();

};

} // end namespace com
} // end namespace slurm

#endif /* INCLUDED_com_slurm_Asset */ 
