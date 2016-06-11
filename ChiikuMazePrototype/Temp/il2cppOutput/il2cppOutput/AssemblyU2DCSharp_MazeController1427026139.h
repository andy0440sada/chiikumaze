#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Token>
struct Dictionary_2_t571799416;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MazeController
struct  MazeController_t1427026139  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Token> MazeController::chips
	Dictionary_2_t571799416 * ___chips_4;
	// System.Boolean MazeController::_bDone
	bool ____bDone_5;

public:
	inline static int32_t get_offset_of_chips_4() { return static_cast<int32_t>(offsetof(MazeController_t1427026139, ___chips_4)); }
	inline Dictionary_2_t571799416 * get_chips_4() const { return ___chips_4; }
	inline Dictionary_2_t571799416 ** get_address_of_chips_4() { return &___chips_4; }
	inline void set_chips_4(Dictionary_2_t571799416 * value)
	{
		___chips_4 = value;
		Il2CppCodeGenWriteBarrier(&___chips_4, value);
	}

	inline static int32_t get_offset_of__bDone_5() { return static_cast<int32_t>(offsetof(MazeController_t1427026139, ____bDone_5)); }
	inline bool get__bDone_5() const { return ____bDone_5; }
	inline bool* get_address_of__bDone_5() { return &____bDone_5; }
	inline void set__bDone_5(bool value)
	{
		____bDone_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
