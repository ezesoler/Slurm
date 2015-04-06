#ifndef INCLUDED_com_slurm_DefaultFont
#define INCLUDED_com_slurm_DefaultFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/text/Font.h>
HX_DECLARE_CLASS2(com,slurm,DefaultFont)
HX_DECLARE_CLASS3(openfl,_v2,text,Font)
HX_DECLARE_CLASS3(openfl,_v2,text,FontStyle)
HX_DECLARE_CLASS3(openfl,_v2,text,FontType)
namespace com{
namespace slurm{


class HXCPP_CLASS_ATTRIBUTES  DefaultFont_obj : public ::openfl::_v2::text::Font_obj{
	public:
		typedef ::openfl::_v2::text::Font_obj super;
		typedef DefaultFont_obj OBJ_;
		DefaultFont_obj();
		Void __construct(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultFont_obj > __new(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DefaultFont"); }

		static ::String resourceName;
};

} // end namespace com
} // end namespace slurm

#endif /* INCLUDED_com_slurm_DefaultFont */ 
