#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace motion{
namespace actuators{

Void SimpleActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.SimpleActuator","new",0x6db9da29,"motion.actuators.SimpleActuator.new","motion/actuators/SimpleActuator.hx",48,0x731927e5)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(50)
	this->active = true;
	HX_STACK_LINE(51)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	this->propertyDetails = _g;
	HX_STACK_LINE(52)
	this->sendChange = false;
	HX_STACK_LINE(53)
	this->paused = false;
	HX_STACK_LINE(54)
	this->cacheVisible = false;
	HX_STACK_LINE(55)
	this->initialized = false;
	HX_STACK_LINE(56)
	this->setVisible = false;
	HX_STACK_LINE(57)
	this->toggleVisible = false;
	HX_STACK_LINE(61)
	int _g1 = ::openfl::_v2::Lib_obj::getTimer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(61)
	Float _g2 = (Float(_g1) / Float((int)1000));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(61)
	this->startTime = _g2;
	HX_STACK_LINE(69)
	super::__construct(target,duration,properties);
	HX_STACK_LINE(71)
	if ((!(::motion::actuators::SimpleActuator_obj::addedEvent))){
		HX_STACK_LINE(73)
		::motion::actuators::SimpleActuator_obj::addedEvent = true;
		HX_STACK_LINE(76)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,::motion::actuators::SimpleActuator_obj::stage_onEnterFrame_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//SimpleActuator_obj::~SimpleActuator_obj() { }

Dynamic SimpleActuator_obj::__CreateEmpty() { return  new SimpleActuator_obj; }
hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic SimpleActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleActuator_obj > result = new SimpleActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SimpleActuator_obj::setField_motion_actuators_SimpleActuator_T( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_motion_actuators_SimpleActuator_T",0xdcd18bfe,"motion.actuators.SimpleActuator.setField_motion_actuators_SimpleActuator_T","motion/actuators/SimpleActuator.hx",302,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(302)
		if ((::Reflect_obj::hasField(target,propertyName))){
			HX_STACK_LINE(307)
			if (((target != null()))){
				HX_STACK_LINE(307)
				target->__SetField(propertyName,value,false);
			}
		}
		else{
			HX_STACK_LINE(313)
			if (((target != null()))){
				HX_STACK_LINE(313)
				target->__SetField(propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_SimpleActuator_T,(void))

::motion::actuators::IGenericActuator SimpleActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","autoVisible",0xe8aa978c,"motion.actuators.SimpleActuator.autoVisible","motion/actuators/SimpleActuator.hx",90,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	if (((value == null()))){
		HX_STACK_LINE(94)
		value = true;
	}
	HX_STACK_LINE(98)
	this->_autoVisible = value;
	HX_STACK_LINE(100)
	if ((!(value))){
		HX_STACK_LINE(102)
		this->toggleVisible = false;
		HX_STACK_LINE(104)
		if ((this->setVisible)){
			HX_STACK_LINE(106)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(106)
			Dynamic value1 = this->cacheVisible;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(106)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
				HX_STACK_LINE(106)
				if (((target != null()))){
					HX_STACK_LINE(106)
					target->__SetField(HX_CSTRING("visible"),value1,false);
				}
			}
			else{
				HX_STACK_LINE(106)
				if (((target != null()))){
					HX_STACK_LINE(106)
					target->__SetField(HX_CSTRING("visible"),value1,true);
				}
			}
		}
	}
	HX_STACK_LINE(112)
	return hx::ObjectPtr<OBJ_>(this);
}


::motion::actuators::IGenericActuator SimpleActuator_obj::delay( Float duration){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","delay",0xf179a58c,"motion.actuators.SimpleActuator.delay","motion/actuators/SimpleActuator.hx",120,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(122)
	this->_delay = duration;
	HX_STACK_LINE(123)
	this->timeOffset = (this->startTime + duration);
	HX_STACK_LINE(125)
	return hx::ObjectPtr<OBJ_>(this);
}


Dynamic SimpleActuator_obj::getField( Dynamic target,::String propertyName){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","getField",0x353f81db,"motion.actuators.SimpleActuator.getField","motion/actuators/SimpleActuator.hx",130,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(propertyName,"propertyName")
	HX_STACK_LINE(134)
	Dynamic value = null();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(136)
	if ((::Reflect_obj::hasField(target,propertyName))){
		HX_STACK_LINE(141)
		Dynamic _g = ::Reflect_obj::field(target,propertyName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		value = _g;
	}
	else{
		HX_STACK_LINE(146)
		Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(propertyName,true)) );
		HX_STACK_LINE(146)
		value = _g1;
	}
	HX_STACK_LINE(150)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

Void SimpleActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","initialize",0x46b3e2a7,"motion.actuators.SimpleActuator.initialize","motion/actuators/SimpleActuator.hx",161,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(163)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(164)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(166)
				++(_g);
				HX_STACK_LINE(168)
				bool isField = true;		HX_STACK_VAR(isField,"isField");
				HX_STACK_LINE(172)
				if ((::Reflect_obj::hasField(this->target,i))){
					HX_STACK_LINE(174)
					Dynamic _g2 = ::Reflect_obj::field(this->target,i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(174)
					start = _g2;
				}
				else{
					HX_STACK_LINE(178)
					isField = false;
					HX_STACK_LINE(179)
					Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(179)
					{
						HX_STACK_LINE(179)
						Dynamic o = this->target;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(179)
						if (((o == null()))){
							HX_STACK_LINE(179)
							_g11 = null();
						}
						else{
							HX_STACK_LINE(179)
							_g11 = o->__Field(i,true);
						}
					}
					HX_STACK_LINE(179)
					start = _g11;
				}
				HX_STACK_LINE(189)
				if ((::Std_obj::is(start,hx::ClassOf< ::Float >()))){
					HX_STACK_LINE(191)
					Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(191)
					{
						HX_STACK_LINE(191)
						Dynamic target = this->properties;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(191)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(191)
						if ((::Reflect_obj::hasField(target,i))){
							HX_STACK_LINE(191)
							Dynamic _g2 = ::Reflect_obj::field(target,i);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(191)
							value = _g2;
						}
						else{
							HX_STACK_LINE(191)
							Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(191)
							_g3 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(i,true)) );
							HX_STACK_LINE(191)
							value = _g3;
						}
						HX_STACK_LINE(191)
						_g4 = value;
					}
					HX_STACK_LINE(191)
					Float _g5 = (_g4 - start);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(191)
					::motion::actuators::PropertyDetails _g6 = ::motion::actuators::PropertyDetails_obj::__new(this->target,i,start,_g5,isField);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(191)
					details = _g6;
					HX_STACK_LINE(192)
					this->propertyDetails->push(details);
				}
			}
		}
		HX_STACK_LINE(198)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(199)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

Void SimpleActuator_obj::move( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","move",0x94436928,"motion.actuators.SimpleActuator.move","motion/actuators/SimpleActuator.hx",204,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		bool _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		if ((::Reflect_obj::hasField(this->properties,HX_CSTRING("alpha")))){
			HX_STACK_LINE(207)
			_g = ::Std_obj::is(this->target,hx::ClassOf< ::openfl::_v2::display::DisplayObject >());
		}
		else{
			HX_STACK_LINE(207)
			_g = false;
		}
		HX_STACK_LINE(207)
		this->toggleVisible = _g;
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::motion::actuators::SimpleActuator_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/SimpleActuator.hx",212,0x731927e5)
				{
					HX_STACK_LINE(212)
					Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(212)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(212)
					if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
						HX_STACK_LINE(212)
						Dynamic _g1 = ::Reflect_obj::field(target,HX_CSTRING("visible"));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(212)
						value = _g1;
					}
					else{
						HX_STACK_LINE(212)
						Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(212)
						_g2 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
						HX_STACK_LINE(212)
						value = _g2;
					}
					HX_STACK_LINE(212)
					return value;
				}
				return null();
			}
		};
		HX_STACK_LINE(212)
		if (((  (((bool(this->toggleVisible) && bool((this->properties->__Field(HX_CSTRING("alpha"),true) != (int)0))))) ? bool(!(_Function_1_1::Block(this))) : bool(false) ))){
			HX_STACK_LINE(214)
			this->setVisible = true;
			HX_STACK_LINE(215)
			Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(215)
			{
				HX_STACK_LINE(215)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(215)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(215)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
					HX_STACK_LINE(215)
					Dynamic _g3 = ::Reflect_obj::field(target,HX_CSTRING("visible"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(215)
					value = _g3;
				}
				else{
					HX_STACK_LINE(215)
					Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(215)
					_g4 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("visible"),true)) );
					HX_STACK_LINE(215)
					value = _g4;
				}
				HX_STACK_LINE(215)
				_g5 = value;
			}
			HX_STACK_LINE(215)
			this->cacheVisible = _g5;
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(216)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
					HX_STACK_LINE(216)
					if (((target != null()))){
						HX_STACK_LINE(216)
						target->__SetField(HX_CSTRING("visible"),true,false);
					}
				}
				else{
					HX_STACK_LINE(216)
					if (((target != null()))){
						HX_STACK_LINE(216)
						target->__SetField(HX_CSTRING("visible"),true,true);
					}
				}
			}
		}
		HX_STACK_LINE(220)
		this->timeOffset = this->startTime;
		HX_STACK_LINE(221)
		::motion::actuators::SimpleActuator_obj::actuators->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(222)
		++(::motion::actuators::SimpleActuator_obj::actuatorsLength);
	}
return null();
}


::motion::actuators::IGenericActuator SimpleActuator_obj::onUpdate( Dynamic handler,Dynamic parameters){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","onUpdate",0x3b875a1f,"motion.actuators.SimpleActuator.onUpdate","motion/actuators/SimpleActuator.hx",230,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(232)
	this->_onUpdate = handler;
	HX_STACK_LINE(234)
	if (((parameters == null()))){
		HX_STACK_LINE(236)
		this->_onUpdateParams = Dynamic( Array_obj<Dynamic>::__new());
	}
	else{
		HX_STACK_LINE(240)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(244)
	this->sendChange = true;
	HX_STACK_LINE(246)
	return hx::ObjectPtr<OBJ_>(this);
}


Void SimpleActuator_obj::pause( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","pause",0xd7aaa4ff,"motion.actuators.SimpleActuator.pause","motion/actuators/SimpleActuator.hx",253,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		if ((!(this->paused))){
			HX_STACK_LINE(255)
			this->paused = true;
			HX_STACK_LINE(257)
			this->super::pause();
			HX_STACK_LINE(262)
			int _g = ::openfl::_v2::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			this->pauseTime = _g;
		}
	}
return null();
}


Void SimpleActuator_obj::resume( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","resume",0xf6a5e384,"motion.actuators.SimpleActuator.resume","motion/actuators/SimpleActuator.hx",277,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		if ((this->paused)){
			HX_STACK_LINE(280)
			this->paused = false;
			HX_STACK_LINE(284)
			int _g = ::openfl::_v2::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(284)
			Float _g1 = (_g - this->pauseTime);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(284)
			Float _g2 = (Float(_g1) / Float((int)1000));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(284)
			hx::AddEq(this->timeOffset,_g2);
			HX_STACK_LINE(292)
			this->super::resume();
		}
	}
return null();
}


Void SimpleActuator_obj::setProperty( ::motion::actuators::PropertyDetails details,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setProperty",0x3c3b8ce0,"motion.actuators.SimpleActuator.setProperty","motion/actuators/SimpleActuator.hx",323,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(details,"details")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(323)
		if ((details->isField)){
			HX_STACK_LINE(328)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(328)
			if (((o != null()))){
				HX_STACK_LINE(328)
				o->__SetField(details->propertyName,value,false);
			}
		}
		else{
			HX_STACK_LINE(334)
			Dynamic o = details->target;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(334)
			if (((o != null()))){
				HX_STACK_LINE(334)
				o->__SetField(details->propertyName,value,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

Void SimpleActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","stop",0x983e7619,"motion.actuators.SimpleActuator.stop","motion/actuators/SimpleActuator.hx",344,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
		HX_STACK_LINE(344)
		if ((this->active)){
			HX_STACK_LINE(346)
			if (((properties == null()))){
				HX_STACK_LINE(348)
				this->active = false;
				HX_STACK_LINE(350)
				if ((complete)){
					HX_STACK_LINE(352)
					this->apply();
				}
				HX_STACK_LINE(356)
				this->complete(sendEvent);
				HX_STACK_LINE(357)
				return null();
			}
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(361)
				Array< ::String > _g1 = ::Reflect_obj::fields(properties);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(361)
				while((true)){
					HX_STACK_LINE(361)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(361)
						break;
					}
					HX_STACK_LINE(361)
					::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(361)
					++(_g);
					HX_STACK_LINE(363)
					if ((::Reflect_obj::hasField(this->properties,i))){
						HX_STACK_LINE(365)
						this->active = false;
						HX_STACK_LINE(367)
						if ((complete)){
							HX_STACK_LINE(369)
							this->apply();
						}
						HX_STACK_LINE(373)
						this->complete(sendEvent);
						HX_STACK_LINE(374)
						return null();
					}
				}
			}
		}
	}
return null();
}


Void SimpleActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","update",0x7526ffe0,"motion.actuators.SimpleActuator.update","motion/actuators/SimpleActuator.hx",387,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(387)
		if ((!(this->paused))){
			HX_STACK_LINE(389)
			::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(390)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(391)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(393)
			Float tweenPosition = (Float(((currentTime - this->timeOffset))) / Float(this->duration));		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(395)
			if (((tweenPosition > (int)1))){
				HX_STACK_LINE(397)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(401)
			if ((!(this->initialized))){
				HX_STACK_LINE(403)
				this->initialize();
			}
			HX_STACK_LINE(407)
			if ((!(this->special))){
				HX_STACK_LINE(409)
				Float _g = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(409)
				easing = _g;
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(411)
					int _g2 = this->detailsLength;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(411)
					while((true)){
						HX_STACK_LINE(411)
						if ((!(((_g1 < _g2))))){
							HX_STACK_LINE(411)
							break;
						}
						HX_STACK_LINE(411)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(413)
						details = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();
						HX_STACK_LINE(414)
						{
							HX_STACK_LINE(414)
							Dynamic value = (details->start + (details->change * easing));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(414)
							if ((details->isField)){
								HX_STACK_LINE(414)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(414)
								if (((o != null()))){
									HX_STACK_LINE(414)
									o->__SetField(details->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(414)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(414)
								if (((o != null()))){
									HX_STACK_LINE(414)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(420)
				if ((!(this->_reverse))){
					HX_STACK_LINE(422)
					Float _g1 = this->_ease->calculate(tweenPosition);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(422)
					easing = _g1;
				}
				else{
					HX_STACK_LINE(426)
					Float _g2 = this->_ease->calculate(((int)1 - tweenPosition));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(426)
					easing = _g2;
				}
				HX_STACK_LINE(430)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(432)
					int _g = this->detailsLength;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(432)
					while((true)){
						HX_STACK_LINE(432)
						if ((!(((_g1 < _g))))){
							HX_STACK_LINE(432)
							break;
						}
						HX_STACK_LINE(432)
						int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(434)
						details = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();
						HX_STACK_LINE(436)
						if (((bool(this->_smartRotation) && bool(((bool((bool((bool((details->propertyName == HX_CSTRING("rotation"))) || bool((details->propertyName == HX_CSTRING("rotationX"))))) || bool((details->propertyName == HX_CSTRING("rotationY"))))) || bool((details->propertyName == HX_CSTRING("rotationZ"))))))))){
							HX_STACK_LINE(438)
							Float rotation = hx::Mod(details->change,(int)360);		HX_STACK_VAR(rotation,"rotation");
							HX_STACK_LINE(440)
							if (((rotation > (int)180))){
								HX_STACK_LINE(442)
								hx::SubEq(rotation,(int)360);
							}
							else{
								HX_STACK_LINE(444)
								if (((rotation < (int)-180))){
									HX_STACK_LINE(446)
									hx::AddEq(rotation,(int)360);
								}
							}
							HX_STACK_LINE(450)
							endValue = (details->start + (rotation * easing));
						}
						else{
							HX_STACK_LINE(454)
							endValue = (details->start + (details->change * easing));
						}
						HX_STACK_LINE(458)
						if ((!(this->_snapping))){
							HX_STACK_LINE(460)
							if ((details->isField)){
								HX_STACK_LINE(460)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(460)
								if (((o != null()))){
									HX_STACK_LINE(460)
									o->__SetField(details->propertyName,endValue,false);
								}
							}
							else{
								HX_STACK_LINE(460)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(460)
								if (((o != null()))){
									HX_STACK_LINE(460)
									o->__SetField(details->propertyName,endValue,true);
								}
							}
						}
						else{
							HX_STACK_LINE(464)
							Dynamic value = ::Math_obj::round(endValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(464)
							if ((details->isField)){
								HX_STACK_LINE(464)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(464)
								if (((o != null()))){
									HX_STACK_LINE(464)
									o->__SetField(details->propertyName,value,false);
								}
							}
							else{
								HX_STACK_LINE(464)
								Dynamic o = details->target;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(464)
								if (((o != null()))){
									HX_STACK_LINE(464)
									o->__SetField(details->propertyName,value,true);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(472)
			if (((tweenPosition == (int)1))){
				HX_STACK_LINE(474)
				if (((this->_repeat == (int)0))){
					HX_STACK_LINE(476)
					this->active = false;
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::motion::actuators::SimpleActuator_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/SimpleActuator.hx",478,0x731927e5)
							{
								HX_STACK_LINE(478)
								Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(478)
								{
									HX_STACK_LINE(478)
									Dynamic target = __this->target;		HX_STACK_VAR(target,"target");
									HX_STACK_LINE(478)
									Dynamic value = null();		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(478)
									if ((::Reflect_obj::hasField(target,HX_CSTRING("alpha")))){
										HX_STACK_LINE(478)
										Dynamic _g3 = ::Reflect_obj::field(target,HX_CSTRING("alpha"));		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(478)
										value = _g3;
									}
									else{
										HX_STACK_LINE(478)
										Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(478)
										_g4 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("alpha"),true)) );
										HX_STACK_LINE(478)
										value = _g4;
									}
									HX_STACK_LINE(478)
									_g5 = value;
								}
								HX_STACK_LINE(478)
								return (_g5 == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(478)
					if (((  ((this->toggleVisible)) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(480)
						Dynamic target = this->target;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(480)
						if ((::Reflect_obj::hasField(target,HX_CSTRING("visible")))){
							HX_STACK_LINE(480)
							if (((target != null()))){
								HX_STACK_LINE(480)
								target->__SetField(HX_CSTRING("visible"),false,false);
							}
						}
						else{
							HX_STACK_LINE(480)
							if (((target != null()))){
								HX_STACK_LINE(480)
								target->__SetField(HX_CSTRING("visible"),false,true);
							}
						}
					}
					HX_STACK_LINE(484)
					this->complete(true);
					HX_STACK_LINE(485)
					return null();
				}
				else{
					HX_STACK_LINE(489)
					if (((this->_onRepeat != null()))){
						HX_STACK_LINE(491)
						Dynamic method = this->_onRepeat;		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(491)
						Dynamic params = this->_onRepeatParams;		HX_STACK_VAR(params,"params");
						HX_STACK_LINE(491)
						if (((params == null()))){
							HX_STACK_LINE(491)
							params = Dynamic( Array_obj<Dynamic>::__new());
						}
						HX_STACK_LINE(491)
						::Reflect_obj::callMethod(method,method,params);
					}
					HX_STACK_LINE(495)
					if ((this->_reflect)){
						HX_STACK_LINE(497)
						this->_reverse = !(this->_reverse);
					}
					HX_STACK_LINE(501)
					this->startTime = currentTime;
					HX_STACK_LINE(502)
					this->timeOffset = (this->startTime + this->_delay);
					HX_STACK_LINE(504)
					if (((this->_repeat > (int)0))){
						HX_STACK_LINE(506)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(514)
			if ((this->sendChange)){
				HX_STACK_LINE(516)
				this->change();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

Array< ::Dynamic > SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

Void SimpleActuator_obj::stage_onEnterFrame( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","stage_onEnterFrame",0x3adccfac,"motion.actuators.SimpleActuator.stage_onEnterFrame","motion/actuators/SimpleActuator.hx",535,0x731927e5)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(538)
		int _g = ::openfl::_v2::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(538)
		Float currentTime = (Float(_g) / Float((int)1000));		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(546)
		::motion::actuators::SimpleActuator actuator;		HX_STACK_VAR(actuator,"actuator");
		HX_STACK_LINE(548)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(549)
		bool cleanup = false;		HX_STACK_VAR(cleanup,"cleanup");
		HX_STACK_LINE(551)
		{
			HX_STACK_LINE(551)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(551)
			int _g2 = ::motion::actuators::SimpleActuator_obj::actuatorsLength;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(551)
			while((true)){
				HX_STACK_LINE(551)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(551)
					break;
				}
				HX_STACK_LINE(551)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(553)
				actuator = ::motion::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast< ::motion::actuators::SimpleActuator >();
				HX_STACK_LINE(555)
				if (((bool((actuator != null())) && bool(actuator->active)))){
					HX_STACK_LINE(557)
					if (((currentTime > actuator->timeOffset))){
						HX_STACK_LINE(559)
						actuator->update(currentTime);
					}
					HX_STACK_LINE(563)
					(j)++;
				}
				else{
					HX_STACK_LINE(567)
					::motion::actuators::SimpleActuator_obj::actuators->splice(j,(int)1);
					HX_STACK_LINE(568)
					--(::motion::actuators::SimpleActuator_obj::actuatorsLength);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,stage_onEnterFrame,(void))


SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	::motion::actuators::GenericActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	::motion::actuators::GenericActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { return actuators; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { return addedEvent; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return timeOffset; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return sendChange; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return cacheVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return detailsLength; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { return actuatorsLength; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return propertyDetails; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onEnterFrame") ) { return stage_onEnterFrame_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_SimpleActuator_T") ) { return setField_motion_actuators_SimpleActuator_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timeOffset"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("cacheVisible"));
	outFields->push(HX_CSTRING("detailsLength"));
	outFields->push(HX_CSTRING("initialized"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("pauseTime"));
	outFields->push(HX_CSTRING("propertyDetails"));
	outFields->push(HX_CSTRING("sendChange"));
	outFields->push(HX_CSTRING("setVisible"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("toggleVisible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("actuators"),
	HX_CSTRING("actuatorsLength"),
	HX_CSTRING("addedEvent"),
	HX_CSTRING("stage_onEnterFrame"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,timeOffset),HX_CSTRING("timeOffset")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,active),HX_CSTRING("active")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,cacheVisible),HX_CSTRING("cacheVisible")},
	{hx::fsInt,(int)offsetof(SimpleActuator_obj,detailsLength),HX_CSTRING("detailsLength")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,initialized),HX_CSTRING("initialized")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,paused),HX_CSTRING("paused")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,pauseTime),HX_CSTRING("pauseTime")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SimpleActuator_obj,propertyDetails),HX_CSTRING("propertyDetails")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,sendChange),HX_CSTRING("sendChange")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,setVisible),HX_CSTRING("setVisible")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,startTime),HX_CSTRING("startTime")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,toggleVisible),HX_CSTRING("toggleVisible")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setField_motion_actuators_SimpleActuator_T"),
	HX_CSTRING("timeOffset"),
	HX_CSTRING("active"),
	HX_CSTRING("cacheVisible"),
	HX_CSTRING("detailsLength"),
	HX_CSTRING("initialized"),
	HX_CSTRING("paused"),
	HX_CSTRING("pauseTime"),
	HX_CSTRING("propertyDetails"),
	HX_CSTRING("sendChange"),
	HX_CSTRING("setVisible"),
	HX_CSTRING("startTime"),
	HX_CSTRING("toggleVisible"),
	HX_CSTRING("autoVisible"),
	HX_CSTRING("delay"),
	HX_CSTRING("getField"),
	HX_CSTRING("initialize"),
	HX_CSTRING("move"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("stop"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#endif

Class SimpleActuator_obj::__mClass;

void SimpleActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.SimpleActuator"), hx::TCanCast< SimpleActuator_obj> ,sStaticFields,sMemberFields,
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

void SimpleActuator_obj::__boot()
{
	actuators= Array_obj< ::Dynamic >::__new();
	actuatorsLength= (int)0;
	addedEvent= false;
}

} // end namespace motion
} // end namespace actuators
