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

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 OutJsonString                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString");

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;

	return params.ReturnValue;
}


// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InJsonString                   (Parm, ZeroConstructor)
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct");

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
