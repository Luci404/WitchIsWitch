// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWGameInstance() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWGameInstance_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	void UWIWGameInstance::StaticRegisterNativesUWIWGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UWIWGameInstance_NoRegister()
	{
		return UWIWGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWIWGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWIWGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WIWGameInstance.h" },
		{ "ModuleRelativePath", "WIWGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWIWGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWIWGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWIWGameInstance_Statics::ClassParams = {
		&UWIWGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWIWGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWIWGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWIWGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWIWGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWIWGameInstance, 2847843778);
	template<> WITCHISWITCH_API UClass* StaticClass<UWIWGameInstance>()
	{
		return UWIWGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWIWGameInstance(Z_Construct_UClass_UWIWGameInstance, &UWIWGameInstance::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("UWIWGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWIWGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
