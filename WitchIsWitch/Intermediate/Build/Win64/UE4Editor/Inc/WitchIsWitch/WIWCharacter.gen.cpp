// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWCharacter() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWCharacter_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	void AWIWCharacter::StaticRegisterNativesAWIWCharacter()
	{
	}
	UClass* Z_Construct_UClass_AWIWCharacter_NoRegister()
	{
		return AWIWCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AWIWCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWIWCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWIWCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WIWCharacter.h" },
		{ "ModuleRelativePath", "WIWCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWIWCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWIWCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWIWCharacter_Statics::ClassParams = {
		&AWIWCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWIWCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWIWCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWIWCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWIWCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWIWCharacter, 3384351772);
	template<> WITCHISWITCH_API UClass* StaticClass<AWIWCharacter>()
	{
		return AWIWCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWIWCharacter(Z_Construct_UClass_AWIWCharacter, &AWIWCharacter::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("AWIWCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWIWCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
