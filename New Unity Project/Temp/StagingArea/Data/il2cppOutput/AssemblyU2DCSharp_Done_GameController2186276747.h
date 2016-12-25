#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_GameController
struct  Done_GameController_t2186276747  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] Done_GameController::hazards
	GameObjectU5BU5D_t2662109048* ___hazards_2;
	// UnityEngine.Vector3 Done_GameController::spawnValues
	Vector3_t4282066566  ___spawnValues_3;
	// System.Int32 Done_GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single Done_GameController::spawnWait
	float ___spawnWait_5;
	// System.Single Done_GameController::startWait
	float ___startWait_6;
	// System.Single Done_GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText Done_GameController::scoreText
	GUIText_t3371372606 * ___scoreText_8;
	// UnityEngine.GUIText Done_GameController::restartText
	GUIText_t3371372606 * ___restartText_9;
	// UnityEngine.GUIText Done_GameController::gameOverText
	GUIText_t3371372606 * ___gameOverText_10;
	// System.Boolean Done_GameController::gameOver
	bool ___gameOver_11;
	// System.Boolean Done_GameController::restart
	bool ___restart_12;
	// System.Int32 Done_GameController::score
	int32_t ___score_13;

public:
	inline static int32_t get_offset_of_hazards_2() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___hazards_2)); }
	inline GameObjectU5BU5D_t2662109048* get_hazards_2() const { return ___hazards_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_hazards_2() { return &___hazards_2; }
	inline void set_hazards_2(GameObjectU5BU5D_t2662109048* value)
	{
		___hazards_2 = value;
		Il2CppCodeGenWriteBarrier(&___hazards_2, value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___spawnValues_3)); }
	inline Vector3_t4282066566  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t4282066566 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t4282066566  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___scoreText_8)); }
	inline GUIText_t3371372606 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t3371372606 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t3371372606 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_8, value);
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___restartText_9)); }
	inline GUIText_t3371372606 * get_restartText_9() const { return ___restartText_9; }
	inline GUIText_t3371372606 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(GUIText_t3371372606 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier(&___restartText_9, value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___gameOverText_10)); }
	inline GUIText_t3371372606 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GUIText_t3371372606 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GUIText_t3371372606 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_10, value);
	}

	inline static int32_t get_offset_of_gameOver_11() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___gameOver_11)); }
	inline bool get_gameOver_11() const { return ___gameOver_11; }
	inline bool* get_address_of_gameOver_11() { return &___gameOver_11; }
	inline void set_gameOver_11(bool value)
	{
		___gameOver_11 = value;
	}

	inline static int32_t get_offset_of_restart_12() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___restart_12)); }
	inline bool get_restart_12() const { return ___restart_12; }
	inline bool* get_address_of_restart_12() { return &___restart_12; }
	inline void set_restart_12(bool value)
	{
		___restart_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(Done_GameController_t2186276747, ___score_13)); }
	inline int32_t get_score_13() const { return ___score_13; }
	inline int32_t* get_address_of_score_13() { return &___score_13; }
	inline void set_score_13(int32_t value)
	{
		___score_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
