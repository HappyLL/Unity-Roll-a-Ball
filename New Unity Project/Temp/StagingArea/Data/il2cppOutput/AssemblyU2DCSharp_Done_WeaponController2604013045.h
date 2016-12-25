#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_WeaponController
struct  Done_WeaponController_t2604013045  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Done_WeaponController::shot
	GameObject_t3674682005 * ___shot_2;
	// UnityEngine.Transform Done_WeaponController::shotSpawn
	Transform_t1659122786 * ___shotSpawn_3;
	// System.Single Done_WeaponController::fireRate
	float ___fireRate_4;
	// System.Single Done_WeaponController::delay
	float ___delay_5;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(Done_WeaponController_t2604013045, ___shot_2)); }
	inline GameObject_t3674682005 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t3674682005 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t3674682005 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier(&___shot_2, value);
	}

	inline static int32_t get_offset_of_shotSpawn_3() { return static_cast<int32_t>(offsetof(Done_WeaponController_t2604013045, ___shotSpawn_3)); }
	inline Transform_t1659122786 * get_shotSpawn_3() const { return ___shotSpawn_3; }
	inline Transform_t1659122786 ** get_address_of_shotSpawn_3() { return &___shotSpawn_3; }
	inline void set_shotSpawn_3(Transform_t1659122786 * value)
	{
		___shotSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_3, value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(Done_WeaponController_t2604013045, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(Done_WeaponController_t2604013045, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
