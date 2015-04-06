#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_slurm_Core
#include <com/slurm/Core.h>
#endif
#ifndef INCLUDED_com_slurm_GlobalData
#include <com/slurm/GlobalData.h>
#endif
#ifndef INCLUDED_com_slurm_Screen
#include <com/slurm/Screen.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace com{
namespace slurm{

Void Core_obj::__construct()
{
HX_STACK_FRAME("com.slurm.Core","new",0x6bab8655,"com.slurm.Core.new","com/slurm/Core.hx",14,0x43882039)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->screenYdefault = (int)0;
	HX_STACK_LINE(19)
	this->screenXdefault = (int)0;
	HX_STACK_LINE(17)
	this->debugMode = false;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	try
	{
	HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
	{
		HX_STACK_LINE(26)
		::String _g = ::openfl::_v2::Assets_obj::getText(HX_CSTRING("assets/script.xml"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		::Xml _g1 = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		this->dataXml = _g1;
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace(HX_CSTRING("Slurm status: OK"),hx::SourceInfo(HX_CSTRING("Core.hx"),27,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(28)
		::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),28,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(29)
		::String _g2 = this->dataXml->get(HX_CSTRING("debug"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		bool _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(29)
		if (((_g2 == HX_CSTRING("true")))){
			HX_STACK_LINE(29)
			_g3 = true;
		}
		else{
			HX_STACK_LINE(29)
			_g3 = false;
		}
		HX_STACK_LINE(29)
		this->debugMode = _g3;
		HX_STACK_LINE(30)
		::String _g4 = this->dataXml->get(HX_CSTRING("lan"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(30)
		if (((_g4 != HX_CSTRING("")))){
			HX_STACK_LINE(31)
			::String _g5 = this->dataXml->get(HX_CSTRING("lan"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(31)
			::com::slurm::GlobalData_obj::lan = _g5;
		}
		HX_STACK_LINE(33)
		if ((this->debugMode)){
			HX_STACK_LINE(34)
			::haxe::Log_obj::trace(HX_CSTRING("Debug mode: ON"),hx::SourceInfo(HX_CSTRING("Core.hx"),34,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
			HX_STACK_LINE(35)
			::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),35,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		}
		else{
			HX_STACK_LINE(37)
			::haxe::Log_obj::trace(HX_CSTRING("Debug mode: OFF"),hx::SourceInfo(HX_CSTRING("Core.hx"),37,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
			HX_STACK_LINE(38)
			::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),38,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		}
		HX_STACK_LINE(40)
		::haxe::Log_obj::trace(HX_CSTRING("List of screens:"),hx::SourceInfo(HX_CSTRING("Core.hx"),40,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(41)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->dataXml->elementsNamed(HX_CSTRING("screen")));  __it->hasNext(); ){
			::Xml screenData = __it->next();
			{
				HX_STACK_LINE(42)
				::String _g6 = screenData->get(HX_CSTRING("name"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(42)
				::haxe::Log_obj::trace(_g6,hx::SourceInfo(HX_CSTRING("Core.hx"),42,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
			}
;
		}
		HX_STACK_LINE(44)
		::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),44,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(45)
		int _g7 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(45)
		::String _g8 = (HX_CSTRING("Screen Width: ") + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(45)
		::haxe::Log_obj::trace(_g8,hx::SourceInfo(HX_CSTRING("Core.hx"),45,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(46)
		int _g9 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(46)
		::String _g10 = (HX_CSTRING("Screen Height: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(46)
		::haxe::Log_obj::trace(_g10,hx::SourceInfo(HX_CSTRING("Core.hx"),46,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(47)
		::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),47,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
		HX_STACK_LINE(48)
		this->showScreen(null());
		HX_STACK_LINE(49)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(50)
		this->resize(null());
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::openfl::errors::Error >() ){
			HX_STACK_BEGIN_CATCH
			::openfl::errors::Error error = __e;{
				HX_STACK_LINE(52)
				::haxe::Log_obj::trace(HX_CSTRING("ERROR #01: Archivo base Slurm mal formado o defectuoso."),hx::SourceInfo(HX_CSTRING("Core.hx"),52,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
				HX_STACK_LINE(53)
				::haxe::Log_obj::trace(HX_CSTRING("Slurm status: FATAL ERROR"),hx::SourceInfo(HX_CSTRING("Core.hx"),53,HX_CSTRING("com.slurm.Core"),HX_CSTRING("new")));
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
}
;
	return null();
}

//Core_obj::~Core_obj() { }

Dynamic Core_obj::__CreateEmpty() { return  new Core_obj; }
hx::ObjectPtr< Core_obj > Core_obj::__new()
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct();
	return result;}

Dynamic Core_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Core_obj > result = new Core_obj();
	result->__construct();
	return result;}

Void Core_obj::showScreen( hx::Null< int >  __o_idScreen){
int idScreen = __o_idScreen.Default(0);
	HX_STACK_FRAME("com.slurm.Core","showScreen",0xd65202f4,"com.slurm.Core.showScreen","com/slurm/Core.hx",58,0x43882039)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idScreen,"idScreen")
{
		HX_STACK_LINE(59)
		if (((this->screen != null()))){
			HX_STACK_LINE(61)
			::String _g = this->screen->get_name();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			::String _g1 = (_g + HX_CSTRING(" desactive"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("Core.hx"),61,HX_CSTRING("com.slurm.Core"),HX_CSTRING("showScreen")));
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(HX_CSTRING("-----------------"),hx::SourceInfo(HX_CSTRING("Core.hx"),62,HX_CSTRING("com.slurm.Core"),HX_CSTRING("showScreen")));
			HX_STACK_LINE(63)
			this->removeChild(this->screen);
			HX_STACK_LINE(64)
			this->screen = null();
		}
		HX_STACK_LINE(66)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(67)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(this->dataXml->elementsNamed(HX_CSTRING("screen")));  __it->hasNext(); ){
				::Xml screenData = __it->next();
				{
					HX_STACK_LINE(68)
					::String _g2 = screenData->get(HX_CSTRING("id"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(68)
					Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(68)
					if (((_g3 == idScreen))){
						HX_STACK_LINE(69)
						::String _g4 = screenData->get(HX_CSTRING("name"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(69)
						::String _g5 = (HX_CSTRING("com.") + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(69)
						::Class screenReference = ::Type_obj::resolveClass(_g5);		HX_STACK_VAR(screenReference,"screenReference");
						HX_STACK_LINE(70)
						::com::slurm::Screen _g6 = ::Type_obj::createInstance(screenReference,Dynamic( Array_obj<Dynamic>::__new().Add(screenData)));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(70)
						this->screen = _g6;
						HX_STACK_LINE(71)
						this->screen->set_x(this->screenXdefault);
						HX_STACK_LINE(72)
						this->screen->set_y(this->screenYdefault);
						HX_STACK_LINE(73)
						this->addChild(this->screen);
						HX_STACK_LINE(74)
						if ((this->debugMode)){
						}
					}
				}
;
			}
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error error = __e;{
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,showScreen,(void))

Void Core_obj::resize( ::openfl::_v2::events::Event E){
{
		HX_STACK_FRAME("com.slurm.Core","resize",0x53140b1f,"com.slurm.Core.resize","com/slurm/Core.hx",88,0x43882039)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(89)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		Float _g1 = (Float(_g) / Float((int)480));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		::openfl::_v2::Lib_obj::get_current()->set_scaleX(_g1);
		HX_STACK_LINE(90)
		Float _g2 = ::openfl::_v2::Lib_obj::get_current()->get_scaleX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(90)
		::openfl::_v2::Lib_obj::get_current()->set_scaleY(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Core_obj,resize,(void))


Core_obj::Core_obj()
{
}

void Core_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Core);
	HX_MARK_MEMBER_NAME(dataXml,"dataXml");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(screenXdefault,"screenXdefault");
	HX_MARK_MEMBER_NAME(screenYdefault,"screenYdefault");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Core_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataXml,"dataXml");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(screenXdefault,"screenXdefault");
	HX_VISIT_MEMBER_NAME(screenYdefault,"screenYdefault");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Core_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataXml") ) { return dataXml; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return debugMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showScreen") ) { return showScreen_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"screenXdefault") ) { return screenXdefault; }
		if (HX_FIELD_EQ(inName,"screenYdefault") ) { return screenYdefault; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Core_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::com::slurm::Screen >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dataXml") ) { dataXml=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"screenXdefault") ) { screenXdefault=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenYdefault") ) { screenYdefault=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Core_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dataXml"));
	outFields->push(HX_CSTRING("debugMode"));
	outFields->push(HX_CSTRING("screen"));
	outFields->push(HX_CSTRING("screenXdefault"));
	outFields->push(HX_CSTRING("screenYdefault"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Core_obj,dataXml),HX_CSTRING("dataXml")},
	{hx::fsBool,(int)offsetof(Core_obj,debugMode),HX_CSTRING("debugMode")},
	{hx::fsObject /*::com::slurm::Screen*/ ,(int)offsetof(Core_obj,screen),HX_CSTRING("screen")},
	{hx::fsInt,(int)offsetof(Core_obj,screenXdefault),HX_CSTRING("screenXdefault")},
	{hx::fsInt,(int)offsetof(Core_obj,screenYdefault),HX_CSTRING("screenYdefault")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dataXml"),
	HX_CSTRING("debugMode"),
	HX_CSTRING("screen"),
	HX_CSTRING("screenXdefault"),
	HX_CSTRING("screenYdefault"),
	HX_CSTRING("showScreen"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Core_obj::__mClass,"__mClass");
};

#endif

Class Core_obj::__mClass;

void Core_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.slurm.Core"), hx::TCanCast< Core_obj> ,sStaticFields,sMemberFields,
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

void Core_obj::__boot()
{
}

} // end namespace com
} // end namespace slurm
