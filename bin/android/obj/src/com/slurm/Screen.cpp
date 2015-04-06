#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_slurm_Asset
#include <com/slurm/Asset.h>
#endif
#ifndef INCLUDED_com_slurm_Screen
#include <com/slurm/Screen.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace com{
namespace slurm{

Void Screen_obj::__construct(::Xml script)
{
HX_STACK_FRAME("com.slurm.Screen","new",0x4cefb7e2,"com.slurm.Screen.new","com/slurm/Screen.hx",12,0x7d7dfacc)
HX_STACK_THIS(this)
HX_STACK_ARG(script,"script")
{
	HX_STACK_LINE(16)
	this->scriptTweens = null();
	HX_STACK_LINE(15)
	this->scriptObjects = null();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/slurm/Screen.hx",14,0x7d7dfacc)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(14)
	this->assets = _Function_1_1::Block();
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	::String _g = script->get(HX_CSTRING("name"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	::String _g1 = (_g + HX_CSTRING(" active."));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("Screen.hx"),21,HX_CSTRING("com.slurm.Screen"),HX_CSTRING("new")));
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(script->elements());  __it->hasNext(); ){
		::Xml screenData = __it->next();
		{
			HX_STACK_LINE(23)
			::String _g2 = screenData->get_nodeName();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(23)
			if (((_g2 == HX_CSTRING("objects")))){
				HX_STACK_LINE(24)
				this->scriptObjects = screenData;
			}
			else{
				HX_STACK_LINE(26)
				::String _g3 = screenData->get_nodeName();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(26)
				if (((_g3 == HX_CSTRING("tweens")))){
					HX_STACK_LINE(27)
					this->scriptTweens = screenData;
				}
			}
		}
;
	}
	HX_STACK_LINE(30)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->scriptObjects->elementsNamed(HX_CSTRING("object")));  __it->hasNext(); ){
		::Xml objectData = __it->next();
		{
			HX_STACK_LINE(31)
			::com::slurm::Asset asset = ::com::slurm::Asset_obj::__new(objectData);		HX_STACK_VAR(asset,"asset");
			HX_STACK_LINE(32)
			this->addChild(asset);
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				Dynamic o = this->assets;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(33)
				::String field = asset->get_name();		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(33)
				if (((o != null()))){
					HX_STACK_LINE(33)
					o->__SetField(field,asset,false);
				}
			}
		}
;
	}
	HX_STACK_LINE(35)
	this->tweenTime(HX_CSTRING("in"));
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new(::Xml script)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(script);
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Screen_obj::tweenTime( ::String __o_time){
::String time = __o_time.Default(HX_CSTRING("in"));
	HX_STACK_FRAME("com.slurm.Screen","tweenTime",0xb2ad291a,"com.slurm.Screen.tweenTime","com/slurm/Screen.hx",38,0x7d7dfacc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
{
		HX_STACK_LINE(39)
		::Xml dataTw = null();		HX_STACK_VAR(dataTw,"dataTw");
		HX_STACK_LINE(40)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->scriptTweens->elements());  __it->hasNext(); ){
			::Xml tweenData = __it->next();
			{
				HX_STACK_LINE(41)
				::String _g = tweenData->get_nodeName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(41)
				if (((_g == time))){
					HX_STACK_LINE(42)
					dataTw = tweenData;
				}
			}
;
		}
		HX_STACK_LINE(45)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(dataTw->elementsNamed(HX_CSTRING("tween")));  __it->hasNext(); ){
			::Xml twData = __it->next();
			{
				HX_STACK_LINE(46)
				Array< ::String > propTwArr = twData->get(HX_CSTRING("properties")).split(HX_CSTRING(","));		HX_STACK_VAR(propTwArr,"propTwArr");
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/slurm/Screen.hx",47,0x7d7dfacc)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(47)
				Dynamic propTwObj = _Function_2_1::Block();		HX_STACK_VAR(propTwObj,"propTwObj");
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(48)
					while((true)){
						HX_STACK_LINE(48)
						if ((!(((_g < propTwArr->length))))){
							HX_STACK_LINE(48)
							break;
						}
						HX_STACK_LINE(48)
						::String propTw = propTwArr->__get(_g);		HX_STACK_VAR(propTw,"propTw");
						HX_STACK_LINE(48)
						++(_g);
						HX_STACK_LINE(49)
						Array< ::String > pTw = propTw.split(HX_CSTRING(":"));		HX_STACK_VAR(pTw,"pTw");
						HX_STACK_LINE(50)
						::String _g1 = twData->get(HX_CSTRING("destination"));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(50)
						if (((_g1 == HX_CSTRING("from")))){
							HX_STACK_LINE(51)
							if (((bool((pTw->__get((int)0) == HX_CSTRING("x"))) || bool((pTw->__get((int)0) == HX_CSTRING("y")))))){
								HX_STACK_LINE(52)
								{
									HX_STACK_LINE(52)
									Dynamic value;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(52)
									{
										HX_STACK_LINE(52)
										::String _g2 = twData->get(HX_CSTRING("target"));		HX_STACK_VAR(_g2,"_g2");
										HX_STACK_LINE(52)
										Dynamic o = this->getAsset(_g2);		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(52)
										if (((o == null()))){
											HX_STACK_LINE(52)
											value = null();
										}
										else{
											HX_STACK_LINE(52)
											value = o->__Field(pTw->__get((int)0),true);
										}
									}
									HX_STACK_LINE(52)
									if (((propTwObj != null()))){
										HX_STACK_LINE(52)
										propTwObj->__SetField(pTw->__get((int)0),value,true);
									}
								}
								HX_STACK_LINE(53)
								{
									HX_STACK_LINE(53)
									::String _g3 = twData->get(HX_CSTRING("target"));		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(53)
									Dynamic o = this->getAsset(_g3);		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(53)
									if (((o != null()))){
										HX_STACK_LINE(53)
										o->__SetField(pTw->__get((int)0),pTw->__get((int)1),true);
									}
								}
							}
							else{
								HX_STACK_LINE(55)
								{
									HX_STACK_LINE(55)
									::String _g4 = twData->get(HX_CSTRING("target"));		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(55)
									Dynamic o = this->getAsset(_g4);		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(55)
									if (((o != null()))){
										HX_STACK_LINE(55)
										o->__SetField(pTw->__get((int)0),(int)0,true);
									}
								}
								HX_STACK_LINE(56)
								{
									HX_STACK_LINE(56)
									Dynamic value = ::Std_obj::parseFloat(pTw->__get((int)1));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(56)
									if (((propTwObj != null()))){
										HX_STACK_LINE(56)
										propTwObj->__SetField(pTw->__get((int)0),value,true);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(59)
							Dynamic value = ::Std_obj::parseFloat(pTw->__get((int)1));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(59)
							if (((propTwObj != null()))){
								HX_STACK_LINE(59)
								propTwObj->__SetField(pTw->__get((int)0),value,true);
							}
						}
					}
				}
				HX_STACK_LINE(62)
				Array< ::String > easeArr = Array_obj< ::String >::__new().Add(HX_CSTRING("Expo")).Add(HX_CSTRING("easeOut"));		HX_STACK_VAR(easeArr,"easeArr");
				HX_STACK_LINE(63)
				if ((twData->exists(HX_CSTRING("ease")))){
					HX_STACK_LINE(64)
					Array< ::String > _g5 = twData->get(HX_CSTRING("ease")).split(HX_CSTRING("."));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(64)
					easeArr = _g5;
				}
				HX_STACK_LINE(66)
				::String _g6 = twData->get(HX_CSTRING("target"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(66)
				::com::slurm::Asset _g7 = this->getAsset(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(66)
				::String _g8 = twData->get(HX_CSTRING("duration"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(66)
				Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(66)
				::String _g10 = twData->get(HX_CSTRING("delay"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(66)
				Float _g11 = ::Std_obj::parseFloat(_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(66)
				Dynamic _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					Dynamic o = ::Type_obj::resolveClass((HX_CSTRING("motion.easing.") + easeArr->__get((int)0)));		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(66)
					if (((o == null()))){
						HX_STACK_LINE(66)
						_g12 = null();
					}
					else{
						HX_STACK_LINE(66)
						_g12 = o->__Field(easeArr->__get((int)1),true);
					}
				}
				HX_STACK_LINE(66)
				hx::TCast< ::motion::actuators::GenericActuator >::cast(hx::TCast< ::motion::actuators::GenericActuator >::cast(::motion::Actuate_obj::tween(_g7,_g9,propTwObj,null(),null())->delay(_g11))->ease(_g12));
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,tweenTime,(void))

::com::slurm::Asset Screen_obj::getAsset( ::String __o_name){
::String name = __o_name.Default(HX_CSTRING(""));
	HX_STACK_FRAME("com.slurm.Screen","getAsset",0x12541ab8,"com.slurm.Screen.getAsset","com/slurm/Screen.hx",71,0x7d7dfacc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(71)
		return ::Reflect_obj::field(this->assets,name);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,getAsset,return )


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(assets,"assets");
	HX_MARK_MEMBER_NAME(scriptObjects,"scriptObjects");
	HX_MARK_MEMBER_NAME(scriptTweens,"scriptTweens");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(assets,"assets");
	HX_VISIT_MEMBER_NAME(scriptObjects,"scriptObjects");
	HX_VISIT_MEMBER_NAME(scriptTweens,"scriptTweens");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenTime") ) { return tweenTime_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptTweens") ) { return scriptTweens; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scriptObjects") ) { return scriptObjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptTweens") ) { scriptTweens=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scriptObjects") ) { scriptObjects=inValue.Cast< ::Xml >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("assets"));
	outFields->push(HX_CSTRING("scriptObjects"));
	outFields->push(HX_CSTRING("scriptTweens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Screen_obj,assets),HX_CSTRING("assets")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Screen_obj,scriptObjects),HX_CSTRING("scriptObjects")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Screen_obj,scriptTweens),HX_CSTRING("scriptTweens")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("assets"),
	HX_CSTRING("scriptObjects"),
	HX_CSTRING("scriptTweens"),
	HX_CSTRING("tweenTime"),
	HX_CSTRING("getAsset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.slurm.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
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

void Screen_obj::__boot()
{
}

} // end namespace com
} // end namespace slurm
