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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct Predicate_1_t660939328;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21049882445.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2435083194_gshared (Predicate_1_t660939328 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2435083194(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t660939328 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2435083194_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2744847624_gshared (Predicate_1_t660939328 * __this, KeyValuePair_2_t1049882445  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m2744847624(__this, ___obj0, method) ((  bool (*) (Predicate_1_t660939328 *, KeyValuePair_2_t1049882445 , const MethodInfo*))Predicate_1_Invoke_m2744847624_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1461499671_gshared (Predicate_1_t660939328 * __this, KeyValuePair_2_t1049882445  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1461499671(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t660939328 *, KeyValuePair_2_t1049882445 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1461499671_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m2025925580_gshared (Predicate_1_t660939328 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m2025925580(__this, ___result0, method) ((  bool (*) (Predicate_1_t660939328 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m2025925580_gshared)(__this, ___result0, method)
