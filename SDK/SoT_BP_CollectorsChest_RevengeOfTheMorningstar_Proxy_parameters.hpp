#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C.GetClosestInteractionPoint
struct ABP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C_GetClosestInteractionPoint_Params
{
	struct FVector*                                    ReferencePosition;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              OutInteractionPointRadius;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CollectorsChest_RevengeOfTheMorningstar_Proxy.BP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C.UserConstructionScript
struct ABP_CollectorsChest_RevengeOfTheMorningstar_Proxy_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
