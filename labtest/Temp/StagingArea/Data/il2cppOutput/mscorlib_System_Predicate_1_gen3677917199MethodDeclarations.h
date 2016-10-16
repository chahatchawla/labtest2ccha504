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

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Predicate_1_t3677917199;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24066860316.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2431687921_gshared (Predicate_1_t3677917199 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m2431687921(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t3677917199 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2431687921_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3316316213_gshared (Predicate_1_t3677917199 * __this, KeyValuePair_2_t4066860316  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m3316316213(__this, ___obj0, method) ((  bool (*) (Predicate_1_t3677917199 *, KeyValuePair_2_t4066860316 , const MethodInfo*))Predicate_1_Invoke_m3316316213_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m461361800_gshared (Predicate_1_t3677917199 * __this, KeyValuePair_2_t4066860316  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m461361800(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t3677917199 *, KeyValuePair_2_t4066860316 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m461361800_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3991137983_gshared (Predicate_1_t3677917199 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3991137983(__this, ___result0, method) ((  bool (*) (Predicate_1_t3677917199 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3991137983_gshared)(__this, ___result0, method)
