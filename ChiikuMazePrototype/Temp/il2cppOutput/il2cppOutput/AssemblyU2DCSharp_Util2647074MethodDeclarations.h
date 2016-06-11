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

// Util
struct Util_t2647074;
// Token
struct Token_t80988633;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void Util::.ctor()
extern "C"  void Util__ctor_m3427314873 (Util_t2647074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::.cctor()
extern "C"  void Util__cctor_m2685449748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Util::CosEx(System.Single)
extern "C"  float Util_CosEx_m2426146598 (Il2CppObject * __this /* static, unused */, float ___Deg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Util::SinEx(System.Single)
extern "C"  float Util_SinEx_m1642184693 (Il2CppObject * __this /* static, unused */, float ___Deg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Util::GetInputVector()
extern "C"  Vector2_t3525329788  Util_GetInputVector_m2252104381 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Token Util::CreateToken(System.Single,System.Single,System.String,System.String,System.String)
extern "C"  Token_t80988633 * Util_CreateToken_m3083569706 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, String_t* ___SpriteFile2, String_t* ___SpriteName3, String_t* ___objName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Util::GetSprite(System.String,System.String)
extern "C"  Sprite_t4006040370 * Util_GetSprite_m1381362797 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, String_t* ___spriteName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Util::GetGUIRect()
extern "C"  Rect_t1525428817  Util_GetGUIRect_m3644985398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Util::GetGUIStyle()
extern "C"  GUIStyle_t1006925219 * Util_GetGUIStyle_m717719443 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::SetFontSize(System.Int32)
extern "C"  void Util_SetFontSize_m3041416218 (Il2CppObject * __this /* static, unused */, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::SetFontColor(UnityEngine.Color)
extern "C"  void Util_SetFontColor_m1542719177 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Util::GUILabel(System.Single,System.Single,System.Single,System.Single,System.String)
extern "C"  void Util_GUILabel_m1474601714 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___w2, float ___h3, String_t* ___text4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
