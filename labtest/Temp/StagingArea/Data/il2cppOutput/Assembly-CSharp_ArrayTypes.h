#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t2637060059;
// WaterPollution
struct WaterPollution_t2508941683;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_SceneUtils_P2637060059.h"
#include "AssemblyU2DCSharp_WaterPollution2508941683.h"

#pragma once
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_t2317074010  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DemoParticleSystem_t2637060059 * m_Items[1];

public:
	inline DemoParticleSystem_t2637060059 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DemoParticleSystem_t2637060059 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t2637060059 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// WaterPollution[]
struct WaterPollutionU5BU5D_t3041655650  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WaterPollution_t2508941683 * m_Items[1];

public:
	inline WaterPollution_t2508941683 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WaterPollution_t2508941683 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WaterPollution_t2508941683 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
