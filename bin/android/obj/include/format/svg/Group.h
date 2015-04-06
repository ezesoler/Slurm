#ifndef INCLUDED_format_svg_Group
#define INCLUDED_format_svg_Group

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,DisplayElement)
HX_DECLARE_CLASS2(format,svg,Group)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  Group_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Group_obj OBJ_;
		Group_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Group_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Group_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Group"); }

		virtual bool hasGroup( ::String inName);
		Dynamic hasGroup_dyn();

		virtual ::format::svg::Group findGroup( ::String inName);
		Dynamic findGroup_dyn();

		::String name;
		Array< ::Dynamic > children;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Group */ 