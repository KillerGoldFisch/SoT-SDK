#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C
// 0x0020 (0x0440 - 0x0420)
class Absp_bottle_hanging_light_a_C : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bsp_bottle_hanging_light_a.bsp_bottle_hanging_light_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
