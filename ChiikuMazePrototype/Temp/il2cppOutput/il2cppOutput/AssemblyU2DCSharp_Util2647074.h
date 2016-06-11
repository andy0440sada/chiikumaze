#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Util
struct  Util_t2647074  : public Il2CppObject
{
public:

public:
};

struct Util_t2647074_StaticFields
{
public:
	// UnityEngine.Rect Util::_guiRect
	Rect_t1525428817  ____guiRect_0;
	// UnityEngine.GUIStyle Util::_guiStyle
	GUIStyle_t1006925219 * ____guiStyle_1;

public:
	inline static int32_t get_offset_of__guiRect_0() { return static_cast<int32_t>(offsetof(Util_t2647074_StaticFields, ____guiRect_0)); }
	inline Rect_t1525428817  get__guiRect_0() const { return ____guiRect_0; }
	inline Rect_t1525428817 * get_address_of__guiRect_0() { return &____guiRect_0; }
	inline void set__guiRect_0(Rect_t1525428817  value)
	{
		____guiRect_0 = value;
	}

	inline static int32_t get_offset_of__guiStyle_1() { return static_cast<int32_t>(offsetof(Util_t2647074_StaticFields, ____guiStyle_1)); }
	inline GUIStyle_t1006925219 * get__guiStyle_1() const { return ____guiStyle_1; }
	inline GUIStyle_t1006925219 ** get_address_of__guiStyle_1() { return &____guiStyle_1; }
	inline void set__guiStyle_1(GUIStyle_t1006925219 * value)
	{
		____guiStyle_1 = value;
		Il2CppCodeGenWriteBarrier(&____guiStyle_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
