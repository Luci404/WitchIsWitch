// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWInteractable() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWInteractable_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	void UWIWInteractable::StaticRegisterNativesUWIWInteractable()
	{
	}
	UClass* Z_Construct_UClass_UWIWInteractable_NoRegister()
	{
		return UWIWInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UWIWInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWIWInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWInteractable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "WIWInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWIWInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWIWInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWIWInteractable_Statics::ClassParams = {
		&UWIWInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWIWInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWIWInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWIWInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWIWInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWIWInteractable, 1733897633);
	template<> WITCHISWITCH_API UClass* StaticClass<UWIWInteractable>()
	{
		return UWIWInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWIWInteractable(Z_Construct_UClass_UWIWInteractable, &UWIWInteractable::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("UWIWInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWIWInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
