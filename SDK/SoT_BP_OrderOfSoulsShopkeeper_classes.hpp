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

// BlueprintGeneratedClass BP_OrderOfSoulsShopkeeper.BP_OrderOfSoulsShopkeeper_C
// 0x0008 (0x04C8 - 0x04C0)
class ABP_OrderOfSoulsShopkeeper_C : public AShopkeeperInteractionProxy
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrderOfSoulsShopkeeper.BP_OrderOfSoulsShopkeeper_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
