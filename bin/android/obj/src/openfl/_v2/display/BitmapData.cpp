#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_Memory
#include <openfl/_v2/Memory.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_OptimizedPerlin
#include <openfl/_v2/display/OptimizedPerlin.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_BitmapFilter
#include <openfl/_v2/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace openfl{
namespace _v2{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{
HX_STACK_FRAME("openfl._v2.display.BitmapData","new",0xa61b0108,"openfl._v2.display.BitmapData.new","openfl/_v2/display/BitmapData.hx",42,0xebe9fb05)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
HX_STACK_ARG(gpuMode,"gpuMode")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(44)
	this->__transparent = transparent;
	HX_STACK_LINE(46)
	if (((bool((width < (int)1)) || bool((height < (int)1))))){
		HX_STACK_LINE(48)
		this->__handle = null();
	}
	else{
		HX_STACK_LINE(52)
		int flags = (int)2;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(53)
		if ((transparent)){
			HX_STACK_LINE(53)
			hx::OrEq(flags,(int)1);
		}
		HX_STACK_LINE(54)
		int alpha = hx::UShr(fillColor,(int)24);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(56)
		if (((bool(transparent) && bool((alpha == (int)0))))){
			HX_STACK_LINE(58)
			fillColor = (int)0;
		}
		HX_STACK_LINE(62)
		Dynamic _g = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_create(width,height,flags,(int(fillColor) & int((int)16777215)),alpha,gpuMode);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		this->__handle = _g;
	}
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(width,height,__o_transparent,__o_fillColor,gpuMode);
	return result;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > result = new BitmapData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_v2::display::IBitmapDrawable_obj)) return operator ::openfl::_v2::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

Void BitmapData_obj::applyFilter( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::geom::Point destPoint,::openfl::_v2::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","applyFilter",0xb813f86e,"openfl._v2.display.BitmapData.applyFilter","openfl/_v2/display/BitmapData.hx",71,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(71)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_apply_filter(this->__handle,sourceBitmapData->__handle,sourceRect,destPoint,filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

Void BitmapData_obj::clear( int color){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","clear",0x52ce1c35,"openfl._v2.display.BitmapData.clear","openfl/_v2/display/BitmapData.hx",78,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(78)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_clear(this->__handle,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,clear,(void))

::openfl::_v2::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","clone",0x52d5be05,"openfl._v2.display.BitmapData.clone","openfl/_v2/display/BitmapData.hx",83,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	bool _g = this->get_transparent();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(85)
	::openfl::_v2::display::BitmapData bitmapData = ::openfl::_v2::display::BitmapData_obj::__new((int)0,(int)0,_g,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(86)
	Dynamic _g1 = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_clone(this->__handle);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(86)
	bitmapData->__handle = _g1;
	HX_STACK_LINE(87)
	return bitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","colorTransform",0x690697e1,"openfl._v2.display.BitmapData.colorTransform","openfl/_v2/display/BitmapData.hx",94,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(94)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_color_transform(this->__handle,rect,colorTransform);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Void BitmapData_obj::copyChannel( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","copyChannel",0x19ca9636,"openfl._v2.display.BitmapData.copyChannel","openfl/_v2/display/BitmapData.hx",101,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(101)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_copy_channel(sourceBitmapData->__handle,sourceRect,this->__handle,destPoint,sourceChannel,destChannel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::geom::Point destPoint,::openfl::_v2::display::BitmapData alphaBitmapData,::openfl::_v2::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","copyPixels",0xf208091a,"openfl._v2.display.BitmapData.copyPixels","openfl/_v2/display/BitmapData.hx",108,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(108)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_copy(sourceBitmapData->__handle,sourceRect,this->__handle,destPoint,mergeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::createHardwareSurface( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","createHardwareSurface",0xf0122771,"openfl._v2.display.BitmapData.createHardwareSurface","openfl/_v2/display/BitmapData.hx",123,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_create_hardware_surface(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,createHardwareSurface,(void))

Void BitmapData_obj::destroyHardwareSurface( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","destroyHardwareSurface",0x09642ce3,"openfl._v2.display.BitmapData.destroyHardwareSurface","openfl/_v2/display/BitmapData.hx",130,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_destroy_hardware_surface(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,destroyHardwareSurface,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","dispose",0x47bd2547,"openfl._v2.display.BitmapData.dispose","openfl/_v2/display/BitmapData.hx",136,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		if (((this->__handle != null()))){
			HX_STACK_LINE(140)
			::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_dispose(this->__handle);
		}
		HX_STACK_LINE(144)
		this->__handle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::_v2::display::IBitmapDrawable source,::openfl::_v2::geom::Matrix matrix,::openfl::_v2::geom::ColorTransform colorTransform,::openfl::_v2::display::BlendMode blendMode,::openfl::_v2::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","draw",0xaaf38e5c,"openfl._v2.display.BitmapData.draw","openfl/_v2/display/BitmapData.hx",149,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(151)
		::String _g = ::Std_obj::string(blendMode);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		source->__drawToSurface(this->__handle,matrix,colorTransform,_g,clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

Void BitmapData_obj::dumpBits( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","dumpBits",0xecdabcb2,"openfl._v2.display.BitmapData.dumpBits","openfl/_v2/display/BitmapData.hx",158,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_dump_bits(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dumpBits,(void))

::openfl::_v2::utils::ByteArray BitmapData_obj::encode( ::String format,hx::Null< Float >  __o_quality){
Float quality = __o_quality.Default(0.9);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","encode",0x13c69a6e,"openfl._v2.display.BitmapData.encode","openfl/_v2/display/BitmapData.hx",165,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(165)
		return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_encode(this->__handle,format,quality);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::_v2::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","fillRect",0xc2d8b39f,"openfl._v2.display.BitmapData.fillRect","openfl/_v2/display/BitmapData.hx",186,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(186)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_fill(this->__handle,rect,(int(color) & int((int)16777215)),hx::UShr(color,(int)24));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::fillRectEx( ::openfl::_v2::geom::Rectangle rect,int color,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","fillRectEx",0xb12455f2,"openfl._v2.display.BitmapData.fillRectEx","openfl/_v2/display/BitmapData.hx",193,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(193)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_fill(this->__handle,rect,color,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fillRectEx,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","floodFill",0x5eeba209,"openfl._v2.display.BitmapData.floodFill","openfl/_v2/display/BitmapData.hx",200,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(200)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_flood_fill(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::_v2::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","generateFilterRect",0x3001f8e9,"openfl._v2.display.BitmapData.generateFilterRect","openfl/_v2/display/BitmapData.hx",205,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(207)
	::openfl::_v2::geom::Rectangle result = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(208)
	::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_generate_filter_rect(sourceRect,filter,result);
	HX_STACK_LINE(209)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::openfl::_v2::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getColorBoundsRect",0x325279de,"openfl._v2.display.BitmapData.getColorBoundsRect","openfl/_v2/display/BitmapData.hx",214,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(216)
		::openfl::_v2::geom::Rectangle result = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(217)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_color_bounds_rect(this->__handle,mask,color,findColor,result);
		HX_STACK_LINE(218)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getPixel",0x789a4468,"openfl._v2.display.BitmapData.getPixel","openfl/_v2/display/BitmapData.hx",225,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(225)
	return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_pixel(this->__handle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getPixel32",0x87025b07,"openfl._v2.display.BitmapData.getPixel32","openfl/_v2/display/BitmapData.hx",232,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(232)
	return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_pixel32(this->__handle,x,y);
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::openfl::_v2::utils::ByteArray BitmapData_obj::getPixels( ::openfl::_v2::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getPixels",0x0e61970b,"openfl._v2.display.BitmapData.getPixels","openfl/_v2/display/BitmapData.hx",237,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(239)
	::openfl::_v2::utils::ByteArray result = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_pixels(this->__handle,rect);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(240)
	if (((result != null()))){
		HX_STACK_LINE(240)
		result->position = result->length;
	}
	HX_STACK_LINE(241)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Array< int > BitmapData_obj::getVector( ::openfl::_v2::geom::Rectangle rect){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getVector",0x191558a1,"openfl._v2.display.BitmapData.getVector","openfl/_v2/display/BitmapData.hx",267,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(269)
	int pixels = ::Std_obj::_int((rect->width * rect->height));		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(270)
	if (((pixels < (int)1))){
		HX_STACK_LINE(270)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(272)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(273)
	result[(pixels - (int)1)] = (int)0;
	HX_STACK_LINE(276)
	::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_array(this->__handle,rect,result);
	HX_STACK_LINE(283)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","lock",0xb03afe43,"openfl._v2.display.BitmapData.lock","openfl/_v2/display/BitmapData.hx",313,0xebe9fb05)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::multiplyAlpha( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","multiplyAlpha",0xf5b68542,"openfl._v2.display.BitmapData.multiplyAlpha","openfl/_v2/display/BitmapData.hx",322,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_multiply_alpha(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,multiplyAlpha,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","noise",0xaa353a42,"openfl._v2.display.BitmapData.noise","openfl/_v2/display/BitmapData.hx",329,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(329)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_noise(this->__handle,randomSeed,low,high,channelOptions,grayScale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","paletteMap",0xb5c56339,"openfl._v2.display.BitmapData.paletteMap","openfl/_v2/display/BitmapData.hx",334,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(336)
		int sw = ::Std_obj::_int(sourceRect->width);		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(337)
		int sh = ::Std_obj::_int(sourceRect->height);		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(339)
		::openfl::_v2::utils::ByteArray pixels = this->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(340)
		pixels->position = (int)0;
		HX_STACK_LINE(342)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(342)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(342)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(342)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(342)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(342)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(342)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(342)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(342)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(342)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(344)
			int _g = (sh * sw);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while((true)){
				HX_STACK_LINE(344)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(344)
					break;
				}
				HX_STACK_LINE(344)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(346)
				int _g2 = pixels->readUnsignedInt();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(346)
				pixelValue = _g2;
				HX_STACK_LINE(348)
				if (((alphaArray == null()))){
					HX_STACK_LINE(348)
					c1 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(348)
					c1 = alphaArray->__get((int((int(pixelValue) >> int((int)24))) & int((int)255)));
				}
				HX_STACK_LINE(349)
				if (((redArray == null()))){
					HX_STACK_LINE(349)
					c2 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(349)
					c2 = redArray->__get((int((int(pixelValue) >> int((int)16))) & int((int)255)));
				}
				HX_STACK_LINE(350)
				if (((greenArray == null()))){
					HX_STACK_LINE(350)
					c3 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(350)
					c3 = greenArray->__get((int((int(pixelValue) >> int((int)8))) & int((int)255)));
				}
				HX_STACK_LINE(351)
				if (((blueArray == null()))){
					HX_STACK_LINE(351)
					c4 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(351)
					c4 = blueArray->__get((int(pixelValue) & int((int)255)));
				}
				HX_STACK_LINE(353)
				a = (((((int((int(c1) >> int((int)24))) & int((int)255))) + ((int((int(c2) >> int((int)24))) & int((int)255)))) + ((int((int(c3) >> int((int)24))) & int((int)255)))) + ((int((int(c4) >> int((int)24))) & int((int)255))));
				HX_STACK_LINE(354)
				if (((a > (int)255))){
					HX_STACK_LINE(354)
					(a == (int)255);
				}
				HX_STACK_LINE(356)
				r = (((((int((int(c1) >> int((int)16))) & int((int)255))) + ((int((int(c2) >> int((int)16))) & int((int)255)))) + ((int((int(c3) >> int((int)16))) & int((int)255)))) + ((int((int(c4) >> int((int)16))) & int((int)255))));
				HX_STACK_LINE(357)
				if (((r > (int)255))){
					HX_STACK_LINE(357)
					(r == (int)255);
				}
				HX_STACK_LINE(359)
				g = (((((int((int(c1) >> int((int)8))) & int((int)255))) + ((int((int(c2) >> int((int)8))) & int((int)255)))) + ((int((int(c3) >> int((int)8))) & int((int)255)))) + ((int((int(c4) >> int((int)8))) & int((int)255))));
				HX_STACK_LINE(360)
				if (((g > (int)255))){
					HX_STACK_LINE(360)
					(g == (int)255);
				}
				HX_STACK_LINE(362)
				b = (((((int(c1) & int((int)255))) + ((int(c2) & int((int)255)))) + ((int(c3) & int((int)255)))) + ((int(c4) & int((int)255))));
				HX_STACK_LINE(363)
				if (((b > (int)255))){
					HX_STACK_LINE(363)
					(b == (int)255);
				}
				HX_STACK_LINE(365)
				color = (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
				HX_STACK_LINE(367)
				pixels->position = (i * (int)4);
				HX_STACK_LINE(368)
				pixels->writeUnsignedInt(color);
			}
		}
		HX_STACK_LINE(372)
		pixels->position = (int)0;
		HX_STACK_LINE(373)
		::openfl::_v2::geom::Rectangle destRect = ::openfl::_v2::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(374)
		this->setPixels(destRect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","perlinNoise",0x82dc9d0e,"openfl._v2.display.BitmapData.perlinNoise","openfl/_v2/display/BitmapData.hx",379,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(381)
		::openfl::_v2::display::OptimizedPerlin perlin = ::openfl::_v2::display::OptimizedPerlin_obj::__new(randomSeed,numOctaves,null());		HX_STACK_VAR(perlin,"perlin");
		HX_STACK_LINE(382)
		perlin->fill(hx::ObjectPtr<OBJ_>(this),baseX,baseY,(int)0,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","scroll",0x61478065,"openfl._v2.display.BitmapData.scroll","openfl/_v2/display/BitmapData.hx",396,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(396)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_scroll(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setFlags( int flags){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setFlags",0x66e0029d,"openfl._v2.display.BitmapData.setFlags","openfl/_v2/display/BitmapData.hx",404,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flags,"flags")
		HX_STACK_LINE(404)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_flags(this->__handle,flags);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFlags,(void))

Void BitmapData_obj::setFormat( int format){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setFormat",0x62972321,"openfl._v2.display.BitmapData.setFormat","openfl/_v2/display/BitmapData.hx",411,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(411)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_format(this->__handle,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,setFormat,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setPixel",0x26f79ddc,"openfl._v2.display.BitmapData.setPixel","openfl/_v2/display/BitmapData.hx",418,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(418)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_pixel(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setPixel32",0x8a7ff97b,"openfl._v2.display.BitmapData.setPixel32","openfl/_v2/display/BitmapData.hx",425,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(425)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_pixel32(this->__handle,x,y,color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::_v2::geom::Rectangle rect,::openfl::_v2::utils::ByteArray pixels){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setPixels",0xf1b28317,"openfl._v2.display.BitmapData.setPixels","openfl/_v2/display/BitmapData.hx",430,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(432)
		int size = ::Std_obj::_int(((rect->width * rect->height) * (int)4));		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(433)
		int _g = ::Std_obj::_int(size);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		pixels->checkData(_g);
		HX_STACK_LINE(434)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_bytes(this->__handle,rect,pixels,pixels->position);
		HX_STACK_LINE(435)
		hx::AddEq(pixels->position,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::_v2::geom::Rectangle rect,Array< int > pixels){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","setVector",0xfc6644ad,"openfl._v2.display.BitmapData.setVector","openfl/_v2/display/BitmapData.hx",440,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(442)
		int count = ::Std_obj::_int((rect->width * rect->height));		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(443)
		if (((pixels->length < count))){
			HX_STACK_LINE(443)
			return null();
		}
		HX_STACK_LINE(446)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_array(this->__handle,rect,pixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::_v2::display::BitmapData sourceBitmapData,::openfl::_v2::geom::Rectangle sourceRect,::openfl::_v2::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","threshold",0x3a04e253,"openfl._v2.display.BitmapData.threshold","openfl/_v2/display/BitmapData.hx",464,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::_v2::display::BitmapData_obj > __this,::openfl::_v2::geom::Rectangle &sourceRect){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/display/BitmapData.hx",464,0xebe9fb05)
				{
					HX_STACK_LINE(464)
					::openfl::_v2::geom::Rectangle _g = __this->get_rect();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(464)
					return sourceRect->equals(_g);
				}
				return null();
			}
		};
		HX_STACK_LINE(464)
		if (((  (((  (((  (((sourceBitmapData == hx::ObjectPtr<OBJ_>(this)))) ? bool(_Function_1_1::Block(this,sourceRect)) : bool(false) ))) ? bool((destPoint->x == (int)0)) : bool(false) ))) ? bool((destPoint->y == (int)0)) : bool(false) ))){
			HX_STACK_LINE(466)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(468)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(469)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(471)
			::openfl::_v2::utils::ByteArray memory = ::openfl::_v2::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(472)
			int _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(472)
			int _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(472)
			int _g3 = (_g1 * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(472)
			int _g4 = (_g3 * (int)4);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(472)
			memory->setLength(_g4);
			HX_STACK_LINE(473)
			::openfl::_v2::geom::Rectangle _g5 = this->get_rect();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(473)
			::openfl::_v2::utils::ByteArray _g6 = this->getPixels(_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(473)
			memory = _g6;
			HX_STACK_LINE(474)
			memory->position = (int)0;
			HX_STACK_LINE(475)
			::openfl::_v2::Memory_obj::select(memory);
			HX_STACK_LINE(477)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(479)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(479)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(479)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(479)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(479)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(479)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(481)
				int _g = this->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(481)
				while((true)){
					HX_STACK_LINE(481)
					if ((!(((_g11 < _g))))){
						HX_STACK_LINE(481)
						break;
					}
					HX_STACK_LINE(481)
					int yy = (_g11)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(483)
					int _g7 = this->get_width();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(483)
					int _g8 = (_g7 * yy);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(483)
					width_yy = _g8;
					HX_STACK_LINE(485)
					{
						HX_STACK_LINE(485)
						int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(485)
						int _g21 = this->get_width();		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(485)
						while((true)){
							HX_STACK_LINE(485)
							if ((!(((_g31 < _g21))))){
								HX_STACK_LINE(485)
								break;
							}
							HX_STACK_LINE(485)
							int xx = (_g31)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(487)
							position = (((width_yy + xx)) * (int)4);
							HX_STACK_LINE(488)
							int _g9 = ::openfl::_v2::Memory_obj::getI32(position);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(488)
							pixelValue = _g9;
							HX_STACK_LINE(489)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(491)
							int _g10 = ::openfl::_v2::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(491)
							i = _g10;
							HX_STACK_LINE(492)
							test = false;
							HX_STACK_LINE(494)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(494)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(495)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(495)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(496)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(496)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(497)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(497)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(498)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(498)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(499)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(499)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(501)
							if ((test)){
								HX_STACK_LINE(503)
								::openfl::_v2::Memory_obj::setI32(position,color);
								HX_STACK_LINE(504)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(512)
			memory->position = (int)0;
			HX_STACK_LINE(513)
			::openfl::_v2::geom::Rectangle _g11 = this->get_rect();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(513)
			this->setPixels(_g11,memory);
			HX_STACK_LINE(514)
			::openfl::_v2::Memory_obj::select(null());
			HX_STACK_LINE(515)
			return hits;
		}
		else{
			HX_STACK_LINE(519)
			int sx = ::Std_obj::_int(sourceRect->x);		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(520)
			int sy = ::Std_obj::_int(sourceRect->y);		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(521)
			int _g12 = sourceBitmapData->get_width();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(521)
			int sw = ::Std_obj::_int(_g12);		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(522)
			int _g13 = sourceBitmapData->get_height();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(522)
			int sh = ::Std_obj::_int(_g13);		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(524)
			int dx = ::Std_obj::_int(destPoint->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(525)
			int dy = ::Std_obj::_int(destPoint->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(527)
			int _g14 = this->get_width();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(527)
			int _g15 = (_g14 - sw);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(527)
			int bw = (_g15 - dx);		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(528)
			int _g16 = this->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(528)
			int _g17 = (_g16 - sh);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(528)
			int bh = (_g17 - dy);		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(530)
			int dw;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(530)
			if (((bw < (int)0))){
				HX_STACK_LINE(530)
				int _g18 = this->get_width();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(530)
				int _g19 = (_g18 - sw);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(530)
				int _g20 = (_g19 - dx);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(530)
				dw = (sw + _g20);
			}
			else{
				HX_STACK_LINE(530)
				dw = sw;
			}
			HX_STACK_LINE(531)
			int dh;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(531)
			if (((bw < (int)0))){
				HX_STACK_LINE(531)
				int _g21 = this->get_height();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(531)
				int _g22 = (_g21 - sh);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(531)
				int _g23 = (_g22 - dy);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(531)
				dh = (sh + _g23);
			}
			else{
				HX_STACK_LINE(531)
				dh = sh;
			}
			HX_STACK_LINE(533)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(535)
			threshold = (int((int((int((int(((int(threshold) & int((int)255)))) << int((int)24))) | int((int(((int((int(threshold) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(threshold) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(threshold) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(536)
			color = (int((int((int((int(((int(color) & int((int)255)))) << int((int)24))) | int((int(((int((int(color) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(color) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(color) >> int((int)24))) & int((int)255))));
			HX_STACK_LINE(538)
			int canvasMemory = ((sw * sh) * (int)4);		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(539)
			int sourceMemory = (int)0;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(541)
			if ((copySource)){
				HX_STACK_LINE(543)
				sourceMemory = ((sw * sh) * (int)4);
			}
			HX_STACK_LINE(547)
			int totalMemory = (canvasMemory + sourceMemory);		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(548)
			::openfl::_v2::utils::ByteArray memory = ::openfl::_v2::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(549)
			memory->setLength(totalMemory);
			HX_STACK_LINE(550)
			memory->position = (int)0;
			HX_STACK_LINE(551)
			::openfl::_v2::display::BitmapData bitmapData = sourceBitmapData->clone();		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(552)
			::openfl::_v2::utils::ByteArray pixels = bitmapData->getPixels(sourceRect);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(553)
			memory->writeBytes(pixels,null(),null());
			HX_STACK_LINE(554)
			memory->position = canvasMemory;
			HX_STACK_LINE(556)
			if ((copySource)){
				HX_STACK_LINE(558)
				memory->writeBytes(pixels,null(),null());
			}
			HX_STACK_LINE(562)
			memory->position = (int)0;
			HX_STACK_LINE(563)
			::openfl::_v2::Memory_obj::select(memory);
			HX_STACK_LINE(565)
			int thresholdMask = (int(threshold) & int(mask));		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(567)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(567)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(567)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(567)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(567)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(569)
				while((true)){
					HX_STACK_LINE(569)
					if ((!(((_g < dh))))){
						HX_STACK_LINE(569)
						break;
					}
					HX_STACK_LINE(569)
					int yy = (_g)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(571)
					{
						HX_STACK_LINE(571)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(571)
						while((true)){
							HX_STACK_LINE(571)
							if ((!(((_g1 < dw))))){
								HX_STACK_LINE(571)
								break;
							}
							HX_STACK_LINE(571)
							int xx = (_g1)++;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(573)
							position = ((((xx + sx) + (((yy + sy)) * sw))) * (int)4);
							HX_STACK_LINE(574)
							int _g24 = ::openfl::_v2::Memory_obj::getI32(position);		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(574)
							pixelValue = _g24;
							HX_STACK_LINE(575)
							pixelMask = (int(pixelValue) & int(mask));
							HX_STACK_LINE(577)
							int _g25 = ::openfl::_v2::display::BitmapData_obj::__ucompare(pixelMask,thresholdMask);		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(577)
							i = _g25;
							HX_STACK_LINE(578)
							test = false;
							HX_STACK_LINE(580)
							if (((operation == HX_CSTRING("==")))){
								HX_STACK_LINE(580)
								test = (i == (int)0);
							}
							else{
								HX_STACK_LINE(581)
								if (((operation == HX_CSTRING("<")))){
									HX_STACK_LINE(581)
									test = (i == (int)-1);
								}
								else{
									HX_STACK_LINE(582)
									if (((operation == HX_CSTRING(">")))){
										HX_STACK_LINE(582)
										test = (i == (int)1);
									}
									else{
										HX_STACK_LINE(583)
										if (((operation == HX_CSTRING("!=")))){
											HX_STACK_LINE(583)
											test = (i != (int)0);
										}
										else{
											HX_STACK_LINE(584)
											if (((operation == HX_CSTRING("<=")))){
												HX_STACK_LINE(584)
												test = (bool((i == (int)0)) || bool((i == (int)-1)));
											}
											else{
												HX_STACK_LINE(585)
												if (((operation == HX_CSTRING(">=")))){
													HX_STACK_LINE(585)
													test = (bool((i == (int)0)) || bool((i == (int)1)));
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(587)
							if ((test)){
								HX_STACK_LINE(589)
								::openfl::_v2::Memory_obj::setI32(position,color);
								HX_STACK_LINE(590)
								(hits)++;
							}
							else{
								HX_STACK_LINE(592)
								if ((copySource)){
									HX_STACK_LINE(594)
									int _g26 = ::openfl::_v2::Memory_obj::getI32((canvasMemory + position));		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(594)
									::openfl::_v2::Memory_obj::setI32(position,_g26);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(602)
			memory->position = (int)0;
			HX_STACK_LINE(603)
			bitmapData->setPixels(sourceRect,memory);
			HX_STACK_LINE(604)
			::openfl::_v2::geom::Rectangle _g27 = bitmapData->get_rect();		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(604)
			this->copyPixels(bitmapData,_g27,destPoint,null(),null(),null());
			HX_STACK_LINE(605)
			::openfl::_v2::Memory_obj::select(null());
			HX_STACK_LINE(606)
			return hits;
		}
		HX_STACK_LINE(464)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::_v2::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","unlock",0x7f6f4b1c,"openfl._v2.display.BitmapData.unlock","openfl/_v2/display/BitmapData.hx",613,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::unmultiplyAlpha( ){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","unmultiplyAlpha",0xbab85549,"openfl._v2.display.BitmapData.unmultiplyAlpha","openfl/_v2/display/BitmapData.hx",622,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(622)
		::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_unmultiply_alpha(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,unmultiplyAlpha,(void))

Void BitmapData_obj::__drawToSurface( Dynamic surface,::openfl::_v2::geom::Matrix matrix,::openfl::_v2::geom::ColorTransform colorTransform,::String blendMode,::openfl::_v2::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","__drawToSurface",0x05d876d6,"openfl._v2.display.BitmapData.__drawToSurface","openfl/_v2/display/BitmapData.hx",629,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(surface,"surface")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_ARG(smoothing,"smoothing")
		HX_STACK_LINE(629)
		::openfl::_v2::display::BitmapData_obj::lime_render_surface_to_surface(surface,this->__handle,matrix,colorTransform,blendMode,clipRect,smoothing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,__drawToSurface,(void))

Void BitmapData_obj::__loadFromBytes( ::openfl::_v2::utils::ByteArray bytes,::openfl::_v2::utils::ByteArray rawAlpha){
{
		HX_STACK_FRAME("openfl._v2.display.BitmapData","__loadFromBytes",0x0e5a8923,"openfl._v2.display.BitmapData.__loadFromBytes","openfl/_v2/display/BitmapData.hx",641,0xebe9fb05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_LINE(643)
		Dynamic _g = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_from_bytes(bytes,rawAlpha);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(643)
		this->__handle = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__loadFromBytes,(void))

bool BitmapData_obj::get_premultipliedAlpha( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","get_premultipliedAlpha",0xf773dfc9,"openfl._v2.display.BitmapData.get_premultipliedAlpha","openfl/_v2/display/BitmapData.hx",709,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(709)
	return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_get_prem_alpha(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_premultipliedAlpha,return )

bool BitmapData_obj::set_premultipliedAlpha( bool value){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","set_premultipliedAlpha",0x2b1f5c3d,"openfl._v2.display.BitmapData.set_premultipliedAlpha","openfl/_v2/display/BitmapData.hx",710,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(710)
	::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_set_prem_alpha(this->__handle,value);
	HX_STACK_LINE(710)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,set_premultipliedAlpha,return )

::openfl::_v2::geom::Rectangle BitmapData_obj::get_rect( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","get_rect",0x21817705,"openfl._v2.display.BitmapData.get_rect","openfl/_v2/display/BitmapData.hx",711,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(711)
	int _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(711)
	int _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(711)
	return ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_rect,return )

int BitmapData_obj::get_width( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","get_width",0x136d3105,"openfl._v2.display.BitmapData.get_width","openfl/_v2/display/BitmapData.hx",712,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(712)
	return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_width(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_width,return )

int BitmapData_obj::get_height( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","get_height",0xa26d2c08,"openfl._v2.display.BitmapData.get_height","openfl/_v2/display/BitmapData.hx",713,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(713)
	return ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_height(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_height,return )

bool BitmapData_obj::get_transparent( ){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","get_transparent",0x75bd6f91,"openfl._v2.display.BitmapData.get_transparent","openfl/_v2/display/BitmapData.hx",714,0xebe9fb05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(714)
	return this->__transparent;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,get_transparent,return )

int BitmapData_obj::CLEAR;

int BitmapData_obj::BLACK;

int BitmapData_obj::WHITE;

int BitmapData_obj::RED;

int BitmapData_obj::GREEN;

int BitmapData_obj::BLUE;

::String BitmapData_obj::PNG;

::String BitmapData_obj::JPG;

int BitmapData_obj::TRANSPARENT;

int BitmapData_obj::HARDWARE;

int BitmapData_obj::FORMAT_8888;

int BitmapData_obj::FORMAT_4444;

int BitmapData_obj::FORMAT_565;

int BitmapData_obj::createColor( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","createColor",0x6abbc16f,"openfl._v2.display.BitmapData.createColor","openfl/_v2/display/BitmapData.hx",115,0xebe9fb05)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(115)
		return (int(rgb) | int((int(alpha) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,createColor,return )

int BitmapData_obj::extractAlpha( int argb){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","extractAlpha",0x51cd30b5,"openfl._v2.display.BitmapData.extractAlpha","openfl/_v2/display/BitmapData.hx",172,0xebe9fb05)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(172)
	return hx::UShr(argb,(int)24);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractAlpha,return )

int BitmapData_obj::extractColor( int argb){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","extractColor",0x7a92faba,"openfl._v2.display.BitmapData.extractColor","openfl/_v2/display/BitmapData.hx",179,0xebe9fb05)
	HX_STACK_ARG(argb,"argb")
	HX_STACK_LINE(179)
	return (int(argb) & int((int)16777215));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractColor,return )

::openfl::_v2::utils::ByteArray BitmapData_obj::getRGBAPixels( ::openfl::_v2::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","getRGBAPixels",0x185c65bf,"openfl._v2.display.BitmapData.getRGBAPixels","openfl/_v2/display/BitmapData.hx",246,0xebe9fb05)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(248)
	int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(248)
	int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(248)
	::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(248)
	::openfl::_v2::utils::ByteArray data = bitmapData->getPixels(_g2);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(249)
	int _g3 = bitmapData->get_width();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(249)
	int _g4 = bitmapData->get_height();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(249)
	int size = (_g3 * _g4);		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(250)
	int v;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(252)
	data->position = (int)0;
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(254)
		while((true)){
			HX_STACK_LINE(254)
			if ((!(((_g5 < size))))){
				HX_STACK_LINE(254)
				break;
			}
			HX_STACK_LINE(254)
			int i = (_g5)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(256)
			int _g51 = data->readInt();		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(256)
			v = _g51;
			HX_STACK_LINE(257)
			data->position = (int(i) << int((int)2));
			HX_STACK_LINE(258)
			data->writeInt((int((int((int((int(hx::UShr(v,(int)8)) & int((int)255))) | int((int(((int(hx::UShr(v,(int)16)) & int((int)255)))) << int((int)8))))) | int((int(((int(hx::UShr(v,(int)24)) & int((int)255)))) << int((int)16))))) | int((int(((int(hx::UShr(v,(int)0)) & int((int)255)))) << int((int)24)))));
		}
	}
	HX_STACK_LINE(262)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getRGBAPixels,return )

::openfl::_v2::display::BitmapData BitmapData_obj::load( ::String filename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_FRAME("openfl._v2.display.BitmapData","load",0xb03afc7e,"openfl._v2.display.BitmapData.load","openfl/_v2/display/BitmapData.hx",288,0xebe9fb05)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(290)
		::openfl::_v2::display::BitmapData result = ::openfl::_v2::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(291)
		Dynamic _g = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_load(filename,format);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(291)
		result->__handle = _g;
		HX_STACK_LINE(292)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,load,return )

::openfl::_v2::display::BitmapData BitmapData_obj::loadFromBytes( ::openfl::_v2::utils::ByteArray bytes,::openfl::_v2::utils::ByteArray rawAlpha){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","loadFromBytes",0x7f205643,"openfl._v2.display.BitmapData.loadFromBytes","openfl/_v2/display/BitmapData.hx",297,0xebe9fb05)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_LINE(299)
	::openfl::_v2::display::BitmapData result = ::openfl::_v2::display::BitmapData_obj::__new((int)0,(int)0,true,null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		Dynamic _g = ::openfl::_v2::display::BitmapData_obj::lime_bitmap_data_from_bytes(bytes,rawAlpha);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(300)
		result->__handle = _g;
	}
	HX_STACK_LINE(301)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::openfl::_v2::display::BitmapData BitmapData_obj::loadFromHaxeBytes( ::haxe::io::Bytes bytes,::haxe::io::Bytes rawAlpha){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","loadFromHaxeBytes",0xedd0943d,"openfl._v2.display.BitmapData.loadFromHaxeBytes","openfl/_v2/display/BitmapData.hx",306,0xebe9fb05)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_LINE(308)
	::openfl::_v2::utils::ByteArray _g = ::openfl::_v2::utils::ByteArray_obj::fromBytes(bytes);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(308)
	::openfl::_v2::utils::ByteArray _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(308)
	if (((rawAlpha == null()))){
		HX_STACK_LINE(308)
		_g1 = null();
	}
	else{
		HX_STACK_LINE(308)
		_g1 = ::openfl::_v2::utils::ByteArray_obj::fromBytes(rawAlpha);
	}
	HX_STACK_LINE(308)
	return ::openfl::_v2::display::BitmapData_obj::loadFromBytes(_g,_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromHaxeBytes,return )

bool BitmapData_obj::sameValue( int a,int b){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","sameValue",0x4f8578d3,"openfl._v2.display.BitmapData.sameValue","openfl/_v2/display/BitmapData.hx",389,0xebe9fb05)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(389)
	return (a == b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,sameValue,return )

int BitmapData_obj::__flipPixel( int pixel){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","__flipPixel",0x7e9fb221,"openfl._v2.display.BitmapData.__flipPixel","openfl/_v2/display/BitmapData.hx",636,0xebe9fb05)
	HX_STACK_ARG(pixel,"pixel")
	HX_STACK_LINE(636)
	return (int((int((int((int(((int(pixel) & int((int)255)))) << int((int)24))) | int((int(((int((int(pixel) >> int((int)8))) & int((int)255)))) << int((int)16))))) | int((int(((int((int(pixel) >> int((int)16))) & int((int)255)))) << int((int)8))))) | int((int((int(pixel) >> int((int)24))) & int((int)255))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__flipPixel,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl._v2.display.BitmapData","__ucompare",0xfa496848,"openfl._v2.display.BitmapData.__ucompare","openfl/_v2/display/BitmapData.hx",648,0xebe9fb05)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(650)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(653)
	tmp1 = (int((int(n1) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(654)
	tmp2 = (int((int(n2) >> int((int)24))) & int((int)255));
	HX_STACK_LINE(656)
	if (((tmp1 != tmp2))){
		HX_STACK_LINE(658)
		if (((tmp1 > tmp2))){
			HX_STACK_LINE(658)
			return (int)1;
		}
		else{
			HX_STACK_LINE(658)
			return (int)-1;
		}
	}
	else{
		HX_STACK_LINE(662)
		tmp1 = (int((int(n1) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(663)
		tmp2 = (int((int(n2) >> int((int)16))) & int((int)255));
		HX_STACK_LINE(665)
		if (((tmp1 != tmp2))){
			HX_STACK_LINE(667)
			if (((tmp1 > tmp2))){
				HX_STACK_LINE(667)
				return (int)1;
			}
			else{
				HX_STACK_LINE(667)
				return (int)-1;
			}
		}
		else{
			HX_STACK_LINE(671)
			tmp1 = (int((int(n1) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(672)
			tmp2 = (int((int(n2) >> int((int)8))) & int((int)255));
			HX_STACK_LINE(674)
			if (((tmp1 != tmp2))){
				HX_STACK_LINE(676)
				if (((tmp1 > tmp2))){
					HX_STACK_LINE(676)
					return (int)1;
				}
				else{
					HX_STACK_LINE(676)
					return (int)-1;
				}
			}
			else{
				HX_STACK_LINE(680)
				tmp1 = (int(n1) & int((int)255));
				HX_STACK_LINE(681)
				tmp2 = (int(n2) & int((int)255));
				HX_STACK_LINE(683)
				if (((tmp1 != tmp2))){
					HX_STACK_LINE(685)
					if (((tmp1 > tmp2))){
						HX_STACK_LINE(685)
						return (int)1;
					}
					else{
						HX_STACK_LINE(685)
						return (int)-1;
					}
				}
				else{
					HX_STACK_LINE(689)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(656)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )

Dynamic BitmapData_obj::lime_bitmap_data_create;

Dynamic BitmapData_obj::lime_bitmap_data_load;

Dynamic BitmapData_obj::lime_bitmap_data_from_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_clear;

Dynamic BitmapData_obj::lime_bitmap_data_clone;

Dynamic BitmapData_obj::lime_bitmap_data_apply_filter;

Dynamic BitmapData_obj::lime_bitmap_data_color_transform;

Dynamic BitmapData_obj::lime_bitmap_data_copy;

Dynamic BitmapData_obj::lime_bitmap_data_copy_channel;

Dynamic BitmapData_obj::lime_bitmap_data_fill;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixels;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_get_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_get_array;

Dynamic BitmapData_obj::lime_bitmap_data_get_color_bounds_rect;

Dynamic BitmapData_obj::lime_bitmap_data_scroll;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel32;

Dynamic BitmapData_obj::lime_bitmap_data_set_pixel_rgba;

Dynamic BitmapData_obj::lime_bitmap_data_set_bytes;

Dynamic BitmapData_obj::lime_bitmap_data_set_format;

Dynamic BitmapData_obj::lime_bitmap_data_set_array;

Dynamic BitmapData_obj::lime_bitmap_data_create_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_destroy_hardware_surface;

Dynamic BitmapData_obj::lime_bitmap_data_dispose;

Dynamic BitmapData_obj::lime_bitmap_data_generate_filter_rect;

Dynamic BitmapData_obj::lime_render_surface_to_surface;

Dynamic BitmapData_obj::lime_bitmap_data_height;

Dynamic BitmapData_obj::lime_bitmap_data_width;

Dynamic BitmapData_obj::lime_bitmap_data_get_transparent;

Dynamic BitmapData_obj::lime_bitmap_data_set_flags;

Dynamic BitmapData_obj::lime_bitmap_data_encode;

Dynamic BitmapData_obj::lime_bitmap_data_dump_bits;

Dynamic BitmapData_obj::lime_bitmap_data_flood_fill;

Dynamic BitmapData_obj::lime_bitmap_data_noise;

Dynamic BitmapData_obj::lime_bitmap_data_unmultiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_multiply_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_get_prem_alpha;

Dynamic BitmapData_obj::lime_bitmap_data_set_prem_alpha;


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"dumpBits") ) { return dumpBits_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlags") ) { return setFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sameValue") ) { return sameValue_dyn(); }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__ucompare") ) { return __ucompare_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRectEx") ) { return fillRectEx_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createColor") ) { return createColor_dyn(); }
		if (HX_FIELD_EQ(inName,"__flipPixel") ) { return __flipPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"transparent") ) { return inCallProp ? get_transparent() : transparent; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractAlpha") ) { return extractAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"extractColor") ) { return extractColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRGBAPixels") ) { return getRGBAPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { return loadFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { return multiplyAlpha_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { return unmultiplyAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawToSurface") ) { return __drawToSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"__loadFromBytes") ) { return __loadFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { return loadFromHaxeBytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { return get_premultipliedAlpha(); }
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { return lime_bitmap_data_load; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { return lime_bitmap_data_copy; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { return lime_bitmap_data_fill; }
		if (HX_FIELD_EQ(inName,"createHardwareSurface") ) { return createHardwareSurface_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { return lime_bitmap_data_clear; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { return lime_bitmap_data_clone; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { return lime_bitmap_data_width; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { return lime_bitmap_data_noise; }
		if (HX_FIELD_EQ(inName,"destroyHardwareSurface") ) { return destroyHardwareSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultipliedAlpha") ) { return get_premultipliedAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultipliedAlpha") ) { return set_premultipliedAlpha_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { return lime_bitmap_data_create; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { return lime_bitmap_data_scroll; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { return lime_bitmap_data_height; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { return lime_bitmap_data_encode; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { return lime_bitmap_data_dispose; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { return lime_bitmap_data_get_pixel; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { return lime_bitmap_data_get_array; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { return lime_bitmap_data_set_pixel; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { return lime_bitmap_data_set_bytes; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { return lime_bitmap_data_set_array; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { return lime_bitmap_data_set_flags; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { return lime_bitmap_data_dump_bits; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { return lime_bitmap_data_from_bytes; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { return lime_bitmap_data_get_pixels; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { return lime_bitmap_data_set_format; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { return lime_bitmap_data_flood_fill; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { return lime_bitmap_data_get_pixel32; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { return lime_bitmap_data_set_pixel32; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { return lime_bitmap_data_apply_filter; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { return lime_bitmap_data_copy_channel; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { return lime_render_surface_to_surface; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { return lime_bitmap_data_get_pixel_rgba; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { return lime_bitmap_data_set_pixel_rgba; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { return lime_bitmap_data_multiply_alpha; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { return lime_bitmap_data_get_prem_alpha; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { return lime_bitmap_data_set_prem_alpha; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { return lime_bitmap_data_color_transform; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { return lime_bitmap_data_get_transparent; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { return lime_bitmap_data_unmultiply_alpha; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { return lime_bitmap_data_generate_filter_rect; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { return lime_bitmap_data_get_color_bounds_rect; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { return lime_bitmap_data_create_hardware_surface; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { return lime_bitmap_data_destroy_hardware_surface; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { return set_premultipliedAlpha(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_load") ) { lime_bitmap_data_load=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy") ) { lime_bitmap_data_copy=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_fill") ) { lime_bitmap_data_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clear") ) { lime_bitmap_data_clear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_clone") ) { lime_bitmap_data_clone=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_width") ) { lime_bitmap_data_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_noise") ) { lime_bitmap_data_noise=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create") ) { lime_bitmap_data_create=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_scroll") ) { lime_bitmap_data_scroll=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_height") ) { lime_bitmap_data_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_encode") ) { lime_bitmap_data_encode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dispose") ) { lime_bitmap_data_dispose=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel") ) { lime_bitmap_data_get_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_array") ) { lime_bitmap_data_get_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel") ) { lime_bitmap_data_set_pixel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_bytes") ) { lime_bitmap_data_set_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_array") ) { lime_bitmap_data_set_array=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_flags") ) { lime_bitmap_data_set_flags=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_dump_bits") ) { lime_bitmap_data_dump_bits=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_from_bytes") ) { lime_bitmap_data_from_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixels") ) { lime_bitmap_data_get_pixels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_format") ) { lime_bitmap_data_set_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_flood_fill") ) { lime_bitmap_data_flood_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel32") ) { lime_bitmap_data_get_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel32") ) { lime_bitmap_data_set_pixel32=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_apply_filter") ) { lime_bitmap_data_apply_filter=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_copy_channel") ) { lime_bitmap_data_copy_channel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_render_surface_to_surface") ) { lime_render_surface_to_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_pixel_rgba") ) { lime_bitmap_data_get_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_pixel_rgba") ) { lime_bitmap_data_set_pixel_rgba=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_multiply_alpha") ) { lime_bitmap_data_multiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_prem_alpha") ) { lime_bitmap_data_get_prem_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_set_prem_alpha") ) { lime_bitmap_data_set_prem_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_color_transform") ) { lime_bitmap_data_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_transparent") ) { lime_bitmap_data_get_transparent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_unmultiply_alpha") ) { lime_bitmap_data_unmultiply_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_generate_filter_rect") ) { lime_bitmap_data_generate_filter_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_get_color_bounds_rect") ) { lime_bitmap_data_get_color_bounds_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_create_hardware_surface") ) { lime_bitmap_data_create_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_bitmap_data_destroy_hardware_surface") ) { lime_bitmap_data_destroy_hardware_surface=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("premultipliedAlpha"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("transparent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("__transparent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLEAR"),
	HX_CSTRING("BLACK"),
	HX_CSTRING("WHITE"),
	HX_CSTRING("RED"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("PNG"),
	HX_CSTRING("JPG"),
	HX_CSTRING("TRANSPARENT"),
	HX_CSTRING("HARDWARE"),
	HX_CSTRING("FORMAT_8888"),
	HX_CSTRING("FORMAT_4444"),
	HX_CSTRING("FORMAT_565"),
	HX_CSTRING("createColor"),
	HX_CSTRING("extractAlpha"),
	HX_CSTRING("extractColor"),
	HX_CSTRING("getRGBAPixels"),
	HX_CSTRING("load"),
	HX_CSTRING("loadFromBytes"),
	HX_CSTRING("loadFromHaxeBytes"),
	HX_CSTRING("sameValue"),
	HX_CSTRING("__flipPixel"),
	HX_CSTRING("__ucompare"),
	HX_CSTRING("lime_bitmap_data_create"),
	HX_CSTRING("lime_bitmap_data_load"),
	HX_CSTRING("lime_bitmap_data_from_bytes"),
	HX_CSTRING("lime_bitmap_data_clear"),
	HX_CSTRING("lime_bitmap_data_clone"),
	HX_CSTRING("lime_bitmap_data_apply_filter"),
	HX_CSTRING("lime_bitmap_data_color_transform"),
	HX_CSTRING("lime_bitmap_data_copy"),
	HX_CSTRING("lime_bitmap_data_copy_channel"),
	HX_CSTRING("lime_bitmap_data_fill"),
	HX_CSTRING("lime_bitmap_data_get_pixels"),
	HX_CSTRING("lime_bitmap_data_get_pixel"),
	HX_CSTRING("lime_bitmap_data_get_pixel32"),
	HX_CSTRING("lime_bitmap_data_get_pixel_rgba"),
	HX_CSTRING("lime_bitmap_data_get_array"),
	HX_CSTRING("lime_bitmap_data_get_color_bounds_rect"),
	HX_CSTRING("lime_bitmap_data_scroll"),
	HX_CSTRING("lime_bitmap_data_set_pixel"),
	HX_CSTRING("lime_bitmap_data_set_pixel32"),
	HX_CSTRING("lime_bitmap_data_set_pixel_rgba"),
	HX_CSTRING("lime_bitmap_data_set_bytes"),
	HX_CSTRING("lime_bitmap_data_set_format"),
	HX_CSTRING("lime_bitmap_data_set_array"),
	HX_CSTRING("lime_bitmap_data_create_hardware_surface"),
	HX_CSTRING("lime_bitmap_data_destroy_hardware_surface"),
	HX_CSTRING("lime_bitmap_data_dispose"),
	HX_CSTRING("lime_bitmap_data_generate_filter_rect"),
	HX_CSTRING("lime_render_surface_to_surface"),
	HX_CSTRING("lime_bitmap_data_height"),
	HX_CSTRING("lime_bitmap_data_width"),
	HX_CSTRING("lime_bitmap_data_get_transparent"),
	HX_CSTRING("lime_bitmap_data_set_flags"),
	HX_CSTRING("lime_bitmap_data_encode"),
	HX_CSTRING("lime_bitmap_data_dump_bits"),
	HX_CSTRING("lime_bitmap_data_flood_fill"),
	HX_CSTRING("lime_bitmap_data_noise"),
	HX_CSTRING("lime_bitmap_data_unmultiply_alpha"),
	HX_CSTRING("lime_bitmap_data_multiply_alpha"),
	HX_CSTRING("lime_bitmap_data_get_prem_alpha"),
	HX_CSTRING("lime_bitmap_data_set_prem_alpha"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::openfl::_v2::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_CSTRING("rect")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_CSTRING("transparent")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_CSTRING("width")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__transparent),HX_CSTRING("__transparent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("rect"),
	HX_CSTRING("transparent"),
	HX_CSTRING("width"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__transparent"),
	HX_CSTRING("applyFilter"),
	HX_CSTRING("clear"),
	HX_CSTRING("clone"),
	HX_CSTRING("colorTransform"),
	HX_CSTRING("copyChannel"),
	HX_CSTRING("copyPixels"),
	HX_CSTRING("createHardwareSurface"),
	HX_CSTRING("destroyHardwareSurface"),
	HX_CSTRING("dispose"),
	HX_CSTRING("draw"),
	HX_CSTRING("dumpBits"),
	HX_CSTRING("encode"),
	HX_CSTRING("fillRect"),
	HX_CSTRING("fillRectEx"),
	HX_CSTRING("floodFill"),
	HX_CSTRING("generateFilterRect"),
	HX_CSTRING("getColorBoundsRect"),
	HX_CSTRING("getPixel"),
	HX_CSTRING("getPixel32"),
	HX_CSTRING("getPixels"),
	HX_CSTRING("getVector"),
	HX_CSTRING("lock"),
	HX_CSTRING("multiplyAlpha"),
	HX_CSTRING("noise"),
	HX_CSTRING("paletteMap"),
	HX_CSTRING("perlinNoise"),
	HX_CSTRING("scroll"),
	HX_CSTRING("setFlags"),
	HX_CSTRING("setFormat"),
	HX_CSTRING("setPixel"),
	HX_CSTRING("setPixel32"),
	HX_CSTRING("setPixels"),
	HX_CSTRING("setVector"),
	HX_CSTRING("threshold"),
	HX_CSTRING("unlock"),
	HX_CSTRING("unmultiplyAlpha"),
	HX_CSTRING("__drawToSurface"),
	HX_CSTRING("__loadFromBytes"),
	HX_CSTRING("get_premultipliedAlpha"),
	HX_CSTRING("set_premultipliedAlpha"),
	HX_CSTRING("get_rect"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_transparent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_MARK_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create,"lime_bitmap_data_create");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_load,"lime_bitmap_data_load");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_from_bytes,"lime_bitmap_data_from_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clear,"lime_bitmap_data_clear");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_clone,"lime_bitmap_data_clone");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_apply_filter,"lime_bitmap_data_apply_filter");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_color_transform,"lime_bitmap_data_color_transform");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy,"lime_bitmap_data_copy");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_copy_channel,"lime_bitmap_data_copy_channel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_fill,"lime_bitmap_data_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixels,"lime_bitmap_data_get_pixels");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel,"lime_bitmap_data_get_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel32,"lime_bitmap_data_get_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_pixel_rgba,"lime_bitmap_data_get_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_array,"lime_bitmap_data_get_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_color_bounds_rect,"lime_bitmap_data_get_color_bounds_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_scroll,"lime_bitmap_data_scroll");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel,"lime_bitmap_data_set_pixel");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel32,"lime_bitmap_data_set_pixel32");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_pixel_rgba,"lime_bitmap_data_set_pixel_rgba");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_bytes,"lime_bitmap_data_set_bytes");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_format,"lime_bitmap_data_set_format");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_array,"lime_bitmap_data_set_array");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_create_hardware_surface,"lime_bitmap_data_create_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_destroy_hardware_surface,"lime_bitmap_data_destroy_hardware_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dispose,"lime_bitmap_data_dispose");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_generate_filter_rect,"lime_bitmap_data_generate_filter_rect");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_render_surface_to_surface,"lime_render_surface_to_surface");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_height,"lime_bitmap_data_height");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_width,"lime_bitmap_data_width");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_transparent,"lime_bitmap_data_get_transparent");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_flags,"lime_bitmap_data_set_flags");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_encode,"lime_bitmap_data_encode");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_dump_bits,"lime_bitmap_data_dump_bits");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_flood_fill,"lime_bitmap_data_flood_fill");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_noise,"lime_bitmap_data_noise");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_unmultiply_alpha,"lime_bitmap_data_unmultiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_multiply_alpha,"lime_bitmap_data_multiply_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_get_prem_alpha,"lime_bitmap_data_get_prem_alpha");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::lime_bitmap_data_set_prem_alpha,"lime_bitmap_data_set_prem_alpha");
};

#endif

Class BitmapData_obj::__mClass;

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.display.BitmapData"), hx::TCanCast< BitmapData_obj> ,sStaticFields,sMemberFields,
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

void BitmapData_obj::__boot()
{
	CLEAR= (int)0;
	BLACK= (int)-16777216;
	WHITE= (int)-16777216;
	RED= (int)-65536;
	GREEN= (int)-16711936;
	BLUE= (int)-16776961;
	PNG= HX_CSTRING("png");
	JPG= HX_CSTRING("jpg");
	TRANSPARENT= (int)1;
	HARDWARE= (int)2;
	FORMAT_8888= (int)0;
	FORMAT_4444= (int)1;
	FORMAT_565= (int)2;
	lime_bitmap_data_create= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_create"),(int)-1);
	lime_bitmap_data_load= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_load"),(int)2);
	lime_bitmap_data_from_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_from_bytes"),(int)2);
	lime_bitmap_data_clear= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_clear"),(int)2);
	lime_bitmap_data_clone= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_clone"),(int)1);
	lime_bitmap_data_apply_filter= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_apply_filter"),(int)5);
	lime_bitmap_data_color_transform= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_color_transform"),(int)3);
	lime_bitmap_data_copy= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_copy"),(int)5);
	lime_bitmap_data_copy_channel= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_copy_channel"),(int)-1);
	lime_bitmap_data_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_fill"),(int)4);
	lime_bitmap_data_get_pixels= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixels"),(int)2);
	lime_bitmap_data_get_pixel= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel"),(int)3);
	lime_bitmap_data_get_pixel32= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel32"),(int)3);
	lime_bitmap_data_get_pixel_rgba= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_pixel_rgba"),(int)3);
	lime_bitmap_data_get_array= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_array"),(int)3);
	lime_bitmap_data_get_color_bounds_rect= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_color_bounds_rect"),(int)5);
	lime_bitmap_data_scroll= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_scroll"),(int)3);
	lime_bitmap_data_set_pixel= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel"),(int)4);
	lime_bitmap_data_set_pixel32= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel32"),(int)4);
	lime_bitmap_data_set_pixel_rgba= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_pixel_rgba"),(int)4);
	lime_bitmap_data_set_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_bytes"),(int)4);
	lime_bitmap_data_set_format= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_format"),(int)2);
	lime_bitmap_data_set_array= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_array"),(int)3);
	lime_bitmap_data_create_hardware_surface= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_create_hardware_surface"),(int)1);
	lime_bitmap_data_destroy_hardware_surface= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_destroy_hardware_surface"),(int)1);
	lime_bitmap_data_dispose= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_dispose"),(int)1);
	lime_bitmap_data_generate_filter_rect= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_generate_filter_rect"),(int)3);
	lime_render_surface_to_surface= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_render_surface_to_surface"),(int)-1);
	lime_bitmap_data_height= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_height"),(int)1);
	lime_bitmap_data_width= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_width"),(int)1);
	lime_bitmap_data_get_transparent= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_transparent"),(int)1);
	lime_bitmap_data_set_flags= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_flags"),(int)2);
	lime_bitmap_data_encode= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_encode"),(int)3);
	lime_bitmap_data_dump_bits= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_dump_bits"),(int)1);
	lime_bitmap_data_flood_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_flood_fill"),(int)4);
	lime_bitmap_data_noise= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_noise"),(int)-1);
	lime_bitmap_data_unmultiply_alpha= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_unmultiply_alpha"),(int)1);
	lime_bitmap_data_multiply_alpha= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_multiply_alpha"),(int)1);
	lime_bitmap_data_get_prem_alpha= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_get_prem_alpha"),(int)1);
	lime_bitmap_data_set_prem_alpha= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_bitmap_data_set_prem_alpha"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace display
