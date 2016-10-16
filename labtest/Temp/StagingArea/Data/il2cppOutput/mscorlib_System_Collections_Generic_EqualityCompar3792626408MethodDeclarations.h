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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct DefaultComparer_t3792626408;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21049882445.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor()
extern "C"  void DefaultComparer__ctor_m768991885_gshared (DefaultComparer_t3792626408 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m768991885(__this, method) ((  void (*) (DefaultComparer_t3792626408 *, const MethodInfo*))DefaultComparer__ctor_m768991885_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m1464164806_gshared (DefaultComparer_t3792626408 * __this, KeyValuePair_2_t1049882445  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1464164806(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t3792626408 *, KeyValuePair_2_t1049882445 , const MethodInfo*))DefaultComparer_GetHashCode_m1464164806_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m1085465378_gshared (DefaultComparer_t3792626408 * __this, KeyValuePair_2_t1049882445  ___x0, KeyValuePair_2_t1049882445  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m1085465378(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t3792626408 *, KeyValuePair_2_t1049882445 , KeyValuePair_2_t1049882445 , const MethodInfo*))DefaultComparer_Equals_m1085465378_gshared)(__this, ___x0, ___y1, method)
