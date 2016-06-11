﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m1100844011 (Quaternion_t1891715979 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t1891715979  Quaternion_get_identity_m1743882806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3525329789  Quaternion_get_eulerAngles_m997303795 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Euler_m1940911101 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t3525329789  Quaternion_Internal_ToEulerRad_m1608666215 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1660134351 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___rotation0, Vector3_t3525329789 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Internal_FromEulerRad_m3681319598 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1312441940 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___euler0, Quaternion_t1891715979 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1891715979 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_pinvoke;

extern "C" void Quaternion_t1891715979_marshal_pinvoke(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_back(const Quaternion_t1891715979_marshaled_pinvoke& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_cleanup(Quaternion_t1891715979_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_com;

extern "C" void Quaternion_t1891715979_marshal_com(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_com& marshaled);
extern "C" void Quaternion_t1891715979_marshal_com_back(const Quaternion_t1891715979_marshaled_com& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_com_cleanup(Quaternion_t1891715979_marshaled_com& marshaled);