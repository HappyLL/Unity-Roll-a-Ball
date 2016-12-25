#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Done_Boundary
struct Done_Boundary_t2537380935;
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

// Done_PlayerController
struct  Done_PlayerController_t1316387962  : public MonoBehaviour_t667441552
{
public:
	// System.Single Done_PlayerController::speed
	float ___speed_2;
	// System.Single Done_PlayerController::tilt
	float ___tilt_3;
	// Done_Boundary Done_PlayerController::boundary
	Done_Boundary_t2537380935 * ___boundary_4;
	// UnityEngine.GameObject Done_PlayerController::shot
	GameObject_t3674682005 * ___shot_5;
	// UnityEngine.Transform Done_PlayerController::shotSpawn
	Transform_t1659122786 * ___shotSpawn_6;
	// System.Single Done_PlayerController::fireRate
	float ___fireRate_7;
	// System.Single Done_PlayerController::nextFire
	float ___nextFire_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___boundary_4)); }
	inline Done_Boundary_t2537380935 * get_boundary_4() const { return ___boundary_4; }
	inline Done_Boundary_t2537380935 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Done_Boundary_t2537380935 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___shot_5)); }
	inline GameObject_t3674682005 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t3674682005 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t3674682005 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier(&___shot_5, value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___shotSpawn_6)); }
	inline Transform_t1659122786 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t1659122786 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t1659122786 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_6, value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(Done_PlayerController_t1316387962, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
