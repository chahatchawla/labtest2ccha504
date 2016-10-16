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

// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader
struct ReferenceHandlerReader_t2883105060;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1751339649;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_String7231557.h"

// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::TryGetValueFromID(System.Int32,System.Object&)
extern "C"  bool ReferenceHandlerReader_TryGetValueFromID_m3953173997 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject ** ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Reflection.MemberInfo,System.Object)
extern "C"  void ReferenceHandlerReader_AddDelayedSetter_m2841281146 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, MemberInfo_t * ___memberInfo1, Il2CppObject * ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Object,System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern "C"  void ReferenceHandlerReader_AddDelayedSetter_m3397765756 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___parentClass1, MemberInfo_t * ___child2, MemberInfo_t * ___memberInfo3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedDictionarySetter(System.Int32,System.Collections.IDictionary,System.String)
extern "C"  void ReferenceHandlerReader_AddDelayedDictionarySetter_m2518647447 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___dict1, String_t* ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedListSetter(System.Int32,System.Collections.IList,System.Int32)
extern "C"  void ReferenceHandlerReader_AddDelayedListSetter_m2341787372 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___list1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::Set(System.Int32,System.Object)
extern "C"  void ReferenceHandlerReader_Set_m3412026950 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
