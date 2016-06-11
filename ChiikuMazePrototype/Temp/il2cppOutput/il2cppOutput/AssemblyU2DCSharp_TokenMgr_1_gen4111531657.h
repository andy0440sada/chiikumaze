#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;
// TokenMgr`1/FuncT<System.Object>
struct FuncT_t3171668969;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TokenMgr`1<System.Object>
struct  TokenMgr_1_t4111531657  : public Il2CppObject
{
public:
	// System.Int32 TokenMgr`1::_size
	int32_t ____size_0;
	// UnityEngine.GameObject TokenMgr`1::_prefab
	GameObject_t4012695102 * ____prefab_1;
	// System.Collections.Generic.List`1<Type> TokenMgr`1::_pool
	List_1_t1634065389 * ____pool_2;
	// System.Int32 TokenMgr`1::_order
	int32_t ____order_3;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(TokenMgr_1_t4111531657, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__prefab_1() { return static_cast<int32_t>(offsetof(TokenMgr_1_t4111531657, ____prefab_1)); }
	inline GameObject_t4012695102 * get__prefab_1() const { return ____prefab_1; }
	inline GameObject_t4012695102 ** get_address_of__prefab_1() { return &____prefab_1; }
	inline void set__prefab_1(GameObject_t4012695102 * value)
	{
		____prefab_1 = value;
		Il2CppCodeGenWriteBarrier(&____prefab_1, value);
	}

	inline static int32_t get_offset_of__pool_2() { return static_cast<int32_t>(offsetof(TokenMgr_1_t4111531657, ____pool_2)); }
	inline List_1_t1634065389 * get__pool_2() const { return ____pool_2; }
	inline List_1_t1634065389 ** get_address_of__pool_2() { return &____pool_2; }
	inline void set__pool_2(List_1_t1634065389 * value)
	{
		____pool_2 = value;
		Il2CppCodeGenWriteBarrier(&____pool_2, value);
	}

	inline static int32_t get_offset_of__order_3() { return static_cast<int32_t>(offsetof(TokenMgr_1_t4111531657, ____order_3)); }
	inline int32_t get__order_3() const { return ____order_3; }
	inline int32_t* get_address_of__order_3() { return &____order_3; }
	inline void set__order_3(int32_t value)
	{
		____order_3 = value;
	}
};

struct TokenMgr_1_t4111531657_StaticFields
{
public:
	// TokenMgr`1/FuncT<Type> TokenMgr`1::<>f__am$cache4
	FuncT_t3171668969 * ___U3CU3Ef__amU24cache4_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(TokenMgr_1_t4111531657_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline FuncT_t3171668969 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline FuncT_t3171668969 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(FuncT_t3171668969 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
