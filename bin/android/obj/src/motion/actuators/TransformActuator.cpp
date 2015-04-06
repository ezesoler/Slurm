#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace motion{
namespace actuators{

Void TransformActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.TransformActuator","new",0x47f6a58b,"motion.actuators.TransformActuator.new","motion/actuators/TransformActuator.hx",23,0x0795ec87)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(23)
	super::__construct(target,duration,properties);
}
;
	return null();
}

//TransformActuator_obj::~TransformActuator_obj() { }

Dynamic TransformActuator_obj::__CreateEmpty() { return  new TransformActuator_obj; }
hx::ObjectPtr< TransformActuator_obj > TransformActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< TransformActuator_obj > result = new TransformActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic TransformActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransformActuator_obj > result = new TransformActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void TransformActuator_obj::setField_openfl__v2_geom_Transform( ::openfl::_v2::geom::Transform target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","setField_openfl__v2_geom_Transform",0x4f0665ea,"motion.actuators.TransformActuator.setField_openfl__v2_geom_Transform","motion/actuators/SimpleActuator.hx",302,0x731927e5)
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


HX_DEFINE_DYNAMIC_FUNC3(TransformActuator_obj,setField_openfl__v2_geom_Transform,(void))

Void TransformActuator_obj::setField_motion_actuators_TransformActuator_T( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","setField_motion_actuators_TransformActuator_T",0x9a29d91e,"motion.actuators.TransformActuator.setField_motion_actuators_TransformActuator_T","motion/actuators/SimpleActuator.hx",302,0x731927e5)
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


HX_DEFINE_DYNAMIC_FUNC3(TransformActuator_obj,setField_motion_actuators_TransformActuator_T,(void))

Void TransformActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","apply",0xba1e3b59,"motion.actuators.TransformActuator.apply","motion/actuators/TransformActuator.hx",28,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->initialize();
		HX_STACK_LINE(32)
		if (((this->endColorTransform != null()))){
			HX_STACK_LINE(34)
			::openfl::_v2::geom::Transform transform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(34)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("transform")))){
					HX_STACK_LINE(34)
					Dynamic _g = ::Reflect_obj::field(target,HX_CSTRING("transform"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(34)
					value = _g;
				}
				else{
					HX_STACK_LINE(34)
					Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(34)
					_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("transform"),true)) );
					HX_STACK_LINE(34)
					value = _g1;
				}
				HX_STACK_LINE(34)
				transform = value;
			}
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				Dynamic value = this->endColorTransform;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(35)
				if ((::Reflect_obj::hasField(transform,HX_CSTRING("colorTransform")))){
					HX_STACK_LINE(35)
					if (((transform != null()))){
						HX_STACK_LINE(35)
						transform->__SetField(HX_CSTRING("colorTransform"),value,false);
					}
				}
				else{
					HX_STACK_LINE(35)
					if (((transform != null()))){
						HX_STACK_LINE(35)
						transform->__SetField(HX_CSTRING("colorTransform"),value,true);
					}
				}
			}
		}
		HX_STACK_LINE(39)
		if (((this->endSoundTransform != null()))){
			HX_STACK_LINE(41)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(41)
			Dynamic value = this->endSoundTransform;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(41)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(41)
				if (((target != null()))){
					HX_STACK_LINE(41)
					target->__SetField(HX_CSTRING("soundTransform"),value,false);
				}
			}
			else{
				HX_STACK_LINE(41)
				if (((target != null()))){
					HX_STACK_LINE(41)
					target->__SetField(HX_CSTRING("soundTransform"),value,true);
				}
			}
		}
	}
return null();
}


Void TransformActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initialize",0x51c62785,"motion.actuators.TransformActuator.initialize","motion/actuators/TransformActuator.hx",48,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		if (((  ((::Reflect_obj::hasField(this->properties,HX_CSTRING("colorValue")))) ? bool(::Std_obj::is(this->target,hx::ClassOf< ::openfl::_v2::display::DisplayObject >())) : bool(false) ))){
			HX_STACK_LINE(52)
			this->initializeColor();
		}
		HX_STACK_LINE(56)
		if (((  ((!(::Reflect_obj::hasField(this->properties,HX_CSTRING("soundVolume"))))) ? bool(::Reflect_obj::hasField(this->properties,HX_CSTRING("soundPan"))) : bool(true) ))){
			HX_STACK_LINE(58)
			this->initializeSound();
		}
		HX_STACK_LINE(62)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(63)
		this->initialized = true;
	}
return null();
}


Void TransformActuator_obj::initializeColor( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initializeColor",0x768d579e,"motion.actuators.TransformActuator.initializeColor","motion/actuators/TransformActuator.hx",68,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::openfl::_v2::geom::ColorTransform _g = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->endColorTransform = _g;
		HX_STACK_LINE(72)
		int color = this->properties->__Field(HX_CSTRING("colorValue"),true);		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(73)
		Float strength = this->properties->__Field(HX_CSTRING("colorStrength"),true);		HX_STACK_VAR(strength,"strength");
		HX_STACK_LINE(75)
		if (((strength < (int)1))){
			HX_STACK_LINE(77)
			Float multiplier;		HX_STACK_VAR(multiplier,"multiplier");
			HX_STACK_LINE(78)
			Float offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(80)
			if (((strength < 0.5))){
				HX_STACK_LINE(82)
				multiplier = (int)1;
				HX_STACK_LINE(83)
				offset = (strength * (int)2);
			}
			else{
				HX_STACK_LINE(87)
				multiplier = ((int)1 - (((strength - 0.5)) * (int)2));
				HX_STACK_LINE(88)
				offset = (int)1;
			}
			HX_STACK_LINE(92)
			this->endColorTransform->redMultiplier = multiplier;
			HX_STACK_LINE(93)
			this->endColorTransform->greenMultiplier = multiplier;
			HX_STACK_LINE(94)
			this->endColorTransform->blueMultiplier = multiplier;
			HX_STACK_LINE(96)
			this->endColorTransform->redOffset = (offset * ((int((int(color) >> int((int)16))) & int((int)255))));
			HX_STACK_LINE(97)
			this->endColorTransform->greenOffset = (offset * ((int((int(color) >> int((int)8))) & int((int)255))));
			HX_STACK_LINE(98)
			this->endColorTransform->blueOffset = (offset * ((int(color) & int((int)255))));
		}
		else{
			HX_STACK_LINE(104)
			this->endColorTransform->redMultiplier = (int)0;
			HX_STACK_LINE(105)
			this->endColorTransform->greenMultiplier = (int)0;
			HX_STACK_LINE(106)
			this->endColorTransform->blueMultiplier = (int)0;
			HX_STACK_LINE(108)
			this->endColorTransform->redOffset = (int((int(color) >> int((int)16))) & int((int)255));
			HX_STACK_LINE(109)
			this->endColorTransform->greenOffset = (int((int(color) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(110)
			this->endColorTransform->blueOffset = (int(color) & int((int)255));
		}
		HX_STACK_LINE(114)
		Array< ::String > propertyNames = Array_obj< ::String >::__new().Add(HX_CSTRING("redMultiplier")).Add(HX_CSTRING("greenMultiplier")).Add(HX_CSTRING("blueMultiplier")).Add(HX_CSTRING("redOffset")).Add(HX_CSTRING("greenOffset")).Add(HX_CSTRING("blueOffset"));		HX_STACK_VAR(propertyNames,"propertyNames");
		HX_STACK_LINE(116)
		if ((::Reflect_obj::hasField(this->properties,HX_CSTRING("colorAlpha")))){
			HX_STACK_LINE(118)
			this->endColorTransform->alphaMultiplier = this->properties->__Field(HX_CSTRING("colorAlpha"),true);
			HX_STACK_LINE(119)
			propertyNames->push(HX_CSTRING("alphaMultiplier"));
		}
		else{
			HX_STACK_LINE(123)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(123)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(123)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("alpha")))){
					HX_STACK_LINE(123)
					Dynamic _g1 = ::Reflect_obj::field(target,HX_CSTRING("alpha"));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(123)
					value = _g1;
				}
				else{
					HX_STACK_LINE(123)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(123)
					_g2 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("alpha"),true)) );
					HX_STACK_LINE(123)
					value = _g2;
				}
				HX_STACK_LINE(123)
				_g3 = value;
			}
			HX_STACK_LINE(123)
			this->endColorTransform->alphaMultiplier = _g3;
		}
		HX_STACK_LINE(127)
		::openfl::_v2::geom::Transform transform;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(127)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(127)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("transform")))){
				HX_STACK_LINE(127)
				Dynamic _g4 = ::Reflect_obj::field(target,HX_CSTRING("transform"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(127)
				value = _g4;
			}
			else{
				HX_STACK_LINE(127)
				Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(127)
				_g5 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("transform"),true)) );
				HX_STACK_LINE(127)
				value = _g5;
			}
			HX_STACK_LINE(127)
			transform = value;
		}
		HX_STACK_LINE(128)
		::openfl::_v2::geom::ColorTransform begin;		HX_STACK_VAR(begin,"begin");
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_v2::geom::Transform &transform){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/TransformActuator.hx",128,0x0795ec87)
				{
					HX_STACK_LINE(128)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(128)
					if ((::Reflect_obj::hasField(transform,HX_CSTRING("colorTransform")))){
						HX_STACK_LINE(128)
						Dynamic _g6 = ::Reflect_obj::field(transform,HX_CSTRING("colorTransform"));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(128)
						value = _g6;
					}
					else{
						HX_STACK_LINE(128)
						Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(128)
						_g7 = (  (((transform == null()))) ? Dynamic(null()) : Dynamic(transform->__Field(HX_CSTRING("colorTransform"),true)) );
						HX_STACK_LINE(128)
						value = _g7;
					}
					HX_STACK_LINE(128)
					return value;
				}
				return null();
			}
		};
		HX_STACK_LINE(128)
		begin = _Function_1_1::Block(transform);
		HX_STACK_LINE(129)
		::openfl::_v2::geom::ColorTransform _g8 = ::openfl::_v2::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(129)
		this->tweenColorTransform = _g8;
		HX_STACK_LINE(131)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(132)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				if ((!(((_g1 < propertyNames->length))))){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				::String propertyName = propertyNames->__get(_g1);		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(134)
				++(_g1);
				HX_STACK_LINE(136)
				Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
				struct _Function_3_1{
					inline static Dynamic Block( ::String &propertyName,::openfl::_v2::geom::ColorTransform &begin){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/TransformActuator.hx",136,0x0795ec87)
						{
							HX_STACK_LINE(136)
							Dynamic value = null();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(136)
							if ((::Reflect_obj::hasField(begin,propertyName))){
								HX_STACK_LINE(136)
								Dynamic _g9 = ::Reflect_obj::field(begin,propertyName);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(136)
								value = _g9;
							}
							else{
								HX_STACK_LINE(136)
								Dynamic _g10;		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(136)
								_g10 = (  (((begin == null()))) ? Dynamic(null()) : Dynamic(begin->__Field(propertyName,true)) );
								HX_STACK_LINE(136)
								value = _g10;
							}
							HX_STACK_LINE(136)
							return value;
						}
						return null();
					}
				};
				HX_STACK_LINE(136)
				_g11 = _Function_3_1::Block(propertyName,begin);
				HX_STACK_LINE(136)
				start = _g11;
				HX_STACK_LINE(137)
				Dynamic _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::openfl::_v2::geom::ColorTransform target = this->endColorTransform;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(137)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(137)
					if ((::Reflect_obj::hasField(target,propertyName))){
						HX_STACK_LINE(137)
						Dynamic _g12 = ::Reflect_obj::field(target,propertyName);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(137)
						value = _g12;
					}
					else{
						HX_STACK_LINE(137)
						Dynamic _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(137)
						_g13 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(propertyName,true)) );
						HX_STACK_LINE(137)
						value = _g13;
					}
					HX_STACK_LINE(137)
					_g14 = value;
				}
				HX_STACK_LINE(137)
				Float _g15 = (_g14 - start);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(137)
				::motion::actuators::PropertyDetails _g16 = ::motion::actuators::PropertyDetails_obj::__new(this->tweenColorTransform,propertyName,start,_g15,null());		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(137)
				details = _g16;
				HX_STACK_LINE(138)
				this->propertyDetails->push(details);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeColor,(void))

Void TransformActuator_obj::initializeSound( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initializeSound",0xacfd730a,"motion.actuators.TransformActuator.initializeSound","motion/actuators/TransformActuator.hx",145,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(147)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(147)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(147)
				Dynamic _g = ::Reflect_obj::field(target,HX_CSTRING("soundTransform"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				value = _g;
			}
			else{
				HX_STACK_LINE(147)
				Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(147)
				_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("soundTransform"),true)) );
				HX_STACK_LINE(147)
				value = _g1;
			}
			HX_STACK_LINE(147)
			_g2 = value;
		}
		HX_STACK_LINE(147)
		if (((_g2 == null()))){
			HX_STACK_LINE(149)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(149)
			Dynamic value = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(149)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(149)
				if (((target != null()))){
					HX_STACK_LINE(149)
					target->__SetField(HX_CSTRING("soundTransform"),value,false);
				}
			}
			else{
				HX_STACK_LINE(149)
				if (((target != null()))){
					HX_STACK_LINE(149)
					target->__SetField(HX_CSTRING("soundTransform"),value,true);
				}
			}
		}
		HX_STACK_LINE(153)
		::openfl::media::SoundTransform start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(153)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(153)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(153)
				Dynamic _g3 = ::Reflect_obj::field(target,HX_CSTRING("soundTransform"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(153)
				value = _g3;
			}
			else{
				HX_STACK_LINE(153)
				Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(153)
				_g4 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("soundTransform"),true)) );
				HX_STACK_LINE(153)
				value = _g4;
			}
			HX_STACK_LINE(153)
			start = value;
		}
		HX_STACK_LINE(154)
		Dynamic _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(154)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(154)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(154)
				Dynamic _g5 = ::Reflect_obj::field(target,HX_CSTRING("soundTransform"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(154)
				value = _g5;
			}
			else{
				HX_STACK_LINE(154)
				Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(154)
				_g6 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("soundTransform"),true)) );
				HX_STACK_LINE(154)
				value = _g6;
			}
			HX_STACK_LINE(154)
			_g7 = value;
		}
		HX_STACK_LINE(154)
		this->endSoundTransform = _g7;
		HX_STACK_LINE(155)
		::openfl::media::SoundTransform _g8 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(155)
		this->tweenSoundTransform = _g8;
		HX_STACK_LINE(157)
		if ((::Reflect_obj::hasField(this->properties,HX_CSTRING("soundVolume")))){
			HX_STACK_LINE(159)
			this->endSoundTransform->volume = this->properties->__Field(HX_CSTRING("soundVolume"),true);
			HX_STACK_LINE(160)
			::motion::actuators::PropertyDetails _g9 = ::motion::actuators::PropertyDetails_obj::__new(this->tweenSoundTransform,HX_CSTRING("volume"),start->volume,(this->endSoundTransform->volume - start->volume),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(160)
			this->propertyDetails->push(_g9);
		}
		HX_STACK_LINE(164)
		if ((::Reflect_obj::hasField(this->properties,HX_CSTRING("soundPan")))){
			HX_STACK_LINE(166)
			this->endSoundTransform->pan = this->properties->__Field(HX_CSTRING("soundPan"),true);
			HX_STACK_LINE(167)
			::motion::actuators::PropertyDetails _g10 = ::motion::actuators::PropertyDetails_obj::__new(this->tweenSoundTransform,HX_CSTRING("pan"),start->pan,(this->endSoundTransform->pan - start->pan),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(167)
			this->propertyDetails->push(_g10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeSound,(void))

Void TransformActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","update",0x1781fdbe,"motion.actuators.TransformActuator.update","motion/actuators/TransformActuator.hx",174,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(176)
		this->super::update(currentTime);
		HX_STACK_LINE(178)
		if (((this->endColorTransform != null()))){
			HX_STACK_LINE(180)
			::openfl::_v2::geom::Transform transform;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				Dynamic target = this->target;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(180)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(180)
				if ((::Reflect_obj::hasField(target,HX_CSTRING("transform")))){
					HX_STACK_LINE(180)
					Dynamic _g = ::Reflect_obj::field(target,HX_CSTRING("transform"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(180)
					value = _g;
				}
				else{
					HX_STACK_LINE(180)
					Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(180)
					_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("transform"),true)) );
					HX_STACK_LINE(180)
					value = _g1;
				}
				HX_STACK_LINE(180)
				transform = value;
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				Dynamic value = this->tweenColorTransform;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(181)
				if ((::Reflect_obj::hasField(transform,HX_CSTRING("colorTransform")))){
					HX_STACK_LINE(181)
					if (((transform != null()))){
						HX_STACK_LINE(181)
						transform->__SetField(HX_CSTRING("colorTransform"),value,false);
					}
				}
				else{
					HX_STACK_LINE(181)
					if (((transform != null()))){
						HX_STACK_LINE(181)
						transform->__SetField(HX_CSTRING("colorTransform"),value,true);
					}
				}
			}
		}
		HX_STACK_LINE(185)
		if (((this->endSoundTransform != null()))){
			HX_STACK_LINE(187)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(187)
			Dynamic value = this->tweenSoundTransform;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(187)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("soundTransform")))){
				HX_STACK_LINE(187)
				if (((target != null()))){
					HX_STACK_LINE(187)
					target->__SetField(HX_CSTRING("soundTransform"),value,false);
				}
			}
			else{
				HX_STACK_LINE(187)
				if (((target != null()))){
					HX_STACK_LINE(187)
					target->__SetField(HX_CSTRING("soundTransform"),value,true);
				}
			}
		}
	}
return null();
}



TransformActuator_obj::TransformActuator_obj()
{
}

void TransformActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformActuator);
	HX_MARK_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_MARK_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_MARK_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_MARK_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransformActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_VISIT_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_VISIT_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_VISIT_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TransformActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeColor") ) { return initializeColor_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeSound") ) { return initializeSound_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { return endColorTransform; }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { return endSoundTransform; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { return tweenColorTransform; }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { return tweenSoundTransform; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setField_openfl__v2_geom_Transform") ) { return setField_openfl__v2_geom_Transform_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_TransformActuator_T") ) { return setField_motion_actuators_TransformActuator_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransformActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { endColorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { endSoundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { tweenColorTransform=inValue.Cast< ::openfl::_v2::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { tweenSoundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("endColorTransform"));
	outFields->push(HX_CSTRING("endSoundTransform"));
	outFields->push(HX_CSTRING("tweenColorTransform"));
	outFields->push(HX_CSTRING("tweenSoundTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(TransformActuator_obj,endColorTransform),HX_CSTRING("endColorTransform")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(TransformActuator_obj,endSoundTransform),HX_CSTRING("endSoundTransform")},
	{hx::fsObject /*::openfl::_v2::geom::ColorTransform*/ ,(int)offsetof(TransformActuator_obj,tweenColorTransform),HX_CSTRING("tweenColorTransform")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(TransformActuator_obj,tweenSoundTransform),HX_CSTRING("tweenSoundTransform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setField_openfl__v2_geom_Transform"),
	HX_CSTRING("setField_motion_actuators_TransformActuator_T"),
	HX_CSTRING("endColorTransform"),
	HX_CSTRING("endSoundTransform"),
	HX_CSTRING("tweenColorTransform"),
	HX_CSTRING("tweenSoundTransform"),
	HX_CSTRING("apply"),
	HX_CSTRING("initialize"),
	HX_CSTRING("initializeColor"),
	HX_CSTRING("initializeSound"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransformActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransformActuator_obj::__mClass,"__mClass");
};

#endif

Class TransformActuator_obj::__mClass;

void TransformActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.TransformActuator"), hx::TCanCast< TransformActuator_obj> ,sStaticFields,sMemberFields,
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

void TransformActuator_obj::__boot()
{
}

} // end namespace motion
} // end namespace actuators
