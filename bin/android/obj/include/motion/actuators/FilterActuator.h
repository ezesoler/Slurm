#ifndef INCLUDED_motion_actuators_FilterActuator
#define INCLUDED_motion_actuators_FilterActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/actuators/SimpleActuator.h>
HX_DECLARE_CLASS2(motion,actuators,FilterActuator)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,filters,BitmapFilter)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  FilterActuator_obj : public ::motion::actuators::SimpleActuator_obj{
	public:
		typedef ::motion::actuators::SimpleActuator_obj super;
		typedef FilterActuator_obj OBJ_;
		FilterActuator_obj();
		Void __construct(::openfl::_v2::display::DisplayObject target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FilterActuator_obj > __new(::openfl::_v2::display::DisplayObject target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterActuator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FilterActuator"); }

		virtual Void setField_openfl__v2_display_DisplayObject( ::openfl::_v2::display::DisplayObject target,::String propertyName,Dynamic value);
		Dynamic setField_openfl__v2_display_DisplayObject_dyn();

		::openfl::_v2::filters::BitmapFilter filter;
		::Class filterClass;
		int filterIndex;
		virtual Void apply( );

		virtual Void initialize( );

		virtual Void update( Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_FilterActuator */ 
