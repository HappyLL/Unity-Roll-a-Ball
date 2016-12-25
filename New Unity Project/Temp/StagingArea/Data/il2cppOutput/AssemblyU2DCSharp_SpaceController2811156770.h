#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// Boundary
struct Boundary_t2244299850;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpaceController
struct  SpaceController_t2811156770  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody SpaceController::m_rig
	Rigidbody_t3346577219 * ___m_rig_2;
	// System.Single SpaceController::Speed
	float ___Speed_3;
	// Boundary SpaceController::m_bd
	Boundary_t2244299850 * ___m_bd_4;
	// System.Single SpaceController::Roate
	float ___Roate_5;

public:
	inline static int32_t get_offset_of_m_rig_2() { return static_cast<int32_t>(offsetof(SpaceController_t2811156770, ___m_rig_2)); }
	inline Rigidbody_t3346577219 * get_m_rig_2() const { return ___m_rig_2; }
	inline Rigidbody_t3346577219 ** get_address_of_m_rig_2() { return &___m_rig_2; }
	inline void set_m_rig_2(Rigidbody_t3346577219 * value)
	{
		___m_rig_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_rig_2, value);
	}

	inline static int32_t get_offset_of_Speed_3() { return static_cast<int32_t>(offsetof(SpaceController_t2811156770, ___Speed_3)); }
	inline float get_Speed_3() const { return ___Speed_3; }
	inline float* get_address_of_Speed_3() { return &___Speed_3; }
	inline void set_Speed_3(float value)
	{
		___Speed_3 = value;
	}

	inline static int32_t get_offset_of_m_bd_4() { return static_cast<int32_t>(offsetof(SpaceController_t2811156770, ___m_bd_4)); }
	inline Boundary_t2244299850 * get_m_bd_4() const { return ___m_bd_4; }
	inline Boundary_t2244299850 ** get_address_of_m_bd_4() { return &___m_bd_4; }
	inline void set_m_bd_4(Boundary_t2244299850 * value)
	{
		___m_bd_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_bd_4, value);
	}

	inline static int32_t get_offset_of_Roate_5() { return static_cast<int32_t>(offsetof(SpaceController_t2811156770, ___Roate_5)); }
	inline float get_Roate_5() const { return ___Roate_5; }
	inline float* get_address_of_Roate_5() { return &___Roate_5; }
	inline void set_Roate_5(float value)
	{
		___Roate_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
