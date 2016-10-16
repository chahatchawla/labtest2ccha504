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

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t386455501;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx386455501.h"
#include "mscorlib_System_Type2863145774.h"

// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type)
extern "C"  Il2CppObject * JsonConverter_Read_m3930981828 (JsonConverter_t3109307074 * __this, JsonReader_t386455501 * ___reader0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  Il2CppObject * JsonConverter_ReadJson_m808114718 (JsonConverter_t3109307074 * __this, Type_t * ___type0, Dictionary_2_t696267445 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
