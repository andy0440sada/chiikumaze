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

// MazeController
struct MazeController_t1427026139;
// Layer2D
struct Layer2D_t1622696771;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Layer2D1622696771.h"

// System.Void MazeController::.ctor()
extern "C"  void MazeController__ctor_m1499521568 (MazeController_t1427026139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MazeController::GetChipX(System.Int32)
extern "C"  float MazeController_GetChipX_m4154125847 (MazeController_t1427026139 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MazeController::GetChipY(System.Int32)
extern "C"  float MazeController_GetChipY_m1366710360 (MazeController_t1427026139 * __this, int32_t ___j0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeController::AddWall(Layer2D,System.Int32,System.Int32)
extern "C"  void MazeController_AddWall_m1828550662 (MazeController_t1427026139 * __this, Layer2D_t1622696771 * ___layer0, int32_t ___i1, int32_t ___j2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeController::RemoveWall(Layer2D,System.Int32,System.Int32)
extern "C"  void MazeController_RemoveWall_m2162716317 (MazeController_t1427026139 * __this, Layer2D_t1622696771 * ___layer0, int32_t ___i1, int32_t ___j2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MazeController::Start()
extern "C"  Il2CppObject * MazeController_Start_m1674931160 (MazeController_t1427026139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MazeController::_Dig(Layer2D,System.Int32,System.Int32)
extern "C"  Il2CppObject * MazeController__Dig_m2460808672 (MazeController_t1427026139 * __this, Layer2D_t1622696771 * ___layer0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeController::Update()
extern "C"  void MazeController_Update_m967390445 (MazeController_t1427026139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MazeController::OnGUI()
extern "C"  void MazeController_OnGUI_m994920218 (MazeController_t1427026139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
