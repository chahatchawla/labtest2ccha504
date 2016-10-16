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

// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t3095433488;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"

// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C"  bool JsonReaderSettings_get_HandleCyclicReferences_m3959955387 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C"  bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m2993889901 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern "C"  bool JsonReaderSettings_IsTypeHintName_m2115719875 (JsonReaderSettings_t3095433488 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t3109307074 * JsonReaderSettings_GetConverter_m1813240067 (JsonReaderSettings_t3095433488 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern "C"  void JsonReaderSettings__ctor_m298179387 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
