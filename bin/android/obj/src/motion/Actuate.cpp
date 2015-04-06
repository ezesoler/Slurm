#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TweenTimer
#include <motion/_Actuate/TweenTimer.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
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
namespace motion{

Void Actuate_obj::__construct()
{
	return null();
}

//Actuate_obj::~Actuate_obj() { }

Dynamic Actuate_obj::__CreateEmpty() { return  new Actuate_obj; }
hx::ObjectPtr< Actuate_obj > Actuate_obj::__new()
{  hx::ObjectPtr< Actuate_obj > result = new Actuate_obj();
	result->__construct();
	return result;}

Dynamic Actuate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actuate_obj > result = new Actuate_obj();
	result->__construct();
	return result;}

::Class Actuate_obj::defaultActuator;

::motion::easing::IEasing Actuate_obj::defaultEase;

::haxe::ds::ObjectMap Actuate_obj::targetLibraries;

::motion::actuators::GenericActuator Actuate_obj::apply( Dynamic target,Dynamic properties,::Class customActuator){
	HX_STACK_FRAME("motion.Actuate","apply",0x649fd077,"motion.Actuate.apply","motion/Actuate.hx",37,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(39)
	::motion::Actuate_obj::stop(target,properties,null(),null());
	HX_STACK_LINE(41)
	if (((customActuator == null()))){
		HX_STACK_LINE(43)
		customActuator = ::motion::Actuate_obj::defaultActuator;
	}
	HX_STACK_LINE(47)
	::motion::actuators::GenericActuator actuator = ::Type_obj::createInstance(customActuator,Dynamic( Array_obj<Dynamic>::__new().Add(target).Add((int)0).Add(properties)));		HX_STACK_VAR(actuator,"actuator");
	HX_STACK_LINE(48)
	actuator->apply();
	HX_STACK_LINE(50)
	return actuator;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,apply,return )

::motion::_Actuate::EffectsOptions Actuate_obj::effects( ::openfl::_v2::display::DisplayObject target,Float duration,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","effects",0x889fc40b,"motion.Actuate.effects","motion/Actuate.hx",66,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(66)
		return ::motion::_Actuate::EffectsOptions_obj::__new(target,duration,overwrite);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,effects,return )

Array< ::motion::actuators::IGenericActuator > Actuate_obj::getLibrary( Dynamic target,hx::Null< bool >  __o_allowCreation){
bool allowCreation = __o_allowCreation.Default(true);
	HX_STACK_FRAME("motion.Actuate","getLibrary",0xc133c15c,"motion.Actuate.getLibrary","motion/Actuate.hx",73,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(allowCreation,"allowCreation")
{
		HX_STACK_LINE(75)
		int _g = ::__hxcpp_obj_id(target);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		if (((  ((!(::motion::Actuate_obj::targetLibraries->__Internal->exists(_g)))) ? bool(allowCreation) : bool(false) ))){
			HX_STACK_LINE(77)
			Array< ::motion::actuators::IGenericActuator > _g1 = Array_obj< ::motion::actuators::IGenericActuator >::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			::motion::Actuate_obj::targetLibraries->set(target,_g1);
		}
		HX_STACK_LINE(81)
		return ::motion::Actuate_obj::targetLibraries->get(target);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,getLibrary,return )

::motion::actuators::GenericActuator Actuate_obj::motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","motionPath",0x6ec8ff52,"motion.Actuate.motionPath","motion/Actuate.hx",96,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(96)
		return ::motion::Actuate_obj::tween(target,duration,properties,overwrite,hx::ClassOf< ::motion::actuators::MotionPathActuator >());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,motionPath,return )

Void Actuate_obj::pause( Dynamic target){
{
		HX_STACK_FRAME("motion.Actuate","pause",0xfdbc21ff,"motion.Actuate.pause","motion/Actuate.hx",108,0xcac92ba8)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(108)
		if ((::Std_obj::is(target,hx::ClassOf< ::motion::actuators::IGenericActuator >()))){
			HX_STACK_LINE(110)
			::motion::actuators::IGenericActuator actuator = target;		HX_STACK_VAR(actuator,"actuator");
			HX_STACK_LINE(111)
			actuator->pause();
		}
		else{
			HX_STACK_LINE(115)
			Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(117)
			if (((library != null()))){
				HX_STACK_LINE(119)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(119)
				while((true)){
					HX_STACK_LINE(119)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(119)
						break;
					}
					HX_STACK_LINE(119)
					::motion::actuators::IGenericActuator actuator = library->__get(_g);		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(119)
					++(_g);
					HX_STACK_LINE(121)
					actuator->pause();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,pause,(void))

Void Actuate_obj::pauseAll( ){
{
		HX_STACK_FRAME("motion.Actuate","pauseAll",0xb88d9862,"motion.Actuate.pauseAll","motion/Actuate.hx",134,0xcac92ba8)
		HX_STACK_LINE(134)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(::motion::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(136)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(136)
				while((true)){
					HX_STACK_LINE(136)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(136)
						break;
					}
					HX_STACK_LINE(136)
					::motion::actuators::IGenericActuator actuator = library->__get(_g);		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(136)
					++(_g);
					HX_STACK_LINE(138)
					actuator->pause();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,pauseAll,(void))

Void Actuate_obj::reset( ){
{
		HX_STACK_FRAME("motion.Actuate","reset",0x272c94d8,"motion.Actuate.reset","motion/Actuate.hx",150,0xcac92ba8)
		HX_STACK_LINE(152)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(::motion::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(154)
				int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(156)
				while((true)){
					HX_STACK_LINE(156)
					if ((!(((i >= (int)0))))){
						HX_STACK_LINE(156)
						break;
					}
					HX_STACK_LINE(158)
					library->__get(i)->stop(null(),false,false);
					HX_STACK_LINE(159)
					(i)--;
				}
			}
;
		}
		HX_STACK_LINE(165)
		::haxe::ds::ObjectMap _g = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		::motion::Actuate_obj::targetLibraries = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,reset,(void))

Void Actuate_obj::resume( Dynamic target){
{
		HX_STACK_FRAME("motion.Actuate","resume",0x1fe1c684,"motion.Actuate.resume","motion/Actuate.hx",176,0xcac92ba8)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(176)
		if ((::Std_obj::is(target,hx::ClassOf< ::motion::actuators::IGenericActuator >()))){
			HX_STACK_LINE(178)
			::motion::actuators::IGenericActuator actuator = target;		HX_STACK_VAR(actuator,"actuator");
			HX_STACK_LINE(179)
			actuator->resume();
		}
		else{
			HX_STACK_LINE(183)
			Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(185)
			if (((library != null()))){
				HX_STACK_LINE(187)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(187)
				while((true)){
					HX_STACK_LINE(187)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(187)
						break;
					}
					HX_STACK_LINE(187)
					::motion::actuators::IGenericActuator actuator = library->__get(_g);		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(187)
					++(_g);
					HX_STACK_LINE(189)
					actuator->resume();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,resume,(void))

Void Actuate_obj::resumeAll( ){
{
		HX_STACK_FRAME("motion.Actuate","resumeAll",0x7a6fd4fd,"motion.Actuate.resumeAll","motion/Actuate.hx",202,0xcac92ba8)
		HX_STACK_LINE(202)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(::motion::Actuate_obj::targetLibraries->iterator());  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(204)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					if ((!(((_g < library->length))))){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					::motion::actuators::IGenericActuator actuator = library->__get(_g);		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(204)
					++(_g);
					HX_STACK_LINE(206)
					actuator->resume();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,resumeAll,(void))

Void Actuate_obj::stop( Dynamic target,Dynamic properties,hx::Null< bool >  __o_complete,hx::Null< bool >  __o_sendEvent){
bool complete = __o_complete.Default(false);
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("motion.Actuate","stop",0xb1ab9919,"motion.Actuate.stop","motion/Actuate.hx",224,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(224)
		if (((target != null()))){
			HX_STACK_LINE(226)
			if ((::Std_obj::is(target,hx::ClassOf< ::motion::actuators::IGenericActuator >()))){
				HX_STACK_LINE(228)
				::motion::actuators::IGenericActuator actuator = target;		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(229)
				actuator->stop(null(),complete,sendEvent);
			}
			else{
				HX_STACK_LINE(233)
				Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(target,false);		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(235)
				if (((library != null()))){
					HX_STACK_LINE(237)
					if ((::Std_obj::is(properties,hx::ClassOf< ::String >()))){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",239,0xcac92ba8)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(239)
						Dynamic temp = _Function_5_1::Block();		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(240)
						{
							HX_STACK_LINE(240)
							::String field = properties;		HX_STACK_VAR(field,"field");
							HX_STACK_LINE(240)
							if (((temp != null()))){
								HX_STACK_LINE(240)
								temp->__SetField(field,null(),false);
							}
						}
						HX_STACK_LINE(241)
						properties = temp;
					}
					else{
						HX_STACK_LINE(243)
						if ((::Std_obj::is(properties,hx::ClassOf< Array<int> >()))){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",245,0xcac92ba8)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(245)
							Dynamic temp = _Function_6_1::Block();		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(247)
								Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(247)
								_g1 = hx::TCastToArray(properties);
								HX_STACK_LINE(247)
								while((true)){
									HX_STACK_LINE(247)
									if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(247)
										break;
									}
									HX_STACK_LINE(247)
									Dynamic property = _g1->__GetItem(_g);		HX_STACK_VAR(property,"property");
									HX_STACK_LINE(247)
									++(_g);
									HX_STACK_LINE(249)
									{
										HX_STACK_LINE(249)
										::String field = property;		HX_STACK_VAR(field,"field");
										HX_STACK_LINE(249)
										if (((temp != null()))){
											HX_STACK_LINE(249)
											temp->__SetField(field,null(),false);
										}
									}
								}
							}
							HX_STACK_LINE(253)
							properties = temp;
						}
					}
					HX_STACK_LINE(257)
					int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(259)
					while((true)){
						HX_STACK_LINE(259)
						if ((!(((i >= (int)0))))){
							HX_STACK_LINE(259)
							break;
						}
						HX_STACK_LINE(261)
						library->__get(i)->stop(properties,complete,sendEvent);
						HX_STACK_LINE(262)
						(i)--;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,stop,(void))

::motion::actuators::GenericActuator Actuate_obj::timer( Float duration,::Class customActuator){
	HX_STACK_FRAME("motion.Actuate","timer",0x509a0ace,"motion.Actuate.timer","motion/Actuate.hx",282,0xcac92ba8)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(284)
	::motion::_Actuate::TweenTimer _g = ::motion::_Actuate::TweenTimer_obj::__new((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(284)
	::motion::_Actuate::TweenTimer _g1 = ::motion::_Actuate::TweenTimer_obj::__new((int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(284)
	return ::motion::Actuate_obj::tween(_g,duration,_g1,false,customActuator);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,timer,return )

::motion::_Actuate::TransformOptions Actuate_obj::transform( Dynamic target,hx::Null< Float >  __o_duration,hx::Null< bool >  __o_overwrite){
Float duration = __o_duration.Default(0);
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","transform",0xc41430f5,"motion.Actuate.transform","motion/Actuate.hx",301,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(301)
		return ::motion::_Actuate::TransformOptions_obj::__new(target,duration,overwrite);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,transform,return )

::motion::actuators::GenericActuator Actuate_obj::tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite,::Class customActuator){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","tween",0x59d4f574,"motion.Actuate.tween","motion/Actuate.hx",318,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
	HX_STACK_ARG(customActuator,"customActuator")
{
		HX_STACK_LINE(320)
		if (((target != null()))){
			HX_STACK_LINE(322)
			if (((duration > (int)0))){
				HX_STACK_LINE(324)
				if (((customActuator == null()))){
					HX_STACK_LINE(326)
					customActuator = ::motion::Actuate_obj::defaultActuator;
				}
				HX_STACK_LINE(330)
				::motion::actuators::GenericActuator actuator = ::Type_obj::createInstance(customActuator,Dynamic( Array_obj<Dynamic>::__new().Add(target).Add(duration).Add(properties)));		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(331)
				Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(actuator->target,null());		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(333)
				if ((overwrite)){
					HX_STACK_LINE(335)
					int i = (library->length - (int)1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						if ((!(((i >= (int)0))))){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(338)
						library->__get(i)->stop(actuator->properties,false,false);
						HX_STACK_LINE(339)
						(i)--;
					}
					HX_STACK_LINE(342)
					Array< ::motion::actuators::IGenericActuator > _g = ::motion::Actuate_obj::getLibrary(actuator->target,null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(342)
					library = _g;
				}
				HX_STACK_LINE(346)
				library->push(actuator);
				HX_STACK_LINE(347)
				actuator->move();
				HX_STACK_LINE(349)
				return actuator;
			}
			else{
				HX_STACK_LINE(353)
				return ::motion::Actuate_obj::apply(target,properties,customActuator);
			}
		}
		HX_STACK_LINE(359)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,tween,return )

Void Actuate_obj::unload( ::motion::actuators::GenericActuator actuator){
{
		HX_STACK_FRAME("motion.Actuate","unload",0x7ce9fdd6,"motion.Actuate.unload","motion/Actuate.hx",364,0xcac92ba8)
		HX_STACK_ARG(actuator,"actuator")
		HX_STACK_LINE(366)
		Dynamic target = actuator->target;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(368)
		int _g = ::__hxcpp_obj_id(target);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(368)
		if ((::motion::Actuate_obj::targetLibraries->__Internal->exists(_g))){
			HX_STACK_LINE(370)
			::motion::Actuate_obj::targetLibraries->get(target)->__Field(HX_CSTRING("remove"),true)(actuator);
			HX_STACK_LINE(372)
			if (((::motion::Actuate_obj::targetLibraries->get(target)->__Field(HX_CSTRING("length"),true) == (int)0))){
				HX_STACK_LINE(374)
				::motion::Actuate_obj::targetLibraries->remove(target);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,unload,(void))

::motion::actuators::GenericActuator Actuate_obj::update( Dynamic target,Float duration,Dynamic start,Dynamic end,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","update",0x9e62e2e0,"motion.Actuate.update","motion/Actuate.hx",393,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(overwrite,"overwrite")
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &end,Dynamic &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",395,0xcac92ba8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("start") , start,false);
					__result->Add(HX_CSTRING("end") , end,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(395)
		Dynamic properties = _Function_1_1::Block(end,start);		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(397)
		return ::motion::Actuate_obj::tween(target,duration,properties,overwrite,hx::ClassOf< ::motion::actuators::MethodActuator >());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,update,return )


Actuate_obj::Actuate_obj()
{
}

Dynamic Actuate_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"timer") ) { return timer_dyn(); }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { return effects_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pauseAll") ) { return pauseAll_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resumeAll") ) { return resumeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { return getLibrary_dyn(); }
		if (HX_FIELD_EQ(inName,"motionPath") ) { return motionPath_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { return defaultEase; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { return defaultActuator; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { return targetLibraries; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actuate_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { defaultEase=inValue.Cast< ::motion::easing::IEasing >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { defaultActuator=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { targetLibraries=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actuate_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("defaultActuator"),
	HX_CSTRING("defaultEase"),
	HX_CSTRING("targetLibraries"),
	HX_CSTRING("apply"),
	HX_CSTRING("effects"),
	HX_CSTRING("getLibrary"),
	HX_CSTRING("motionPath"),
	HX_CSTRING("pause"),
	HX_CSTRING("pauseAll"),
	HX_CSTRING("reset"),
	HX_CSTRING("resume"),
	HX_CSTRING("resumeAll"),
	HX_CSTRING("stop"),
	HX_CSTRING("timer"),
	HX_CSTRING("transform"),
	HX_CSTRING("tween"),
	HX_CSTRING("unload"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#endif

Class Actuate_obj::__mClass;

void Actuate_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.Actuate"), hx::TCanCast< Actuate_obj> ,sStaticFields,sMemberFields,
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

void Actuate_obj::__boot()
{
	defaultActuator= hx::ClassOf< ::motion::actuators::SimpleActuator >();
	defaultEase= ::motion::easing::Expo_obj::get_easeOut();
	targetLibraries= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace motion
