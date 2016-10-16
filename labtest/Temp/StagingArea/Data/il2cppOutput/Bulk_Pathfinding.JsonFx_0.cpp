#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t386455501;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t3911578122;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct JsonNameAttribute_t1698983795;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t3095433488;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t520966972;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t1208944969;
// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_t3725515417;
// System.Exception
struct Exception_t3991598821;
// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader
struct ReferenceHandlerReader_t2883105060;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Collections.IList
struct IList_t1751339649;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t3154211006;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t626389457;
// System.Array
struct Il2CppArray;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "Pathfinding_JsonFx_U3CModuleU3E86524790.h"
#include "Pathfinding_JsonFx_U3CModuleU3E86524790MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3109307074.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3109307074MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx386455501.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx386455501MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge696267445.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Exception3991598821MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Void2863195528.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3911578122.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3911578122MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1208944969MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx617654540.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx617654540MethodDeclarations.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3154211006MethodDeclarations.h"
#include "mscorlib_System_Enum2862688501MethodDeclarations.h"
#include "mscorlib_System_ArgumentException928607144MethodDeclarations.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266.h"
#include "mscorlib_System_ArgumentException928607144.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1310195012.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1310195012MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1698983795.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1698983795MethodDeclarations.h"
#include "mscorlib_System_Attribute2523058482MethodDeclarations.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Attribute2523058482.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3095433488MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3095433488.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1244034627MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen47628255MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen2974409999MethodDeclarations.h"
#include "System_System_Collections_Generic_Stack_1_gen2799109526MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1244034627.h"
#include "System_System_Collections_Generic_Stack_1_gen47628255.h"
#include "System_System_Collections_Generic_Stack_1_gen2974409999.h"
#include "System_System_Collections_Generic_Stack_1_gen2799109526.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2515450139.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3154211006.h"
#include "mscorlib_System_Double3868226565.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge696267445MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge520966972.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2883105060MethodDeclarations.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "mscorlib_System_Char2862622538.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2883105060.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2418067997MethodDeclarations.h"
#include "mscorlib_System_Activator2714366379MethodDeclarations.h"
#include "mscorlib_System_Array1146569071MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2418067997.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21049882445.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21049882445MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder243639308MethodDeclarations.h"
#include "mscorlib_System_Globalization_NumberFormatInfo1637637232MethodDeclarations.h"
#include "mscorlib_System_Char2862622538MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_Globalization_NumberFormatInfo1637637232.h"
#include "mscorlib_System_Globalization_NumberStyles2609490573.h"
#include "mscorlib_System_Decimal1954350631MethodDeclarations.h"
#include "mscorlib_System_Double3868226565MethodDeclarations.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_Int641153838595.h"
#include "mscorlib_System_Math2862914300MethodDeclarations.h"
#include "mscorlib_System_StringComparer4230573202MethodDeclarations.h"
#include "mscorlib_System_StringComparer4230573202.h"
#include "mscorlib_System_Collections_Generic_List_1_gen182525330MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen182525330.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF1208944969.h"
#include "mscorlib_System_InvalidOperationException1589641621MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2515450139MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3725515417.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3725515417MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g4168079610MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g4168079610.h"
#include "mscorlib_System_ArgumentNullException3573189601MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2876417285MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2879154046MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3573189601.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2876417285.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2879154046.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21510968494.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21510968494MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen65092855MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen67829616MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2994611360.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen65092855.h"
#include "mscorlib_System_Collections_Generic_List_1_gen67829616.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2621965684MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2624702445MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g2621965684.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2624702445.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21256516893.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21256516893MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3012832385MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3015569146MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_g3012832385.h"
#include "mscorlib_System_Collections_Generic_List_1_gen3015569146.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21647383594.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21647383594MethodDeclarations.h"
#include "mscorlib_System_Reflection_FieldInfo3973053266MethodDeclarations.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725.h"
#include "mscorlib_System_Reflection_PropertyInfo924268725MethodDeclarations.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF2994611360MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge626389457.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge626389457MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge520966972MethodDeclarations.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2490955586MethodDeclarations.h"
#include "mscorlib_System_DateTime4283661327MethodDeclarations.h"
#include "System_System_Uri1116831938MethodDeclarations.h"
#include "mscorlib_System_Version763695022MethodDeclarations.h"
#include "System_System_ComponentModel_TypeDescriptor1537159061MethodDeclarations.h"
#include "System_System_ComponentModel_TypeConverter1753450284MethodDeclarations.h"
#include "mscorlib_System_Convert1363677321MethodDeclarations.h"
#include "System_System_ComponentModel_TypeConverter1753450284.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2490955586.h"
#include "mscorlib_System_Globalization_DateTimeStyles1282965087.h"
#include "mscorlib_System_Guid2862754429.h"
#include "mscorlib_System_Guid2862754429MethodDeclarations.h"
#include "System_System_UriKind238866934.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_TimeSpan413522987MethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618MethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodBase318515428MethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfo4136801618.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"
#include "mscorlib_System_Reflection_TargetInvocationExcepti3880899288.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type)
extern const Il2CppType* Dictionary_2_t696267445_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t696267445_il2cpp_TypeInfo_var;
extern const uint32_t JsonConverter_Read_m3930981828_MetadataUsageId;
extern "C"  Il2CppObject * JsonConverter_Read_m3930981828 (JsonConverter_t3109307074 * __this, JsonReader_t386455501 * ___reader0, Type_t * ___type1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonConverter_Read_m3930981828_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t696267445 * V_0 = NULL;
	{
		JsonReader_t386455501 * L_0 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Dictionary_2_t696267445_0_0_0_var), /*hidden argument*/NULL);
		Il2CppObject * L_2 = JsonReader_Read_m1635679698(L_0, L_1, (bool)0, (bool)1, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t696267445 *)IsInstClass(L_2, Dictionary_2_t696267445_il2cpp_TypeInfo_var));
		Dictionary_2_t696267445 * L_3 = V_0;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return NULL;
	}

IL_001d:
	{
		Type_t * L_4 = ___type1;
		Dictionary_2_t696267445 * L_5 = V_0;
		Il2CppObject * L_6 = VirtFuncInvoker2< Il2CppObject *, Type_t *, Dictionary_2_t696267445 * >::Invoke(6 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, __this, L_4, L_5);
		return L_6;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1257820472;
extern const uint32_t JsonConverter_ReadJson_m808114718_MetadataUsageId;
extern "C"  Il2CppObject * JsonConverter_ReadJson_m808114718 (JsonConverter_t3109307074 * __this, Type_t * ___type0, Dictionary_2_t696267445 * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonConverter_ReadJson_m808114718_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t3991598821 * L_0 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3870771296(L_0, _stringLiteral1257820472, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
extern "C"  void JsonDeserializationException__ctor_m1655578326 (JsonDeserializationException_t3911578122 * __this, String_t* ___message0, int32_t ___index1, const MethodInfo* method)
{
	{
		__this->set_index_12((-1));
		String_t* L_0 = ___message0;
		JsonSerializationException__ctor_m1980876064(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___index1;
		__this->set_index_12(L_1);
		return;
	}
}
// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::get_Index()
extern "C"  int32_t JsonDeserializationException_get_Index_m308316610 (JsonDeserializationException_t3911578122 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_index_12();
		return L_0;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonDeserializationException::ToString()
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral840461721;
extern Il2CppCodeGenString* _stringLiteral10;
extern const uint32_t JsonDeserializationException_ToString_m2563072588_MetadataUsageId;
extern "C"  String_t* JsonDeserializationException_ToString_m2563072588 (JsonDeserializationException_t3911578122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonDeserializationException_ToString_m2563072588_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t1108656482* L_0 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_0, _stringLiteral840461721);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral840461721);
		ObjectU5BU5D_t1108656482* L_1 = L_0;
		int32_t L_2 = JsonDeserializationException_get_Index_m308316610(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_4);
		ObjectU5BU5D_t1108656482* L_5 = L_1;
		ArrayElementTypeCheck (L_5, _stringLiteral10);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral10);
		ObjectU5BU5D_t1108656482* L_6 = L_5;
		String_t* L_7 = Exception_ToString_m1076460401(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3016520001(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsJsonIgnore(System.Object)
extern const Il2CppType* JsonIgnoreAttribute_t617654540_0_0_0_var;
extern Il2CppClass* Enum_t2862688501_il2cpp_TypeInfo_var;
extern Il2CppClass* ICustomAttributeProvider_t1425685797_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t928607144_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t JsonIgnoreAttribute_IsJsonIgnore_m3417392871_MetadataUsageId;
extern "C"  bool JsonIgnoreAttribute_IsJsonIgnore_m3417392871 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonIgnoreAttribute_IsJsonIgnore_m3417392871_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		Il2CppObject * L_1 = ___value0;
		Type_t * L_2 = Object_GetType_m2022236990(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (Il2CppObject *)NULL;
		Type_t * L_3 = V_0;
		Type_t * L_4 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = Type_get_IsEnum_m3878730619(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = V_0;
		Type_t * L_7 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Type_t * L_8 = V_0;
		Il2CppObject * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2862688501_il2cpp_TypeInfo_var);
		String_t* L_10 = Enum_GetName_m3333121265(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		FieldInfo_t * L_11 = Type_GetField_m1054209156(L_7, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_0037;
	}

IL_0030:
	{
		Il2CppObject * L_12 = ___value0;
		V_1 = ((Il2CppObject *)IsInst(L_12, ICustomAttributeProvider_t1425685797_il2cpp_TypeInfo_var));
	}

IL_0037:
	{
		Il2CppObject * L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t928607144 * L_14 = (ArgumentException_t928607144 *)il2cpp_codegen_object_new(ArgumentException_t928607144_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m571182463(L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_0040:
	{
		Il2CppObject * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(JsonIgnoreAttribute_t617654540_0_0_0_var), /*hidden argument*/NULL);
		bool L_17 = InterfaceFuncInvoker2< bool, Type_t *, bool >::Invoke(1 /* System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean) */, ICustomAttributeProvider_t1425685797_il2cpp_TypeInfo_var, L_15, L_16, (bool)1);
		return L_17;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::get_Name()
extern "C"  String_t* JsonNameAttribute_get_Name_m2559690471 (JsonNameAttribute_t1698983795 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_jsonName_0();
		return L_0;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::GetJsonName(System.Object)
extern const Il2CppType* JsonNameAttribute_t1698983795_0_0_0_var;
extern Il2CppClass* Enum_t2862688501_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* MemberInfo_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t928607144_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonNameAttribute_t1698983795_il2cpp_TypeInfo_var;
extern const uint32_t JsonNameAttribute_GetJsonName_m166270748_MetadataUsageId;
extern "C"  String_t* JsonNameAttribute_GetJsonName_m166270748 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonNameAttribute_GetJsonName_m166270748_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	MemberInfo_t * V_1 = NULL;
	JsonNameAttribute_t1698983795 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		Il2CppObject * L_1 = ___value0;
		Type_t * L_2 = Object_GetType_m2022236990(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (MemberInfo_t *)NULL;
		Type_t * L_3 = V_0;
		Type_t * L_4 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = Type_get_IsEnum_m3878730619(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_6 = V_0;
		Il2CppObject * L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2862688501_il2cpp_TypeInfo_var);
		String_t* L_8 = Enum_GetName_m3333121265(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		String_t* L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_002d:
	{
		Type_t * L_11 = V_0;
		Type_t * L_12 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		String_t* L_13 = V_3;
		FieldInfo_t * L_14 = Type_GetField_m1054209156(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0043;
	}

IL_003c:
	{
		Il2CppObject * L_15 = ___value0;
		V_1 = ((MemberInfo_t *)IsInstClass(L_15, MemberInfo_t_il2cpp_TypeInfo_var));
	}

IL_0043:
	{
		MemberInfo_t * L_16 = V_1;
		bool L_17 = Object_Equals_m3175838359(NULL /*static, unused*/, L_16, NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_t928607144 * L_18 = (ArgumentException_t928607144 *)il2cpp_codegen_object_new(ArgumentException_t928607144_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m571182463(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_0052:
	{
		MemberInfo_t * L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(JsonNameAttribute_t1698983795_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t2523058482 * L_21 = Attribute_GetCustomAttribute_m506754809(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_2 = ((JsonNameAttribute_t1698983795 *)IsInstClass(L_21, JsonNameAttribute_t1698983795_il2cpp_TypeInfo_var));
		JsonNameAttribute_t1698983795 * L_22 = V_2;
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_006d:
	{
		JsonNameAttribute_t1698983795 * L_23 = V_2;
		String_t* L_24 = JsonNameAttribute_get_Name_m2559690471(L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String)
extern Il2CppClass* JsonReaderSettings_t3095433488_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader__ctor_m1281619108_MetadataUsageId;
extern "C"  void JsonReader__ctor_m1281619108 (JsonReader_t386455501 * __this, String_t* ___input0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m1281619108_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___input0;
		JsonReaderSettings_t3095433488 * L_1 = (JsonReaderSettings_t3095433488 *)il2cpp_codegen_object_new(JsonReaderSettings_t3095433488_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_m298179387(L_1, /*hidden argument*/NULL);
		JsonReader__ctor_m1588328406(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
extern Il2CppClass* JsonReaderSettings_t3095433488_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1244034627_il2cpp_TypeInfo_var;
extern Il2CppClass* Stack_1_t47628255_il2cpp_TypeInfo_var;
extern Il2CppClass* Stack_1_t2974409999_il2cpp_TypeInfo_var;
extern Il2CppClass* Stack_1_t2799109526_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1239231859_MethodInfo_var;
extern const MethodInfo* Stack_1__ctor_m3860504067_MethodInfo_var;
extern const MethodInfo* Stack_1__ctor_m2516461763_MethodInfo_var;
extern const MethodInfo* Stack_1__ctor_m2531250257_MethodInfo_var;
extern const uint32_t JsonReader__ctor_m1588328406_MetadataUsageId;
extern "C"  void JsonReader__ctor_m1588328406 (JsonReader_t386455501 * __this, String_t* ___input0, JsonReaderSettings_t3095433488 * ___settings1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m1588328406_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		JsonReaderSettings_t3095433488 * L_0 = (JsonReaderSettings_t3095433488 *)il2cpp_codegen_object_new(JsonReaderSettings_t3095433488_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_m298179387(L_0, /*hidden argument*/NULL);
		__this->set_Settings_8(L_0);
		List_1_t1244034627 * L_1 = (List_1_t1244034627 *)il2cpp_codegen_object_new(List_1_t1244034627_il2cpp_TypeInfo_var);
		List_1__ctor_m1239231859(L_1, /*hidden argument*/List_1__ctor_m1239231859_MethodInfo_var);
		__this->set_previouslyDeserialized_13(L_1);
		Stack_1_t47628255 * L_2 = (Stack_1_t47628255 *)il2cpp_codegen_object_new(Stack_1_t47628255_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3860504067(L_2, /*hidden argument*/Stack_1__ctor_m3860504067_MethodInfo_var);
		__this->set_jsArrays_14(L_2);
		Stack_1_t2974409999 * L_3 = (Stack_1_t2974409999 *)il2cpp_codegen_object_new(Stack_1_t2974409999_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2516461763(L_3, /*hidden argument*/Stack_1__ctor_m2516461763_MethodInfo_var);
		__this->set_parentClass_16(L_3);
		Stack_1_t2799109526 * L_4 = (Stack_1_t2799109526 *)il2cpp_codegen_object_new(Stack_1_t2799109526_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2531250257(L_4, /*hidden argument*/Stack_1__ctor_m2531250257_MethodInfo_var);
		__this->set_parentMemberInfo_17(L_4);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		JsonReaderSettings_t3095433488 * L_5 = ___settings1;
		__this->set_Settings_8(L_5);
		String_t* L_6 = ___input0;
		__this->set_Source_9(L_6);
		String_t* L_7 = __this->get_Source_9();
		int32_t L_8 = String_get_Length_m2979997331(L_7, /*hidden argument*/NULL);
		__this->set_SourceLength_10(L_8);
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Int32,System.Type)
extern const MethodInfo* Stack_1_Clear_m4217562350_MethodInfo_var;
extern const MethodInfo* Stack_1_Clear_m4232350844_MethodInfo_var;
extern const uint32_t JsonReader_Deserialize_m2935589044_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_Deserialize_m2935589044 (JsonReader_t386455501 * __this, int32_t ___start0, Type_t * ___type1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Deserialize_m2935589044_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___start0;
		__this->set_index_11(L_0);
		__this->set_depth_12((-1));
		Stack_1_t2974409999 * L_1 = __this->get_parentClass_16();
		Stack_1_Clear_m4217562350(L_1, /*hidden argument*/Stack_1_Clear_m4217562350_MethodInfo_var);
		Stack_1_t2799109526 * L_2 = __this->get_parentMemberInfo_17();
		Stack_1_Clear_m4232350844(L_2, /*hidden argument*/Stack_1_Clear_m4232350844_MethodInfo_var);
		Type_t * L_3 = ___type1;
		Il2CppObject * L_4 = JsonReader_Read_m1635679698(__this, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean,System.Boolean)
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern const Il2CppType* IJsonSerializable_t572835770_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IJsonSerializable_t572835770_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* Boolean_t476798718_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t3868226565_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader_Read_m1635679698_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_Read_m1635679698 (JsonReader_t386455501 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, bool ___skipConverters2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Read_m1635679698_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	JsonConverter_t3109307074 * V_1 = NULL;
	JsonReader_t386455501 * G_B15_0 = NULL;
	JsonReader_t386455501 * G_B14_0 = NULL;
	Type_t * G_B16_0 = NULL;
	JsonReader_t386455501 * G_B16_1 = NULL;
	JsonReader_t386455501 * G_B19_0 = NULL;
	JsonReader_t386455501 * G_B18_0 = NULL;
	Type_t * G_B20_0 = NULL;
	JsonReader_t386455501 * G_B20_1 = NULL;
	JsonReader_t386455501 * G_B23_0 = NULL;
	JsonReader_t386455501 * G_B22_0 = NULL;
	Type_t * G_B24_0 = NULL;
	JsonReader_t386455501 * G_B24_1 = NULL;
	JsonReader_t386455501 * G_B27_0 = NULL;
	JsonReader_t386455501 * G_B26_0 = NULL;
	Type_t * G_B28_0 = NULL;
	JsonReader_t386455501 * G_B28_1 = NULL;
	{
		int32_t L_0 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_0+(int32_t)1)));
		Type_t * L_1 = ___expectedType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Il2CppObject_0_0_0_var), /*hidden argument*/NULL);
		bool L_3 = Object_Equals_m3175838359(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		___expectedType0 = (Type_t *)NULL;
	}

IL_0023:
	{
		int32_t L_4 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = ___expectedType0;
		bool L_6 = Object_Equals_m3175838359(NULL /*static, unused*/, L_5, NULL, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00b7;
		}
	}
	{
		Type_t * L_7 = ___expectedType0;
		bool L_8 = Type_get_IsPrimitive_m992199183(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00b7;
		}
	}
	{
		bool L_9 = ___skipConverters2;
		if (L_9)
		{
			goto IL_00b7;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_10 = __this->get_Settings_8();
		Type_t * L_11 = ___expectedType0;
		JsonConverter_t3109307074 * L_12 = VirtFuncInvoker1< JsonConverter_t3109307074 *, Type_t * >::Invoke(4 /* Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type) */, L_10, L_11);
		V_1 = L_12;
		JsonConverter_t3109307074 * L_13 = V_1;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_14 = __this->get_depth_12();
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		JsonConverter_t3109307074 * L_15 = V_1;
		bool L_16 = L_15->get_convertAtDepthZero_0();
		if (!L_16)
		{
			goto IL_0079;
		}
	}

IL_0062:
	{
		JsonConverter_t3109307074 * L_17 = V_1;
		Type_t * L_18 = ___expectedType0;
		Il2CppObject * L_19 = VirtFuncInvoker2< Il2CppObject *, JsonReader_t386455501 *, Type_t * >::Invoke(5 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Type) */, L_17, __this, L_18);
		int32_t L_20 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_20-(int32_t)1)));
		return L_19;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IJsonSerializable_t572835770_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_22 = ___expectedType0;
		bool L_23 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_22);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_24 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_25 = L_24->get_Coercion_0();
		Type_t * L_26 = ___expectedType0;
		Il2CppObject * L_27 = TypeCoercionUtility_InstantiateObject_m472923486(L_25, L_26, /*hidden argument*/NULL);
		Il2CppObject * L_28 = ((Il2CppObject *)IsInst(L_27, IJsonSerializable_t572835770_il2cpp_TypeInfo_var));
		InterfaceActionInvoker1< JsonReader_t386455501 * >::Invoke(0 /* System.Void Pathfinding.Serialization.JsonFx.IJsonSerializable::ReadJson(Pathfinding.Serialization.JsonFx.JsonReader) */, IJsonSerializable_t572835770_il2cpp_TypeInfo_var, L_28, __this);
		int32_t L_29 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_29-(int32_t)1)));
		return L_28;
	}

IL_00b7:
	{
		int32_t L_30 = V_0;
		if (L_30 == 0)
		{
			goto IL_02a8;
		}
		if (L_30 == 1)
		{
			goto IL_0281;
		}
		if (L_30 == 2)
		{
			goto IL_01be;
		}
		if (L_30 == 3)
		{
			goto IL_0166;
		}
		if (L_30 == 4)
		{
			goto IL_0192;
		}
		if (L_30 == 5)
		{
			goto IL_01e5;
		}
		if (L_30 == 6)
		{
			goto IL_0219;
		}
		if (L_30 == 7)
		{
			goto IL_024d;
		}
		if (L_30 == 8)
		{
			goto IL_014a;
		}
		if (L_30 == 9)
		{
			goto IL_012e;
		}
		if (L_30 == 10)
		{
			goto IL_0112;
		}
		if (L_30 == 11)
		{
			goto IL_02a8;
		}
		if (L_30 == 12)
		{
			goto IL_00f6;
		}
	}
	{
		goto IL_02a8;
	}

IL_00f6:
	{
		bool L_31 = ___typeIsHint1;
		G_B14_0 = __this;
		if (L_31)
		{
			G_B15_0 = __this;
			goto IL_00fd;
		}
	}
	{
		Type_t * L_32 = ___expectedType0;
		G_B16_0 = L_32;
		G_B16_1 = G_B14_0;
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B16_0 = ((Type_t *)(NULL));
		G_B16_1 = G_B15_0;
	}

IL_00fe:
	{
		Il2CppObject * L_33 = JsonReader_ReadObject_m649863795(G_B16_1, G_B16_0, /*hidden argument*/NULL);
		int32_t L_34 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_34-(int32_t)1)));
		return L_33;
	}

IL_0112:
	{
		bool L_35 = ___typeIsHint1;
		G_B18_0 = __this;
		if (L_35)
		{
			G_B19_0 = __this;
			goto IL_0119;
		}
	}
	{
		Type_t * L_36 = ___expectedType0;
		G_B20_0 = L_36;
		G_B20_1 = G_B18_0;
		goto IL_011a;
	}

IL_0119:
	{
		G_B20_0 = ((Type_t *)(NULL));
		G_B20_1 = G_B19_0;
	}

IL_011a:
	{
		Il2CppObject * L_37 = JsonReader_ReadArray_m4139571658(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		int32_t L_38 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_38-(int32_t)1)));
		return L_37;
	}

IL_012e:
	{
		bool L_39 = ___typeIsHint1;
		G_B22_0 = __this;
		if (L_39)
		{
			G_B23_0 = __this;
			goto IL_0135;
		}
	}
	{
		Type_t * L_40 = ___expectedType0;
		G_B24_0 = L_40;
		G_B24_1 = G_B22_0;
		goto IL_0136;
	}

IL_0135:
	{
		G_B24_0 = ((Type_t *)(NULL));
		G_B24_1 = G_B23_0;
	}

IL_0136:
	{
		Il2CppObject * L_41 = JsonReader_ReadString_m2674412257(G_B24_1, G_B24_0, /*hidden argument*/NULL);
		int32_t L_42 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_42-(int32_t)1)));
		return L_41;
	}

IL_014a:
	{
		bool L_43 = ___typeIsHint1;
		G_B26_0 = __this;
		if (L_43)
		{
			G_B27_0 = __this;
			goto IL_0151;
		}
	}
	{
		Type_t * L_44 = ___expectedType0;
		G_B28_0 = L_44;
		G_B28_1 = G_B26_0;
		goto IL_0152;
	}

IL_0151:
	{
		G_B28_0 = ((Type_t *)(NULL));
		G_B28_1 = G_B27_0;
	}

IL_0152:
	{
		Il2CppObject * L_45 = JsonReader_ReadNumber_m757648041(G_B28_1, G_B28_0, /*hidden argument*/NULL);
		int32_t L_46 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_46-(int32_t)1)));
		return L_45;
	}

IL_0166:
	{
		int32_t L_47 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_48 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralFalse_0();
		int32_t L_49 = String_get_Length_m2979997331(L_48, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_47+(int32_t)L_49)));
		int32_t L_50 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_50-(int32_t)1)));
		bool L_51 = ((bool)0);
		Il2CppObject * L_52 = Box(Boolean_t476798718_il2cpp_TypeInfo_var, &L_51);
		return L_52;
	}

IL_0192:
	{
		int32_t L_53 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_54 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralTrue_1();
		int32_t L_55 = String_get_Length_m2979997331(L_54, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_53+(int32_t)L_55)));
		int32_t L_56 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_56-(int32_t)1)));
		bool L_57 = ((bool)1);
		Il2CppObject * L_58 = Box(Boolean_t476798718_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}

IL_01be:
	{
		int32_t L_59 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_60 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNull_2();
		int32_t L_61 = String_get_Length_m2979997331(L_60, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_59+(int32_t)L_61)));
		int32_t L_62 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_62-(int32_t)1)));
		return NULL;
	}

IL_01e5:
	{
		int32_t L_63 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_64 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNotANumber_4();
		int32_t L_65 = String_get_Length_m2979997331(L_64, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_63+(int32_t)L_65)));
		int32_t L_66 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_66-(int32_t)1)));
		double L_67 = (std::numeric_limits<double>::quiet_NaN());
		Il2CppObject * L_68 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_67);
		return L_68;
	}

IL_0219:
	{
		int32_t L_69 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_70 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralPositiveInfinity_5();
		int32_t L_71 = String_get_Length_m2979997331(L_70, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_69+(int32_t)L_71)));
		int32_t L_72 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_72-(int32_t)1)));
		double L_73 = (std::numeric_limits<double>::infinity());
		Il2CppObject * L_74 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_73);
		return L_74;
	}

IL_024d:
	{
		int32_t L_75 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_76 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNegativeInfinity_6();
		int32_t L_77 = String_get_Length_m2979997331(L_76, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_75+(int32_t)L_77)));
		int32_t L_78 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_78-(int32_t)1)));
		double L_79 = (-std::numeric_limits<double>::infinity());
		Il2CppObject * L_80 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_79);
		return L_80;
	}

IL_0281:
	{
		int32_t L_81 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_82 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralUndefined_3();
		int32_t L_83 = String_get_Length_m2979997331(L_82, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)((int32_t)L_81+(int32_t)L_83)));
		int32_t L_84 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_84-(int32_t)1)));
		return NULL;
	}

IL_02a8:
	{
		int32_t L_85 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)((int32_t)L_85-(int32_t)1)));
		return NULL;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
extern Il2CppClass* Dictionary_2_t696267445_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_Add_m933592675_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3493384688_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3549598589_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAt_m2208877785_MethodInfo_var;
extern const uint32_t JsonReader_ReadObject_m649863795_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_ReadObject_m649863795 (JsonReader_t386455501 * __this, Type_t * ___objectType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadObject_m649863795_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	Dictionary_2_t520966972 * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	{
		V_0 = (Type_t *)NULL;
		V_1 = (Dictionary_2_t520966972 *)NULL;
		Type_t * L_0 = ___objectType0;
		bool L_1 = Object_Equals_m3175838359(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		Type_t * L_2 = ___objectType0;
		bool L_3 = Type_get_IsAbstract_m2161724892(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_2 = NULL;
		goto IL_002d;
	}

IL_0019:
	{
		JsonReaderSettings_t3095433488 * L_4 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_5 = L_4->get_Coercion_0();
		Type_t * L_6 = ___objectType0;
		Il2CppObject * L_7 = TypeCoercionUtility_InstantiateObject_m3064453651(L_5, L_6, (&V_1), /*hidden argument*/NULL);
		V_2 = L_7;
	}

IL_002d:
	{
		JsonReaderSettings_t3095433488 * L_8 = __this->get_Settings_8();
		bool L_9 = JsonReaderSettings_get_HandleCyclicReferences_m3959955387(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t1244034627 * L_10 = __this->get_previouslyDeserialized_13();
		Il2CppObject * L_11 = V_2;
		List_1_Add_m933592675(L_10, L_11, /*hidden argument*/List_1_Add_m933592675_MethodInfo_var);
	}

IL_0046:
	{
		Dictionary_2_t520966972 * L_12 = V_1;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		Type_t * L_13 = ___objectType0;
		Type_t * L_14 = JsonReader_GetGenericDictionaryType_m2489104668(__this, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0059;
	}

IL_0053:
	{
		Dictionary_2_t696267445 * L_15 = (Dictionary_2_t696267445 *)il2cpp_codegen_object_new(Dictionary_2_t696267445_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3493384688(L_15, /*hidden argument*/Dictionary_2__ctor_m3493384688_MethodInfo_var);
		V_2 = L_15;
	}

IL_0059:
	{
		Il2CppObject * L_16 = V_2;
		V_3 = L_16;
		Type_t * L_17 = ___objectType0;
		Dictionary_2_t520966972 * L_18 = V_1;
		Type_t * L_19 = V_0;
		JsonReader_PopulateObject_m1213129480(__this, (&V_2), L_17, L_18, L_19, /*hidden argument*/NULL);
		JsonReaderSettings_t3095433488 * L_20 = __this->get_Settings_8();
		bool L_21 = JsonReaderSettings_get_HandleCyclicReferences_m3959955387(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0098;
		}
	}
	{
		Il2CppObject * L_22 = V_3;
		Il2CppObject * L_23 = V_2;
		if ((((Il2CppObject*)(Il2CppObject *)L_22) == ((Il2CppObject*)(Il2CppObject *)L_23)))
		{
			goto IL_0098;
		}
	}
	{
		Type_t * L_24 = ___objectType0;
		bool L_25 = Object_Equals_m3175838359(NULL /*static, unused*/, L_24, NULL, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0098;
		}
	}
	{
		List_1_t1244034627 * L_26 = __this->get_previouslyDeserialized_13();
		List_1_t1244034627 * L_27 = __this->get_previouslyDeserialized_13();
		int32_t L_28 = List_1_get_Count_m3549598589(L_27, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		List_1_RemoveAt_m2208877785(L_26, ((int32_t)((int32_t)L_28-(int32_t)1)), /*hidden argument*/List_1_RemoveAt_m2208877785_MethodInfo_var);
	}

IL_0098:
	{
		Il2CppObject * L_29 = V_2;
		return L_29;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral622120811;
extern const uint32_t JsonReader_GetGenericDictionaryType_m2489104668_MetadataUsageId;
extern "C"  Type_t * JsonReader_GetGenericDictionaryType_m2489104668 (JsonReader_t386455501 * __this, Type_t * ___objectType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_GetGenericDictionaryType_m2489104668_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3339007067* V_1 = NULL;
	{
		Type_t * L_0 = ___objectType0;
		Type_t * L_1 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_2 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_TypeGenericIDictionary_7();
		Type_t * L_3 = Type_GetInterface_m1133348080(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		Type_t * L_5 = V_0;
		TypeU5BU5D_t3339007067* L_6 = VirtFuncInvoker0< TypeU5BU5D_t3339007067* >::Invoke(80 /* System.Type[] System.Type::GetGenericArguments() */, L_5);
		V_1 = L_6;
		TypeU5BU5D_t3339007067* L_7 = V_1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length))))) == ((uint32_t)2))))
		{
			goto IL_006d;
		}
	}
	{
		TypeU5BU5D_t3339007067* L_8 = V_1;
		int32_t L_9 = 0;
		Type_t * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_12 = Object_Equals_m3175838359(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		ObjectU5BU5D_t1108656482* L_13 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_14 = ___objectType0;
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral622120811, L_13, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_17 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0055:
	{
		TypeU5BU5D_t3339007067* L_18 = V_1;
		int32_t L_19 = 1;
		Type_t * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Il2CppObject_0_0_0_var), /*hidden argument*/NULL);
		bool L_22 = Object_Equals_m3175838359(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		TypeU5BU5D_t3339007067* L_23 = V_1;
		int32_t L_24 = 1;
		Type_t * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		return L_25;
	}

IL_006d:
	{
		return (Type_t *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
extern const Il2CppType* Int32_t1153838500_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t537317817_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppClass* StringU5BU5D_t4054002952_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_get_Item_m404118264_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m2879772140_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m3338215454_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m1051233356_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m1341552486_MethodInfo_var;
extern const MethodInfo* Stack_1_Peek_m2513964450_MethodInfo_var;
extern const MethodInfo* Stack_1_Peek_m2923922888_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral264921567;
extern Il2CppCodeGenString* _stringLiteral237437267;
extern Il2CppCodeGenString* _stringLiteral3637437851;
extern Il2CppCodeGenString* _stringLiteral1581823241;
extern Il2CppCodeGenString* _stringLiteral525226562;
extern Il2CppCodeGenString* _stringLiteral2019411;
extern Il2CppCodeGenString* _stringLiteral2021210;
extern Il2CppCodeGenString* _stringLiteral2676413099;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral4029351986;
extern Il2CppCodeGenString* _stringLiteral41;
extern Il2CppCodeGenString* _stringLiteral2126229576;
extern Il2CppCodeGenString* _stringLiteral1950474173;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral2971609187;
extern Il2CppCodeGenString* _stringLiteral1439283966;
extern Il2CppCodeGenString* _stringLiteral1822929115;
extern Il2CppCodeGenString* _stringLiteral2371747372;
extern const uint32_t JsonReader_PopulateObject_m1213129480_MetadataUsageId;
extern "C"  void JsonReader_PopulateObject_m1213129480 (JsonReader_t386455501 * __this, Il2CppObject ** ___result0, Type_t * ___objectType1, Dictionary_2_t520966972 * ___memberMap2, Type_t * ___genericDictionaryType3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_PopulateObject_m1213129480_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	MemberInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	String_t* G_B14_0 = NULL;
	String_t* G_B55_0 = NULL;
	String_t* G_B54_0 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		Il2CppChar L_2 = String_get_Chars_m3015341861(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)123))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_4 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_4, _stringLiteral264921567, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0026:
	{
		Il2CppObject ** L_5 = ___result0;
		V_0 = ((Il2CppObject *)IsInst((*((Il2CppObject **)L_5)), IDictionary_t537317817_il2cpp_TypeInfo_var));
		Il2CppObject * L_6 = V_0;
		if (L_6)
		{
			goto IL_0069;
		}
	}
	{
		Type_t * L_7 = ___objectType1;
		Type_t * L_8 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_9 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_TypeGenericIDictionary_7();
		Type_t * L_10 = Type_GetInterface_m1133348080(L_8, L_9, /*hidden argument*/NULL);
		bool L_11 = Object_Equals_m3175838359(NULL /*static, unused*/, L_10, NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0069;
		}
	}
	{
		ObjectU5BU5D_t1108656482* L_12 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_13 = ___objectType1;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral237437267, L_12, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_16 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_16, L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_0069:
	{
		int32_t L_17 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = __this->get_index_11();
		int32_t L_19 = __this->get_SourceLength_10();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_20 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_21 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_21, _stringLiteral3637437851, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21);
	}

IL_0096:
	{
		JsonReaderSettings_t3095433488 * L_22 = __this->get_Settings_8();
		bool L_23 = JsonReaderSettings_get_AllowUnquotedObjectKeys_m2993889901(L_22, /*hidden argument*/NULL);
		int32_t L_24 = JsonReader_Tokenize_m1850339476(__this, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)13))))
		{
			goto IL_049c;
		}
	}
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)9))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)16))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_28 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_29 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_29, _stringLiteral1581823241, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29);
	}

IL_00cb:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)9))))
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_31 = JsonReader_ReadUnquotedKey_m1713113799(__this, /*hidden argument*/NULL);
		G_B14_0 = L_31;
		goto IL_00e4;
	}

IL_00d8:
	{
		Il2CppObject * L_32 = JsonReader_ReadString_m2674412257(__this, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B14_0 = ((String_t*)CastclassSealed(L_32, String_t_il2cpp_TypeInfo_var));
	}

IL_00e4:
	{
		V_4 = G_B14_0;
		Type_t * L_33 = ___genericDictionaryType3;
		bool L_34 = Object_Equals_m3175838359(NULL /*static, unused*/, L_33, NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0100;
		}
	}
	{
		Dictionary_2_t520966972 * L_35 = ___memberMap2;
		if (!L_35)
		{
			goto IL_0100;
		}
	}
	{
		Dictionary_2_t520966972 * L_36 = ___memberMap2;
		String_t* L_37 = V_4;
		Type_t * L_38 = TypeCoercionUtility_GetMemberInfo_m68305156(NULL /*static, unused*/, L_36, L_37, (&V_3), /*hidden argument*/NULL);
		V_2 = L_38;
		goto IL_0105;
	}

IL_0100:
	{
		Type_t * L_39 = ___genericDictionaryType3;
		V_2 = L_39;
		V_3 = (MemberInfo_t *)NULL;
	}

IL_0105:
	{
		int32_t L_40 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_1 = L_40;
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)14))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_42 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_43 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_43, _stringLiteral525226562, L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43);
	}

IL_0122:
	{
		int32_t L_44 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_44+(int32_t)1)));
		int32_t L_45 = __this->get_index_11();
		int32_t L_46 = __this->get_SourceLength_10();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_47 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_48 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_48, _stringLiteral3637437851, L_47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48);
	}

IL_014f:
	{
		JsonReaderSettings_t3095433488 * L_49 = __this->get_Settings_8();
		bool L_50 = JsonReaderSettings_get_HandleCyclicReferences_m3959955387(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_019e;
		}
	}
	{
		String_t* L_51 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_51, _stringLiteral2019411, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_019e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_53 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Int32_t1153838500_0_0_0_var), /*hidden argument*/NULL);
		Il2CppObject * L_54 = JsonReader_Read_m1635679698(__this, L_53, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_6 = ((*(int32_t*)((int32_t*)UnBox (L_54, Int32_t1153838500_il2cpp_TypeInfo_var))));
		Il2CppObject ** L_55 = ___result0;
		List_1_t1244034627 * L_56 = __this->get_previouslyDeserialized_13();
		int32_t L_57 = V_6;
		Il2CppObject * L_58 = List_1_get_Item_m404118264(L_56, L_57, /*hidden argument*/List_1_get_Item_m404118264_MethodInfo_var);
		*((Il2CppObject **)(L_55)) = (Il2CppObject *)L_58;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_55), (Il2CppObject *)L_58);
		int32_t L_59 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_1 = L_59;
		goto IL_0494;
	}

IL_019e:
	{
		String_t* L_60 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_61 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_60, _stringLiteral2021210, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Int32_t1153838500_0_0_0_var), /*hidden argument*/NULL);
		Il2CppObject * L_63 = JsonReader_Read_m1635679698(__this, L_62, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_7 = ((*(int32_t*)((int32_t*)UnBox (L_63, Int32_t1153838500_il2cpp_TypeInfo_var))));
		ReferenceHandlerReader_t2883105060 * L_64 = __this->get_referenceHandler_15();
		if (L_64)
		{
			goto IL_01d8;
		}
	}
	{
		Exception_t3991598821 * L_65 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3870771296(L_65, _stringLiteral2676413099, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65);
	}

IL_01d8:
	{
		ReferenceHandlerReader_t2883105060 * L_66 = __this->get_referenceHandler_15();
		int32_t L_67 = V_7;
		Il2CppObject ** L_68 = ___result0;
		ReferenceHandlerReader_Set_m3412026950(L_66, L_67, (*((Il2CppObject **)L_68)), /*hidden argument*/NULL);
		int32_t L_69 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_1 = L_69;
		goto IL_0494;
	}

IL_01f3:
	{
		Type_t * L_70 = ___objectType1;
		if (!L_70)
		{
			goto IL_0219;
		}
	}
	{
		Type_t * L_71 = ___objectType1;
		bool L_72 = Type_get_IsValueType_m1914757235(L_71, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0219;
		}
	}
	{
		Stack_1_t2974409999 * L_73 = __this->get_parentClass_16();
		Il2CppObject ** L_74 = ___result0;
		Stack_1_Push_m2879772140(L_73, (*((Il2CppObject **)L_74)), /*hidden argument*/Stack_1_Push_m2879772140_MethodInfo_var);
		Stack_1_t2799109526 * L_75 = __this->get_parentMemberInfo_17();
		MemberInfo_t * L_76 = V_3;
		Stack_1_Push_m3338215454(L_75, L_76, /*hidden argument*/Stack_1_Push_m3338215454_MethodInfo_var);
		goto IL_0231;
	}

IL_0219:
	{
		Stack_1_t2974409999 * L_77 = __this->get_parentClass_16();
		Stack_1_Push_m2879772140(L_77, NULL, /*hidden argument*/Stack_1_Push_m2879772140_MethodInfo_var);
		Stack_1_t2799109526 * L_78 = __this->get_parentMemberInfo_17();
		Stack_1_Push_m3338215454(L_78, (MemberInfo_t *)NULL, /*hidden argument*/Stack_1_Push_m3338215454_MethodInfo_var);
	}

IL_0231:
	{
		Type_t * L_79 = V_2;
		Il2CppObject * L_80 = JsonReader_Read_m1635679698(__this, L_79, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_5 = L_80;
		Stack_1_t2974409999 * L_81 = __this->get_parentClass_16();
		Stack_1_Pop_m1051233356(L_81, /*hidden argument*/Stack_1_Pop_m1051233356_MethodInfo_var);
		Stack_1_t2799109526 * L_82 = __this->get_parentMemberInfo_17();
		Stack_1_Pop_m1341552486(L_82, /*hidden argument*/Stack_1_Pop_m1341552486_MethodInfo_var);
		Il2CppObject * L_83 = V_5;
		if (!L_83)
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppObject * L_84 = V_5;
		Type_t * L_85 = Object_GetType_m2022236990(L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_87 = Object_Equals_m3175838359(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_03c0;
		}
	}
	{
		Type_t * L_88 = V_2;
		bool L_89 = Object_Equals_m3175838359(NULL /*static, unused*/, L_88, NULL, /*hidden argument*/NULL);
		if (L_89)
		{
			goto IL_03c0;
		}
	}
	{
		Type_t * L_90 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_91 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_92 = Object_Equals_m3175838359(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppObject * L_93 = V_5;
		V_8 = ((String_t*)IsInstSealed(L_93, String_t_il2cpp_TypeInfo_var));
		String_t* L_94 = V_8;
		bool L_95 = String_StartsWith_m1500793453(L_94, _stringLiteral64, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_039f;
		}
	}
	{
		String_t* L_96 = V_8;
		String_t* L_97 = String_Substring_m2809233063(L_96, 1, /*hidden argument*/NULL);
		bool L_98 = Int32_TryParse_m695344220(NULL /*static, unused*/, L_97, (&V_9), /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0362;
		}
	}
	{
		ReferenceHandlerReader_t2883105060 * L_99 = __this->get_referenceHandler_15();
		int32_t L_100 = V_9;
		bool L_101 = ReferenceHandlerReader_TryGetValueFromID_m3953173997(L_99, L_100, (&V_5), /*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_03c0;
		}
	}
	{
		Il2CppObject * L_102 = V_0;
		if (!L_102)
		{
			goto IL_02ee;
		}
	}
	{
		ReferenceHandlerReader_t2883105060 * L_103 = __this->get_referenceHandler_15();
		int32_t L_104 = V_9;
		Il2CppObject * L_105 = V_0;
		String_t* L_106 = V_4;
		ReferenceHandlerReader_AddDelayedDictionarySetter_m2518647447(L_103, L_104, L_105, L_106, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_02ee:
	{
		Type_t * L_107 = ___objectType1;
		if (!L_107)
		{
			goto IL_034d;
		}
	}
	{
		Type_t * L_108 = ___objectType1;
		bool L_109 = Type_get_IsValueType_m1914757235(L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_034d;
		}
	}
	{
		Stack_1_t2974409999 * L_110 = __this->get_parentClass_16();
		Il2CppObject * L_111 = Stack_1_Peek_m2513964450(L_110, /*hidden argument*/Stack_1_Peek_m2513964450_MethodInfo_var);
		if (!L_111)
		{
			goto IL_032c;
		}
	}
	{
		ReferenceHandlerReader_t2883105060 * L_112 = __this->get_referenceHandler_15();
		int32_t L_113 = V_9;
		Stack_1_t2974409999 * L_114 = __this->get_parentClass_16();
		Il2CppObject * L_115 = Stack_1_Peek_m2513964450(L_114, /*hidden argument*/Stack_1_Peek_m2513964450_MethodInfo_var);
		Stack_1_t2799109526 * L_116 = __this->get_parentMemberInfo_17();
		MemberInfo_t * L_117 = Stack_1_Peek_m2923922888(L_116, /*hidden argument*/Stack_1_Peek_m2923922888_MethodInfo_var);
		MemberInfo_t * L_118 = V_3;
		ReferenceHandlerReader_AddDelayedSetter_m3397765756(L_112, L_113, L_115, L_117, L_118, /*hidden argument*/NULL);
		goto IL_035d;
	}

IL_032c:
	{
		Type_t * L_119 = ___objectType1;
		String_t* L_120 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_119);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral4029351986, L_120, _stringLiteral41, /*hidden argument*/NULL);
		int32_t L_122 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_123 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_123, L_121, L_122, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_123);
	}

IL_034d:
	{
		ReferenceHandlerReader_t2883105060 * L_124 = __this->get_referenceHandler_15();
		int32_t L_125 = V_9;
		MemberInfo_t * L_126 = V_3;
		Il2CppObject ** L_127 = ___result0;
		ReferenceHandlerReader_AddDelayedSetter_m2841281146(L_124, L_125, L_126, (*((Il2CppObject **)L_127)), /*hidden argument*/NULL);
	}

IL_035d:
	{
		V_5 = NULL;
		goto IL_03c0;
	}

IL_0362:
	{
		StringU5BU5D_t4054002952* L_128 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_128, _stringLiteral2126229576);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2126229576);
		StringU5BU5D_t4054002952* L_129 = L_128;
		Type_t * L_130 = V_2;
		String_t* L_131 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_130);
		ArrayElementTypeCheck (L_129, L_131);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_131);
		StringU5BU5D_t4054002952* L_132 = L_129;
		ArrayElementTypeCheck (L_132, _stringLiteral1950474173);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1950474173);
		StringU5BU5D_t4054002952* L_133 = L_132;
		String_t* L_134 = V_8;
		ArrayElementTypeCheck (L_133, L_134);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_134);
		StringU5BU5D_t4054002952* L_135 = L_133;
		ArrayElementTypeCheck (L_135, _stringLiteral39);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_136 = String_Concat_m21867311(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		int32_t L_137 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_138 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_138, L_136, L_137, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_138);
	}

IL_039f:
	{
		Type_t * L_139 = V_2;
		String_t* L_140 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_139);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_141 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral2126229576, L_140, _stringLiteral2971609187, /*hidden argument*/NULL);
		int32_t L_142 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_143 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_143, L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143);
	}

IL_03c0:
	{
		Il2CppObject ** L_144 = ___result0;
		if ((*((Il2CppObject **)L_144)))
		{
			goto IL_03fe;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_145 = __this->get_Settings_8();
		String_t* L_146 = V_4;
		bool L_147 = JsonReaderSettings_IsTypeHintName_m2115719875(L_145, L_146, /*hidden argument*/NULL);
		if (L_147)
		{
			goto IL_03fe;
		}
	}
	{
		Type_t * L_148 = ___objectType1;
		G_B54_0 = _stringLiteral1439283966;
		if (L_148)
		{
			G_B55_0 = _stringLiteral1439283966;
			goto IL_03e2;
		}
	}
	{
		G_B56_0 = _stringLiteral1822929115;
		G_B56_1 = G_B54_0;
		goto IL_03e8;
	}

IL_03e2:
	{
		Type_t * L_149 = ___objectType1;
		String_t* L_150 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_149);
		G_B56_0 = L_150;
		G_B56_1 = G_B55_0;
	}

IL_03e8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_151 = String_Concat_m1825781833(NULL /*static, unused*/, G_B56_1, G_B56_0, _stringLiteral2371747372, /*hidden argument*/NULL);
		int32_t L_152 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_153 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_153, L_151, L_152, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_153);
	}

IL_03fe:
	{
		Il2CppObject * L_154 = V_0;
		if (!L_154)
		{
			goto IL_0447;
		}
	}
	{
		Type_t * L_155 = ___objectType1;
		bool L_156 = Object_Equals_m3175838359(NULL /*static, unused*/, L_155, NULL, /*hidden argument*/NULL);
		if (!L_156)
		{
			goto IL_043b;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_157 = __this->get_Settings_8();
		String_t* L_158 = V_4;
		bool L_159 = JsonReaderSettings_IsTypeHintName_m2115719875(L_157, L_158, /*hidden argument*/NULL);
		if (!L_159)
		{
			goto IL_043b;
		}
	}
	{
		Il2CppObject ** L_160 = ___result0;
		JsonReaderSettings_t3095433488 * L_161 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_162 = L_161->get_Coercion_0();
		Il2CppObject * L_163 = V_0;
		Il2CppObject * L_164 = V_5;
		Il2CppObject * L_165 = TypeCoercionUtility_ProcessTypeHint_m421374191(L_162, L_163, ((String_t*)IsInstSealed(L_164, String_t_il2cpp_TypeInfo_var)), (&___objectType1), (&___memberMap2), /*hidden argument*/NULL);
		*((Il2CppObject **)(L_160)) = (Il2CppObject *)L_165;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_160), (Il2CppObject *)L_165);
		V_0 = (Il2CppObject *)NULL;
		goto IL_048d;
	}

IL_043b:
	{
		Il2CppObject * L_166 = V_0;
		String_t* L_167 = V_4;
		Il2CppObject * L_168 = V_5;
		InterfaceActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t537317817_il2cpp_TypeInfo_var, L_166, L_167, L_168);
		goto IL_048d;
	}

IL_0447:
	{
		JsonReaderSettings_t3095433488 * L_169 = __this->get_Settings_8();
		String_t* L_170 = V_4;
		bool L_171 = JsonReaderSettings_IsTypeHintName_m2115719875(L_169, L_170, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0477;
		}
	}
	{
		Il2CppObject ** L_172 = ___result0;
		JsonReaderSettings_t3095433488 * L_173 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_174 = L_173->get_Coercion_0();
		Il2CppObject ** L_175 = ___result0;
		Il2CppObject * L_176 = V_5;
		Il2CppObject * L_177 = TypeCoercionUtility_ProcessTypeHint_m931282438(L_174, (*((Il2CppObject **)L_175)), ((String_t*)IsInstSealed(L_176, String_t_il2cpp_TypeInfo_var)), (&___objectType1), (&___memberMap2), /*hidden argument*/NULL);
		*((Il2CppObject **)(L_172)) = (Il2CppObject *)L_177;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_172), (Il2CppObject *)L_177);
		goto IL_048d;
	}

IL_0477:
	{
		JsonReaderSettings_t3095433488 * L_178 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_179 = L_178->get_Coercion_0();
		Il2CppObject ** L_180 = ___result0;
		Type_t * L_181 = V_2;
		MemberInfo_t * L_182 = V_3;
		Il2CppObject * L_183 = V_5;
		TypeCoercionUtility_SetMemberValue_m3423425905(L_179, (*((Il2CppObject **)L_180)), L_181, L_182, L_183, /*hidden argument*/NULL);
	}

IL_048d:
	{
		int32_t L_184 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_1 = L_184;
	}

IL_0494:
	{
		int32_t L_185 = V_1;
		if ((((int32_t)L_185) == ((int32_t)((int32_t)15))))
		{
			goto IL_0069;
		}
	}

IL_049c:
	{
		int32_t L_186 = V_1;
		if ((((int32_t)L_186) == ((int32_t)((int32_t)13))))
		{
			goto IL_04b2;
		}
	}
	{
		int32_t L_187 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_188 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_188, _stringLiteral3637437851, L_187, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_188);
	}

IL_04b2:
	{
		int32_t L_189 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_189+(int32_t)1)));
		return;
	}
}
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern const Il2CppType* List_1_t951551555_0_0_0_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1244034627_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t2418067997_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_t1751339649_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1_get_Count_m2181198093_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1239231859_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m865655448_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m2940332446_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1731788566_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3549598589_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m2941713717_MethodInfo_var;
extern const MethodInfo* List_1_Add_m1426149382_MethodInfo_var;
extern const MethodInfo* List_1_Add_m933592675_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m1595410604_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m404118264_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m1449333879_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m3994153217_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1496422621_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3286924042_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3616947668_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3363527141;
extern Il2CppCodeGenString* _stringLiteral3610865321;
extern Il2CppCodeGenString* _stringLiteral64;
extern Il2CppCodeGenString* _stringLiteral2126229576;
extern Il2CppCodeGenString* _stringLiteral1950474173;
extern Il2CppCodeGenString* _stringLiteral39;
extern Il2CppCodeGenString* _stringLiteral1674496975;
extern const uint32_t JsonReader_ReadArray_m4139571658_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_ReadArray_m4139571658 (JsonReader_t386455501 * __this, Type_t * ___arrayType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadArray_m4139571658_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	List_1_t1244034627 * V_3 = NULL;
	List_1_t2418067997 * V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppObject * V_6 = NULL;
	TypeU5BU5D_t3339007067* V_7 = NULL;
	Il2CppObject * V_8 = NULL;
	int32_t V_9 = 0;
	Il2CppObject * V_10 = NULL;
	int32_t V_11 = 0;
	Il2CppArray * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	KeyValuePair_2_t1049882445  V_15;
	memset(&V_15, 0, sizeof(V_15));
	List_1_t1244034627 * G_B11_0 = NULL;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		Il2CppChar L_2 = String_get_Chars_m3015341861(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)91))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_4 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_4, _stringLiteral3363527141, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_0026:
	{
		Type_t * L_5 = ___arrayType0;
		bool L_6 = Object_Equals_m3175838359(NULL /*static, unused*/, L_5, NULL, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		V_2 = (Type_t *)NULL;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		Type_t * L_9 = ___arrayType0;
		bool L_10 = Type_get_HasElementType_m4257202252(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		Type_t * L_11 = ___arrayType0;
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_11);
		V_2 = L_12;
		goto IL_006d;
	}

IL_004c:
	{
		Type_t * L_13 = ___arrayType0;
		Type_t * L_14 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_14);
		if (!L_15)
		{
			goto IL_006d;
		}
	}
	{
		Type_t * L_16 = ___arrayType0;
		TypeU5BU5D_t3339007067* L_17 = VirtFuncInvoker0< TypeU5BU5D_t3339007067* >::Invoke(80 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		V_7 = L_17;
		TypeU5BU5D_t3339007067* L_18 = V_7;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_18)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_006d;
		}
	}
	{
		TypeU5BU5D_t3339007067* L_19 = V_7;
		int32_t L_20 = 0;
		Type_t * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
	}

IL_006d:
	{
		Stack_1_t47628255 * L_22 = __this->get_jsArrays_14();
		int32_t L_23 = Stack_1_get_Count_m2181198093(L_22, /*hidden argument*/Stack_1_get_Count_m2181198093_MethodInfo_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0082;
		}
	}
	{
		List_1_t1244034627 * L_24 = (List_1_t1244034627 *)il2cpp_codegen_object_new(List_1_t1244034627_il2cpp_TypeInfo_var);
		List_1__ctor_m1239231859(L_24, /*hidden argument*/List_1__ctor_m1239231859_MethodInfo_var);
		G_B11_0 = L_24;
		goto IL_008d;
	}

IL_0082:
	{
		Stack_1_t47628255 * L_25 = __this->get_jsArrays_14();
		List_1_t1244034627 * L_26 = Stack_1_Pop_m865655448(L_25, /*hidden argument*/Stack_1_Pop_m865655448_MethodInfo_var);
		G_B11_0 = L_26;
	}

IL_008d:
	{
		V_3 = G_B11_0;
		List_1_t1244034627 * L_27 = V_3;
		List_1_Clear_m2940332446(L_27, /*hidden argument*/List_1_Clear_m2940332446_MethodInfo_var);
		V_4 = (List_1_t2418067997 *)NULL;
	}

IL_0097:
	{
		int32_t L_28 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_28+(int32_t)1)));
		int32_t L_29 = __this->get_index_11();
		int32_t L_30 = __this->get_SourceLength_10();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_31 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_32 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_32, _stringLiteral3610865321, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32);
	}

IL_00c4:
	{
		int32_t L_33 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)11))))
		{
			goto IL_0262;
		}
	}
	{
		Type_t * L_35 = V_2;
		bool L_36 = V_1;
		Il2CppObject * L_37 = JsonReader_Read_m1635679698(__this, L_35, L_36, (bool)0, /*hidden argument*/NULL);
		V_8 = L_37;
		Il2CppObject * L_38 = V_8;
		if (!L_38)
		{
			goto IL_01d1;
		}
	}
	{
		ReferenceHandlerReader_t2883105060 * L_39 = __this->get_referenceHandler_15();
		if (!L_39)
		{
			goto IL_01d1;
		}
	}
	{
		Il2CppObject * L_40 = V_8;
		Type_t * L_41 = Object_GetType_m2022236990(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_43 = Object_Equals_m3175838359(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01d1;
		}
	}
	{
		Type_t * L_44 = V_2;
		bool L_45 = Object_Equals_m3175838359(NULL /*static, unused*/, L_44, NULL, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_01d1;
		}
	}
	{
		Type_t * L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_48 = Object_Equals_m3175838359(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01d1;
		}
	}
	{
		Il2CppObject * L_49 = V_8;
		bool L_50 = String_StartsWith_m1500793453(((String_t*)IsInstSealed(L_49, String_t_il2cpp_TypeInfo_var)), _stringLiteral64, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_01c6;
		}
	}
	{
		Il2CppObject * L_51 = V_8;
		String_t* L_52 = String_Substring_m2809233063(((String_t*)IsInstSealed(L_51, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		bool L_53 = Int32_TryParse_m695344220(NULL /*static, unused*/, L_52, (&V_9), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_018f;
		}
	}
	{
		ReferenceHandlerReader_t2883105060 * L_54 = __this->get_referenceHandler_15();
		int32_t L_55 = V_9;
		bool L_56 = ReferenceHandlerReader_TryGetValueFromID_m3953173997(L_54, L_55, (&V_8), /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_01d1;
		}
	}
	{
		List_1_t2418067997 * L_57 = V_4;
		if (L_57)
		{
			goto IL_0176;
		}
	}
	{
		List_1_t2418067997 * L_58 = (List_1_t2418067997 *)il2cpp_codegen_object_new(List_1_t2418067997_il2cpp_TypeInfo_var);
		List_1__ctor_m1731788566(L_58, /*hidden argument*/List_1__ctor_m1731788566_MethodInfo_var);
		V_4 = L_58;
	}

IL_0176:
	{
		List_1_t2418067997 * L_59 = V_4;
		List_1_t1244034627 * L_60 = V_3;
		int32_t L_61 = List_1_get_Count_m3549598589(L_60, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		int32_t L_62 = V_9;
		KeyValuePair_2_t1049882445  L_63;
		memset(&L_63, 0, sizeof(L_63));
		KeyValuePair_2__ctor_m2941713717(&L_63, L_61, L_62, /*hidden argument*/KeyValuePair_2__ctor_m2941713717_MethodInfo_var);
		List_1_Add_m1426149382(L_59, L_63, /*hidden argument*/List_1_Add_m1426149382_MethodInfo_var);
		V_8 = NULL;
		goto IL_01d1;
	}

IL_018f:
	{
		ObjectU5BU5D_t1108656482* L_64 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_64, _stringLiteral2126229576);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral2126229576);
		ObjectU5BU5D_t1108656482* L_65 = L_64;
		Type_t * L_66 = V_2;
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_66);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_67);
		ObjectU5BU5D_t1108656482* L_68 = L_65;
		ArrayElementTypeCheck (L_68, _stringLiteral1950474173);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1950474173);
		ObjectU5BU5D_t1108656482* L_69 = L_68;
		Il2CppObject * L_70 = V_8;
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_70);
		ObjectU5BU5D_t1108656482* L_71 = L_69;
		ArrayElementTypeCheck (L_71, _stringLiteral39);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m3016520001(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		Exception_t3991598821 * L_73 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3870771296(L_73, L_72, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73);
	}

IL_01c6:
	{
		Exception_t3991598821 * L_74 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3870771296(L_74, _stringLiteral1674496975, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_01d1:
	{
		List_1_t1244034627 * L_75 = V_3;
		Il2CppObject * L_76 = V_8;
		List_1_Add_m933592675(L_75, L_76, /*hidden argument*/List_1_Add_m933592675_MethodInfo_var);
		Il2CppObject * L_77 = V_8;
		if (L_77)
		{
			goto IL_01f9;
		}
	}
	{
		Type_t * L_78 = V_2;
		bool L_79 = Object_Equals_m3175838359(NULL /*static, unused*/, L_78, NULL, /*hidden argument*/NULL);
		if (L_79)
		{
			goto IL_01f5;
		}
	}
	{
		Type_t * L_80 = V_2;
		Type_t * L_81 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		bool L_82 = Type_get_IsValueType_m1914757235(L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_01f5;
		}
	}
	{
		V_2 = (Type_t *)NULL;
	}

IL_01f5:
	{
		V_0 = (bool)1;
		goto IL_0251;
	}

IL_01f9:
	{
		Type_t * L_83 = V_2;
		bool L_84 = Object_Equals_m3175838359(NULL /*static, unused*/, L_83, NULL, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0244;
		}
	}
	{
		Type_t * L_85 = V_2;
		Type_t * L_86 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		Il2CppObject * L_87 = V_8;
		Type_t * L_88 = Object_GetType_m2022236990(L_87, /*hidden argument*/NULL);
		Type_t * L_89 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		bool L_90 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_86, L_89);
		if (L_90)
		{
			goto IL_0244;
		}
	}
	{
		Il2CppObject * L_91 = V_8;
		Type_t * L_92 = Object_GetType_m2022236990(L_91, /*hidden argument*/NULL);
		Type_t * L_93 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		Type_t * L_94 = V_2;
		Type_t * L_95 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		bool L_96 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_93, L_95);
		if (!L_96)
		{
			goto IL_023e;
		}
	}
	{
		Il2CppObject * L_97 = V_8;
		Type_t * L_98 = Object_GetType_m2022236990(L_97, /*hidden argument*/NULL);
		V_2 = L_98;
		goto IL_0251;
	}

IL_023e:
	{
		V_2 = (Type_t *)NULL;
		V_0 = (bool)1;
		goto IL_0251;
	}

IL_0244:
	{
		bool L_99 = V_0;
		if (L_99)
		{
			goto IL_0251;
		}
	}
	{
		Il2CppObject * L_100 = V_8;
		Type_t * L_101 = Object_GetType_m2022236990(L_100, /*hidden argument*/NULL);
		V_2 = L_101;
		V_0 = (bool)1;
	}

IL_0251:
	{
		int32_t L_102 = JsonReader_Tokenize_m4160635357(__this, /*hidden argument*/NULL);
		V_5 = L_102;
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) == ((int32_t)((int32_t)15))))
		{
			goto IL_0097;
		}
	}

IL_0262:
	{
		int32_t L_104 = V_5;
		if ((((int32_t)L_104) == ((int32_t)((int32_t)11))))
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_105 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_106 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_106, _stringLiteral3610865321, L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106);
	}

IL_0279:
	{
		int32_t L_107 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_107+(int32_t)1)));
		Stack_1_t47628255 * L_108 = __this->get_jsArrays_14();
		List_1_t1244034627 * L_109 = V_3;
		Stack_1_Push_m1595410604(L_108, L_109, /*hidden argument*/Stack_1_Push_m1595410604_MethodInfo_var);
		Type_t * L_110 = V_2;
		bool L_111 = Object_Equals_m3175838359(NULL /*static, unused*/, L_110, NULL, /*hidden argument*/NULL);
		if (L_111)
		{
			goto IL_036e;
		}
	}
	{
		Type_t * L_112 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_113 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Il2CppObject_0_0_0_var), /*hidden argument*/NULL);
		bool L_114 = Object_Equals_m3175838359(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (L_114)
		{
			goto IL_036e;
		}
	}
	{
		Type_t * L_115 = ___arrayType0;
		if (!L_115)
		{
			goto IL_0322;
		}
	}
	{
		Type_t * L_116 = ___arrayType0;
		bool L_117 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_116);
		if (!L_117)
		{
			goto IL_0322;
		}
	}
	{
		Type_t * L_118 = ___arrayType0;
		Type_t * L_119 = VirtFuncInvoker0< Type_t * >::Invoke(83 /* System.Type System.Type::GetGenericTypeDefinition() */, L_118);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_120 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(List_1_t951551555_0_0_0_var), /*hidden argument*/NULL);
		bool L_121 = Object_Equals_m3175838359(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0322;
		}
	}
	{
		Type_t * L_122 = ___arrayType0;
		ObjectU5BU5D_t1108656482* L_123 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		List_1_t1244034627 * L_124 = V_3;
		int32_t L_125 = List_1_get_Count_m3549598589(L_124, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		int32_t L_126 = L_125;
		Il2CppObject * L_127 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_126);
		ArrayElementTypeCheck (L_123, L_127);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_127);
		Il2CppObject * L_128 = Activator_CreateInstance_m2161363287(NULL /*static, unused*/, L_122, L_123, /*hidden argument*/NULL);
		V_10 = ((Il2CppObject *)IsInst(L_128, IList_t1751339649_il2cpp_TypeInfo_var));
		V_11 = 0;
		goto IL_0312;
	}

IL_02fc:
	{
		Il2CppObject * L_129 = V_10;
		List_1_t1244034627 * L_130 = V_3;
		int32_t L_131 = V_11;
		Il2CppObject * L_132 = List_1_get_Item_m404118264(L_130, L_131, /*hidden argument*/List_1_get_Item_m404118264_MethodInfo_var);
		InterfaceFuncInvoker1< int32_t, Il2CppObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1751339649_il2cpp_TypeInfo_var, L_129, L_132);
		int32_t L_133 = V_11;
		V_11 = ((int32_t)((int32_t)L_133+(int32_t)1));
	}

IL_0312:
	{
		int32_t L_134 = V_11;
		List_1_t1244034627 * L_135 = V_3;
		int32_t L_136 = List_1_get_Count_m3549598589(L_135, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		if ((((int32_t)L_134) < ((int32_t)L_136)))
		{
			goto IL_02fc;
		}
	}
	{
		Il2CppObject * L_137 = V_10;
		V_6 = L_137;
		goto IL_0376;
	}

IL_0322:
	{
		Type_t * L_138 = V_2;
		Int32U5BU5D_t3230847821* L_139 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)1));
		List_1_t1244034627 * L_140 = V_3;
		int32_t L_141 = List_1_get_Count_m3549598589(L_140, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_141);
		Il2CppArray * L_142 = Array_CreateInstance_m1053747690(NULL /*static, unused*/, L_138, L_139, /*hidden argument*/NULL);
		V_12 = L_142;
		V_13 = 0;
		goto IL_035e;
	}

IL_033e:
	{
		Il2CppArray * L_143 = V_12;
		List_1_t1244034627 * L_144 = V_3;
		int32_t L_145 = V_13;
		Il2CppObject * L_146 = List_1_get_Item_m404118264(L_144, L_145, /*hidden argument*/List_1_get_Item_m404118264_MethodInfo_var);
		Int32U5BU5D_t3230847821* L_147 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_148 = V_13;
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_148);
		Array_SetValue_m2302374076(L_143, L_146, L_147, /*hidden argument*/NULL);
		int32_t L_149 = V_13;
		V_13 = ((int32_t)((int32_t)L_149+(int32_t)1));
	}

IL_035e:
	{
		int32_t L_150 = V_13;
		List_1_t1244034627 * L_151 = V_3;
		int32_t L_152 = List_1_get_Count_m3549598589(L_151, /*hidden argument*/List_1_get_Count_m3549598589_MethodInfo_var);
		if ((((int32_t)L_150) < ((int32_t)L_152)))
		{
			goto IL_033e;
		}
	}
	{
		Il2CppArray * L_153 = V_12;
		V_6 = L_153;
		goto IL_0376;
	}

IL_036e:
	{
		List_1_t1244034627 * L_154 = V_3;
		ObjectU5BU5D_t1108656482* L_155 = List_1_ToArray_m1449333879(L_154, /*hidden argument*/List_1_ToArray_m1449333879_MethodInfo_var);
		V_6 = (Il2CppObject *)L_155;
	}

IL_0376:
	{
		List_1_t2418067997 * L_156 = V_4;
		if (!L_156)
		{
			goto IL_03c1;
		}
	}
	{
		V_14 = 0;
		goto IL_03b6;
	}

IL_037f:
	{
		ReferenceHandlerReader_t2883105060 * L_157 = __this->get_referenceHandler_15();
		List_1_t2418067997 * L_158 = V_4;
		int32_t L_159 = V_14;
		KeyValuePair_2_t1049882445  L_160 = List_1_get_Item_m3994153217(L_158, L_159, /*hidden argument*/List_1_get_Item_m3994153217_MethodInfo_var);
		V_15 = L_160;
		int32_t L_161 = KeyValuePair_2_get_Value_m1496422621((&V_15), /*hidden argument*/KeyValuePair_2_get_Value_m1496422621_MethodInfo_var);
		Il2CppObject * L_162 = V_6;
		List_1_t2418067997 * L_163 = V_4;
		int32_t L_164 = V_14;
		KeyValuePair_2_t1049882445  L_165 = List_1_get_Item_m3994153217(L_163, L_164, /*hidden argument*/List_1_get_Item_m3994153217_MethodInfo_var);
		V_15 = L_165;
		int32_t L_166 = KeyValuePair_2_get_Key_m3286924042((&V_15), /*hidden argument*/KeyValuePair_2_get_Key_m3286924042_MethodInfo_var);
		ReferenceHandlerReader_AddDelayedListSetter_m2341787372(L_157, L_161, L_162, L_166, /*hidden argument*/NULL);
		int32_t L_167 = V_14;
		V_14 = ((int32_t)((int32_t)L_167+(int32_t)1));
	}

IL_03b6:
	{
		int32_t L_168 = V_14;
		List_1_t2418067997 * L_169 = V_4;
		int32_t L_170 = List_1_get_Count_m3616947668(L_169, /*hidden argument*/List_1_get_Count_m3616947668_MethodInfo_var);
		if ((((int32_t)L_168) < ((int32_t)L_170)))
		{
			goto IL_037f;
		}
	}

IL_03c1:
	{
		Il2CppObject * L_171 = V_6;
		return L_171;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
extern "C"  String_t* JsonReader_ReadUnquotedKey_m1713113799 (JsonReader_t386455501 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_index_11();
		V_0 = L_0;
	}

IL_0007:
	{
		int32_t L_1 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_1+(int32_t)1)));
		int32_t L_2 = JsonReader_Tokenize_m1850339476(__this, (bool)1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0007;
		}
	}
	{
		String_t* L_3 = __this->get_Source_9();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_index_11();
		int32_t L_6 = V_0;
		String_t* L_7 = String_Substring_m675079568(L_3, L_4, ((int32_t)((int32_t)L_5-(int32_t)L_6)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral42811213;
extern Il2CppCodeGenString* _stringLiteral3415327497;
extern Il2CppCodeGenString* _stringLiteral64;
extern const uint32_t JsonReader_ReadString_m2674412257_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_ReadString_m2674412257 (JsonReader_t386455501 * __this, Type_t * ___expectedType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadString_m2674412257_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		Il2CppChar L_2 = String_get_Chars_m3015341861(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_3 = __this->get_Source_9();
		int32_t L_4 = __this->get_index_11();
		Il2CppChar L_5 = String_get_Chars_m3015341861(L_3, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_7 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_7, _stringLiteral42811213, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_003b:
	{
		String_t* L_8 = __this->get_Source_9();
		int32_t L_9 = __this->get_index_11();
		Il2CppChar L_10 = String_get_Chars_m3015341861(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_11+(int32_t)1)));
		int32_t L_12 = __this->get_index_11();
		int32_t L_13 = __this->get_SourceLength_10();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_14 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_15 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_15, _stringLiteral3415327497, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_007a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_16 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_set_Length_m1952332172(L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_index_11();
		V_1 = L_17;
		goto IL_0290;
	}

IL_0091:
	{
		String_t* L_18 = __this->get_Source_9();
		int32_t L_19 = __this->get_index_11();
		Il2CppChar L_20 = String_get_Chars_m3015341861(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0263;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_21 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_index_11();
		int32_t L_25 = V_1;
		StringBuilder_Append_m2996071419(L_21, L_22, L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), /*hidden argument*/NULL);
		int32_t L_26 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_26+(int32_t)1)));
		int32_t L_27 = __this->get_index_11();
		int32_t L_28 = __this->get_SourceLength_10();
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_29 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_30 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_30, _stringLiteral3415327497, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
	}

IL_00f0:
	{
		String_t* L_31 = __this->get_Source_9();
		int32_t L_32 = __this->get_index_11();
		Il2CppChar L_33 = String_get_Chars_m3015341861(L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		Il2CppChar L_34 = V_3;
		if ((!(((uint32_t)L_34) <= ((uint32_t)((int32_t)98)))))
		{
			goto IL_0119;
		}
	}
	{
		Il2CppChar L_35 = V_3;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)48))))
		{
			goto IL_022d;
		}
	}
	{
		Il2CppChar L_36 = V_3;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)98))))
		{
			goto IL_0141;
		}
	}
	{
		goto IL_0211;
	}

IL_0119:
	{
		Il2CppChar L_37 = V_3;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)102))))
		{
			goto IL_0152;
		}
	}
	{
		Il2CppChar L_38 = V_3;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)110))))
		{
			goto IL_0164;
		}
	}
	{
		Il2CppChar L_39 = V_3;
		if (((int32_t)((int32_t)L_39-(int32_t)((int32_t)114))) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_39-(int32_t)((int32_t)114))) == 1)
		{
			goto IL_0211;
		}
		if (((int32_t)((int32_t)L_39-(int32_t)((int32_t)114))) == 2)
		{
			goto IL_0188;
		}
		if (((int32_t)((int32_t)L_39-(int32_t)((int32_t)114))) == 3)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_0211;
	}

IL_0141:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_40 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_Append_m2143093878(L_40, 8, /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_0152:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_41 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_Append_m2143093878(L_41, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_0164:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_42 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_Append_m2143093878(L_42, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_0176:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_43 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_Append_m2143093878(L_43, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_0188:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_44 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		StringBuilder_Append_m2143093878(L_44, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_019a:
	{
		int32_t L_45 = __this->get_index_11();
		int32_t L_46 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_45+(int32_t)4))) >= ((int32_t)L_46)))
		{
			goto IL_01f3;
		}
	}
	{
		String_t* L_47 = __this->get_Source_9();
		int32_t L_48 = __this->get_index_11();
		String_t* L_49 = String_Substring_m675079568(L_47, ((int32_t)((int32_t)L_48+(int32_t)1)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var);
		NumberFormatInfo_t1637637232 * L_50 = NumberFormatInfo_get_InvariantInfo_m1900501910(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_51 = Int32_TryParse_m2457543725(NULL /*static, unused*/, L_49, ((int32_t)512), L_50, (&V_4), /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_52 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		int32_t L_53 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		String_t* L_54 = Char_ConvertFromUtf32_m567781788(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		StringBuilder_Append_m3898090075(L_52, L_54, /*hidden argument*/NULL);
		int32_t L_55 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_55+(int32_t)4)));
		goto IL_022d;
	}

IL_01f3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_56 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		String_t* L_57 = __this->get_Source_9();
		int32_t L_58 = __this->get_index_11();
		Il2CppChar L_59 = String_get_Chars_m3015341861(L_57, L_58, /*hidden argument*/NULL);
		StringBuilder_Append_m2143093878(L_56, L_59, /*hidden argument*/NULL);
		goto IL_022d;
	}

IL_0211:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_60 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		String_t* L_61 = __this->get_Source_9();
		int32_t L_62 = __this->get_index_11();
		Il2CppChar L_63 = String_get_Chars_m3015341861(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_Append_m2143093878(L_60, L_63, /*hidden argument*/NULL);
	}

IL_022d:
	{
		int32_t L_64 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_64+(int32_t)1)));
		int32_t L_65 = __this->get_index_11();
		int32_t L_66 = __this->get_SourceLength_10();
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_025a;
		}
	}
	{
		int32_t L_67 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_68 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_68, _stringLiteral3415327497, L_67, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68);
	}

IL_025a:
	{
		int32_t L_69 = __this->get_index_11();
		V_1 = L_69;
		goto IL_0290;
	}

IL_0263:
	{
		int32_t L_70 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_70+(int32_t)1)));
		int32_t L_71 = __this->get_index_11();
		int32_t L_72 = __this->get_SourceLength_10();
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_73 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_74 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_74, _stringLiteral3415327497, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74);
	}

IL_0290:
	{
		String_t* L_75 = __this->get_Source_9();
		int32_t L_76 = __this->get_index_11();
		Il2CppChar L_77 = String_get_Chars_m3015341861(L_75, L_76, /*hidden argument*/NULL);
		Il2CppChar L_78 = V_0;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		StringBuilder_t243639308 * L_79 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		String_t* L_80 = __this->get_Source_9();
		int32_t L_81 = V_1;
		int32_t L_82 = __this->get_index_11();
		int32_t L_83 = V_1;
		StringBuilder_Append_m2996071419(L_79, L_80, L_81, ((int32_t)((int32_t)L_82-(int32_t)L_83)), /*hidden argument*/NULL);
		int32_t L_84 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_84+(int32_t)1)));
		StringBuilder_t243639308 * L_85 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_builder_18();
		String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_85);
		V_2 = L_86;
		Type_t * L_87 = ___expectedType0;
		bool L_88 = Object_Equals_m3175838359(NULL /*static, unused*/, L_87, NULL, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_0317;
		}
	}
	{
		Type_t * L_89 = ___expectedType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_90 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		bool L_91 = Object_Equals_m3175838359(NULL /*static, unused*/, L_89, L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_0317;
		}
	}
	{
		String_t* L_92 = V_2;
		bool L_93 = String_StartsWith_m1500793453(L_92, _stringLiteral64, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0304;
		}
	}
	{
		String_t* L_94 = V_2;
		return L_94;
	}

IL_0304:
	{
		JsonReaderSettings_t3095433488 * L_95 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_96 = L_95->get_Coercion_0();
		Type_t * L_97 = ___expectedType0;
		String_t* L_98 = V_2;
		Il2CppObject * L_99 = TypeCoercionUtility_CoerceType_m3345524962(L_96, L_97, L_98, /*hidden argument*/NULL);
		return L_99;
	}

IL_0317:
	{
		String_t* L_100 = V_2;
		return L_100;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
extern const Il2CppType* Decimal_t1954350631_0_0_0_var;
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppClass* NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t1954350631_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t1153838595_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t3868226565_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral222848855;
extern const uint32_t JsonReader_ReadNumber_m757648041_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_ReadNumber_m757648041 (JsonReader_t386455501 * __this, Type_t * ___expectedType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ReadNumber_m757648041_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	Decimal_t1954350631  V_7;
	memset(&V_7, 0, sizeof(V_7));
	double V_8 = 0.0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		int32_t L_0 = __this->get_index_11();
		V_2 = L_0;
		V_3 = 0;
		V_4 = 0;
		String_t* L_1 = __this->get_Source_9();
		int32_t L_2 = __this->get_index_11();
		Il2CppChar L_3 = String_get_Chars_m3015341861(L_1, L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_4 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = __this->get_index_11();
		int32_t L_6 = __this->get_SourceLength_10();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = __this->get_Source_9();
		int32_t L_8 = __this->get_index_11();
		Il2CppChar L_9 = String_get_Chars_m3015341861(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}

IL_0059:
	{
		int32_t L_11 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_12 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_12, _stringLiteral222848855, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_006a:
	{
		int32_t L_13 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_13+(int32_t)1)));
	}

IL_0078:
	{
		int32_t L_14 = __this->get_index_11();
		int32_t L_15 = __this->get_SourceLength_10();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_16 = __this->get_Source_9();
		int32_t L_17 = __this->get_index_11();
		Il2CppChar L_18 = String_get_Chars_m3015341861(L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_19 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}

IL_009e:
	{
		int32_t L_20 = __this->get_index_11();
		int32_t L_21 = __this->get_SourceLength_10();
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = __this->get_index_11();
		Il2CppChar L_24 = String_get_Chars_m3015341861(L_22, L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_013f;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_25 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_25+(int32_t)1)));
		int32_t L_26 = __this->get_index_11();
		int32_t L_27 = __this->get_SourceLength_10();
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_28 = __this->get_Source_9();
		int32_t L_29 = __this->get_index_11();
		Il2CppChar L_30 = String_get_Chars_m3015341861(L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_31 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0119;
		}
	}

IL_00fa:
	{
		int32_t L_32 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_33 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_33, _stringLiteral222848855, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_010b:
	{
		int32_t L_34 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_34+(int32_t)1)));
	}

IL_0119:
	{
		int32_t L_35 = __this->get_index_11();
		int32_t L_36 = __this->get_SourceLength_10();
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_37 = __this->get_Source_9();
		int32_t L_38 = __this->get_index_11();
		Il2CppChar L_39 = String_get_Chars_m3015341861(L_37, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_40 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_010b;
		}
	}

IL_013f:
	{
		int32_t L_41 = __this->get_index_11();
		int32_t L_42 = V_2;
		bool L_43 = V_0;
		G_B16_0 = ((int32_t)((int32_t)L_41-(int32_t)L_42));
		if (L_43)
		{
			G_B17_0 = ((int32_t)((int32_t)L_41-(int32_t)L_42));
			goto IL_014d;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_014e;
	}

IL_014d:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_014e:
	{
		V_3 = ((int32_t)((int32_t)G_B18_1-(int32_t)G_B18_0));
		int32_t L_44 = __this->get_index_11();
		int32_t L_45 = __this->get_SourceLength_10();
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_46 = __this->get_Source_9();
		int32_t L_47 = __this->get_index_11();
		Il2CppChar L_48 = String_get_Chars_m3015341861(L_46, L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) == ((int32_t)((int32_t)101))))
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_49 = __this->get_Source_9();
		int32_t L_50 = __this->get_index_11();
		Il2CppChar L_51 = String_get_Chars_m3015341861(L_49, L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_02b5;
		}
	}

IL_018e:
	{
		V_1 = (bool)1;
		int32_t L_52 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_52+(int32_t)1)));
		int32_t L_53 = __this->get_index_11();
		int32_t L_54 = __this->get_SourceLength_10();
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_55 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_56 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_56, _stringLiteral222848855, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56);
	}

IL_01bd:
	{
		int32_t L_57 = __this->get_index_11();
		V_6 = L_57;
		String_t* L_58 = __this->get_Source_9();
		int32_t L_59 = __this->get_index_11();
		Il2CppChar L_60 = String_get_Chars_m3015341861(L_58, L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) == ((int32_t)((int32_t)45))))
		{
			goto IL_01ef;
		}
	}
	{
		String_t* L_61 = __this->get_Source_9();
		int32_t L_62 = __this->get_index_11();
		Il2CppChar L_63 = String_get_Chars_m3015341861(L_61, L_62, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0234;
		}
	}

IL_01ef:
	{
		int32_t L_64 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_64+(int32_t)1)));
		int32_t L_65 = __this->get_index_11();
		int32_t L_66 = __this->get_SourceLength_10();
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0223;
		}
	}
	{
		String_t* L_67 = __this->get_Source_9();
		int32_t L_68 = __this->get_index_11();
		Il2CppChar L_69 = String_get_Chars_m3015341861(L_67, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_70 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_026b;
		}
	}

IL_0223:
	{
		int32_t L_71 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_72 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_72, _stringLiteral222848855, L_71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72);
	}

IL_0234:
	{
		String_t* L_73 = __this->get_Source_9();
		int32_t L_74 = __this->get_index_11();
		Il2CppChar L_75 = String_get_Chars_m3015341861(L_73, L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_76 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_77 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_78 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_78, _stringLiteral222848855, L_77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78);
	}

IL_025d:
	{
		int32_t L_79 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_79+(int32_t)1)));
	}

IL_026b:
	{
		int32_t L_80 = __this->get_index_11();
		int32_t L_81 = __this->get_SourceLength_10();
		if ((((int32_t)L_80) >= ((int32_t)L_81)))
		{
			goto IL_0291;
		}
	}
	{
		String_t* L_82 = __this->get_Source_9();
		int32_t L_83 = __this->get_index_11();
		Il2CppChar L_84 = String_get_Chars_m3015341861(L_82, L_83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_85 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_025d;
		}
	}

IL_0291:
	{
		String_t* L_86 = __this->get_Source_9();
		int32_t L_87 = V_6;
		int32_t L_88 = __this->get_index_11();
		int32_t L_89 = V_6;
		String_t* L_90 = String_Substring_m675079568(L_86, L_87, ((int32_t)((int32_t)L_88-(int32_t)L_89)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var);
		NumberFormatInfo_t1637637232 * L_91 = NumberFormatInfo_get_InvariantInfo_m1900501910(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int32_TryParse_m2457543725(NULL /*static, unused*/, L_90, 7, L_91, (&V_4), /*hidden argument*/NULL);
	}

IL_02b5:
	{
		String_t* L_92 = __this->get_Source_9();
		int32_t L_93 = V_2;
		int32_t L_94 = __this->get_index_11();
		int32_t L_95 = V_2;
		String_t* L_96 = String_Substring_m675079568(L_92, L_93, ((int32_t)((int32_t)L_94-(int32_t)L_95)), /*hidden argument*/NULL);
		V_5 = L_96;
		bool L_97 = V_0;
		if (L_97)
		{
			goto IL_0386;
		}
	}
	{
		bool L_98 = V_1;
		if (L_98)
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_99 = V_3;
		if ((((int32_t)L_99) >= ((int32_t)((int32_t)19))))
		{
			goto IL_0386;
		}
	}
	{
		String_t* L_100 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var);
		NumberFormatInfo_t1637637232 * L_101 = NumberFormatInfo_get_InvariantInfo_m1900501910(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		Decimal_t1954350631  L_102 = Decimal_Parse_m2075137301(NULL /*static, unused*/, L_100, 7, L_101, /*hidden argument*/NULL);
		V_7 = L_102;
		Type_t * L_103 = ___expectedType0;
		bool L_104 = Object_Equals_m3175838359(NULL /*static, unused*/, L_103, NULL, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_0310;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_105 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_106 = L_105->get_Coercion_0();
		Type_t * L_107 = ___expectedType0;
		Decimal_t1954350631  L_108 = V_7;
		Decimal_t1954350631  L_109 = L_108;
		Il2CppObject * L_110 = Box(Decimal_t1954350631_il2cpp_TypeInfo_var, &L_109);
		Il2CppObject * L_111 = TypeCoercionUtility_CoerceType_m3345524962(L_106, L_107, L_110, /*hidden argument*/NULL);
		return L_111;
	}

IL_0310:
	{
		Decimal_t1954350631  L_112 = V_7;
		Decimal_t1954350631  L_113;
		memset(&L_113, 0, sizeof(L_113));
		Decimal__ctor_m3224507889(&L_113, ((int32_t)-2147483648LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		bool L_114 = Decimal_op_GreaterThanOrEqual_m2249474966(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0343;
		}
	}
	{
		Decimal_t1954350631  L_115 = V_7;
		Decimal_t1954350631  L_116;
		memset(&L_116, 0, sizeof(L_116));
		Decimal__ctor_m3224507889(&L_116, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		bool L_117 = Decimal_op_LessThanOrEqual_m3623476551(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_0343;
		}
	}
	{
		Decimal_t1954350631  L_118 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		int32_t L_119 = Decimal_op_Explicit_m2040523874(NULL /*static, unused*/, L_118, /*hidden argument*/NULL);
		int32_t L_120 = L_119;
		Il2CppObject * L_121 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_120);
		return L_121;
	}

IL_0343:
	{
		Decimal_t1954350631  L_122 = V_7;
		Decimal_t1954350631  L_123;
		memset(&L_123, 0, sizeof(L_123));
		Decimal__ctor_m3224510834(&L_123, ((int64_t)std::numeric_limits<int64_t>::min()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		bool L_124 = Decimal_op_GreaterThanOrEqual_m2249474966(NULL /*static, unused*/, L_122, L_123, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_037e;
		}
	}
	{
		Decimal_t1954350631  L_125 = V_7;
		Decimal_t1954350631  L_126;
		memset(&L_126, 0, sizeof(L_126));
		Decimal__ctor_m3224510834(&L_126, ((int64_t)std::numeric_limits<int64_t>::max()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		bool L_127 = Decimal_op_LessThanOrEqual_m3623476551(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_037e;
		}
	}
	{
		Decimal_t1954350631  L_128 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		int64_t L_129 = Decimal_op_Explicit_m3678935617(NULL /*static, unused*/, L_128, /*hidden argument*/NULL);
		int64_t L_130 = L_129;
		Il2CppObject * L_131 = Box(Int64_t1153838595_il2cpp_TypeInfo_var, &L_130);
		return L_131;
	}

IL_037e:
	{
		Decimal_t1954350631  L_132 = V_7;
		Decimal_t1954350631  L_133 = L_132;
		Il2CppObject * L_134 = Box(Decimal_t1954350631_il2cpp_TypeInfo_var, &L_133);
		return L_134;
	}

IL_0386:
	{
		Type_t * L_135 = ___expectedType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_136 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Decimal_t1954350631_0_0_0_var), /*hidden argument*/NULL);
		bool L_137 = Object_Equals_m3175838359(NULL /*static, unused*/, L_135, L_136, /*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_03af;
		}
	}
	{
		String_t* L_138 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var);
		NumberFormatInfo_t1637637232 * L_139 = NumberFormatInfo_get_InvariantInfo_m1900501910(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t1954350631_il2cpp_TypeInfo_var);
		Decimal_t1954350631  L_140 = Decimal_Parse_m2075137301(NULL /*static, unused*/, L_138, ((int32_t)167), L_139, /*hidden argument*/NULL);
		Decimal_t1954350631  L_141 = L_140;
		Il2CppObject * L_142 = Box(Decimal_t1954350631_il2cpp_TypeInfo_var, &L_141);
		return L_142;
	}

IL_03af:
	{
		String_t* L_143 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t1637637232_il2cpp_TypeInfo_var);
		NumberFormatInfo_t1637637232 * L_144 = NumberFormatInfo_get_InvariantInfo_m1900501910(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_145 = Double_Parse_m3249074997(NULL /*static, unused*/, L_143, ((int32_t)167), L_144, /*hidden argument*/NULL);
		V_8 = L_145;
		Type_t * L_146 = ___expectedType0;
		bool L_147 = Object_Equals_m3175838359(NULL /*static, unused*/, L_146, NULL, /*hidden argument*/NULL);
		if (L_147)
		{
			goto IL_03e4;
		}
	}
	{
		JsonReaderSettings_t3095433488 * L_148 = __this->get_Settings_8();
		TypeCoercionUtility_t3154211006 * L_149 = L_148->get_Coercion_0();
		Type_t * L_150 = ___expectedType0;
		double L_151 = V_8;
		double L_152 = L_151;
		Il2CppObject * L_153 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_152);
		Il2CppObject * L_154 = TypeCoercionUtility_CoerceType_m3345524962(L_149, L_150, L_153, /*hidden argument*/NULL);
		return L_154;
	}

IL_03e4:
	{
		double L_155 = V_8;
		double L_156 = L_155;
		Il2CppObject * L_157 = Box(Double_t3868226565_il2cpp_TypeInfo_var, &L_156);
		return L_157;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.String,System.Int32,System.Type)
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader_Deserialize_m399247992_MetadataUsageId;
extern "C"  Il2CppObject * JsonReader_Deserialize_m399247992 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t ___start1, Type_t * ___type2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Deserialize_m399247992_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value0;
		JsonReader_t386455501 * L_1 = (JsonReader_t386455501 *)il2cpp_codegen_object_new(JsonReader_t386455501_il2cpp_TypeInfo_var);
		JsonReader__ctor_m1281619108(L_1, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___start1;
		Type_t * L_3 = ___type2;
		Il2CppObject * L_4 = JsonReader_Deserialize_m2935589044(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
extern "C"  int32_t JsonReader_Tokenize_m4160635357 (JsonReader_t386455501 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = JsonReader_Tokenize_m1850339476(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1499;
extern Il2CppCodeGenString* _stringLiteral433856599;
extern Il2CppCodeGenString* _stringLiteral1504;
extern Il2CppCodeGenString* _stringLiteral940789087;
extern Il2CppCodeGenString* _stringLiteral911885606;
extern Il2CppCodeGenString* _stringLiteral1349;
extern Il2CppCodeGenString* _stringLiteral413;
extern Il2CppCodeGenString* _stringLiteral4165272248;
extern Il2CppCodeGenString* _stringLiteral1241;
extern Il2CppCodeGenString* _stringLiteral4160127716;
extern Il2CppCodeGenString* _stringLiteral809219050;
extern Il2CppCodeGenString* _stringLiteral39;
extern const uint32_t JsonReader_Tokenize_m1850339476_MetadataUsageId;
extern "C"  int32_t JsonReader_Tokenize_m1850339476 (JsonReader_t386455501 * __this, bool ___allowUnquotedString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Tokenize_m1850339476_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		int32_t L_0 = __this->get_index_11();
		int32_t L_1 = __this->get_SourceLength_10();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0010:
	{
		int32_t L_2 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_2+(int32_t)1)));
		int32_t L_3 = __this->get_index_11();
		int32_t L_4 = __this->get_SourceLength_10();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_002e:
	{
		String_t* L_5 = __this->get_Source_9();
		int32_t L_6 = __this->get_index_11();
		Il2CppChar L_7 = String_get_Chars_m3015341861(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_8 = Char_IsWhiteSpace_m2745315955(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_9 = __this->get_Source_9();
		int32_t L_10 = __this->get_index_11();
		Il2CppChar L_11 = String_get_Chars_m3015341861(L_9, L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = String_get_Chars_m3015341861(_stringLiteral1499, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_13 = __this->get_index_11();
		int32_t L_14 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_13+(int32_t)1))) < ((int32_t)L_14)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_15 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_16 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_16, _stringLiteral433856599, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_0088:
	{
		int32_t L_17 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_17+(int32_t)1)));
		V_1 = (bool)0;
		String_t* L_18 = __this->get_Source_9();
		int32_t L_19 = __this->get_index_11();
		Il2CppChar L_20 = String_get_Chars_m3015341861(L_18, L_19, /*hidden argument*/NULL);
		Il2CppChar L_21 = String_get_Chars_m3015341861(_stringLiteral1499, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00ba;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_00e9;
	}

IL_00ba:
	{
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = __this->get_index_11();
		Il2CppChar L_24 = String_get_Chars_m3015341861(L_22, L_23, /*hidden argument*/NULL);
		Il2CppChar L_25 = String_get_Chars_m3015341861(_stringLiteral1504, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_26 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_27 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_27, _stringLiteral940789087, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27);
	}

IL_00e9:
	{
		int32_t L_28 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_28+(int32_t)1)));
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_01c6;
		}
	}
	{
		int32_t L_30 = __this->get_index_11();
		V_2 = ((int32_t)((int32_t)L_30-(int32_t)2));
		int32_t L_31 = __this->get_index_11();
		int32_t L_32 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_31+(int32_t)1))) < ((int32_t)L_32)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_33 = V_2;
		JsonDeserializationException_t3911578122 * L_34 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_34, _stringLiteral911885606, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34);
	}

IL_0122:
	{
		int32_t L_35 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = __this->get_index_11();
		int32_t L_37 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_36+(int32_t)1))) < ((int32_t)L_37)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_38 = V_2;
		JsonDeserializationException_t3911578122 * L_39 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_39, _stringLiteral911885606, L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39);
	}

IL_014c:
	{
		String_t* L_40 = __this->get_Source_9();
		int32_t L_41 = __this->get_index_11();
		Il2CppChar L_42 = String_get_Chars_m3015341861(L_40, L_41, /*hidden argument*/NULL);
		Il2CppChar L_43 = String_get_Chars_m3015341861(_stringLiteral1349, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_44 = __this->get_Source_9();
		int32_t L_45 = __this->get_index_11();
		Il2CppChar L_46 = String_get_Chars_m3015341861(L_44, ((int32_t)((int32_t)L_45+(int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_47 = String_get_Chars_m3015341861(_stringLiteral1349, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_48 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_48+(int32_t)2)));
		int32_t L_49 = __this->get_index_11();
		int32_t L_50 = __this->get_SourceLength_10();
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0204;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01a8:
	{
		int32_t L_51 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = __this->get_index_11();
		int32_t L_53 = __this->get_SourceLength_10();
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_01c6;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01c6:
	{
		String_t* L_54 = __this->get_Source_9();
		int32_t L_55 = __this->get_index_11();
		Il2CppChar L_56 = String_get_Chars_m3015341861(L_54, L_55, /*hidden argument*/NULL);
		int32_t L_57 = String_IndexOf_m2775210486(_stringLiteral413, L_56, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0204;
	}

IL_01e6:
	{
		int32_t L_58 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_58+(int32_t)1)));
		int32_t L_59 = __this->get_index_11();
		int32_t L_60 = __this->get_SourceLength_10();
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0204;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0204:
	{
		String_t* L_61 = __this->get_Source_9();
		int32_t L_62 = __this->get_index_11();
		Il2CppChar L_63 = String_get_Chars_m3015341861(L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_64 = Char_IsWhiteSpace_m2745315955(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_01e6;
		}
	}

IL_021c:
	{
		String_t* L_65 = __this->get_Source_9();
		int32_t L_66 = __this->get_index_11();
		Il2CppChar L_67 = String_get_Chars_m3015341861(L_65, L_66, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_68 = __this->get_index_11();
		__this->set_index_11(((int32_t)((int32_t)L_68+(int32_t)1)));
		int32_t L_69 = __this->get_index_11();
		int32_t L_70 = __this->get_SourceLength_10();
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_024f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_024f:
	{
		String_t* L_71 = __this->get_Source_9();
		int32_t L_72 = __this->get_index_11();
		Il2CppChar L_73 = String_get_Chars_m3015341861(L_71, L_72, /*hidden argument*/NULL);
		V_3 = L_73;
		Il2CppChar L_74 = V_3;
		if ((!(((uint32_t)L_74) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0283;
		}
	}
	{
		Il2CppChar L_75 = V_3;
		if ((!(((uint32_t)L_75) <= ((uint32_t)((int32_t)39)))))
		{
			goto IL_0277;
		}
	}
	{
		Il2CppChar L_76 = V_3;
		if ((((int32_t)L_76) == ((int32_t)((int32_t)34))))
		{
			goto IL_02ac;
		}
	}
	{
		Il2CppChar L_77 = V_3;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)39))))
		{
			goto IL_02ac;
		}
	}
	{
		goto IL_02b5;
	}

IL_0277:
	{
		Il2CppChar L_78 = V_3;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)44))))
		{
			goto IL_02af;
		}
	}
	{
		Il2CppChar L_79 = V_3;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)58))))
		{
			goto IL_02b2;
		}
	}
	{
		goto IL_02b5;
	}

IL_0283:
	{
		Il2CppChar L_80 = V_3;
		if ((!(((uint32_t)L_80) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_0294;
		}
	}
	{
		Il2CppChar L_81 = V_3;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)91))))
		{
			goto IL_02a0;
		}
	}
	{
		Il2CppChar L_82 = V_3;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)93))))
		{
			goto IL_02a3;
		}
	}
	{
		goto IL_02b5;
	}

IL_0294:
	{
		Il2CppChar L_83 = V_3;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)123))))
		{
			goto IL_02a6;
		}
	}
	{
		Il2CppChar L_84 = V_3;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)125))))
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_02b5;
	}

IL_02a0:
	{
		return (int32_t)(((int32_t)10));
	}

IL_02a3:
	{
		return (int32_t)(((int32_t)11));
	}

IL_02a6:
	{
		return (int32_t)(((int32_t)12));
	}

IL_02a9:
	{
		return (int32_t)(((int32_t)13));
	}

IL_02ac:
	{
		return (int32_t)(((int32_t)9));
	}

IL_02af:
	{
		return (int32_t)(((int32_t)15));
	}

IL_02b2:
	{
		return (int32_t)(((int32_t)14));
	}

IL_02b5:
	{
		String_t* L_85 = __this->get_Source_9();
		int32_t L_86 = __this->get_index_11();
		Il2CppChar L_87 = String_get_Chars_m3015341861(L_85, L_86, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_88 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_030c;
		}
	}
	{
		String_t* L_89 = __this->get_Source_9();
		int32_t L_90 = __this->get_index_11();
		Il2CppChar L_91 = String_get_Chars_m3015341861(L_89, L_90, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_030e;
		}
	}
	{
		int32_t L_92 = __this->get_index_11();
		int32_t L_93 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_92+(int32_t)1))) >= ((int32_t)L_93)))
		{
			goto IL_030e;
		}
	}
	{
		String_t* L_94 = __this->get_Source_9();
		int32_t L_95 = __this->get_index_11();
		Il2CppChar L_96 = String_get_Chars_m3015341861(L_94, ((int32_t)((int32_t)L_95+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t2862622538_il2cpp_TypeInfo_var);
		bool L_97 = Char_IsDigit_m1743537211(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_030e;
		}
	}

IL_030c:
	{
		return (int32_t)(8);
	}

IL_030e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_98 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralFalse_0();
		bool L_99 = JsonReader_MatchLiteral_m923120850(__this, L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_031d;
		}
	}
	{
		return (int32_t)(3);
	}

IL_031d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_100 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralTrue_1();
		bool L_101 = JsonReader_MatchLiteral_m923120850(__this, L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_032c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_032c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_102 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNull_2();
		bool L_103 = JsonReader_MatchLiteral_m923120850(__this, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_033b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_033b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_104 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNotANumber_4();
		bool L_105 = JsonReader_MatchLiteral_m923120850(__this, L_104, /*hidden argument*/NULL);
		if (!L_105)
		{
			goto IL_034a;
		}
	}
	{
		return (int32_t)(5);
	}

IL_034a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_106 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralPositiveInfinity_5();
		bool L_107 = JsonReader_MatchLiteral_m923120850(__this, L_106, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_0359;
		}
	}
	{
		return (int32_t)(6);
	}

IL_0359:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_108 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralNegativeInfinity_6();
		bool L_109 = JsonReader_MatchLiteral_m923120850(__this, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0368;
		}
	}
	{
		return (int32_t)(7);
	}

IL_0368:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t386455501_il2cpp_TypeInfo_var);
		String_t* L_110 = ((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->get_LiteralUndefined_3();
		bool L_111 = JsonReader_MatchLiteral_m923120850(__this, L_110, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0377;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0377:
	{
		bool L_112 = ___allowUnquotedString0;
		if (!L_112)
		{
			goto IL_037d;
		}
	}
	{
		return (int32_t)(((int32_t)16));
	}

IL_037d:
	{
		String_t* L_113 = __this->get_Source_9();
		int32_t L_114 = __this->get_index_11();
		int32_t L_115 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)L_114-(int32_t)5)), /*hidden argument*/NULL);
		int32_t L_116 = __this->get_SourceLength_10();
		int32_t L_117 = __this->get_index_11();
		int32_t L_118 = Math_Min_m811624909(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_116-(int32_t)L_117))-(int32_t)1)), ((int32_t)20), /*hidden argument*/NULL);
		String_t* L_119 = String_Substring_m675079568(L_113, L_115, L_118, /*hidden argument*/NULL);
		V_0 = L_119;
		ObjectU5BU5D_t1108656482* L_120 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		ArrayElementTypeCheck (L_120, _stringLiteral4165272248);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral4165272248);
		ObjectU5BU5D_t1108656482* L_121 = L_120;
		String_t* L_122 = __this->get_Source_9();
		int32_t L_123 = __this->get_index_11();
		Il2CppChar L_124 = String_get_Chars_m3015341861(L_122, L_123, /*hidden argument*/NULL);
		V_3 = L_124;
		String_t* L_125 = Char_ToString_m2089191214((&V_3), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_121, L_125);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_125);
		ObjectU5BU5D_t1108656482* L_126 = L_121;
		ArrayElementTypeCheck (L_126, _stringLiteral1241);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1241);
		ObjectU5BU5D_t1108656482* L_127 = L_126;
		String_t* L_128 = __this->get_Source_9();
		int32_t L_129 = __this->get_index_11();
		Il2CppChar L_130 = String_get_Chars_m3015341861(L_128, L_129, /*hidden argument*/NULL);
		int32_t L_131 = ((int32_t)L_130);
		Il2CppObject * L_132 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_131);
		ArrayElementTypeCheck (L_127, L_132);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_132);
		ObjectU5BU5D_t1108656482* L_133 = L_127;
		ArrayElementTypeCheck (L_133, _stringLiteral4160127716);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppObject *)_stringLiteral4160127716);
		ObjectU5BU5D_t1108656482* L_134 = L_133;
		int32_t L_135 = __this->get_index_11();
		int32_t L_136 = L_135;
		Il2CppObject * L_137 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_136);
		ArrayElementTypeCheck (L_134, L_137);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppObject *)L_137);
		ObjectU5BU5D_t1108656482* L_138 = L_134;
		ArrayElementTypeCheck (L_138, _stringLiteral809219050);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppObject *)_stringLiteral809219050);
		ObjectU5BU5D_t1108656482* L_139 = L_138;
		String_t* L_140 = V_0;
		ArrayElementTypeCheck (L_139, L_140);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(7), (Il2CppObject *)L_140);
		ObjectU5BU5D_t1108656482* L_141 = L_139;
		ArrayElementTypeCheck (L_141, _stringLiteral39);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(8), (Il2CppObject *)_stringLiteral39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_142 = String_Concat_m3016520001(NULL /*static, unused*/, L_141, /*hidden argument*/NULL);
		int32_t L_143 = __this->get_index_11();
		JsonDeserializationException_t3911578122 * L_144 = (JsonDeserializationException_t3911578122 *)il2cpp_codegen_object_new(JsonDeserializationException_t3911578122_il2cpp_TypeInfo_var);
		JsonDeserializationException__ctor_m1655578326(L_144, L_142, L_143, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144);
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
extern "C"  bool JsonReader_MatchLiteral_m923120850 (JsonReader_t386455501 * __this, String_t* ___literal0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___literal0;
		int32_t L_1 = String_get_Length_m2979997331(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_index_11();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)((int32_t)L_2+(int32_t)L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		V_1 = 0;
		goto IL_003f;
	}

IL_001d:
	{
		String_t* L_5 = ___literal0;
		int32_t L_6 = V_1;
		Il2CppChar L_7 = String_get_Chars_m3015341861(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_Source_9();
		int32_t L_9 = __this->get_index_11();
		int32_t L_10 = V_1;
		Il2CppChar L_11 = String_get_Chars_m3015341861(L_8, ((int32_t)((int32_t)L_9+(int32_t)L_10)), /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.cctor()
extern Il2CppClass* JsonReader_t386455501_il2cpp_TypeInfo_var;
extern Il2CppClass* StringBuilder_t243639308_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral97196323;
extern Il2CppCodeGenString* _stringLiteral3569038;
extern Il2CppCodeGenString* _stringLiteral3392903;
extern Il2CppCodeGenString* _stringLiteral3256836432;
extern Il2CppCodeGenString* _stringLiteral78043;
extern Il2CppCodeGenString* _stringLiteral237817416;
extern Il2CppCodeGenString* _stringLiteral506745205;
extern Il2CppCodeGenString* _stringLiteral2235684418;
extern const uint32_t JsonReader__cctor_m3807380559_MetadataUsageId;
extern "C"  void JsonReader__cctor_m3807380559 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__cctor_m3807380559_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralFalse_0(_stringLiteral97196323);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralTrue_1(_stringLiteral3569038);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralNull_2(_stringLiteral3392903);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralUndefined_3(_stringLiteral3256836432);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralNotANumber_4(_stringLiteral78043);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralPositiveInfinity_5(_stringLiteral237817416);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_LiteralNegativeInfinity_6(_stringLiteral506745205);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_TypeGenericIDictionary_7(_stringLiteral2235684418);
		StringBuilder_t243639308 * L_0 = (StringBuilder_t243639308 *)il2cpp_codegen_object_new(StringBuilder_t243639308_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		((JsonReader_t386455501_StaticFields*)JsonReader_t386455501_il2cpp_TypeInfo_var->static_fields)->set_builder_18(L_0);
		return;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
extern "C"  bool JsonReaderSettings_get_HandleCyclicReferences_m3959955387 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_U3CHandleCyclicReferencesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
extern "C"  bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m2993889901 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_allowUnquotedObjectKeys_1();
		return L_0;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* StringComparer_t4230573202_il2cpp_TypeInfo_var;
extern const uint32_t JsonReaderSettings_IsTypeHintName_m2115719875_MetadataUsageId;
extern "C"  bool JsonReaderSettings_IsTypeHintName_m2115719875 (JsonReaderSettings_t3095433488 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings_IsTypeHintName_m2115719875_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = __this->get_typeHintName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t4230573202_il2cpp_TypeInfo_var);
		StringComparer_t4230573202 * L_4 = StringComparer_get_Ordinal_m2543279027(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_typeHintName_2();
		String_t* L_6 = ___name0;
		bool L_7 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, L_4, L_5, L_6);
		return L_7;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
extern const MethodInfo* List_1_get_Item_m3135349974_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m3861194015_MethodInfo_var;
extern const uint32_t JsonReaderSettings_GetConverter_m1813240067_MetadataUsageId;
extern "C"  JsonConverter_t3109307074 * JsonReaderSettings_GetConverter_m1813240067 (JsonReaderSettings_t3095433488 * __this, Type_t * ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings_GetConverter_m1813240067_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		List_1_t182525330 * L_0 = __this->get_converters_4();
		int32_t L_1 = V_0;
		JsonConverter_t3109307074 * L_2 = List_1_get_Item_m3135349974(L_0, L_1, /*hidden argument*/List_1_get_Item_m3135349974_MethodInfo_var);
		Type_t * L_3 = ___type0;
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::CanConvert(System.Type) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		List_1_t182525330 * L_5 = __this->get_converters_4();
		int32_t L_6 = V_0;
		JsonConverter_t3109307074 * L_7 = List_1_get_Item_m3135349974(L_5, L_6, /*hidden argument*/List_1_get_Item_m3135349974_MethodInfo_var);
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		List_1_t182525330 * L_10 = __this->get_converters_4();
		int32_t L_11 = List_1_get_Count_m3861194015(L_10, /*hidden argument*/List_1_get_Count_m3861194015_MethodInfo_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return (JsonConverter_t3109307074 *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
extern Il2CppClass* TypeCoercionUtility_t3154211006_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t182525330_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1836678241_MethodInfo_var;
extern const uint32_t JsonReaderSettings__ctor_m298179387_MetadataUsageId;
extern "C"  void JsonReaderSettings__ctor_m298179387 (JsonReaderSettings_t3095433488 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JsonReaderSettings__ctor_m298179387_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeCoercionUtility_t3154211006 * L_0 = (TypeCoercionUtility_t3154211006 *)il2cpp_codegen_object_new(TypeCoercionUtility_t3154211006_il2cpp_TypeInfo_var);
		TypeCoercionUtility__ctor_m3724068137(L_0, /*hidden argument*/NULL);
		__this->set_Coercion_0(L_0);
		List_1_t182525330 * L_1 = (List_1_t182525330 *)il2cpp_codegen_object_new(List_1_t182525330_il2cpp_TypeInfo_var);
		List_1__ctor_m1836678241(L_1, /*hidden argument*/List_1__ctor_m1836678241_MethodInfo_var);
		__this->set_converters_4(L_1);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m1980876064 (JsonSerializationException_t1208944969 * __this, String_t* ___message0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_m1485483280(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
extern "C"  void JsonTypeCoercionException__ctor_m2129803924 (JsonTypeCoercionException_t3725515417 * __this, String_t* ___message0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		ArgumentException__ctor_m3544856547(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
extern "C"  void JsonTypeCoercionException__ctor_m3348333858 (JsonTypeCoercionException_t3725515417 * __this, String_t* ___message0, Exception_t3991598821 * ___innerException1, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t3991598821 * L_1 = ___innerException1;
		ArgumentException__ctor_m2711220147(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::TryGetValueFromID(System.Int32,System.Object&)
extern const MethodInfo* Dictionary_2_TryGetValue_m711240408_MethodInfo_var;
extern const uint32_t ReferenceHandlerReader_TryGetValueFromID_m3953173997_MetadataUsageId;
extern "C"  bool ReferenceHandlerReader_TryGetValueFromID_m3953173997 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject ** ___result1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_TryGetValueFromID_m3953173997_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t4168079610 * L_0 = __this->get_mapping_0();
		int32_t L_1 = ___id0;
		Il2CppObject ** L_2 = ___result1;
		bool L_3 = Dictionary_2_TryGetValue_m711240408(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_TryGetValue_m711240408_MethodInfo_var);
		return L_3;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Reflection.MemberInfo,System.Object)
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t2879154046_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2395756613_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1581076390_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m2674427911_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m3031345972_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m1580054145_MethodInfo_var;
extern const MethodInfo* List_1_Add_m1275437206_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral116513;
extern const uint32_t ReferenceHandlerReader_AddDelayedSetter_m2841281146_MetadataUsageId;
extern "C"  void ReferenceHandlerReader_AddDelayedSetter_m2841281146 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, MemberInfo_t * ___memberInfo1, Il2CppObject * ___val2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_AddDelayedSetter_m2841281146_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = ___val2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral116513, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Dictionary_2_t2876417285 * L_2 = __this->get_delayedSetters_1();
		int32_t L_3 = ___id0;
		bool L_4 = Dictionary_2_ContainsKey_m2395756613(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m2395756613_MethodInfo_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_t2876417285 * L_5 = __this->get_delayedSetters_1();
		int32_t L_6 = ___id0;
		List_1_t2879154046 * L_7 = (List_1_t2879154046 *)il2cpp_codegen_object_new(List_1_t2879154046_il2cpp_TypeInfo_var);
		List_1__ctor_m1581076390(L_7, /*hidden argument*/List_1__ctor_m1581076390_MethodInfo_var);
		Dictionary_2_set_Item_m2674427911(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m2674427911_MethodInfo_var);
	}

IL_002d:
	{
		Dictionary_2_t2876417285 * L_8 = __this->get_delayedSetters_1();
		int32_t L_9 = ___id0;
		List_1_t2879154046 * L_10 = Dictionary_2_get_Item_m3031345972(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m3031345972_MethodInfo_var);
		MemberInfo_t * L_11 = ___memberInfo1;
		Il2CppObject * L_12 = ___val2;
		KeyValuePair_2_t1510968494  L_13;
		memset(&L_13, 0, sizeof(L_13));
		KeyValuePair_2__ctor_m1580054145(&L_13, L_11, L_12, /*hidden argument*/KeyValuePair_2__ctor_m1580054145_MethodInfo_var);
		List_1_Add_m1275437206(L_10, L_13, /*hidden argument*/List_1_Add_m1275437206_MethodInfo_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Object,System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t67829616_il2cpp_TypeInfo_var;
extern Il2CppClass* DeepLazySetter_t2994611360_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m4208039118_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m872927125_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m1105847504_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m1396615737_MethodInfo_var;
extern const MethodInfo* List_1_Add_m567287941_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral116513;
extern const uint32_t ReferenceHandlerReader_AddDelayedSetter_m3397765756_MetadataUsageId;
extern "C"  void ReferenceHandlerReader_AddDelayedSetter_m3397765756 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___parentClass1, MemberInfo_t * ___child2, MemberInfo_t * ___memberInfo3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_AddDelayedSetter_m3397765756_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DeepLazySetter_t2994611360  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Il2CppObject * L_0 = ___parentClass1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral116513, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Dictionary_2_t65092855 * L_2 = __this->get_deepDelayedSetters_4();
		int32_t L_3 = ___id0;
		bool L_4 = Dictionary_2_ContainsKey_m4208039118(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4208039118_MethodInfo_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_t65092855 * L_5 = __this->get_deepDelayedSetters_4();
		int32_t L_6 = ___id0;
		List_1_t67829616 * L_7 = (List_1_t67829616 *)il2cpp_codegen_object_new(List_1_t67829616_il2cpp_TypeInfo_var);
		List_1__ctor_m872927125(L_7, /*hidden argument*/List_1__ctor_m872927125_MethodInfo_var);
		Dictionary_2_set_Item_m1105847504(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m1105847504_MethodInfo_var);
	}

IL_002d:
	{
		Dictionary_2_t65092855 * L_8 = __this->get_deepDelayedSetters_4();
		int32_t L_9 = ___id0;
		List_1_t67829616 * L_10 = Dictionary_2_get_Item_m1396615737(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m1396615737_MethodInfo_var);
		Initobj (DeepLazySetter_t2994611360_il2cpp_TypeInfo_var, (&V_0));
		Il2CppObject * L_11 = ___parentClass1;
		(&V_0)->set_parentClass_0(L_11);
		MemberInfo_t * L_12 = ___child2;
		(&V_0)->set_child_1(L_12);
		MemberInfo_t * L_13 = ___memberInfo3;
		(&V_0)->set_member_2(L_13);
		DeepLazySetter_t2994611360  L_14 = V_0;
		List_1_Add_m567287941(L_10, L_14, /*hidden argument*/List_1_Add_m567287941_MethodInfo_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedDictionarySetter(System.Int32,System.Collections.IDictionary,System.String)
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t2624702445_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m3584420810_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m2883196289_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m1639850892_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m444296079_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m3995234140_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2577557105_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral106079;
extern Il2CppCodeGenString* _stringLiteral3083190;
extern const uint32_t ReferenceHandlerReader_AddDelayedDictionarySetter_m2518647447_MetadataUsageId;
extern "C"  void ReferenceHandlerReader_AddDelayedDictionarySetter_m2518647447 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___dict1, String_t* ___key2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_AddDelayedDictionarySetter_m2518647447_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral106079, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Il2CppObject * L_2 = ___dict1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_3 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_3, _stringLiteral3083190, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001c:
	{
		Dictionary_2_t2621965684 * L_4 = __this->get_delayedDictSetters_2();
		int32_t L_5 = ___id0;
		bool L_6 = Dictionary_2_ContainsKey_m3584420810(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_m3584420810_MethodInfo_var);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		Dictionary_2_t2621965684 * L_7 = __this->get_delayedDictSetters_2();
		int32_t L_8 = ___id0;
		List_1_t2624702445 * L_9 = (List_1_t2624702445 *)il2cpp_codegen_object_new(List_1_t2624702445_il2cpp_TypeInfo_var);
		List_1__ctor_m2883196289(L_9, /*hidden argument*/List_1__ctor_m2883196289_MethodInfo_var);
		Dictionary_2_set_Item_m1639850892(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m1639850892_MethodInfo_var);
	}

IL_003b:
	{
		Dictionary_2_t2621965684 * L_10 = __this->get_delayedDictSetters_2();
		int32_t L_11 = ___id0;
		List_1_t2624702445 * L_12 = Dictionary_2_get_Item_m444296079(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m444296079_MethodInfo_var);
		String_t* L_13 = ___key2;
		Il2CppObject * L_14 = ___dict1;
		KeyValuePair_2_t1256516893  L_15;
		memset(&L_15, 0, sizeof(L_15));
		KeyValuePair_2__ctor_m3995234140(&L_15, L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_m3995234140_MethodInfo_var);
		List_1_Add_m2577557105(L_12, L_15, /*hidden argument*/List_1_Add_m2577557105_MethodInfo_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedListSetter(System.Int32,System.Collections.IList,System.Int32)
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t3015569146_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2609183053_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m32395574_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m549069135_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m1177063770_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m87141461_MethodInfo_var;
extern const MethodInfo* List_1_Add_m4021723686_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3322014;
extern const uint32_t ReferenceHandlerReader_AddDelayedListSetter_m2341787372_MetadataUsageId;
extern "C"  void ReferenceHandlerReader_AddDelayedListSetter_m2341787372 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___list1, int32_t ___index2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_AddDelayedListSetter_m2341787372_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = ___list1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3322014, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		Dictionary_2_t3012832385 * L_2 = __this->get_delayedListSetters_3();
		int32_t L_3 = ___id0;
		bool L_4 = Dictionary_2_ContainsKey_m2609183053(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m2609183053_MethodInfo_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_t3012832385 * L_5 = __this->get_delayedListSetters_3();
		int32_t L_6 = ___id0;
		List_1_t3015569146 * L_7 = (List_1_t3015569146 *)il2cpp_codegen_object_new(List_1_t3015569146_il2cpp_TypeInfo_var);
		List_1__ctor_m32395574(L_7, /*hidden argument*/List_1__ctor_m32395574_MethodInfo_var);
		Dictionary_2_set_Item_m549069135(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m549069135_MethodInfo_var);
	}

IL_002d:
	{
		Dictionary_2_t3012832385 * L_8 = __this->get_delayedListSetters_3();
		int32_t L_9 = ___id0;
		List_1_t3015569146 * L_10 = Dictionary_2_get_Item_m1177063770(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m1177063770_MethodInfo_var);
		int32_t L_11 = ___index2;
		Il2CppObject * L_12 = ___list1;
		KeyValuePair_2_t1647383594  L_13;
		memset(&L_13, 0, sizeof(L_13));
		KeyValuePair_2__ctor_m87141461(&L_13, L_11, L_12, /*hidden argument*/KeyValuePair_2__ctor_m87141461_MethodInfo_var);
		List_1_Add_m4021723686(L_10, L_13, /*hidden argument*/List_1_Add_m4021723686_MethodInfo_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::Set(System.Int32,System.Object)
extern Il2CppClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern Il2CppClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t537317817_il2cpp_TypeInfo_var;
extern Il2CppClass* IList_t1751339649_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_Add_m2037194473_MethodInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2395756613_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m3031345972_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m3338429029_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m1954173234_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m909470627_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m723799600_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m3282176977_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m3772149635_MethodInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m3584420810_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m444296079_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m2335546538_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4196241335_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4023681320_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m1617716491_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m289329580_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m3958766814_MethodInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m2609183053_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m1177063770_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m2667819489_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m1797699306_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m2736309053_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m124172532_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m1733496161_MethodInfo_var;
extern const MethodInfo* Dictionary_2_Remove_m904874363_MethodInfo_var;
extern const MethodInfo* Dictionary_2_ContainsKey_m4208039118_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Item_m1396615737_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m4028838178_MethodInfo_var;
extern const MethodInfo* List_1_get_Count_m4161089619_MethodInfo_var;
extern const MethodInfo* List_1_Clear_m2574027712_MethodInfo_var;
extern const uint32_t ReferenceHandlerReader_Set_m3412026950_MetadataUsageId;
extern "C"  void ReferenceHandlerReader_Set_m3412026950 (ReferenceHandlerReader_t2883105060 * __this, int32_t ___id0, Il2CppObject * ___val1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ReferenceHandlerReader_Set_m3412026950_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2879154046 * V_0 = NULL;
	int32_t V_1 = 0;
	MemberInfo_t * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	KeyValuePair_2_t1510968494  V_4;
	memset(&V_4, 0, sizeof(V_4));
	List_1_t2624702445 * V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	KeyValuePair_2_t1256516893  V_8;
	memset(&V_8, 0, sizeof(V_8));
	List_1_t3015569146 * V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	KeyValuePair_2_t1647383594  V_12;
	memset(&V_12, 0, sizeof(V_12));
	List_1_t67829616 * V_13 = NULL;
	int32_t V_14 = 0;
	MemberInfo_t * V_15 = NULL;
	Il2CppObject * V_16 = NULL;
	Il2CppObject * V_17 = NULL;
	MemberInfo_t * V_18 = NULL;
	{
		Dictionary_2_t4168079610 * L_0 = __this->get_mapping_0();
		int32_t L_1 = ___id0;
		Il2CppObject * L_2 = ___val1;
		Dictionary_2_Add_m2037194473(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m2037194473_MethodInfo_var);
		Dictionary_2_t2876417285 * L_3 = __this->get_delayedSetters_1();
		int32_t L_4 = ___id0;
		bool L_5 = Dictionary_2_ContainsKey_m2395756613(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_m2395756613_MethodInfo_var);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		Dictionary_2_t2876417285 * L_6 = __this->get_delayedSetters_1();
		int32_t L_7 = ___id0;
		List_1_t2879154046 * L_8 = Dictionary_2_get_Item_m3031345972(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m3031345972_MethodInfo_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0082;
	}

IL_002f:
	{
		List_1_t2879154046 * L_9 = V_0;
		int32_t L_10 = V_1;
		KeyValuePair_2_t1510968494  L_11 = List_1_get_Item_m3338429029(L_9, L_10, /*hidden argument*/List_1_get_Item_m3338429029_MethodInfo_var);
		V_4 = L_11;
		MemberInfo_t * L_12 = KeyValuePair_2_get_Key_m1954173234((&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m1954173234_MethodInfo_var);
		V_2 = L_12;
		List_1_t2879154046 * L_13 = V_0;
		int32_t L_14 = V_1;
		KeyValuePair_2_t1510968494  L_15 = List_1_get_Item_m3338429029(L_13, L_14, /*hidden argument*/List_1_get_Item_m3338429029_MethodInfo_var);
		V_4 = L_15;
		Il2CppObject * L_16 = KeyValuePair_2_get_Value_m909470627((&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m909470627_MethodInfo_var);
		V_3 = L_16;
		MemberInfo_t * L_17 = V_2;
		if (!((PropertyInfo_t *)IsInstClass(L_17, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0069;
		}
	}
	{
		MemberInfo_t * L_18 = V_2;
		Il2CppObject * L_19 = V_3;
		Il2CppObject * L_20 = ___val1;
		VirtActionInvoker3< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t1108656482* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass(L_18, PropertyInfo_t_il2cpp_TypeInfo_var)), L_19, L_20, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL);
		goto IL_007e;
	}

IL_0069:
	{
		MemberInfo_t * L_21 = V_2;
		if (!((FieldInfo_t *)IsInstClass(L_21, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		MemberInfo_t * L_22 = V_2;
		Il2CppObject * L_23 = V_3;
		Il2CppObject * L_24 = ___val1;
		FieldInfo_SetValue_m1669444927(((FieldInfo_t *)CastclassClass(L_22, FieldInfo_t_il2cpp_TypeInfo_var)), L_23, L_24, /*hidden argument*/NULL);
	}

IL_007e:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_26 = V_1;
		List_1_t2879154046 * L_27 = V_0;
		int32_t L_28 = List_1_get_Count_m723799600(L_27, /*hidden argument*/List_1_get_Count_m723799600_MethodInfo_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_002f;
		}
	}
	{
		List_1_t2879154046 * L_29 = V_0;
		List_1_Clear_m3282176977(L_29, /*hidden argument*/List_1_Clear_m3282176977_MethodInfo_var);
		Dictionary_2_t2876417285 * L_30 = __this->get_delayedSetters_1();
		int32_t L_31 = ___id0;
		Dictionary_2_Remove_m3772149635(L_30, L_31, /*hidden argument*/Dictionary_2_Remove_m3772149635_MethodInfo_var);
	}

IL_009e:
	{
		Dictionary_2_t2621965684 * L_32 = __this->get_delayedDictSetters_2();
		int32_t L_33 = ___id0;
		bool L_34 = Dictionary_2_ContainsKey_m3584420810(L_32, L_33, /*hidden argument*/Dictionary_2_ContainsKey_m3584420810_MethodInfo_var);
		if (!L_34)
		{
			goto IL_0112;
		}
	}
	{
		Dictionary_2_t2621965684 * L_35 = __this->get_delayedDictSetters_2();
		int32_t L_36 = ___id0;
		List_1_t2624702445 * L_37 = Dictionary_2_get_Item_m444296079(L_35, L_36, /*hidden argument*/Dictionary_2_get_Item_m444296079_MethodInfo_var);
		V_5 = L_37;
		V_6 = 0;
		goto IL_00f3;
	}

IL_00bf:
	{
		List_1_t2624702445 * L_38 = V_5;
		int32_t L_39 = V_6;
		KeyValuePair_2_t1256516893  L_40 = List_1_get_Item_m2335546538(L_38, L_39, /*hidden argument*/List_1_get_Item_m2335546538_MethodInfo_var);
		V_8 = L_40;
		String_t* L_41 = KeyValuePair_2_get_Key_m4196241335((&V_8), /*hidden argument*/KeyValuePair_2_get_Key_m4196241335_MethodInfo_var);
		V_7 = L_41;
		List_1_t2624702445 * L_42 = V_5;
		int32_t L_43 = V_6;
		KeyValuePair_2_t1256516893  L_44 = List_1_get_Item_m2335546538(L_42, L_43, /*hidden argument*/List_1_get_Item_m2335546538_MethodInfo_var);
		V_8 = L_44;
		Il2CppObject * L_45 = KeyValuePair_2_get_Value_m4023681320((&V_8), /*hidden argument*/KeyValuePair_2_get_Value_m4023681320_MethodInfo_var);
		String_t* L_46 = V_7;
		Il2CppObject * L_47 = ___val1;
		InterfaceActionInvoker2< Il2CppObject *, Il2CppObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t537317817_il2cpp_TypeInfo_var, L_45, L_46, L_47);
		int32_t L_48 = V_6;
		V_6 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_49 = V_6;
		List_1_t2624702445 * L_50 = V_5;
		int32_t L_51 = List_1_get_Count_m1617716491(L_50, /*hidden argument*/List_1_get_Count_m1617716491_MethodInfo_var);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_00bf;
		}
	}
	{
		List_1_t2624702445 * L_52 = V_5;
		List_1_Clear_m289329580(L_52, /*hidden argument*/List_1_Clear_m289329580_MethodInfo_var);
		Dictionary_2_t2621965684 * L_53 = __this->get_delayedDictSetters_2();
		int32_t L_54 = ___id0;
		Dictionary_2_Remove_m3958766814(L_53, L_54, /*hidden argument*/Dictionary_2_Remove_m3958766814_MethodInfo_var);
	}

IL_0112:
	{
		Dictionary_2_t3012832385 * L_55 = __this->get_delayedListSetters_3();
		int32_t L_56 = ___id0;
		bool L_57 = Dictionary_2_ContainsKey_m2609183053(L_55, L_56, /*hidden argument*/Dictionary_2_ContainsKey_m2609183053_MethodInfo_var);
		if (!L_57)
		{
			goto IL_0186;
		}
	}
	{
		Dictionary_2_t3012832385 * L_58 = __this->get_delayedListSetters_3();
		int32_t L_59 = ___id0;
		List_1_t3015569146 * L_60 = Dictionary_2_get_Item_m1177063770(L_58, L_59, /*hidden argument*/Dictionary_2_get_Item_m1177063770_MethodInfo_var);
		V_9 = L_60;
		V_10 = 0;
		goto IL_0167;
	}

IL_0133:
	{
		List_1_t3015569146 * L_61 = V_9;
		int32_t L_62 = V_10;
		KeyValuePair_2_t1647383594  L_63 = List_1_get_Item_m2667819489(L_61, L_62, /*hidden argument*/List_1_get_Item_m2667819489_MethodInfo_var);
		V_12 = L_63;
		int32_t L_64 = KeyValuePair_2_get_Key_m1797699306((&V_12), /*hidden argument*/KeyValuePair_2_get_Key_m1797699306_MethodInfo_var);
		V_11 = L_64;
		List_1_t3015569146 * L_65 = V_9;
		int32_t L_66 = V_10;
		KeyValuePair_2_t1647383594  L_67 = List_1_get_Item_m2667819489(L_65, L_66, /*hidden argument*/List_1_get_Item_m2667819489_MethodInfo_var);
		V_12 = L_67;
		Il2CppObject * L_68 = KeyValuePair_2_get_Value_m2736309053((&V_12), /*hidden argument*/KeyValuePair_2_get_Value_m2736309053_MethodInfo_var);
		int32_t L_69 = V_11;
		Il2CppObject * L_70 = ___val1;
		InterfaceActionInvoker2< int32_t, Il2CppObject * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1751339649_il2cpp_TypeInfo_var, L_68, L_69, L_70);
		int32_t L_71 = V_10;
		V_10 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_0167:
	{
		int32_t L_72 = V_10;
		List_1_t3015569146 * L_73 = V_9;
		int32_t L_74 = List_1_get_Count_m124172532(L_73, /*hidden argument*/List_1_get_Count_m124172532_MethodInfo_var);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_0133;
		}
	}
	{
		List_1_t3015569146 * L_75 = V_9;
		List_1_Clear_m1733496161(L_75, /*hidden argument*/List_1_Clear_m1733496161_MethodInfo_var);
		Dictionary_2_t3012832385 * L_76 = __this->get_delayedListSetters_3();
		int32_t L_77 = ___id0;
		Dictionary_2_Remove_m904874363(L_76, L_77, /*hidden argument*/Dictionary_2_Remove_m904874363_MethodInfo_var);
	}

IL_0186:
	{
		Dictionary_2_t65092855 * L_78 = __this->get_deepDelayedSetters_4();
		int32_t L_79 = ___id0;
		bool L_80 = Dictionary_2_ContainsKey_m4208039118(L_78, L_79, /*hidden argument*/Dictionary_2_ContainsKey_m4208039118_MethodInfo_var);
		if (!L_80)
		{
			goto IL_02b5;
		}
	}
	{
		Dictionary_2_t65092855 * L_81 = __this->get_deepDelayedSetters_4();
		int32_t L_82 = ___id0;
		List_1_t67829616 * L_83 = Dictionary_2_get_Item_m1396615737(L_81, L_82, /*hidden argument*/Dictionary_2_get_Item_m1396615737_MethodInfo_var);
		V_13 = L_83;
		V_14 = 0;
		goto IL_0293;
	}

IL_01ad:
	{
		List_1_t67829616 * L_84 = V_13;
		int32_t L_85 = V_14;
		DeepLazySetter_t2994611360  L_86 = List_1_get_Item_m4028838178(L_84, L_85, /*hidden argument*/List_1_get_Item_m4028838178_MethodInfo_var);
		MemberInfo_t * L_87 = L_86.get_child_1();
		V_15 = L_87;
		List_1_t67829616 * L_88 = V_13;
		int32_t L_89 = V_14;
		DeepLazySetter_t2994611360  L_90 = List_1_get_Item_m4028838178(L_88, L_89, /*hidden argument*/List_1_get_Item_m4028838178_MethodInfo_var);
		Il2CppObject * L_91 = L_90.get_parentClass_0();
		V_16 = L_91;
		V_17 = NULL;
		MemberInfo_t * L_92 = V_15;
		if (!((PropertyInfo_t *)IsInstClass(L_92, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_01ec;
		}
	}
	{
		MemberInfo_t * L_93 = V_15;
		Il2CppObject * L_94 = V_16;
		Il2CppObject * L_95 = VirtFuncInvoker2< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t1108656482* >::Invoke(23 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass(L_93, PropertyInfo_t_il2cpp_TypeInfo_var)), L_94, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL);
		V_17 = L_95;
		goto IL_020d;
	}

IL_01ec:
	{
		MemberInfo_t * L_96 = V_15;
		if (!((FieldInfo_t *)IsInstClass(L_96, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0207;
		}
	}
	{
		MemberInfo_t * L_97 = V_15;
		Il2CppObject * L_98 = V_16;
		Il2CppObject * L_99 = VirtFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass(L_97, FieldInfo_t_il2cpp_TypeInfo_var)), L_98);
		V_17 = L_99;
		goto IL_020d;
	}

IL_0207:
	{
		Exception_t3991598821 * L_100 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3223090658(L_100, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_100);
	}

IL_020d:
	{
		List_1_t67829616 * L_101 = V_13;
		int32_t L_102 = V_14;
		DeepLazySetter_t2994611360  L_103 = List_1_get_Item_m4028838178(L_101, L_102, /*hidden argument*/List_1_get_Item_m4028838178_MethodInfo_var);
		MemberInfo_t * L_104 = L_103.get_member_2();
		V_18 = L_104;
		MemberInfo_t * L_105 = V_18;
		if (!((PropertyInfo_t *)IsInstClass(L_105, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0238;
		}
	}
	{
		MemberInfo_t * L_106 = V_18;
		Il2CppObject * L_107 = V_17;
		Il2CppObject * L_108 = ___val1;
		VirtActionInvoker3< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t1108656482* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass(L_106, PropertyInfo_t_il2cpp_TypeInfo_var)), L_107, L_108, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL);
		goto IL_0258;
	}

IL_0238:
	{
		MemberInfo_t * L_109 = V_18;
		if (!((FieldInfo_t *)IsInstClass(L_109, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0252;
		}
	}
	{
		MemberInfo_t * L_110 = V_18;
		Il2CppObject * L_111 = V_17;
		Il2CppObject * L_112 = ___val1;
		FieldInfo_SetValue_m1669444927(((FieldInfo_t *)CastclassClass(L_110, FieldInfo_t_il2cpp_TypeInfo_var)), L_111, L_112, /*hidden argument*/NULL);
		goto IL_0258;
	}

IL_0252:
	{
		Exception_t3991598821 * L_113 = (Exception_t3991598821 *)il2cpp_codegen_object_new(Exception_t3991598821_il2cpp_TypeInfo_var);
		Exception__ctor_m3223090658(L_113, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113);
	}

IL_0258:
	{
		MemberInfo_t * L_114 = V_15;
		if (!((PropertyInfo_t *)IsInstClass(L_114, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0274;
		}
	}
	{
		MemberInfo_t * L_115 = V_15;
		Il2CppObject * L_116 = V_16;
		Il2CppObject * L_117 = V_17;
		VirtActionInvoker3< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t1108656482* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass(L_115, PropertyInfo_t_il2cpp_TypeInfo_var)), L_116, L_117, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL);
		goto IL_028d;
	}

IL_0274:
	{
		MemberInfo_t * L_118 = V_15;
		if (!((FieldInfo_t *)IsInstClass(L_118, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_028d;
		}
	}
	{
		MemberInfo_t * L_119 = V_15;
		Il2CppObject * L_120 = V_16;
		Il2CppObject * L_121 = V_17;
		FieldInfo_SetValue_m1669444927(((FieldInfo_t *)CastclassClass(L_119, FieldInfo_t_il2cpp_TypeInfo_var)), L_120, L_121, /*hidden argument*/NULL);
	}

IL_028d:
	{
		int32_t L_122 = V_14;
		V_14 = ((int32_t)((int32_t)L_122+(int32_t)1));
	}

IL_0293:
	{
		int32_t L_123 = V_14;
		List_1_t67829616 * L_124 = V_13;
		int32_t L_125 = List_1_get_Count_m4161089619(L_124, /*hidden argument*/List_1_get_Count_m4161089619_MethodInfo_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01ad;
		}
	}
	{
		List_1_t67829616 * L_126 = V_13;
		List_1_Clear_m2574027712(L_126, /*hidden argument*/List_1_Clear_m2574027712_MethodInfo_var);
		Dictionary_2_t2876417285 * L_127 = __this->get_delayedSetters_1();
		int32_t L_128 = ___id0;
		Dictionary_2_Remove_m3772149635(L_127, L_128, /*hidden argument*/Dictionary_2_Remove_m3772149635_MethodInfo_var);
	}

IL_02b5:
	{
		return;
	}
}
// Conversion methods for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
extern "C" void DeepLazySetter_t2994611360_marshal_pinvoke(const DeepLazySetter_t2994611360& unmarshaled, DeepLazySetter_t2994611360_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___parentClass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parentClass' of type 'DeepLazySetter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parentClass_0Exception);
}
extern "C" void DeepLazySetter_t2994611360_marshal_pinvoke_back(const DeepLazySetter_t2994611360_marshaled_pinvoke& marshaled, DeepLazySetter_t2994611360& unmarshaled)
{
	Il2CppCodeGenException* ___parentClass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parentClass' of type 'DeepLazySetter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parentClass_0Exception);
}
// Conversion method for clean up from marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
extern "C" void DeepLazySetter_t2994611360_marshal_pinvoke_cleanup(DeepLazySetter_t2994611360_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
extern "C" void DeepLazySetter_t2994611360_marshal_com(const DeepLazySetter_t2994611360& unmarshaled, DeepLazySetter_t2994611360_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___parentClass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parentClass' of type 'DeepLazySetter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parentClass_0Exception);
}
extern "C" void DeepLazySetter_t2994611360_marshal_com_back(const DeepLazySetter_t2994611360_marshaled_com& marshaled, DeepLazySetter_t2994611360& unmarshaled)
{
	Il2CppCodeGenException* ___parentClass_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'parentClass' of type 'DeepLazySetter'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___parentClass_0Exception);
}
// Conversion method for clean up from marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
extern "C" void DeepLazySetter_t2994611360_marshal_com_cleanup(DeepLazySetter_t2994611360_marshaled_com& marshaled)
{
}
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetTypeInfo(System.Type)
extern "C"  Type_t * TypeCoercionUtility_GetTypeInfo_m3198666030 (Il2CppObject * __this /* static, unused */, Type_t * ___tp0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___tp0;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
extern Il2CppClass* Dictionary_2_t626389457_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m726257740_MethodInfo_var;
extern const uint32_t TypeCoercionUtility_get_MemberMapCache_m994727592_MetadataUsageId;
extern "C"  Dictionary_2_t626389457 * TypeCoercionUtility_get_MemberMapCache_m994727592 (TypeCoercionUtility_t3154211006 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_get_MemberMapCache_m994727592_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t626389457 * L_0 = __this->get_memberMapCache_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t626389457 * L_1 = (Dictionary_2_t626389457 *)il2cpp_codegen_object_new(Dictionary_2_t626389457_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m726257740(L_1, /*hidden argument*/Dictionary_2__ctor_m726257740_MethodInfo_var);
		__this->set_memberMapCache_0(L_1);
	}

IL_0013:
	{
		Dictionary_2_t626389457 * L_2 = __this->get_memberMapCache_0();
		return L_2;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_ProcessTypeHint_m421374191_MetadataUsageId;
extern "C"  Il2CppObject * TypeCoercionUtility_ProcessTypeHint_m421374191 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t520966972 ** ___memberMap3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_ProcessTypeHint_m421374191_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	{
		String_t* L_0 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t ** L_2 = ___objectType2;
		*((Il2CppObject **)(L_2)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_2), (Il2CppObject *)NULL);
		Dictionary_2_t520966972 ** L_3 = ___memberMap3;
		*((Il2CppObject **)(L_3)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_3), (Il2CppObject *)NULL);
		Il2CppObject * L_4 = ___result0;
		return L_4;
	}

IL_0011:
	{
		String_t* L_5 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3430407454, L_5, (bool)0, "Pathfinding.JsonFx, Version=1.4.1003.3008, Culture=neutral, PublicKeyToken=null");
		V_0 = L_6;
		Type_t * L_7 = V_0;
		bool L_8 = Object_Equals_m3175838359(NULL /*static, unused*/, L_7, NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Type_t ** L_9 = ___objectType2;
		*((Il2CppObject **)(L_9)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_9), (Il2CppObject *)NULL);
		Dictionary_2_t520966972 ** L_10 = ___memberMap3;
		*((Il2CppObject **)(L_10)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_10), (Il2CppObject *)NULL);
		Il2CppObject * L_11 = ___result0;
		return L_11;
	}

IL_002b:
	{
		Type_t ** L_12 = ___objectType2;
		Type_t * L_13 = V_0;
		*((Il2CppObject **)(L_12)) = (Il2CppObject *)L_13;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_12), (Il2CppObject *)L_13);
		Type_t ** L_14 = ___objectType2;
		Dictionary_2_t520966972 ** L_15 = ___memberMap3;
		Il2CppObject * L_16 = TypeCoercionUtility_InstantiateObject_m3064453651(__this, (*((Type_t **)L_14)), L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Object,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_ProcessTypeHint_m931282438_MetadataUsageId;
extern "C"  Il2CppObject * TypeCoercionUtility_ProcessTypeHint_m931282438 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_t520966972 ** ___memberMap3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_ProcessTypeHint_m931282438_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = NULL;
	{
		String_t* L_0 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3430407454, L_0, (bool)0, "Pathfinding.JsonFx, Version=1.4.1003.3008, Culture=neutral, PublicKeyToken=null");
		V_0 = L_1;
		Type_t * L_2 = V_0;
		bool L_3 = Object_Equals_m3175838359(NULL /*static, unused*/, L_2, NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Type_t ** L_4 = ___objectType2;
		*((Il2CppObject **)(L_4)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_4), (Il2CppObject *)NULL);
		Dictionary_2_t520966972 ** L_5 = ___memberMap3;
		*((Il2CppObject **)(L_5)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_5), (Il2CppObject *)NULL);
		Il2CppObject * L_6 = ___result0;
		return L_6;
	}

IL_001a:
	{
		Type_t ** L_7 = ___objectType2;
		Type_t * L_8 = V_0;
		*((Il2CppObject **)(L_7)) = (Il2CppObject *)L_8;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_7), (Il2CppObject *)L_8);
		Il2CppObject * L_9 = ___result0;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		Il2CppObject * L_10 = ___result0;
		Type_t * L_11 = Object_GetType_m2022236990(L_10, /*hidden argument*/NULL);
		Type_t * L_12 = V_0;
		bool L_13 = Object_Equals_m3175838359(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003b;
		}
	}
	{
		Dictionary_2_t520966972 ** L_14 = ___memberMap3;
		Type_t ** L_15 = ___objectType2;
		Dictionary_2_t520966972 * L_16 = TypeCoercionUtility_GetMemberMap_m1277459664(__this, (*((Type_t **)L_15)), /*hidden argument*/NULL);
		*((Il2CppObject **)(L_14)) = (Il2CppObject *)L_16;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_14), (Il2CppObject *)L_16);
		Il2CppObject * L_17 = ___result0;
		return L_17;
	}

IL_003b:
	{
		Type_t ** L_18 = ___objectType2;
		Dictionary_2_t520966972 ** L_19 = ___memberMap3;
		Il2CppObject * L_20 = TypeCoercionUtility_InstantiateObject_m3064453651(__this, (*((Type_t **)L_18)), L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type)
extern "C"  Il2CppObject * TypeCoercionUtility_InstantiateObject_m472923486 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___objectType0;
		Il2CppObject * L_1 = Activator_CreateInstance_m1399154923(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern "C"  Il2CppObject * TypeCoercionUtility_InstantiateObject_m3064453651 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, Dictionary_2_t520966972 ** ___memberMap1, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___objectType0;
		Il2CppObject * L_1 = TypeCoercionUtility_InstantiateObject_m472923486(__this, L_0, /*hidden argument*/NULL);
		Dictionary_2_t520966972 ** L_2 = ___memberMap1;
		Type_t * L_3 = ___objectType0;
		Dictionary_2_t520966972 * L_4 = TypeCoercionUtility_GetMemberMap_m1277459664(__this, L_3, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_2)) = (Il2CppObject *)L_4;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_2), (Il2CppObject *)L_4);
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
extern const Il2CppType* IDictionary_t537317817_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_GetMemberMap_m1277459664_MetadataUsageId;
extern "C"  Dictionary_2_t520966972 * TypeCoercionUtility_GetMemberMap_m1277459664 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_GetMemberMap_m1277459664_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IDictionary_t537317817_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_1 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___objectType0;
		Type_t * L_3 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (Dictionary_2_t520966972 *)NULL;
	}

IL_001e:
	{
		Type_t * L_5 = ___objectType0;
		Dictionary_2_t520966972 * L_6 = TypeCoercionUtility_CreateMemberMap_m856110382(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
extern const Il2CppType* JsonMemberAttribute_t1310195012_0_0_0_var;
extern Il2CppClass* Dictionary_2_t520966972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m509279431_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1401030532_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m2880590069_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m413716925_MethodInfo_var;
extern const uint32_t TypeCoercionUtility_CreateMemberMap_m856110382_MetadataUsageId;
extern "C"  Dictionary_2_t520966972 * TypeCoercionUtility_CreateMemberMap_m856110382 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CreateMemberMap_m856110382_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t520966972 * V_0 = NULL;
	Type_t * V_1 = NULL;
	PropertyInfoU5BU5D_t4286713048* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	String_t* V_5 = NULL;
	FieldInfoU5BU5D_t2567562023* V_6 = NULL;
	int32_t V_7 = 0;
	FieldInfo_t * V_8 = NULL;
	String_t* V_9 = NULL;
	{
		Dictionary_2_t626389457 * L_0 = TypeCoercionUtility_get_MemberMapCache_m994727592(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType0;
		bool L_2 = Dictionary_2_TryGetValue_m509279431(L_0, L_1, (&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m509279431_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_t520966972 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		Dictionary_2_t520966972 * L_4 = (Dictionary_2_t520966972 *)il2cpp_codegen_object_new(Dictionary_2_t520966972_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1401030532(L_4, /*hidden argument*/Dictionary_2__ctor_m1401030532_MethodInfo_var);
		V_0 = L_4;
		Type_t * L_5 = ___objectType0;
		V_1 = L_5;
		goto IL_010c;
	}

IL_001f:
	{
		Type_t * L_6 = V_1;
		Type_t * L_7 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		PropertyInfoU5BU5D_t4286713048* L_8 = VirtFuncInvoker1< PropertyInfoU5BU5D_t4286713048*, int32_t >::Invoke(57 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_7, ((int32_t)52));
		V_2 = L_8;
		V_3 = 0;
		goto IL_0082;
	}

IL_0031:
	{
		PropertyInfoU5BU5D_t4286713048* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		PropertyInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		PropertyInfo_t * L_13 = V_4;
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_13);
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_15 = V_4;
		bool L_16 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_15);
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_17 = V_4;
		bool L_18 = JsonIgnoreAttribute_IsJsonIgnore_m3417392871(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_19 = V_4;
		String_t* L_20 = JsonNameAttribute_GetJsonName_m166270748(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0074;
		}
	}
	{
		Dictionary_2_t520966972 * L_23 = V_0;
		PropertyInfo_t * L_24 = V_4;
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
		PropertyInfo_t * L_26 = V_4;
		Dictionary_2_set_Item_m2880590069(L_23, L_25, L_26, /*hidden argument*/Dictionary_2_set_Item_m2880590069_MethodInfo_var);
		goto IL_007e;
	}

IL_0074:
	{
		Dictionary_2_t520966972 * L_27 = V_0;
		String_t* L_28 = V_5;
		PropertyInfo_t * L_29 = V_4;
		Dictionary_2_set_Item_m2880590069(L_27, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_m2880590069_MethodInfo_var);
	}

IL_007e:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_31 = V_3;
		PropertyInfoU5BU5D_t4286713048* L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_32)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_33 = V_1;
		Type_t * L_34 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		FieldInfoU5BU5D_t2567562023* L_35 = VirtFuncInvoker1< FieldInfoU5BU5D_t2567562023*, int32_t >::Invoke(49 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_34, ((int32_t)52));
		V_6 = L_35;
		V_7 = 0;
		goto IL_00fd;
	}

IL_009c:
	{
		FieldInfoU5BU5D_t2567562023* L_36 = V_6;
		int32_t L_37 = V_7;
		int32_t L_38 = L_37;
		FieldInfo_t * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_8 = L_39;
		FieldInfo_t * L_40 = V_8;
		bool L_41 = FieldInfo_get_IsPublic_m2574(L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00c1;
		}
	}
	{
		FieldInfo_t * L_42 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(JsonMemberAttribute_t1310195012_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t1108656482* L_44 = VirtFuncInvoker2< ObjectU5BU5D_t1108656482*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_42, L_43, (bool)0);
		if (!(((Il2CppArray *)L_44)->max_length))
		{
			goto IL_00f7;
		}
	}

IL_00c1:
	{
		FieldInfo_t * L_45 = V_8;
		bool L_46 = JsonIgnoreAttribute_IsJsonIgnore_m3417392871(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		FieldInfo_t * L_47 = V_8;
		String_t* L_48 = JsonNameAttribute_GetJsonName_m166270748(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		String_t* L_49 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_00ed;
		}
	}
	{
		Dictionary_2_t520966972 * L_51 = V_0;
		FieldInfo_t * L_52 = V_8;
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_52);
		FieldInfo_t * L_54 = V_8;
		Dictionary_2_set_Item_m2880590069(L_51, L_53, L_54, /*hidden argument*/Dictionary_2_set_Item_m2880590069_MethodInfo_var);
		goto IL_00f7;
	}

IL_00ed:
	{
		Dictionary_2_t520966972 * L_55 = V_0;
		String_t* L_56 = V_9;
		FieldInfo_t * L_57 = V_8;
		Dictionary_2_set_Item_m2880590069(L_55, L_56, L_57, /*hidden argument*/Dictionary_2_set_Item_m2880590069_MethodInfo_var);
	}

IL_00f7:
	{
		int32_t L_58 = V_7;
		V_7 = ((int32_t)((int32_t)L_58+(int32_t)1));
	}

IL_00fd:
	{
		int32_t L_59 = V_7;
		FieldInfoU5BU5D_t2567562023* L_60 = V_6;
		if ((((int32_t)L_59) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_60)->max_length)))))))
		{
			goto IL_009c;
		}
	}
	{
		Type_t * L_61 = V_1;
		Type_t * L_62 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_61);
		V_1 = L_62;
	}

IL_010c:
	{
		Type_t * L_63 = V_1;
		if (L_63)
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t626389457 * L_64 = TypeCoercionUtility_get_MemberMapCache_m994727592(__this, /*hidden argument*/NULL);
		Type_t * L_65 = ___objectType0;
		Dictionary_2_t520966972 * L_66 = V_0;
		Dictionary_2_set_Item_m413716925(L_64, L_65, L_66, /*hidden argument*/Dictionary_2_set_Item_m413716925_MethodInfo_var);
		Dictionary_2_t520966972 * L_67 = V_0;
		return L_67;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
extern Il2CppClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern Il2CppClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_TryGetValue_m961959871_MethodInfo_var;
extern const uint32_t TypeCoercionUtility_GetMemberInfo_m68305156_MetadataUsageId;
extern "C"  Type_t * TypeCoercionUtility_GetMemberInfo_m68305156 (Il2CppObject * __this /* static, unused */, Dictionary_2_t520966972 * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_GetMemberInfo_m68305156_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t520966972 * L_0 = ___memberMap0;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Dictionary_2_t520966972 * L_1 = ___memberMap0;
		String_t* L_2 = ___memberName1;
		MemberInfo_t ** L_3 = ___memberInfo2;
		bool L_4 = Dictionary_2_TryGetValue_m961959871(L_1, L_2, L_3, /*hidden argument*/Dictionary_2_TryGetValue_m961959871_MethodInfo_var);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t ** L_5 = ___memberInfo2;
		if (!((PropertyInfo_t *)IsInstClass((*((MemberInfo_t **)L_5)), PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		MemberInfo_t ** L_6 = ___memberInfo2;
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((*((MemberInfo_t **)L_6)), PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_7;
	}

IL_0023:
	{
		MemberInfo_t ** L_8 = ___memberInfo2;
		if (!((FieldInfo_t *)IsInstClass((*((MemberInfo_t **)L_8)), FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t ** L_9 = ___memberInfo2;
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((*((MemberInfo_t **)L_9)), FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_10;
	}

IL_0039:
	{
		MemberInfo_t ** L_11 = ___memberInfo2;
		*((Il2CppObject **)(L_11)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_11), (Il2CppObject *)NULL);
		return (Type_t *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
extern Il2CppClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern Il2CppClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_SetMemberValue_m3423425905_MetadataUsageId;
extern "C"  void TypeCoercionUtility_SetMemberValue_m3423425905 (TypeCoercionUtility_t3154211006 * __this, Il2CppObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, Il2CppObject * ___value3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_SetMemberValue_m3423425905_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MemberInfo_t * L_0 = ___memberInfo2;
		if (!((PropertyInfo_t *)IsInstClass(L_0, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		MemberInfo_t * L_1 = ___memberInfo2;
		Il2CppObject * L_2 = ___result0;
		Type_t * L_3 = ___memberType1;
		Il2CppObject * L_4 = ___value3;
		Il2CppObject * L_5 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_3, L_4, /*hidden argument*/NULL);
		VirtActionInvoker3< Il2CppObject *, Il2CppObject *, ObjectU5BU5D_t1108656482* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass(L_1, PropertyInfo_t_il2cpp_TypeInfo_var)), L_2, L_5, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL);
		return;
	}

IL_001f:
	{
		MemberInfo_t * L_6 = ___memberInfo2;
		if (!((FieldInfo_t *)IsInstClass(L_6, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		MemberInfo_t * L_7 = ___memberInfo2;
		Il2CppObject * L_8 = ___result0;
		Type_t * L_9 = ___memberType1;
		Il2CppObject * L_10 = ___value3;
		Il2CppObject * L_11 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_9, L_10, /*hidden argument*/NULL);
		FieldInfo_SetValue_m1669444927(((FieldInfo_t *)CastclassClass(L_7, FieldInfo_t_il2cpp_TypeInfo_var)), L_8, L_11, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
extern const Il2CppType* IEnumerable_t3464557803_0_0_0_var;
extern const Il2CppType* DateTime_t4283661327_0_0_0_var;
extern const Il2CppType* Guid_t2862754429_0_0_0_var;
extern const Il2CppType* Char_t2862622538_0_0_0_var;
extern const Il2CppType* Uri_t1116831938_0_0_0_var;
extern const Il2CppType* Version_t763695022_0_0_0_var;
extern const Il2CppType* TimeSpan_t413522987_0_0_0_var;
extern const Il2CppType* Int64_t1153838595_0_0_0_var;
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var;
extern Il2CppClass* Enum_t2862688501_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t537317817_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t3464557803_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTimeFormatInfo_t2490955586_il2cpp_TypeInfo_var;
extern Il2CppClass* DateTime_t4283661327_il2cpp_TypeInfo_var;
extern Il2CppClass* Guid_t2862754429_il2cpp_TypeInfo_var;
extern Il2CppClass* Char_t2862622538_il2cpp_TypeInfo_var;
extern Il2CppClass* Uri_t1116831938_il2cpp_TypeInfo_var;
extern Il2CppClass* Version_t763695022_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t1153838595_il2cpp_TypeInfo_var;
extern Il2CppClass* TimeSpan_t413522987_il2cpp_TypeInfo_var;
extern Il2CppClass* TypeDescriptor_t1537159061_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1363677321_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral358898177;
extern Il2CppCodeGenString* _stringLiteral2887095123;
extern const uint32_t TypeCoercionUtility_CoerceType_m3345524962_MetadataUsageId;
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceType_m3345524962 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Il2CppObject * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceType_m3345524962_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	TypeConverter_t1753450284 * V_2 = NULL;
	TypeU5BU5D_t3339007067* V_3 = NULL;
	FieldInfoU5BU5D_t2567562023* V_4 = NULL;
	int32_t V_5 = 0;
	FieldInfo_t * V_6 = NULL;
	String_t* V_7 = NULL;
	Dictionary_2_t520966972 * V_8 = NULL;
	DateTime_t4283661327  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Uri_t1116831938 * V_10 = NULL;
	Il2CppObject * V_11 = NULL;
	Exception_t3991598821 * V_12 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___targetType0;
		bool L_1 = TypeCoercionUtility_IsNullable_m187284083(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Il2CppObject * L_2 = ___value1;
		if (L_2)
		{
			goto IL_0043;
		}
	}
	{
		bool L_3 = __this->get_allowNullValueTypes_1();
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		Type_t * L_4 = ___targetType0;
		Type_t * L_5 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_6 = Type_get_IsValueType_m1914757235(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t1108656482* L_8 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_9 = ___targetType0;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_9);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral358898177, L_8, /*hidden argument*/NULL);
		JsonTypeCoercionException_t3725515417 * L_12 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2129803924(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0041:
	{
		Il2CppObject * L_13 = ___value1;
		return L_13;
	}

IL_0043:
	{
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_15 = ___targetType0;
		TypeU5BU5D_t3339007067* L_16 = VirtFuncInvoker0< TypeU5BU5D_t3339007067* >::Invoke(80 /* System.Type[] System.Type::GetGenericArguments() */, L_15);
		V_3 = L_16;
		TypeU5BU5D_t3339007067* L_17 = V_3;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		TypeU5BU5D_t3339007067* L_18 = V_3;
		int32_t L_19 = 0;
		Type_t * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		___targetType0 = L_20;
	}

IL_0058:
	{
		Il2CppObject * L_21 = ___value1;
		Type_t * L_22 = Object_GetType_m2022236990(L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		Type_t * L_23 = ___targetType0;
		Type_t * L_24 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		Type_t * L_25 = V_1;
		Type_t * L_26 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		bool L_27 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_24, L_26);
		if (!L_27)
		{
			goto IL_0074;
		}
	}
	{
		Il2CppObject * L_28 = ___value1;
		return L_28;
	}

IL_0074:
	{
		Type_t * L_29 = ___targetType0;
		Type_t * L_30 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		bool L_31 = Type_get_IsEnum_m3878730619(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0100;
		}
	}
	{
		Il2CppObject * L_32 = ___value1;
		if (!((String_t*)IsInstSealed(L_32, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00e9;
		}
	}
	{
		Type_t * L_33 = ___targetType0;
		Il2CppObject * L_34 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2862688501_il2cpp_TypeInfo_var);
		bool L_35 = Enum_IsDefined_m2781598580(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_00dc;
		}
	}
	{
		Type_t * L_36 = ___targetType0;
		Type_t * L_37 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		FieldInfoU5BU5D_t2567562023* L_38 = Type_GetFields_m3137302773(L_37, /*hidden argument*/NULL);
		V_4 = L_38;
		V_5 = 0;
		goto IL_00d4;
	}

IL_00a4:
	{
		FieldInfoU5BU5D_t2567562023* L_39 = V_4;
		int32_t L_40 = V_5;
		int32_t L_41 = L_40;
		FieldInfo_t * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_6 = L_42;
		FieldInfo_t * L_43 = V_6;
		String_t* L_44 = JsonNameAttribute_GetJsonName_m166270748(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		V_7 = L_44;
		Il2CppObject * L_45 = ___value1;
		String_t* L_46 = V_7;
		bool L_47 = String_Equals_m3541721061(((String_t*)CastclassSealed(L_45, String_t_il2cpp_TypeInfo_var)), L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00ce;
		}
	}
	{
		FieldInfo_t * L_48 = V_6;
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_48);
		___value1 = L_49;
		goto IL_00dc;
	}

IL_00ce:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_00d4:
	{
		int32_t L_51 = V_5;
		FieldInfoU5BU5D_t2567562023* L_52 = V_4;
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_52)->max_length)))))))
		{
			goto IL_00a4;
		}
	}

IL_00dc:
	{
		Type_t * L_53 = ___targetType0;
		Il2CppObject * L_54 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2862688501_il2cpp_TypeInfo_var);
		Il2CppObject * L_55 = Enum_Parse_m2929309979(NULL /*static, unused*/, L_53, ((String_t*)CastclassSealed(L_54, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_55;
	}

IL_00e9:
	{
		Type_t * L_56 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2862688501_il2cpp_TypeInfo_var);
		Type_t * L_57 = Enum_GetUnderlyingType_m2468052512(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		Il2CppObject * L_58 = ___value1;
		Il2CppObject * L_59 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_57, L_58, /*hidden argument*/NULL);
		___value1 = L_59;
		Type_t * L_60 = ___targetType0;
		Il2CppObject * L_61 = ___value1;
		Il2CppObject * L_62 = Enum_ToObject_m1129836274(NULL /*static, unused*/, L_60, L_61, /*hidden argument*/NULL);
		return L_62;
	}

IL_0100:
	{
		Il2CppObject * L_63 = ___value1;
		if (!((Il2CppObject *)IsInst(L_63, IDictionary_t537317817_il2cpp_TypeInfo_var)))
		{
			goto IL_0118;
		}
	}
	{
		Type_t * L_64 = ___targetType0;
		Il2CppObject * L_65 = ___value1;
		Il2CppObject * L_66 = TypeCoercionUtility_CoerceType_m967108774(__this, L_64, ((Il2CppObject *)Castclass(L_65, IDictionary_t537317817_il2cpp_TypeInfo_var)), (&V_8), /*hidden argument*/NULL);
		return L_66;
	}

IL_0118:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IEnumerable_t3464557803_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_68 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		Type_t * L_69 = ___targetType0;
		Type_t * L_70 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		bool L_71 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_68, L_70);
		if (!L_71)
		{
			goto IL_015f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_72 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(IEnumerable_t3464557803_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_73 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		Type_t * L_74 = V_1;
		Type_t * L_75 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		bool L_76 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_73, L_75);
		if (!L_76)
		{
			goto IL_015f;
		}
	}
	{
		Type_t * L_77 = ___targetType0;
		Type_t * L_78 = V_1;
		Il2CppObject * L_79 = ___value1;
		Il2CppObject * L_80 = TypeCoercionUtility_CoerceList_m3530535370(__this, L_77, L_78, ((Il2CppObject *)Castclass(L_79, IEnumerable_t3464557803_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_80;
	}

IL_015f:
	{
		Il2CppObject * L_81 = ___value1;
		if (!((String_t*)IsInstSealed(L_81, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_023b;
		}
	}
	{
		Type_t * L_82 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(DateTime_t4283661327_0_0_0_var), /*hidden argument*/NULL);
		bool L_84 = Object_Equals_m3175838359(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_01a0;
		}
	}
	{
		Il2CppObject * L_85 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t2490955586_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t2490955586 * L_86 = DateTimeFormatInfo_get_InvariantInfo_m1430381298(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t4283661327_il2cpp_TypeInfo_var);
		bool L_87 = DateTime_TryParse_m947353861(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_85, String_t_il2cpp_TypeInfo_var)), L_86, ((int32_t)143), (&V_9), /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_026e;
		}
	}
	{
		DateTime_t4283661327  L_88 = V_9;
		DateTime_t4283661327  L_89 = L_88;
		Il2CppObject * L_90 = Box(DateTime_t4283661327_il2cpp_TypeInfo_var, &L_89);
		return L_90;
	}

IL_01a0:
	{
		Type_t * L_91 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_92 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Guid_t2862754429_0_0_0_var), /*hidden argument*/NULL);
		bool L_93 = Object_Equals_m3175838359(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_01c3;
		}
	}
	{
		Il2CppObject * L_94 = ___value1;
		Guid_t2862754429  L_95;
		memset(&L_95, 0, sizeof(L_95));
		Guid__ctor_m1994687478(&L_95, ((String_t*)CastclassSealed(L_94, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Guid_t2862754429  L_96 = L_95;
		Il2CppObject * L_97 = Box(Guid_t2862754429_il2cpp_TypeInfo_var, &L_96);
		return L_97;
	}

IL_01c3:
	{
		Type_t * L_98 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_99 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Char_t2862622538_0_0_0_var), /*hidden argument*/NULL);
		bool L_100 = Object_Equals_m3175838359(NULL /*static, unused*/, L_98, L_99, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_01f8;
		}
	}
	{
		Il2CppObject * L_101 = ___value1;
		int32_t L_102 = String_get_Length_m2979997331(((String_t*)CastclassSealed(L_101, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_102) == ((uint32_t)1))))
		{
			goto IL_026e;
		}
	}
	{
		Il2CppObject * L_103 = ___value1;
		Il2CppChar L_104 = String_get_Chars_m3015341861(((String_t*)CastclassSealed(L_103, String_t_il2cpp_TypeInfo_var)), 0, /*hidden argument*/NULL);
		Il2CppChar L_105 = L_104;
		Il2CppObject * L_106 = Box(Char_t2862622538_il2cpp_TypeInfo_var, &L_105);
		return L_106;
	}

IL_01f8:
	{
		Type_t * L_107 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_108 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Uri_t1116831938_0_0_0_var), /*hidden argument*/NULL);
		bool L_109 = Object_Equals_m3175838359(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_021d;
		}
	}
	{
		Il2CppObject * L_110 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t1116831938_il2cpp_TypeInfo_var);
		bool L_111 = Uri_TryCreate_m1126538084(NULL /*static, unused*/, ((String_t*)CastclassSealed(L_110, String_t_il2cpp_TypeInfo_var)), 0, (&V_10), /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_026e;
		}
	}
	{
		Uri_t1116831938 * L_112 = V_10;
		return L_112;
	}

IL_021d:
	{
		Type_t * L_113 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_114 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Version_t763695022_0_0_0_var), /*hidden argument*/NULL);
		bool L_115 = Object_Equals_m3175838359(NULL /*static, unused*/, L_113, L_114, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_026e;
		}
	}
	{
		Il2CppObject * L_116 = ___value1;
		Version_t763695022 * L_117 = (Version_t763695022 *)il2cpp_codegen_object_new(Version_t763695022_il2cpp_TypeInfo_var);
		Version__ctor_m48000169(L_117, ((String_t*)CastclassSealed(L_116, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_117;
	}

IL_023b:
	{
		Type_t * L_118 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_119 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t413522987_0_0_0_var), /*hidden argument*/NULL);
		bool L_120 = Object_Equals_m3175838359(NULL /*static, unused*/, L_118, L_119, /*hidden argument*/NULL);
		if (!L_120)
		{
			goto IL_026e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_121 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Int64_t1153838595_0_0_0_var), /*hidden argument*/NULL);
		Il2CppObject * L_122 = ___value1;
		Il2CppObject * L_123 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_121, L_122, /*hidden argument*/NULL);
		TimeSpan_t413522987  L_124;
		memset(&L_124, 0, sizeof(L_124));
		TimeSpan__ctor_m477860848(&L_124, ((*(int64_t*)((int64_t*)UnBox (L_123, Int64_t1153838595_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		TimeSpan_t413522987  L_125 = L_124;
		Il2CppObject * L_126 = Box(TimeSpan_t413522987_il2cpp_TypeInfo_var, &L_125);
		return L_126;
	}

IL_026e:
	{
		Type_t * L_127 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1537159061_il2cpp_TypeInfo_var);
		TypeConverter_t1753450284 * L_128 = TypeDescriptor_GetConverter_m3573588811(NULL /*static, unused*/, L_127, /*hidden argument*/NULL);
		V_2 = L_128;
		TypeConverter_t1753450284 * L_129 = V_2;
		Type_t * L_130 = V_1;
		bool L_131 = TypeConverter_CanConvertFrom_m3377278021(L_129, L_130, /*hidden argument*/NULL);
		if (!L_131)
		{
			goto IL_0286;
		}
	}
	{
		TypeConverter_t1753450284 * L_132 = V_2;
		Il2CppObject * L_133 = ___value1;
		Il2CppObject * L_134 = TypeConverter_ConvertFrom_m891071421(L_132, L_133, /*hidden argument*/NULL);
		return L_134;
	}

IL_0286:
	{
		Type_t * L_135 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t1537159061_il2cpp_TypeInfo_var);
		TypeConverter_t1753450284 * L_136 = TypeDescriptor_GetConverter_m3573588811(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		V_2 = L_136;
		TypeConverter_t1753450284 * L_137 = V_2;
		Type_t * L_138 = ___targetType0;
		bool L_139 = TypeConverter_CanConvertTo_m3534396116(L_137, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_029f;
		}
	}
	{
		TypeConverter_t1753450284 * L_140 = V_2;
		Il2CppObject * L_141 = ___value1;
		Type_t * L_142 = ___targetType0;
		Il2CppObject * L_143 = TypeConverter_ConvertTo_m3286262527(L_140, L_141, L_142, /*hidden argument*/NULL);
		return L_143;
	}

IL_029f:
	{
	}

IL_02a0:
	try
	{ // begin try (depth: 1)
		Il2CppObject * L_144 = ___value1;
		Type_t * L_145 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		Il2CppObject * L_146 = Convert_ChangeType_m2922880930(NULL /*static, unused*/, L_144, L_145, /*hidden argument*/NULL);
		V_11 = L_146;
		goto IL_02dc;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t3991598821_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_02ab;
		throw e;
	}

CATCH_02ab:
	{ // begin catch(System.Exception)
		V_12 = ((Exception_t3991598821 *)__exception_local);
		ObjectU5BU5D_t1108656482* L_147 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)2));
		Il2CppObject * L_148 = ___value1;
		Type_t * L_149 = Object_GetType_m2022236990(L_148, /*hidden argument*/NULL);
		String_t* L_150 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_149);
		ArrayElementTypeCheck (L_147, L_150);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_150);
		ObjectU5BU5D_t1108656482* L_151 = L_147;
		Type_t * L_152 = ___targetType0;
		String_t* L_153 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_152);
		ArrayElementTypeCheck (L_151, L_153);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_153);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_154 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral2887095123, L_151, /*hidden argument*/NULL);
		Exception_t3991598821 * L_155 = V_12;
		JsonTypeCoercionException_t3725515417 * L_156 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m3348333858(L_156, L_154, L_155, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_156);
	} // end catch (depth: 1)

IL_02dc:
	{
		Il2CppObject * L_157 = V_11;
		return L_157;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Collections.IDictionary,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
extern Il2CppClass* IDictionary_t537317817_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t3464557803_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_CoerceType_m967108774_MetadataUsageId;
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceType_m967108774 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Il2CppObject * ___value1, Dictionary_2_t520966972 ** ___memberMap2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceType_m967108774_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	MemberInfo_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___targetType0;
		Dictionary_2_t520966972 ** L_1 = ___memberMap2;
		Il2CppObject * L_2 = TypeCoercionUtility_InstantiateObject_m3064453651(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Dictionary_2_t520966972 ** L_3 = ___memberMap2;
		if (!(*((Dictionary_2_t520966972 **)L_3)))
		{
			goto IL_0062;
		}
	}
	{
		Il2CppObject * L_4 = ___value1;
		Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t537317817_il2cpp_TypeInfo_var, L_4);
		Il2CppObject * L_6 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t3464557803_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0044;
		}

IL_001b:
		{
			Il2CppObject * L_7 = V_1;
			Il2CppObject * L_8 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			Dictionary_2_t520966972 ** L_9 = ___memberMap2;
			Il2CppObject * L_10 = V_2;
			Type_t * L_11 = TypeCoercionUtility_GetMemberInfo_m68305156(NULL /*static, unused*/, (*((Dictionary_2_t520966972 **)L_9)), ((String_t*)IsInstSealed(L_10, String_t_il2cpp_TypeInfo_var)), (&V_3), /*hidden argument*/NULL);
			V_4 = L_11;
			Il2CppObject * L_12 = V_0;
			Type_t * L_13 = V_4;
			MemberInfo_t * L_14 = V_3;
			Il2CppObject * L_15 = ___value1;
			Il2CppObject * L_16 = V_2;
			Il2CppObject * L_17 = InterfaceFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t537317817_il2cpp_TypeInfo_var, L_15, L_16);
			TypeCoercionUtility_SetMemberValue_m3423425905(__this, L_12, L_13, L_14, L_17, /*hidden argument*/NULL);
		}

IL_0044:
		{
			Il2CppObject * L_18 = V_1;
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_001b;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x62, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_20 = V_1;
			V_5 = ((Il2CppObject *)IsInst(L_20, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_21 = V_5;
			if (!L_21)
			{
				goto IL_0061;
			}
		}

IL_005a:
		{
			Il2CppObject * L_22 = V_5;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_22);
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0062:
	{
		Il2CppObject * L_23 = V_0;
		return L_23;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var;
extern Il2CppClass* TargetInvocationException_t3880899288_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerable_t3464557803_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1363677321_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1496450899;
extern Il2CppCodeGenString* _stringLiteral4160581905;
extern Il2CppCodeGenString* _stringLiteral3111219516;
extern Il2CppCodeGenString* _stringLiteral1488310865;
extern Il2CppCodeGenString* _stringLiteral65665;
extern Il2CppCodeGenString* _stringLiteral2032013422;
extern Il2CppCodeGenString* _stringLiteral2887095123;
extern const uint32_t TypeCoercionUtility_CoerceList_m3530535370_MetadataUsageId;
extern "C"  Il2CppObject * TypeCoercionUtility_CoerceList_m3530535370 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, Il2CppObject * ___value2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceList_m3530535370_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t4136801618 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	ParameterInfoU5BU5D_t2015293532* V_3 = NULL;
	Type_t * V_4 = NULL;
	ConstructorInfoU5BU5D_t2079826215* V_5 = NULL;
	int32_t V_6 = 0;
	ConstructorInfo_t4136801618 * V_7 = NULL;
	ParameterInfoU5BU5D_t2015293532* V_8 = NULL;
	Il2CppObject * V_9 = NULL;
	TargetInvocationException_t3880899288 * V_10 = NULL;
	TargetInvocationException_t3880899288 * V_11 = NULL;
	Il2CppObject * V_12 = NULL;
	Il2CppObject * V_13 = NULL;
	TargetInvocationException_t3880899288 * V_14 = NULL;
	Il2CppObject * V_15 = NULL;
	Exception_t3991598821 * V_16 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ParameterInfoU5BU5D_t2015293532* G_B21_0 = NULL;
	Type_t * G_B25_0 = NULL;
	ParameterInfoU5BU5D_t2015293532* G_B35_0 = NULL;
	Type_t * G_B39_0 = NULL;
	{
		Type_t * L_0 = ___targetType0;
		bool L_1 = Type_get_IsArray_m837983873(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___targetType0;
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_2);
		Il2CppObject * L_4 = ___value2;
		Il2CppArray * L_5 = TypeCoercionUtility_CoerceArray_m1490009066(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0016:
	{
		Type_t * L_6 = ___targetType0;
		ConstructorInfoU5BU5D_t2079826215* L_7 = Type_GetConstructors_m3837181109(L_6, /*hidden argument*/NULL);
		V_0 = (ConstructorInfo_t4136801618 *)NULL;
		V_5 = L_7;
		V_6 = 0;
		goto IL_0082;
	}

IL_0025:
	{
		ConstructorInfoU5BU5D_t2079826215* L_8 = V_5;
		int32_t L_9 = V_6;
		int32_t L_10 = L_9;
		ConstructorInfo_t4136801618 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_7 = L_11;
		ConstructorInfo_t4136801618 * L_12 = V_7;
		ParameterInfoU5BU5D_t2015293532* L_13 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2015293532* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_12);
		V_8 = L_13;
		ParameterInfoU5BU5D_t2015293532* L_14 = V_8;
		if ((((Il2CppArray *)L_14)->max_length))
		{
			goto IL_003f;
		}
	}
	{
		ConstructorInfo_t4136801618 * L_15 = V_7;
		V_0 = L_15;
		goto IL_007c;
	}

IL_003f:
	{
		ParameterInfoU5BU5D_t2015293532* L_16 = V_8;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		ParameterInfoU5BU5D_t2015293532* L_17 = V_8;
		int32_t L_18 = 0;
		ParameterInfo_t2235474049 * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_19);
		Type_t * L_21 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Type_t * L_22 = ___arrayType1;
		Type_t * L_23 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		bool L_24 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_23);
		if (!L_24)
		{
			goto IL_007c;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t4136801618 * L_25 = V_7;
		ObjectU5BU5D_t1108656482* L_26 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Il2CppObject * L_27 = ___value2;
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_27);
		Il2CppObject * L_28 = ConstructorInfo_Invoke_m759007899(L_25, L_26, /*hidden argument*/NULL);
		V_9 = L_28;
		goto IL_02b5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0079;
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Object)
		goto IL_007c;
	} // end catch (depth: 1)

IL_007c:
	{
		int32_t L_29 = V_6;
		V_6 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_30 = V_6;
		ConstructorInfoU5BU5D_t2079826215* L_31 = V_5;
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_31)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		ConstructorInfo_t4136801618 * L_32 = V_0;
		bool L_33 = Object_Equals_m3175838359(NULL /*static, unused*/, L_32, NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00b2;
		}
	}
	{
		ObjectU5BU5D_t1108656482* L_34 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_35 = ___targetType0;
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_35);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral1496450899, L_34, /*hidden argument*/NULL);
		JsonTypeCoercionException_t3725515417 * L_38 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m2129803924(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38);
	}

IL_00b2:
	{
	}

IL_00b3:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t4136801618 * L_39 = V_0;
		Il2CppObject * L_40 = ConstructorInfo_Invoke_m759007899(L_39, (ObjectU5BU5D_t1108656482*)(ObjectU5BU5D_t1108656482*)NULL, /*hidden argument*/NULL);
		V_1 = L_40;
		goto IL_00f9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t3880899288_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00bd;
		throw e;
	}

CATCH_00bd:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_10 = ((TargetInvocationException_t3880899288 *)__exception_local);
			TargetInvocationException_t3880899288 * L_41 = V_10;
			Exception_t3991598821 * L_42 = Exception_get_InnerException_m1427945535(L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00e1;
			}
		}

IL_00c8:
		{
			TargetInvocationException_t3880899288 * L_43 = V_10;
			Exception_t3991598821 * L_44 = Exception_get_InnerException_m1427945535(L_43, /*hidden argument*/NULL);
			String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_44);
			TargetInvocationException_t3880899288 * L_46 = V_10;
			Exception_t3991598821 * L_47 = Exception_get_InnerException_m1427945535(L_46, /*hidden argument*/NULL);
			JsonTypeCoercionException_t3725515417 * L_48 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m3348333858(L_48, L_45, L_47, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48);
		}

IL_00e1:
		{
			Type_t * L_49 = ___targetType0;
			String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_49);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_51 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral4160581905, L_50, /*hidden argument*/NULL);
			TargetInvocationException_t3880899288 * L_52 = V_10;
			JsonTypeCoercionException_t3725515417 * L_53 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m3348333858(L_53, L_51, L_52, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53);
		}
	} // end catch (depth: 1)

IL_00f9:
	{
		Type_t * L_54 = ___targetType0;
		Type_t * L_55 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		MethodInfo_t * L_56 = Type_GetMethod_m2884801946(L_55, _stringLiteral3111219516, /*hidden argument*/NULL);
		V_2 = L_56;
		MethodInfo_t * L_57 = V_2;
		bool L_58 = Object_Equals_m3175838359(NULL /*static, unused*/, L_57, NULL, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_011b;
		}
	}
	{
		MethodInfo_t * L_59 = V_2;
		ParameterInfoU5BU5D_t2015293532* L_60 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2015293532* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_59);
		G_B21_0 = L_60;
		goto IL_011c;
	}

IL_011b:
	{
		G_B21_0 = ((ParameterInfoU5BU5D_t2015293532*)(NULL));
	}

IL_011c:
	{
		V_3 = G_B21_0;
		ParameterInfoU5BU5D_t2015293532* L_61 = V_3;
		if (!L_61)
		{
			goto IL_0130;
		}
	}
	{
		ParameterInfoU5BU5D_t2015293532* L_62 = V_3;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_62)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_0130;
		}
	}
	{
		ParameterInfoU5BU5D_t2015293532* L_63 = V_3;
		int32_t L_64 = 0;
		ParameterInfo_t2235474049 * L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Type_t * L_66 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_65);
		G_B25_0 = L_66;
		goto IL_0131;
	}

IL_0130:
	{
		G_B25_0 = ((Type_t *)(NULL));
	}

IL_0131:
	{
		V_4 = G_B25_0;
		Type_t * L_67 = V_4;
		bool L_68 = Object_Equals_m3175838359(NULL /*static, unused*/, L_67, NULL, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_01a3;
		}
	}
	{
		Type_t * L_69 = V_4;
		Type_t * L_70 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		Type_t * L_71 = ___arrayType1;
		Type_t * L_72 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		bool L_73 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_70, L_72);
		if (!L_73)
		{
			goto IL_01a3;
		}
	}

IL_0151:
	try
	{ // begin try (depth: 1)
		MethodInfo_t * L_74 = V_2;
		Il2CppObject * L_75 = V_1;
		ObjectU5BU5D_t1108656482* L_76 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
		Il2CppObject * L_77 = ___value2;
		ArrayElementTypeCheck (L_76, L_77);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_77);
		MethodBase_Invoke_m3435166155(L_74, L_75, L_76, /*hidden argument*/NULL);
		goto IL_01a1;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t3880899288_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0165;
		throw e;
	}

CATCH_0165:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_11 = ((TargetInvocationException_t3880899288 *)__exception_local);
			TargetInvocationException_t3880899288 * L_78 = V_11;
			Exception_t3991598821 * L_79 = Exception_get_InnerException_m1427945535(L_78, /*hidden argument*/NULL);
			if (!L_79)
			{
				goto IL_0189;
			}
		}

IL_0170:
		{
			TargetInvocationException_t3880899288 * L_80 = V_11;
			Exception_t3991598821 * L_81 = Exception_get_InnerException_m1427945535(L_80, /*hidden argument*/NULL);
			String_t* L_82 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_81);
			TargetInvocationException_t3880899288 * L_83 = V_11;
			Exception_t3991598821 * L_84 = Exception_get_InnerException_m1427945535(L_83, /*hidden argument*/NULL);
			JsonTypeCoercionException_t3725515417 * L_85 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m3348333858(L_85, L_82, L_84, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85);
		}

IL_0189:
		{
			Type_t * L_86 = ___targetType0;
			String_t* L_87 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_86);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_88 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1488310865, L_87, /*hidden argument*/NULL);
			TargetInvocationException_t3880899288 * L_89 = V_11;
			JsonTypeCoercionException_t3725515417 * L_90 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
			JsonTypeCoercionException__ctor_m3348333858(L_90, L_88, L_89, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_90);
		}
	} // end catch (depth: 1)

IL_01a1:
	{
		Il2CppObject * L_91 = V_1;
		return L_91;
	}

IL_01a3:
	{
		Type_t * L_92 = ___targetType0;
		Type_t * L_93 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
		MethodInfo_t * L_94 = Type_GetMethod_m2884801946(L_93, _stringLiteral65665, /*hidden argument*/NULL);
		V_2 = L_94;
		MethodInfo_t * L_95 = V_2;
		bool L_96 = Object_Equals_m3175838359(NULL /*static, unused*/, L_95, NULL, /*hidden argument*/NULL);
		if (L_96)
		{
			goto IL_01c5;
		}
	}
	{
		MethodInfo_t * L_97 = V_2;
		ParameterInfoU5BU5D_t2015293532* L_98 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2015293532* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_97);
		G_B35_0 = L_98;
		goto IL_01c6;
	}

IL_01c5:
	{
		G_B35_0 = ((ParameterInfoU5BU5D_t2015293532*)(NULL));
	}

IL_01c6:
	{
		V_3 = G_B35_0;
		ParameterInfoU5BU5D_t2015293532* L_99 = V_3;
		if (!L_99)
		{
			goto IL_01da;
		}
	}
	{
		ParameterInfoU5BU5D_t2015293532* L_100 = V_3;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_100)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_01da;
		}
	}
	{
		ParameterInfoU5BU5D_t2015293532* L_101 = V_3;
		int32_t L_102 = 0;
		ParameterInfo_t2235474049 * L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Type_t * L_104 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_103);
		G_B39_0 = L_104;
		goto IL_01db;
	}

IL_01da:
	{
		G_B39_0 = ((Type_t *)(NULL));
	}

IL_01db:
	{
		V_4 = G_B39_0;
		Type_t * L_105 = V_4;
		bool L_106 = Object_Equals_m3175838359(NULL /*static, unused*/, L_105, NULL, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0278;
		}
	}
	{
		Il2CppObject * L_107 = ___value2;
		Il2CppObject * L_108 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t3464557803_il2cpp_TypeInfo_var, L_107);
		V_12 = L_108;
	}

IL_01f2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0256;
		}

IL_01f4:
		{
			Il2CppObject * L_109 = V_12;
			Il2CppObject * L_110 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_109);
			V_13 = L_110;
		}

IL_01fd:
		try
		{ // begin try (depth: 2)
			MethodInfo_t * L_111 = V_2;
			Il2CppObject * L_112 = V_1;
			ObjectU5BU5D_t1108656482* L_113 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)1));
			Type_t * L_114 = V_4;
			Il2CppObject * L_115 = V_13;
			Il2CppObject * L_116 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_114, L_115, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_113, L_116);
			(L_113)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_116);
			MethodBase_Invoke_m3435166155(L_111, L_112, L_113, /*hidden argument*/NULL);
			goto IL_0256;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t3991598821 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TargetInvocationException_t3880899288_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_021a;
			throw e;
		}

CATCH_021a:
		{ // begin catch(System.Reflection.TargetInvocationException)
			{
				V_14 = ((TargetInvocationException_t3880899288 *)__exception_local);
				TargetInvocationException_t3880899288 * L_117 = V_14;
				Exception_t3991598821 * L_118 = Exception_get_InnerException_m1427945535(L_117, /*hidden argument*/NULL);
				if (!L_118)
				{
					goto IL_023e;
				}
			}

IL_0225:
			{
				TargetInvocationException_t3880899288 * L_119 = V_14;
				Exception_t3991598821 * L_120 = Exception_get_InnerException_m1427945535(L_119, /*hidden argument*/NULL);
				String_t* L_121 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_120);
				TargetInvocationException_t3880899288 * L_122 = V_14;
				Exception_t3991598821 * L_123 = Exception_get_InnerException_m1427945535(L_122, /*hidden argument*/NULL);
				JsonTypeCoercionException_t3725515417 * L_124 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
				JsonTypeCoercionException__ctor_m3348333858(L_124, L_121, L_123, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_124);
			}

IL_023e:
			{
				Type_t * L_125 = ___targetType0;
				String_t* L_126 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_125);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_127 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2032013422, L_126, /*hidden argument*/NULL);
				TargetInvocationException_t3880899288 * L_128 = V_14;
				JsonTypeCoercionException_t3725515417 * L_129 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
				JsonTypeCoercionException__ctor_m3348333858(L_129, L_127, L_128, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_129);
			}
		} // end catch (depth: 2)

IL_0256:
		{
			Il2CppObject * L_130 = V_12;
			bool L_131 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_130);
			if (L_131)
			{
				goto IL_01f4;
			}
		}

IL_025f:
		{
			IL2CPP_LEAVE(0x276, FINALLY_0261);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0261;
	}

FINALLY_0261:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_132 = V_12;
			V_15 = ((Il2CppObject *)IsInst(L_132, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_133 = V_15;
			if (!L_133)
			{
				goto IL_0275;
			}
		}

IL_026e:
		{
			Il2CppObject * L_134 = V_15;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_134);
		}

IL_0275:
		{
			IL2CPP_END_FINALLY(609)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(609)
	{
		IL2CPP_JUMP_TBL(0x276, IL_0276)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0276:
	{
		Il2CppObject * L_135 = V_1;
		return L_135;
	}

IL_0278:
	{
	}

IL_0279:
	try
	{ // begin try (depth: 1)
		Il2CppObject * L_136 = ___value2;
		Type_t * L_137 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1363677321_il2cpp_TypeInfo_var);
		Il2CppObject * L_138 = Convert_ChangeType_m2922880930(NULL /*static, unused*/, L_136, L_137, /*hidden argument*/NULL);
		V_9 = L_138;
		goto IL_02b5;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t3991598821_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0284;
		throw e;
	}

CATCH_0284:
	{ // begin catch(System.Exception)
		V_16 = ((Exception_t3991598821 *)__exception_local);
		ObjectU5BU5D_t1108656482* L_139 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)2));
		Il2CppObject * L_140 = ___value2;
		Type_t * L_141 = Object_GetType_m2022236990(L_140, /*hidden argument*/NULL);
		String_t* L_142 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_141);
		ArrayElementTypeCheck (L_139, L_142);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_142);
		ObjectU5BU5D_t1108656482* L_143 = L_139;
		Type_t * L_144 = ___targetType0;
		String_t* L_145 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_144);
		ArrayElementTypeCheck (L_143, L_145);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_145);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_146 = String_Format_m4050103162(NULL /*static, unused*/, _stringLiteral2887095123, L_143, /*hidden argument*/NULL);
		Exception_t3991598821 * L_147 = V_16;
		JsonTypeCoercionException_t3725515417 * L_148 = (JsonTypeCoercionException_t3725515417 *)il2cpp_codegen_object_new(JsonTypeCoercionException_t3725515417_il2cpp_TypeInfo_var);
		JsonTypeCoercionException__ctor_m3348333858(L_148, L_146, L_147, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_148);
	} // end catch (depth: 1)

IL_02b5:
	{
		Il2CppObject * L_149 = V_9;
		return L_149;
	}
}
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
extern Il2CppClass* IEnumerable_t3464557803_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_CoerceArray_m1490009066_MetadataUsageId;
extern "C"  Il2CppArray * TypeCoercionUtility_CoerceArray_m1490009066 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___elementType0, Il2CppObject * ___value1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_CoerceArray_m1490009066_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Il2CppArray * V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppObject * V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		Il2CppObject * L_0 = ___value1;
		Il2CppObject * L_1 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t3464557803_il2cpp_TypeInfo_var, L_0);
		V_3 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0016;
		}

IL_000b:
		{
			Il2CppObject * L_2 = V_3;
			InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_2);
			int32_t L_3 = V_0;
			V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
		}

IL_0016:
		{
			Il2CppObject * L_4 = V_3;
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_4);
			if (L_5)
			{
				goto IL_000b;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0020);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_6 = V_3;
			V_4 = ((Il2CppObject *)IsInst(L_6, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_7 = V_4;
			if (!L_7)
			{
				goto IL_0033;
			}
		}

IL_002c:
		{
			Il2CppObject * L_8 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_8);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(32)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0034:
	{
		Type_t * L_9 = ___elementType0;
		Int32U5BU5D_t3230847821* L_10 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)1));
		int32_t L_11 = V_0;
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Il2CppArray * L_12 = Array_CreateInstance_m1053747690(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_12;
		V_2 = 0;
		Il2CppObject * L_13 = ___value1;
		Il2CppObject * L_14 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t3464557803_il2cpp_TypeInfo_var, L_13);
		V_3 = L_14;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0075;
		}

IL_0050:
		{
			Il2CppObject * L_15 = V_3;
			Il2CppObject * L_16 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_15);
			V_5 = L_16;
			Il2CppArray * L_17 = V_1;
			Type_t * L_18 = ___elementType0;
			Il2CppObject * L_19 = V_5;
			Il2CppObject * L_20 = TypeCoercionUtility_CoerceType_m3345524962(__this, L_18, L_19, /*hidden argument*/NULL);
			Int32U5BU5D_t3230847821* L_21 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)1));
			int32_t L_22 = V_2;
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_22);
			Array_SetValue_m2302374076(L_17, L_20, L_21, /*hidden argument*/NULL);
			int32_t L_23 = V_2;
			V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
		}

IL_0075:
		{
			Il2CppObject * L_24 = V_3;
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_0050;
			}
		}

IL_007d:
		{
			IL2CPP_LEAVE(0x93, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_26 = V_3;
			V_4 = ((Il2CppObject *)IsInst(L_26, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_27 = V_4;
			if (!L_27)
			{
				goto IL_0092;
			}
		}

IL_008b:
		{
			Il2CppObject * L_28 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_28);
		}

IL_0092:
		{
			IL2CPP_END_FINALLY(127)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0093:
	{
		Il2CppArray * L_29 = V_1;
		return L_29;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
extern const Il2CppType* Nullable_1_t1122404262_0_0_0_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t TypeCoercionUtility_IsNullable_m187284083_MetadataUsageId;
extern "C"  bool TypeCoercionUtility_IsNullable_m187284083 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeCoercionUtility_IsNullable_m187284083_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = TypeCoercionUtility_GetTypeInfo_m3198666030(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Nullable_1_t1122404262_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_4 = ___type0;
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(83 /* System.Type System.Type::GetGenericTypeDefinition() */, L_4);
		bool L_6 = Type_Equals_m3120004755(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C"  void TypeCoercionUtility__ctor_m3724068137 (TypeCoercionUtility_t3154211006 * __this, const MethodInfo* method)
{
	{
		__this->set_allowNullValueTypes_1((bool)1);
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
