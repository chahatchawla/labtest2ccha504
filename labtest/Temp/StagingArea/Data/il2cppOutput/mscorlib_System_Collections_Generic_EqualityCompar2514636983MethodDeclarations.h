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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct DefaultComparer_t2514636983;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24066860316.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor()
extern "C"  void DefaultComparer__ctor_m1587871244_gshared (DefaultComparer_t2514636983 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1587871244(__this, method) ((  void (*) (DefaultComparer_t2514636983 *, const MethodInfo*))DefaultComparer__ctor_m1587871244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m625723679_gshared (DefaultComparer_t2514636983 * __this, KeyValuePair_2_t4066860316  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m625723679(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t2514636983 *, KeyValuePair_2_t4066860316 , const MethodInfo*))DefaultComparer_GetHashCode_m625723679_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m2603192669_gshared (DefaultComparer_t2514636983 * __this, KeyValuePair_2_t4066860316  ___x0, KeyValuePair_2_t4066860316  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m2603192669(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t2514636983 *, KeyValuePair_2_t4066860316 , KeyValuePair_2_t4066860316 , const MethodInfo*))DefaultComparer_Equals_m2603192669_gshared)(__this, ___x0, ___y1, method)
