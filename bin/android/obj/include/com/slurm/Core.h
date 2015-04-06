#ifndef INCLUDED_com_slurm_Core
#define INCLUDED_com_slurm_Core

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(com,slurm,Core)
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
namespace slurm{


class HXCPP_CLASS_ATTRIBUTES  Core_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Core_obj OBJ_;
		Core_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Core_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Core_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Core"); }

		::Xml dataXml;
		bool debugMode;
		::com::slurm::Screen screen;
		int screenXdefault;
		int screenYdefault;
		virtual Void showScreen( hx::Null< int >  idScreen);
		Dynamic showScreen_dyn();

		virtual Void resize( ::openfl::_v2::events::Event E);
		Dynamic resize_dyn();

};

} // end namespace com
} // end namespace slurm

#endif /* INCLUDED_com_slurm_Core */ 
