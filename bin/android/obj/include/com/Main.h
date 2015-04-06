#ifndef INCLUDED_com_Main
#define INCLUDED_com_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/slurm/Core.h>
HX_DECLARE_CLASS1(com,Main)
HX_DECLARE_CLASS2(com,slurm,Core)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace com{


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::com::slurm::Core_obj{
	public:
		typedef ::com::slurm::Core_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Main"); }

};

} // end namespace com

#endif /* INCLUDED_com_Main */ 
