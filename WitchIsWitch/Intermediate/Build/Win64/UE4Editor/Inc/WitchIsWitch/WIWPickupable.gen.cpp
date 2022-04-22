// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWPickupable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWPickupable() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWPickupable_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWPickupable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	DEFINE_FUNCTION(IWIWPickupable::execPickup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Pickup_Implementation();
		P_NATIVE_END;
	}
	bool IWIWPickupable::Pickup()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
		WIWPickupable_eventPickup_Parms Parms;
		return Parms.ReturnValue;
	}
	void UWIWPickupable::StaticRegisterNativesUWIWPickupable()
	{
		UClass* Class = UWIWPickupable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &IWIWPickupable::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWIWPickupable_Pickup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WIWPickupable_eventPickup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WIWPickupable_eventPickup_Parms), &Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WIWPickupable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWIWPickupable, nullptr, "Pickup", nullptr, nullptr, sizeof(WIWPickupable_eventPickup_Parms), Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWIWPickupable_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWIWPickupable_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWIWPickupable_NoRegister()
	{
		return UWIWPickupable::StaticClass();
	}
	struct Z_Construct_UClass_UWIWPickupable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWIWPickupable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWIWPickupable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWIWPickupable_Pickup, "Pickup" }, // 223870840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWPickupable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WIWPickupable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWIWPickupable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWIWPickupable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWIWPickupable_Statics::ClassParams = {
		&UWIWPickupable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWIWPickupable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWIWPickupable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWIWPickupable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWIWPickupable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWIWPickupable, 542906286);
	template<> WITCHISWITCH_API UClass* StaticClass<UWIWPickupable>()
	{
		return UWIWPickupable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWIWPickupable(Z_Construct_UClass_UWIWPickupable, &UWIWPickupable::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("UWIWPickupable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWIWPickupable);
	static FName NAME_UWIWPickupable_Pickup = FName(TEXT("Pickup"));
	bool IWIWPickupable::Execute_Pickup(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()));
		WIWPickupable_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWIWPickupable_Pickup);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWIWPickupable*)(O->GetNativeInterfaceAddress(UWIWPickupable::StaticClass())))
		{
			Parms.ReturnValue = I->Pickup_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
