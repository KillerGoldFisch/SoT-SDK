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

// BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Mythical.BP_Treasure_Artifact_Proxy_DVR_Mythical_C
// 0x0000 (0x07B8 - 0x07B8)
class ABP_Treasure_Artifact_Proxy_DVR_Mythical_C : public ABP_TreasureArtifact_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Treasure_Artifact_Proxy_DVR_Mythical.BP_Treasure_Artifact_Proxy_DVR_Mythical_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
