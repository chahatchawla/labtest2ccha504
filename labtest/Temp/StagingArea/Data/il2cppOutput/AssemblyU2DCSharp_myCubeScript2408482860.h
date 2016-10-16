#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// myCubeScript
struct  myCubeScript_t2408482860  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material myCubeScript::material
	Material_t3870600107 * ___material_2;
	// UnityEngine.Material myCubeScript::defaultmaterial
	Material_t3870600107 * ___defaultmaterial_3;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(myCubeScript_t2408482860, ___material_2)); }
	inline Material_t3870600107 * get_material_2() const { return ___material_2; }
	inline Material_t3870600107 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t3870600107 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_defaultmaterial_3() { return static_cast<int32_t>(offsetof(myCubeScript_t2408482860, ___defaultmaterial_3)); }
	inline Material_t3870600107 * get_defaultmaterial_3() const { return ___defaultmaterial_3; }
	inline Material_t3870600107 ** get_address_of_defaultmaterial_3() { return &___defaultmaterial_3; }
	inline void set_defaultmaterial_3(Material_t3870600107 * value)
	{
		___defaultmaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultmaterial_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
