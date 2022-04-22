// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWOverlay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWOverlay() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWOverlay_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_UWIWOverlay();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void UWIWOverlay::StaticRegisterNativesUWIWOverlay()
	{
	}
	UClass* Z_Construct_UClass_UWIWOverlay_NoRegister()
	{
		return UWIWOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UWIWOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractCanvasPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractCanvasPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWIWOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWOverlay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WIWOverlay.h" },
		{ "ModuleRelativePath", "WIWOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWOverlay_Statics::NewProp_InteractCanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WIWOverlay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWIWOverlay_Statics::NewProp_InteractCanvasPanel = { "InteractCanvasPanel", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWIWOverlay, InteractCanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWIWOverlay_Statics::NewProp_InteractCanvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWIWOverlay_Statics::NewProp_InteractCanvasPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWIWOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWIWOverlay_Statics::NewProp_InteractCanvasPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWIWOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWIWOverlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWIWOverlay_Statics::ClassParams = {
		&UWIWOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWIWOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWIWOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWIWOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWIWOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWIWOverlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWIWOverlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWIWOverlay, 3298356636);
	template<> WITCHISWITCH_API UClass* StaticClass<UWIWOverlay>()
	{
		return UWIWOverlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWIWOverlay(Z_Construct_UClass_UWIWOverlay, &UWIWOverlay::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("UWIWOverlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWIWOverlay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
