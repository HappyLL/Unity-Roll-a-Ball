#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t2244299850  : public Il2CppObject
{
public:
	// System.Single Boundary::minX
	float ___minX_0;
	// System.Single Boundary::minZ
	float ___minZ_1;
	// System.Single Boundary::maxX
	float ___maxX_2;
	// System.Single Boundary::maxZ
	float ___maxZ_3;

public:
	inline static int32_t get_offset_of_minX_0() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___minX_0)); }
	inline float get_minX_0() const { return ___minX_0; }
	inline float* get_address_of_minX_0() { return &___minX_0; }
	inline void set_minX_0(float value)
	{
		___minX_0 = value;
	}

	inline static int32_t get_offset_of_minZ_1() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___minZ_1)); }
	inline float get_minZ_1() const { return ___minZ_1; }
	inline float* get_address_of_minZ_1() { return &___minZ_1; }
	inline void set_minZ_1(float value)
	{
		___minZ_1 = value;
	}

	inline static int32_t get_offset_of_maxX_2() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___maxX_2)); }
	inline float get_maxX_2() const { return ___maxX_2; }
	inline float* get_address_of_maxX_2() { return &___maxX_2; }
	inline void set_maxX_2(float value)
	{
		___maxX_2 = value;
	}

	inline static int32_t get_offset_of_maxZ_3() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___maxZ_3)); }
	inline float get_maxZ_3() const { return ___maxZ_3; }
	inline float* get_address_of_maxZ_3() { return &___maxZ_3; }
	inline void set_maxZ_3(float value)
	{
		___maxZ_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
