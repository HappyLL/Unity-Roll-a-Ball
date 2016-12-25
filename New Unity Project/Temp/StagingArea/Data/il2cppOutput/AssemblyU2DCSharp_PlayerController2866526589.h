#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Camera PlayerController::m_camera
	Camera_t2727095145 * ___m_camera_2;
	// UnityEngine.UI.Text PlayerController::m_countText
	Text_t9039225 * ___m_countText_3;
	// UnityEngine.UI.Text PlayerController::m_youwinText
	Text_t9039225 * ___m_youwinText_4;
	// UnityEngine.Rigidbody PlayerController::m_rigidBody
	Rigidbody_t3346577219 * ___m_rigidBody_5;
	// System.Int32 PlayerController::m_count
	int32_t ___m_count_6;
	// UnityEngine.Vector3 PlayerController::offset
	Vector3_t4282066566  ___offset_7;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___m_camera_2)); }
	inline Camera_t2727095145 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t2727095145 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t2727095145 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_2, value);
	}

	inline static int32_t get_offset_of_m_countText_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___m_countText_3)); }
	inline Text_t9039225 * get_m_countText_3() const { return ___m_countText_3; }
	inline Text_t9039225 ** get_address_of_m_countText_3() { return &___m_countText_3; }
	inline void set_m_countText_3(Text_t9039225 * value)
	{
		___m_countText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_countText_3, value);
	}

	inline static int32_t get_offset_of_m_youwinText_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___m_youwinText_4)); }
	inline Text_t9039225 * get_m_youwinText_4() const { return ___m_youwinText_4; }
	inline Text_t9039225 ** get_address_of_m_youwinText_4() { return &___m_youwinText_4; }
	inline void set_m_youwinText_4(Text_t9039225 * value)
	{
		___m_youwinText_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_youwinText_4, value);
	}

	inline static int32_t get_offset_of_m_rigidBody_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___m_rigidBody_5)); }
	inline Rigidbody_t3346577219 * get_m_rigidBody_5() const { return ___m_rigidBody_5; }
	inline Rigidbody_t3346577219 ** get_address_of_m_rigidBody_5() { return &___m_rigidBody_5; }
	inline void set_m_rigidBody_5(Rigidbody_t3346577219 * value)
	{
		___m_rigidBody_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_rigidBody_5, value);
	}

	inline static int32_t get_offset_of_m_count_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___m_count_6)); }
	inline int32_t get_m_count_6() const { return ___m_count_6; }
	inline int32_t* get_address_of_m_count_6() { return &___m_count_6; }
	inline void set_m_count_6(int32_t value)
	{
		___m_count_6 = value;
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___offset_7)); }
	inline Vector3_t4282066566  get_offset_7() const { return ___offset_7; }
	inline Vector3_t4282066566 * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_t4282066566  value)
	{
		___offset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
