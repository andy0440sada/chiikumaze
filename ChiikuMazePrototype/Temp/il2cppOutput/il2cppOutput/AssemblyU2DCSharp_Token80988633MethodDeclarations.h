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

// Token
struct Token_t80988633;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t594472611;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t262790558;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Sprite4006040370.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void Token::.ctor()
extern "C"  void Token__ctor_m2627011506 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Token::GetPrefab(UnityEngine.GameObject,System.String)
extern "C"  GameObject_t4012695102 * Token_GetPrefab_m2742661363 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Token::get_Exists()
extern "C"  bool Token_get_Exists_m3150485379 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Exists(System.Boolean)
extern "C"  void Token_set_Exists_m205035874 (Token_t80988633 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer Token::get_Renderer()
extern "C"  SpriteRenderer_t2223784725 * Token_get_Renderer_m2903397344 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Token::get_Visible()
extern "C"  bool Token_get_Visible_m2123497613 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Visible(System.Boolean)
extern "C"  void Token_set_Visible_m2499920540 (Token_t80988633 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Token::get_SortingLayer()
extern "C"  String_t* Token_get_SortingLayer_m593199109 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_SortingLayer(System.String)
extern "C"  void Token_set_SortingLayer_m790129222 (Token_t80988633 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Token::get_SortingOrder()
extern "C"  int32_t Token_get_SortingOrder_m793537847 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_SortingOrder(System.Int32)
extern "C"  void Token_set_SortingOrder_m44983498 (Token_t80988633 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_X(System.Single)
extern "C"  void Token_set_X_m3171299744 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_X()
extern "C"  float Token_get_X_m3695773355 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Y(System.Single)
extern "C"  void Token_set_Y_m2660765567 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Y()
extern "C"  float Token_get_Y_m3695774316 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::AddPosition(System.Single,System.Single)
extern "C"  void Token_AddPosition_m2065192214 (Token_t80988633 * __this, float ___dx0, float ___dy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetPosition(System.Single,System.Single)
extern "C"  void Token_SetPosition_m2036205045 (Token_t80988633 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_ScaleX(System.Single)
extern "C"  void Token_set_ScaleX_m3482297902 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_ScaleX()
extern "C"  float Token_get_ScaleX_m1502722525 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_ScaleY(System.Single)
extern "C"  void Token_set_ScaleY_m2971763725 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_ScaleY()
extern "C"  float Token_get_ScaleY_m1502723486 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetScale(System.Single,System.Single)
extern "C"  void Token_SetScale_m2902690358 (Token_t80988633 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Scale()
extern "C"  float Token_get_Scale_m1295399421 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Scale(System.Single)
extern "C"  void Token_set_Scale_m4099675022 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::AddScale(System.Single)
extern "C"  void Token_AddScale_m2616121296 (Token_t80988633 * __this, float ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::MulScale(System.Single)
extern "C"  void Token_MulScale_m1777014643 (Token_t80988633 * __this, float ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D Token::get_RigidBody()
extern "C"  Rigidbody2D_t3632243084 * Token_get_RigidBody_m550856607 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetVelocity(System.Single,System.Single)
extern "C"  void Token_SetVelocity_m407498433 (Token_t80988633 * __this, float ___direction0, float ___speed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetVelocityXY(System.Single,System.Single)
extern "C"  void Token_SetVelocityXY_m107016928 (Token_t80988633 * __this, float ___vx0, float ___vy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::MulVelocity(System.Single)
extern "C"  void Token_MulVelocity_m722697018 (Token_t80988633 * __this, float ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_VX()
extern "C"  float Token_get_VX_m2899810865 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_VX(System.Single)
extern "C"  void Token_set_VX_m2060815962 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_VY()
extern "C"  float Token_get_VY_m2899811826 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_VY(System.Single)
extern "C"  void Token_set_VY_m1550281785 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Direction()
extern "C"  float Token_get_Direction_m280106482 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Speed()
extern "C"  float Token_get_Speed_m1671062970 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_GravityScale()
extern "C"  float Token_get_GravityScale_m2881168171 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_GravityScale(System.Single)
extern "C"  void Token_set_GravityScale_m4024163232 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Angle(System.Single)
extern "C"  void Token_set_Angle_m481853669 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Angle()
extern "C"  float Token_get_Angle_m2820664134 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetSprite(UnityEngine.Sprite)
extern "C"  void Token_SetSprite_m881921691 (Token_t80988633 * __this, Sprite_t4006040370 * ___sprite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetColor(System.Single,System.Single,System.Single)
extern "C"  void Token_SetColor_m4158874338 (Token_t80988633 * __this, float ___r0, float ___g1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetAlpha(System.Single)
extern "C"  void Token_SetAlpha_m3501874813 (Token_t80988633 * __this, float ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::GetAlpha()
extern "C"  float Token_GetAlpha_m1076591918 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_Alpha(System.Single)
extern "C"  void Token_set_Alpha_m2710946042 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_Alpha()
extern "C"  float Token_get_Alpha_m2771594513 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetSize(System.Single,System.Single)
extern "C"  void Token_SetSize_m2898070941 (Token_t80988633 * __this, float ___width0, float ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_SpriteWidth()
extern "C"  float Token_get_SpriteWidth_m2897616756 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_SpriteHeight()
extern "C"  float Token_get_SpriteHeight_m135620571 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CircleCollider2D Token::get_CircleCollider()
extern "C"  CircleCollider2D_t594472611 * Token_get_CircleCollider_m1107515599 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_CollisionRadius()
extern "C"  float Token_get_CollisionRadius_m263302679 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_CollisionRadius(System.Single)
extern "C"  void Token_set_CollisionRadius_m759671220 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Token::get_CircleColliderEnabled()
extern "C"  bool Token_get_CircleColliderEnabled_m373540248 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_CircleColliderEnabled(System.Boolean)
extern "C"  void Token_set_CircleColliderEnabled_m2455281255 (Token_t80988633 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider2D Token::get_BoxCollider()
extern "C"  BoxCollider2D_t262790558 * Token_get_BoxCollider_m1800560383 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_BoxColliderWidth()
extern "C"  float Token_get_BoxColliderWidth_m1535475702 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_BoxColliderWidth(System.Single)
extern "C"  void Token_set_BoxColliderWidth_m1911832757 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Token::get_BoxColliderHeight()
extern "C"  float Token_get_BoxColliderHeight_m858920857 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_BoxColliderHeight(System.Single)
extern "C"  void Token_set_BoxColliderHeight_m1583289202 (Token_t80988633 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::SetBoxColliderSize(System.Single,System.Single)
extern "C"  void Token_SetBoxColliderSize_m2774809216 (Token_t80988633 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Token::get_BoxColliderEnabled()
extern "C"  bool Token_get_BoxColliderEnabled_m3043716105 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::set_BoxColliderEnabled(System.Boolean)
extern "C"  void Token_set_BoxColliderEnabled_m3696414568 (Token_t80988633 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::ClampScreenAndMove(UnityEngine.Vector2)
extern "C"  void Token_ClampScreenAndMove_m736596039 (Token_t80988633 * __this, Vector2_t3525329788  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::ClampScreen()
extern "C"  void Token_ClampScreen_m2194180311 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Token::IsOutside()
extern "C"  bool Token_IsOutside_m3386684767 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Token::GetWorldMin(System.Boolean)
extern "C"  Vector2_t3525329788  Token_GetWorldMin_m3923250296 (Token_t80988633 * __this, bool ___noMergin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Token::GetWorldMax(System.Boolean)
extern "C"  Vector2_t3525329788  Token_GetWorldMax_m3958089610 (Token_t80988633 * __this, bool ___noMergin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::DestroyObj()
extern "C"  void Token_DestroyObj_m1137922543 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::Revive()
extern "C"  void Token_Revive_m4271510311 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Token::Vanish()
extern "C"  void Token_Vanish_m3168649933 (Token_t80988633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
