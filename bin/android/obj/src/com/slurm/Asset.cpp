#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_slurm_Asset
#include <com/slurm/Asset.h>
#endif
#ifndef INCLUDED_com_slurm_DefaultFont
#include <com/slurm/DefaultFont.h>
#endif
#ifndef INCLUDED_com_slurm_GlobalData
#include <com/slurm/GlobalData.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_events_TouchEvent
#include <openfl/_v2/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace com{
namespace slurm{

Void Asset_obj::__construct(::Xml dataAsset)
{
HX_STACK_FRAME("com.slurm.Asset","new",0x56ac29de,"com.slurm.Asset.new","com/slurm/Asset.hx",23,0x9bf94414)
HX_STACK_THIS(this)
HX_STACK_ARG(dataAsset,"dataAsset")
{
	HX_STACK_LINE(25)
	this->type = HX_CSTRING("");
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	::openfl::_v2::text::Font_obj::registerFont(hx::ClassOf< ::com::slurm::DefaultFont >());
	HX_STACK_LINE(34)
	::openfl::_v2::text::Font font = ::openfl::_v2::Assets_obj::getFont(HX_CSTRING("fonts/OpenSans-Regular.ttf"),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(35)
	::String _g = dataAsset->get(HX_CSTRING("type"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	if (((_g == HX_CSTRING("text")))){
		HX_STACK_LINE(36)
		::openfl::_v2::text::TextFormat textFormat = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(textFormat,"textFormat");
		HX_STACK_LINE(37)
		textFormat->font = font->fontName;
		HX_STACK_LINE(38)
		textFormat->size = (int)13;
		HX_STACK_LINE(39)
		textFormat->color = (int)16777215;
		HX_STACK_LINE(40)
		textFormat->leading = (int)-7;
		HX_STACK_LINE(41)
		textFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::JUSTIFY;
		HX_STACK_LINE(42)
		::openfl::_v2::text::TextField text = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(43)
		text->antiAliasType = ::openfl::text::AntiAliasType_obj::NORMAL;
		HX_STACK_LINE(44)
		text->set_autoSize(::openfl::text::TextFieldAutoSize_obj::CENTER);
		HX_STACK_LINE(45)
		text->set_selectable(false);
		HX_STACK_LINE(46)
		text->set_multiline(true);
		HX_STACK_LINE(48)
		text->set_defaultTextFormat(textFormat);
		HX_STACK_LINE(49)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(dataAsset->elementsNamed(HX_CSTRING("text")));  __it->hasNext(); ){
			::Xml objectText = __it->next();
			{
				HX_STACK_LINE(50)
				::String _g1 = objectText->get(HX_CSTRING("lan"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				if (((_g1 == ::com::slurm::GlobalData_obj::lan))){
					HX_STACK_LINE(51)
					::String _g2 = objectText->firstChild()->get_nodeValue();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(51)
					text->set_text(_g2);
				}
			}
;
		}
		HX_STACK_LINE(54)
		Array< ::String > propArrTxt = dataAsset->get(HX_CSTRING("properties")).split(HX_CSTRING(","));		HX_STACK_VAR(propArrTxt,"propArrTxt");
		HX_STACK_LINE(55)
		this->addChild(text);
	}
	else{
		HX_STACK_LINE(57)
		int extensionIndex = dataAsset->get(HX_CSTRING("asset")).lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(extensionIndex,"extensionIndex");
		HX_STACK_LINE(58)
		::String extension = dataAsset->get(HX_CSTRING("asset")).substr((extensionIndex + (int)1),dataAsset->get(HX_CSTRING("asset")).length);		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(59)
		if (((extension == HX_CSTRING("svg")))){
			HX_STACK_LINE(60)
			::String _g3 = dataAsset->get(HX_CSTRING("asset"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(60)
			::String _g4 = dataAsset->get(HX_CSTRING("position"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(60)
			::openfl::_v2::display::Sprite _g5 = this->addSvg(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(60)
			this->normal = _g5;
		}
		else{
			HX_STACK_LINE(61)
			if (((bool((extension == HX_CSTRING("png"))) || bool((extension == HX_CSTRING("jpg")))))){
				HX_STACK_LINE(62)
				::String _g6 = dataAsset->get(HX_CSTRING("asset"));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(62)
				::String _g7 = dataAsset->get(HX_CSTRING("position"));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(62)
				::openfl::_v2::display::Sprite _g8 = this->addBitmap(_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(62)
				this->normal = _g8;
			}
		}
		HX_STACK_LINE(64)
		this->addChild(this->normal);
		HX_STACK_LINE(65)
		::String _g9 = dataAsset->get(HX_CSTRING("type"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(65)
		if (((_g9 == HX_CSTRING("button")))){
			HX_STACK_LINE(66)
			if ((dataAsset->exists(HX_CSTRING("over")))){
				HX_STACK_LINE(67)
				int _g10 = dataAsset->get(HX_CSTRING("over")).lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(67)
				extensionIndex = _g10;
				HX_STACK_LINE(68)
				::String _g11 = dataAsset->get(HX_CSTRING("over")).substr((extensionIndex + (int)1),dataAsset->get(HX_CSTRING("over")).length);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(68)
				extension = _g11;
				HX_STACK_LINE(69)
				if (((extension == HX_CSTRING("svg")))){
					HX_STACK_LINE(70)
					::String _g12 = dataAsset->get(HX_CSTRING("over"));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(70)
					::String _g13 = dataAsset->get(HX_CSTRING("position"));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(70)
					::openfl::_v2::display::Sprite _g14 = this->addSvg(_g12,_g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(70)
					this->over = _g14;
				}
				else{
					HX_STACK_LINE(71)
					if (((bool((extension == HX_CSTRING("png"))) || bool((extension == HX_CSTRING("jpg")))))){
						HX_STACK_LINE(72)
						::String _g15 = dataAsset->get(HX_CSTRING("over"));		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(72)
						::String _g16 = dataAsset->get(HX_CSTRING("position"));		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(72)
						::openfl::_v2::display::Sprite _g17 = this->addBitmap(_g15,_g16);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(72)
						this->over = _g17;
					}
				}
				HX_STACK_LINE(74)
				this->over->set_visible(false);
				HX_STACK_LINE(75)
				this->addChild(this->over);
				HX_STACK_LINE(76)
				::openfl::_v2::display::Sprite _g18 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(76)
				this->zone = _g18;
				HX_STACK_LINE(77)
				this->zone->get_graphics()->beginFill((int)0,null());
				HX_STACK_LINE(78)
				Float _g19 = this->normal->get_width();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(78)
				Float _g20 = this->normal->get_height();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(78)
				this->zone->get_graphics()->drawRect((int)0,(int)0,_g19,_g20);
				HX_STACK_LINE(79)
				this->zone->set_alpha((int)0);
				HX_STACK_LINE(80)
				this->addChild(this->zone);
				HX_STACK_LINE(82)
				this->zone->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_BEGIN,this->overMe_dyn(),null(),null(),null());
				HX_STACK_LINE(83)
				this->zone->addEventListener(::openfl::_v2::events::TouchEvent_obj::TOUCH_END,this->outMe_dyn(),null(),null(),null());
			}
			HX_STACK_LINE(89)
			this->buttonMode = true;
		}
	}
	HX_STACK_LINE(92)
	Array< ::String > propArr = dataAsset->get(HX_CSTRING("properties")).split(HX_CSTRING(","));		HX_STACK_VAR(propArr,"propArr");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			if ((!(((_g1 < propArr->length))))){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			::String prop = propArr->__get(_g1);		HX_STACK_VAR(prop,"prop");
			HX_STACK_LINE(93)
			++(_g1);
			HX_STACK_LINE(94)
			Array< ::String > p = prop.split(HX_CSTRING(":"));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(95)
			{
				HX_STACK_LINE(95)
				Dynamic value = ::Std_obj::parseFloat(p->__get((int)1));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(95)
				this->__SetField(p->__get((int)0),value,true);
			}
		}
	}
	HX_STACK_LINE(97)
	::String _g21 = dataAsset->get(HX_CSTRING("name"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(97)
	this->set_name(_g21);
}
;
	return null();
}

//Asset_obj::~Asset_obj() { }

Dynamic Asset_obj::__CreateEmpty() { return  new Asset_obj; }
hx::ObjectPtr< Asset_obj > Asset_obj::__new(::Xml dataAsset)
{  hx::ObjectPtr< Asset_obj > result = new Asset_obj();
	result->__construct(dataAsset);
	return result;}

Dynamic Asset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Asset_obj > result = new Asset_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::display::Sprite Asset_obj::addBitmap( ::String __o_nameBm,::String __o_position){
::String nameBm = __o_nameBm.Default(HX_CSTRING("img/default.png"));
::String position = __o_position.Default(HX_CSTRING("left"));
	HX_STACK_FRAME("com.slurm.Asset","addBitmap",0xbf61d0ee,"com.slurm.Asset.addBitmap","com/slurm/Asset.hx",100,0x9bf94414)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nameBm,"nameBm")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(101)
		::openfl::_v2::display::BitmapData bitmapData = ::openfl::_v2::Assets_obj::getBitmapData((HX_CSTRING("img/") + nameBm),null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(102)
		::openfl::_v2::display::Bitmap bitmap = ::openfl::_v2::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(103)
		::openfl::_v2::display::Sprite tempSprite = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(tempSprite,"tempSprite");
		HX_STACK_LINE(104)
		if (((position == HX_CSTRING("center")))){
			HX_STACK_LINE(105)
			Float _g = -(bitmap->get_width());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			bitmap->set_x(_g1);
			HX_STACK_LINE(106)
			Float _g2 = -(bitmap->get_height());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(106)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(106)
			bitmap->set_y(_g3);
		}
		HX_STACK_LINE(108)
		tempSprite->addChild(bitmap);
		HX_STACK_LINE(109)
		return tempSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,addBitmap,return )

::openfl::_v2::display::Sprite Asset_obj::addSvg( ::String __o_nameSvg,::String __o_position){
::String nameSvg = __o_nameSvg.Default(HX_CSTRING(""));
::String position = __o_position.Default(HX_CSTRING("left"));
	HX_STACK_FRAME("com.slurm.Asset","addSvg",0xf6f6e405,"com.slurm.Asset.addSvg","com/slurm/Asset.hx",112,0x9bf94414)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nameSvg,"nameSvg")
	HX_STACK_ARG(position,"position")
{
		HX_STACK_LINE(113)
		::String _g = ::openfl::_v2::Assets_obj::getText((HX_CSTRING("img/") + nameSvg));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		::format::SVG svg = ::format::SVG_obj::__new(_g);		HX_STACK_VAR(svg,"svg");
		HX_STACK_LINE(114)
		::openfl::_v2::display::Sprite tempSprite = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(tempSprite,"tempSprite");
		HX_STACK_LINE(115)
		::openfl::_v2::display::Graphics _g1 = tempSprite->get_graphics();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		::String _g2 = ::Std_obj::string(svg->data->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(115)
		::String _g4 = ::Std_obj::string(svg->data->height);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(115)
		Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(115)
		svg->render(_g1,(int)0,(int)0,_g3,_g5);
		HX_STACK_LINE(116)
		if (((position == HX_CSTRING("center")))){
			HX_STACK_LINE(117)
			Float _g6 = -(tempSprite->get_width());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(117)
			Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(117)
			tempSprite->set_x(_g7);
			HX_STACK_LINE(118)
			Float _g8 = -(tempSprite->get_height());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(118)
			Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(118)
			tempSprite->set_y(_g9);
		}
		HX_STACK_LINE(120)
		return tempSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Asset_obj,addSvg,return )

Void Asset_obj::overMe( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.slurm.Asset","overMe",0xedecfb0e,"com.slurm.Asset.overMe","com/slurm/Asset.hx",123,0x9bf94414)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(124)
		this->normal->set_visible(false);
		HX_STACK_LINE(125)
		this->over->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Asset_obj,overMe,(void))

Void Asset_obj::outMe( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("com.slurm.Asset","outMe",0x1768d884,"com.slurm.Asset.outMe","com/slurm/Asset.hx",128,0x9bf94414)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(129)
		this->over->set_visible(false);
		HX_STACK_LINE(130)
		this->normal->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Asset_obj,outMe,(void))


Asset_obj::Asset_obj()
{
}

void Asset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Asset);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(over,"over");
	HX_MARK_MEMBER_NAME(zone,"zone");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Asset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(over,"over");
	HX_VISIT_MEMBER_NAME(zone,"zone");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Asset_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"over") ) { return over; }
		if (HX_FIELD_EQ(inName,"zone") ) { return zone; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outMe") ) { return outMe_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return normal; }
		if (HX_FIELD_EQ(inName,"addSvg") ) { return addSvg_dyn(); }
		if (HX_FIELD_EQ(inName,"overMe") ) { return overMe_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBitmap") ) { return addBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Asset_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over") ) { over=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zone") ) { zone=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Asset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("over"));
	outFields->push(HX_CSTRING("zone"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Asset_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Asset_obj,normal),HX_CSTRING("normal")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Asset_obj,over),HX_CSTRING("over")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Asset_obj,zone),HX_CSTRING("zone")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("normal"),
	HX_CSTRING("over"),
	HX_CSTRING("zone"),
	HX_CSTRING("addBitmap"),
	HX_CSTRING("addSvg"),
	HX_CSTRING("overMe"),
	HX_CSTRING("outMe"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Asset_obj::__mClass,"__mClass");
};

#endif

Class Asset_obj::__mClass;

void Asset_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.slurm.Asset"), hx::TCanCast< Asset_obj> ,sStaticFields,sMemberFields,
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

void Asset_obj::__boot()
{
}

} // end namespace com
} // end namespace slurm
