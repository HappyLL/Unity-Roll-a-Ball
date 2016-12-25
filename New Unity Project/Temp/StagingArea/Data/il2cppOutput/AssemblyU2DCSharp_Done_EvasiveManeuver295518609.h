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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_EvasiveManeuver
struct  Done_EvasiveManeuver_t295518609  : public MonoBehaviour_t667441552
{
public:
	// Done_Boundary Done_EvasiveManeuver::boundary
	Done_Boundary_t2537380935 * ___boundary_2;
	// System.Single Done_EvasiveManeuver::tilt
	float ___tilt_3;
	// System.Single Done_EvasiveManeuver::dodge
	float ___dodge_4;
	// System.Single Done_EvasiveManeuver::smoothing
	float ___smoothing_5;
	// UnityEngine.Vector2 Done_EvasiveManeuver::startWait
	Vector2_t4282066565  ___startWait_6;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverTime
	Vector2_t4282066565  ___maneuverTime_7;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverWait
	Vector2_t4282066565  ___maneuverWait_8;
	// System.Single Done_EvasiveManeuver::currentSpeed
	float ___currentSpeed_9;
	// System.Single Done_EvasiveManeuver::targetManeuver
	float ___targetManeuver_10;

public:
	inline static int32_t get_offset_of_boundary_2() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___boundary_2)); }
	inline Done_Boundary_t2537380935 * get_boundary_2() const { return ___boundary_2; }
	inline Done_Boundary_t2537380935 ** get_address_of_boundary_2() { return &___boundary_2; }
	inline void set_boundary_2(Done_Boundary_t2537380935 * value)
	{
		___boundary_2 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_2, value);
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_dodge_4() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___dodge_4)); }
	inline float get_dodge_4() const { return ___dodge_4; }
	inline float* get_address_of_dodge_4() { return &___dodge_4; }
	inline void set_dodge_4(float value)
	{
		___dodge_4 = value;
	}

	inline static int32_t get_offset_of_smoothing_5() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___smoothing_5)); }
	inline float get_smoothing_5() const { return ___smoothing_5; }
	inline float* get_address_of_smoothing_5() { return &___smoothing_5; }
	inline void set_smoothing_5(float value)
	{
		___smoothing_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___startWait_6)); }
	inline Vector2_t4282066565  get_startWait_6() const { return ___startWait_6; }
	inline Vector2_t4282066565 * get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(Vector2_t4282066565  value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_7() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___maneuverTime_7)); }
	inline Vector2_t4282066565  get_maneuverTime_7() const { return ___maneuverTime_7; }
	inline Vector2_t4282066565 * get_address_of_maneuverTime_7() { return &___maneuverTime_7; }
	inline void set_maneuverTime_7(Vector2_t4282066565  value)
	{
		___maneuverTime_7 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_8() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___maneuverWait_8)); }
	inline Vector2_t4282066565  get_maneuverWait_8() const { return ___maneuverWait_8; }
	inline Vector2_t4282066565 * get_address_of_maneuverWait_8() { return &___maneuverWait_8; }
	inline void set_maneuverWait_8(Vector2_t4282066565  value)
	{
		___maneuverWait_8 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_9() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___currentSpeed_9)); }
	inline float get_currentSpeed_9() const { return ___currentSpeed_9; }
	inline float* get_address_of_currentSpeed_9() { return &___currentSpeed_9; }
	inline void set_currentSpeed_9(float value)
	{
		___currentSpeed_9 = value;
	}

	inline static int32_t get_offset_of_targetManeuver_10() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t295518609, ___targetManeuver_10)); }
	inline float get_targetManeuver_10() const { return ___targetManeuver_10; }
	inline float* get_address_of_targetManeuver_10() { return &___targetManeuver_10; }
	inline void set_targetManeuver_10(float value)
	{
		___targetManeuver_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
