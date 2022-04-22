// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWHUD() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWHUD_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	void AWIWHUD::StaticRegisterNativesAWIWHUD()
	{
	}
	UClass* Z_Construct_UClass_AWIWHUD_NoRegister()
	{
		return AWIWHUD::StaticClass();
	}
	struct Z_Construct_UClass_AWIWHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWIWHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWIWHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "WIWHUD.h" },
		{ "ModuleRelativePath", "WIWHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWIWHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWIWHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWIWHUD_Statics::ClassParams = {
		&AWIWHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWIWHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWIWHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWIWHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWIWHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWIWHUD, 3407668859);
	template<> WITCHISWITCH_API UClass* StaticClass<AWIWHUD>()
	{
		return AWIWHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWIWHUD(Z_Construct_UClass_AWIWHUD, &AWIWHUD::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("AWIWHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWIWHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
