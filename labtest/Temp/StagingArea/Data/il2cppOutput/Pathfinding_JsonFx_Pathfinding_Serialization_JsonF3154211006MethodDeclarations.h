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

// System.Type
struct Type_t;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t3154211006;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t626389457;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t520966972;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"

// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetTypeInfo(System.Type)
extern "C"  Type_t * TypeCoercionUtility_GetTypeInfo_m3198666030 (Il2CppObject * __this /* static, unused */, Type_t * ___tp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
extern "C"  Dictionary_2_t626389457 * TypeCoercionUtility_get_MemberMapCache_m994727592 (TypeCoercionUtility_t3154211006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  Il2CppObject * TypeCoercionUtility_ProcessTypeHint_m421374191 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t520966972 ** ___memberMap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Object,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  Il2CppObject * TypeCoercionUtility_ProcessTypeHint_m931282438 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t520966972 ** ___memberMap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type)
extern "C"  Il2CppObject * TypeCoercionUtility_InstantiateObject_m472923486 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  Il2CppObject * TypeCoercionUtility_InstantiateObject_m3064453651 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, Dictionary_2_t520966972 ** ___memberMap1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
extern "C"  Dictionary_2_t520966972 * TypeCoercionUtility_GetMemberMap_m1277459664 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
extern "C"  Dictionary_2_t520966972 * TypeCoercionUtility_CreateMemberMap_m856110382 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
extern "C"  Type_t * TypeCoercionUtility_GetMemberInfo_m68305156 (Il2CppObject * __this /* static, unused */, Dictionary_2_t520966972 * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  void TypeCoercionUtility_SetMemberValue_m3423425905 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, Il2CppObject * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceType_m3345524962 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Collections.IDictionary,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceType_m967108774 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Il2CppObject * ___value1, Dictionary_2_t520966972 ** ___memberMap2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceList_m3530535370 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
extern "C"  Il2CppArray * TypeCoercionUtility_CoerceArray_m1490009066 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___elementType0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
extern "C"  bool TypeCoercionUtility_IsNullable_m187284083 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C"  void TypeCoercionUtility__ctor_m3724068137 (TypeCoercionUtility_t3154211006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
