// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_NPC_AnimatedItemInterface_C::PlayItemAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C.PlayItemAnimation");

	UBP_NPC_AnimatedItemInterface_C_PlayItemAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
