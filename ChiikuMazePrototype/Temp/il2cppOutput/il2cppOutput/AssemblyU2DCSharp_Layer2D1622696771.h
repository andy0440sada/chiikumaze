#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Layer2D
struct  Layer2D_t1622696771  : public Il2CppObject
{
public:
	// System.Int32 Layer2D::_width
	int32_t ____width_0;
	// System.Int32 Layer2D::_height
	int32_t ____height_1;
	// System.Int32 Layer2D::_outOfRange
	int32_t ____outOfRange_2;
	// System.Int32[] Layer2D::_values
	Int32U5BU5D_t1809983122* ____values_3;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Layer2D_t1622696771, ____width_0)); }
	inline int32_t get__width_0() const { return ____width_0; }
	inline int32_t* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(int32_t value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Layer2D_t1622696771, ____height_1)); }
	inline int32_t get__height_1() const { return ____height_1; }
	inline int32_t* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(int32_t value)
	{
		____height_1 = value;
	}

	inline static int32_t get_offset_of__outOfRange_2() { return static_cast<int32_t>(offsetof(Layer2D_t1622696771, ____outOfRange_2)); }
	inline int32_t get__outOfRange_2() const { return ____outOfRange_2; }
	inline int32_t* get_address_of__outOfRange_2() { return &____outOfRange_2; }
	inline void set__outOfRange_2(int32_t value)
	{
		____outOfRange_2 = value;
	}

	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(Layer2D_t1622696771, ____values_3)); }
	inline Int32U5BU5D_t1809983122* get__values_3() const { return ____values_3; }
	inline Int32U5BU5D_t1809983122** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(Int32U5BU5D_t1809983122* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier(&____values_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
