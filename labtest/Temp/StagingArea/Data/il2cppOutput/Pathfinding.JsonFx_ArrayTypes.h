#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;

#include "mscorlib_System_Array1146569071.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3109307074.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2994611360.h"

#pragma once
// Pathfinding.Serialization.JsonFx.JsonConverter[]
struct JsonConverterU5BU5D_t1187504119  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t3109307074 * m_Items[1];

public:
	inline JsonConverter_t3109307074 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JsonConverter_t3109307074 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t3109307074 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter[]
struct DeepLazySetterU5BU5D_t3377894625  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DeepLazySetter_t2994611360  m_Items[1];

public:
	inline DeepLazySetter_t2994611360  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DeepLazySetter_t2994611360 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DeepLazySetter_t2994611360  value)
	{
		m_Items[index] = value;
	}
};
