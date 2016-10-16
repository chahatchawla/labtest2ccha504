#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t4168079610;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>
struct Dictionary_2_t2876417285;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>
struct Dictionary_2_t2621965684;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>
struct Dictionary_2_t3012832385;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>
struct Dictionary_2_t65092855;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader
struct  ReferenceHandlerReader_t2883105060  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::mapping
	Dictionary_2_t4168079610 * ___mapping_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedSetters
	Dictionary_2_t2876417285 * ___delayedSetters_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedDictSetters
	Dictionary_2_t2621965684 * ___delayedDictSetters_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedListSetters
	Dictionary_2_t3012832385 * ___delayedListSetters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::deepDelayedSetters
	Dictionary_2_t65092855 * ___deepDelayedSetters_4;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t2883105060, ___mapping_0)); }
	inline Dictionary_2_t4168079610 * get_mapping_0() const { return ___mapping_0; }
	inline Dictionary_2_t4168079610 ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Dictionary_2_t4168079610 * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_0, value);
	}

	inline static int32_t get_offset_of_delayedSetters_1() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t2883105060, ___delayedSetters_1)); }
	inline Dictionary_2_t2876417285 * get_delayedSetters_1() const { return ___delayedSetters_1; }
	inline Dictionary_2_t2876417285 ** get_address_of_delayedSetters_1() { return &___delayedSetters_1; }
	inline void set_delayedSetters_1(Dictionary_2_t2876417285 * value)
	{
		___delayedSetters_1 = value;
		Il2CppCodeGenWriteBarrier(&___delayedSetters_1, value);
	}

	inline static int32_t get_offset_of_delayedDictSetters_2() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t2883105060, ___delayedDictSetters_2)); }
	inline Dictionary_2_t2621965684 * get_delayedDictSetters_2() const { return ___delayedDictSetters_2; }
	inline Dictionary_2_t2621965684 ** get_address_of_delayedDictSetters_2() { return &___delayedDictSetters_2; }
	inline void set_delayedDictSetters_2(Dictionary_2_t2621965684 * value)
	{
		___delayedDictSetters_2 = value;
		Il2CppCodeGenWriteBarrier(&___delayedDictSetters_2, value);
	}

	inline static int32_t get_offset_of_delayedListSetters_3() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t2883105060, ___delayedListSetters_3)); }
	inline Dictionary_2_t3012832385 * get_delayedListSetters_3() const { return ___delayedListSetters_3; }
	inline Dictionary_2_t3012832385 ** get_address_of_delayedListSetters_3() { return &___delayedListSetters_3; }
	inline void set_delayedListSetters_3(Dictionary_2_t3012832385 * value)
	{
		___delayedListSetters_3 = value;
		Il2CppCodeGenWriteBarrier(&___delayedListSetters_3, value);
	}

	inline static int32_t get_offset_of_deepDelayedSetters_4() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t2883105060, ___deepDelayedSetters_4)); }
	inline Dictionary_2_t65092855 * get_deepDelayedSetters_4() const { return ___deepDelayedSetters_4; }
	inline Dictionary_2_t65092855 ** get_address_of_deepDelayedSetters_4() { return &___deepDelayedSetters_4; }
	inline void set_deepDelayedSetters_4(Dictionary_2_t65092855 * value)
	{
		___deepDelayedSetters_4 = value;
		Il2CppCodeGenWriteBarrier(&___deepDelayedSetters_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
