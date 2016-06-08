#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// PlayerController
struct PlayerController_t2866526589;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Single958209021.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::OnMouseDrag()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2222975034;
extern const uint32_t PlayerController_OnMouseDrag_m2869080182_MetadataUsageId;
extern "C"  void PlayerController_OnMouseDrag_m2869080182 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnMouseDrag_m2869080182_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3525329789  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3525329789  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3525329789  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3525329789  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3525329789  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2222975034, /*hidden argument*/NULL);
		Camera_t3533968274 * L_0 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t284553113 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3525329789  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3525329789  L_3 = Camera_WorldToScreenPoint_m2400233676(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_4 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = (&V_3)->get_x_0();
		Vector3_t3525329789  L_6 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_6;
		float L_7 = (&V_4)->get_y_1();
		float L_8 = (&V_0)->get_z_2();
		Vector3__ctor_m2926210380((&V_1), L_5, L_7, L_8, /*hidden argument*/NULL);
		Camera_t3533968274 * L_9 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = V_1;
		NullCheck(L_9);
		Vector3_t3525329789  L_11 = Camera_ScreenToWorldPoint_m1572306334(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Transform_t284553113 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3525329789  L_13 = Transform_get_position_m2211398607(L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		float L_14 = (&V_5)->get_z_2();
		(&V_2)->set_z_2(L_14);
		Transform_t284553113 * L_15 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t3525329789  L_16 = V_2;
		NullCheck(L_15);
		Transform_set_position_m3111394108(L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
