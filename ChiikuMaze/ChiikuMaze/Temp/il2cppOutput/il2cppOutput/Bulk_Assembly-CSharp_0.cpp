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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController2866526589.h"
#include "AssemblyU2DCSharp_PlayerController2866526589MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera3533968274MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform284553113MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rigidbody2D3632243084.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Input1593691127MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t3632243084_m2201104241(__this, method) ((  Rigidbody2D_t3632243084 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
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
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t3632243084_m2201104241_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2440188986;
extern const uint32_t PlayerController_Start_m1605657278_MetadataUsageId;
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1605657278_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_playerName_2(_stringLiteral2440188986);
		Rigidbody2D_t3632243084 * L_0 = Component_GetComponent_TisRigidbody2D_t3632243084_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t3632243084_m2201104241_MethodInfo_var);
		__this->set_rigidbody2d_3(L_0);
		Rigidbody2D_t3632243084 * L_1 = __this->get_rigidbody2d_3();
		NullCheck(L_1);
		Vector2_t3525329788  L_2 = Rigidbody2D_get_position_m3766784193(L_1, /*hidden argument*/NULL);
		Vector3_t3525329789  L_3 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Camera_t3533968274 * L_4 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t284553113 * L_5 = Component_get_transform_m4257140443(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3525329789  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		float L_7 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		__this->set_distanceFromCamera_4(L_7);
		return;
	}
}
// System.Void PlayerController::Update()
extern Il2CppClass* Input_t1593691127_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_Update_m2536587535_MetadataUsageId;
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m2536587535_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1593691127_il2cpp_TypeInfo_var);
		Vector3_t3525329789  L_1 = Input_get_mousePosition_m4020233228(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_distanceFromCamera_4();
		(&V_0)->set_z_2(L_2);
		Camera_t3533968274 * L_3 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3525329789  L_4 = V_0;
		NullCheck(L_3);
		Vector3_t3525329789  L_5 = Camera_ScreenToWorldPoint_m1572306334(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Rigidbody2D_t3632243084 * L_6 = __this->get_rigidbody2d_3();
		Vector3_t3525329789  L_7 = V_0;
		Transform_t284553113 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3525329789  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		Vector3_t3525329789  L_10 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		Vector3_t3525329789  L_11 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_10, (40.0f), /*hidden argument*/NULL);
		Vector2_t3525329788  L_12 = Vector2_op_Implicit_m4083860659(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_set_velocity_m100625302(L_6, L_12, /*hidden argument*/NULL);
	}

IL_0055:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
