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

// BlueprintGeneratedClass BP_Campaign018_ReapersBones_01_i_Proxy.BP_Campaign018_ReapersBones_01_i_Proxy_C
// 0x0008 (0x07E8 - 0x07E0)
class ABP_Campaign018_ReapersBones_01_i_Proxy_C : public ABP_Campaign018_ReapersBones_Proxy_Base_C
{
public:
	class UInteractableComponent*                      Interactable_1;                                           // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign018_ReapersBones_01_i_Proxy.BP_Campaign018_ReapersBones_01_i_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
