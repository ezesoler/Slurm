#ifndef INCLUDED_com_slurm_GlobalData
#define INCLUDED_com_slurm_GlobalData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,slurm,GlobalData)
namespace com{
namespace slurm{


class HXCPP_CLASS_ATTRIBUTES  GlobalData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GlobalData_obj OBJ_;
		GlobalData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GlobalData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlobalData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GlobalData"); }

		static ::String lan;
};

} // end namespace com
} // end namespace slurm

#endif /* INCLUDED_com_slurm_GlobalData */ 
