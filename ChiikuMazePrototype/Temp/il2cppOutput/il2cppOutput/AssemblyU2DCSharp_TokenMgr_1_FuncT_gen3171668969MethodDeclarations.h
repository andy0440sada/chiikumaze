#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TokenMgr`1/FuncT<System.Object>
struct FuncT_t3171668969;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void TokenMgr`1/FuncT<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void FuncT__ctor_m3317127906_gshared (FuncT_t3171668969 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define FuncT__ctor_m3317127906(__this, ___object0, ___method1, method) ((  void (*) (FuncT_t3171668969 *, Il2CppObject *, IntPtr_t, const MethodInfo*))FuncT__ctor_m3317127906_gshared)(__this, ___object0, ___method1, method)
// System.Void TokenMgr`1/FuncT<System.Object>::Invoke(Type)
extern "C"  void FuncT_Invoke_m76301346_gshared (FuncT_t3171668969 * __this, Il2CppObject * ___t0, const MethodInfo* method);
#define FuncT_Invoke_m76301346(__this, ___t0, method) ((  void (*) (FuncT_t3171668969 *, Il2CppObject *, const MethodInfo*))FuncT_Invoke_m76301346_gshared)(__this, ___t0, method)
// System.IAsyncResult TokenMgr`1/FuncT<System.Object>::BeginInvoke(Type,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FuncT_BeginInvoke_m279047113_gshared (FuncT_t3171668969 * __this, Il2CppObject * ___t0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define FuncT_BeginInvoke_m279047113(__this, ___t0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (FuncT_t3171668969 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))FuncT_BeginInvoke_m279047113_gshared)(__this, ___t0, ___callback1, ___object2, method)
// System.Void TokenMgr`1/FuncT<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void FuncT_EndInvoke_m1797230066_gshared (FuncT_t3171668969 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define FuncT_EndInvoke_m1797230066(__this, ___result0, method) ((  void (*) (FuncT_t3171668969 *, Il2CppObject *, const MethodInfo*))FuncT_EndInvoke_m1797230066_gshared)(__this, ___result0, method)
