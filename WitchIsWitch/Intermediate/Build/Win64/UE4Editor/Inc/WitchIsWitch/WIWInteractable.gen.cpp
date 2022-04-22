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
	WITCHISWITCH_API UClass* Z_Construct_UClass_AWIWCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IWIWInteractable::execInteract)
	{
		P_GET_OBJECT(AWIWCharacter,Z_Param_interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_interactor);
		P_NATIVE_END;
	}
	void IWIWInteractable::Interact(AWIWCharacter* interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UWIWInteractable::StaticRegisterNativesUWIWInteractable()
	{
		UClass* Class = UWIWInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &IWIWInteractable::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWIWInteractable_Interact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWIWInteractable_Interact_Statics::NewProp_interactor = { "interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WIWInteractable_eventInteract_Parms, interactor), Z_Construct_UClass_AWIWCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWIWInteractable_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWIWInteractable_Interact_Statics::NewProp_interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWIWInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WIWInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWIWInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWIWInteractable, nullptr, "Interact", nullptr, nullptr, sizeof(WIWInteractable_eventInteract_Parms), Z_Construct_UFunction_UWIWInteractable_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWIWInteractable_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWIWInteractable_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWIWInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWIWInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWIWInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWIWInteractable_NoRegister()
	{
		return UWIWInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UWIWInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UWIWInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWIWInteractable_Interact, "Interact" }, // 1707832793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWIWInteractable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
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
	IMPLEMENT_CLASS(UWIWInteractable, 4089004418);
	template<> WITCHISWITCH_API UClass* StaticClass<UWIWInteractable>()
	{
		return UWIWInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWIWInteractable(Z_Construct_UClass_UWIWInteractable, &UWIWInteractable::StaticClass, TEXT("/Script/WitchIsWitch"), TEXT("UWIWInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWIWInteractable);
	static FName NAME_UWIWInteractable_Interact = FName(TEXT("Interact"));
	void IWIWInteractable::Execute_Interact(UObject* O, AWIWCharacter* interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()));
		WIWInteractable_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UWIWInteractable_Interact);
		if (Func)
		{
			Parms.interactor=interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IWIWInteractable*)(O->GetNativeInterfaceAddress(UWIWInteractable::StaticClass())))
		{
			I->Interact_Implementation(interactor);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
