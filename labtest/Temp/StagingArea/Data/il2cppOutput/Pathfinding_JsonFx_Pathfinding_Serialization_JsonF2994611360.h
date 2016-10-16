#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct  DeepLazySetter_t2994611360 
{
public:
	// System.Object Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::parentClass
	Il2CppObject * ___parentClass_0;
	// System.Reflection.MemberInfo Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::child
	MemberInfo_t * ___child_1;
	// System.Reflection.MemberInfo Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::member
	MemberInfo_t * ___member_2;

public:
	inline static int32_t get_offset_of_parentClass_0() { return static_cast<int32_t>(offsetof(DeepLazySetter_t2994611360, ___parentClass_0)); }
	inline Il2CppObject * get_parentClass_0() const { return ___parentClass_0; }
	inline Il2CppObject ** get_address_of_parentClass_0() { return &___parentClass_0; }
	inline void set_parentClass_0(Il2CppObject * value)
	{
		___parentClass_0 = value;
		Il2CppCodeGenWriteBarrier(&___parentClass_0, value);
	}

	inline static int32_t get_offset_of_child_1() { return static_cast<int32_t>(offsetof(DeepLazySetter_t2994611360, ___child_1)); }
	inline MemberInfo_t * get_child_1() const { return ___child_1; }
	inline MemberInfo_t ** get_address_of_child_1() { return &___child_1; }
	inline void set_child_1(MemberInfo_t * value)
	{
		___child_1 = value;
		Il2CppCodeGenWriteBarrier(&___child_1, value);
	}

	inline static int32_t get_offset_of_member_2() { return static_cast<int32_t>(offsetof(DeepLazySetter_t2994611360, ___member_2)); }
	inline MemberInfo_t * get_member_2() const { return ___member_2; }
	inline MemberInfo_t ** get_address_of_member_2() { return &___member_2; }
	inline void set_member_2(MemberInfo_t * value)
	{
		___member_2 = value;
		Il2CppCodeGenWriteBarrier(&___member_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct DeepLazySetter_t2994611360_marshaled_pinvoke
{
	Il2CppObject * ___parentClass_0;
	MemberInfo_t * ___child_1;
	MemberInfo_t * ___member_2;
};
// Native definition for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct DeepLazySetter_t2994611360_marshaled_com
{
	Il2CppObject * ___parentClass_0;
	MemberInfo_t * ___child_1;
	MemberInfo_t * ___member_2;
};
