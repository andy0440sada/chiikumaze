#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t594472611;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t262790558;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Token
struct  Token_t80988633  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Token::_exists
	bool ____exists_2;
	// UnityEngine.SpriteRenderer Token::_renderer
	SpriteRenderer_t2223784725 * ____renderer_3;
	// UnityEngine.Rigidbody2D Token::_rigidbody2D
	Rigidbody2D_t3632243084 * ____rigidbody2D_4;
	// System.Single Token::_width
	float ____width_5;
	// System.Single Token::_height
	float ____height_6;
	// UnityEngine.CircleCollider2D Token::_circleCollider
	CircleCollider2D_t594472611 * ____circleCollider_7;
	// UnityEngine.BoxCollider2D Token::_boxCollider
	BoxCollider2D_t262790558 * ____boxCollider_8;

public:
	inline static int32_t get_offset_of__exists_2() { return static_cast<int32_t>(offsetof(Token_t80988633, ____exists_2)); }
	inline bool get__exists_2() const { return ____exists_2; }
	inline bool* get_address_of__exists_2() { return &____exists_2; }
	inline void set__exists_2(bool value)
	{
		____exists_2 = value;
	}

	inline static int32_t get_offset_of__renderer_3() { return static_cast<int32_t>(offsetof(Token_t80988633, ____renderer_3)); }
	inline SpriteRenderer_t2223784725 * get__renderer_3() const { return ____renderer_3; }
	inline SpriteRenderer_t2223784725 ** get_address_of__renderer_3() { return &____renderer_3; }
	inline void set__renderer_3(SpriteRenderer_t2223784725 * value)
	{
		____renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_3, value);
	}

	inline static int32_t get_offset_of__rigidbody2D_4() { return static_cast<int32_t>(offsetof(Token_t80988633, ____rigidbody2D_4)); }
	inline Rigidbody2D_t3632243084 * get__rigidbody2D_4() const { return ____rigidbody2D_4; }
	inline Rigidbody2D_t3632243084 ** get_address_of__rigidbody2D_4() { return &____rigidbody2D_4; }
	inline void set__rigidbody2D_4(Rigidbody2D_t3632243084 * value)
	{
		____rigidbody2D_4 = value;
		Il2CppCodeGenWriteBarrier(&____rigidbody2D_4, value);
	}

	inline static int32_t get_offset_of__width_5() { return static_cast<int32_t>(offsetof(Token_t80988633, ____width_5)); }
	inline float get__width_5() const { return ____width_5; }
	inline float* get_address_of__width_5() { return &____width_5; }
	inline void set__width_5(float value)
	{
		____width_5 = value;
	}

	inline static int32_t get_offset_of__height_6() { return static_cast<int32_t>(offsetof(Token_t80988633, ____height_6)); }
	inline float get__height_6() const { return ____height_6; }
	inline float* get_address_of__height_6() { return &____height_6; }
	inline void set__height_6(float value)
	{
		____height_6 = value;
	}

	inline static int32_t get_offset_of__circleCollider_7() { return static_cast<int32_t>(offsetof(Token_t80988633, ____circleCollider_7)); }
	inline CircleCollider2D_t594472611 * get__circleCollider_7() const { return ____circleCollider_7; }
	inline CircleCollider2D_t594472611 ** get_address_of__circleCollider_7() { return &____circleCollider_7; }
	inline void set__circleCollider_7(CircleCollider2D_t594472611 * value)
	{
		____circleCollider_7 = value;
		Il2CppCodeGenWriteBarrier(&____circleCollider_7, value);
	}

	inline static int32_t get_offset_of__boxCollider_8() { return static_cast<int32_t>(offsetof(Token_t80988633, ____boxCollider_8)); }
	inline BoxCollider2D_t262790558 * get__boxCollider_8() const { return ____boxCollider_8; }
	inline BoxCollider2D_t262790558 ** get_address_of__boxCollider_8() { return &____boxCollider_8; }
	inline void set__boxCollider_8(BoxCollider2D_t262790558 * value)
	{
		____boxCollider_8 = value;
		Il2CppCodeGenWriteBarrier(&____boxCollider_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
