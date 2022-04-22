// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWGameMode() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWGameMode_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	void AWIWGameMode::StaticRegisterNativesAWIWGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWIWGameMode_NoRegister()
	{
		return AWIWGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWIWGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWIWGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWIWGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WIWGameMode.h" },
		{ "ModuleRelativePath", "WIWGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWIWGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWIWGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWIWGameMode_Statics::ClassParams = {
		&AWIWGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWIWGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWIWGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWIWGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWIWGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWIWGameMode, 1189648884);
	template<> WITCHISWITCH_API UClass* StaticClass<AWIWGameMode>()
	{
		return AWIWGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWIWGameMode(Z_Construct_UClass_AWIWGameMode, &AWIWGameMode::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("AWIWGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWIWGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
