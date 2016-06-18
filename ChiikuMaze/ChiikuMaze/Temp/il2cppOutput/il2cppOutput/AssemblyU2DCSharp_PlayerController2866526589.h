#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t3012272455
{
public:
	// System.String PlayerController::playerName
	String_t* ___playerName_2;
	// UnityEngine.Rigidbody2D PlayerController::rigidbody2d
	Rigidbody2D_t3632243084 * ___rigidbody2d_3;
	// System.Single PlayerController::distanceFromCamera
	float ___distanceFromCamera_4;

public:
	inline static int32_t get_offset_of_playerName_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___playerName_2)); }
	inline String_t* get_playerName_2() const { return ___playerName_2; }
	inline String_t** get_address_of_playerName_2() { return &___playerName_2; }
	inline void set_playerName_2(String_t* value)
	{
		___playerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerName_2, value);
	}

	inline static int32_t get_offset_of_rigidbody2d_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rigidbody2d_3)); }
	inline Rigidbody2D_t3632243084 * get_rigidbody2d_3() const { return ___rigidbody2d_3; }
	inline Rigidbody2D_t3632243084 ** get_address_of_rigidbody2d_3() { return &___rigidbody2d_3; }
	inline void set_rigidbody2d_3(Rigidbody2D_t3632243084 * value)
	{
		___rigidbody2d_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody2d_3, value);
	}

	inline static int32_t get_offset_of_distanceFromCamera_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___distanceFromCamera_4)); }
	inline float get_distanceFromCamera_4() const { return ___distanceFromCamera_4; }
	inline float* get_address_of_distanceFromCamera_4() { return &___distanceFromCamera_4; }
	inline void set_distanceFromCamera_4(float value)
	{
		___distanceFromCamera_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
