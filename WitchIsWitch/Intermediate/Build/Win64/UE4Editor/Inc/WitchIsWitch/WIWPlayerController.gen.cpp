// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WitchIsWitch/WIWPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWIWPlayerController() {}
// Cross Module References
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWPlayerController_NoRegister();
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_WitchIsWitch();
// End Cross Module References
	DEFINE_FUNCTION(AWIWPlayerController::execOnInteractPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractPressed();
		P_NATIVE_END;
	}
	void AWIWPlayerController::StaticRegisterNativesAWIWPlayerController()
	{
		UClass* Class = AWIWPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractPressed", &AWIWPlayerController::execOnInteractPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WIWPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWIWPlayerController, nullptr, "OnInteractPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWIWPlayerController_NoRegister()
	{
		return AWIWPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWIWPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWIWPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_WitchIsWitch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWIWPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWIWPlayerController_OnInteractPressed, "OnInteractPressed" }, // 4067043504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWIWPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WIWPlayerController.h" },
		{ "ModuleRelativePath", "WIWPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWIWPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWIWPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWIWPlayerController_Statics::ClassParams = {
		&AWIWPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWIWPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWIWPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWIWPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWIWPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWIWPlayerController, 1554940720);
	template<> WITCHISWITCH_API UClass* StaticClass<AWIWPlayerController>()
	{
		return AWIWPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWIWPlayerController(Z_Construct_UClass_AWIWPlayerController, &AWIWPlayerController::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("AWIWPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWIWPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
