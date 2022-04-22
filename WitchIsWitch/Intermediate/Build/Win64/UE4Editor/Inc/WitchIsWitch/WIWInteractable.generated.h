// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWIWCharacter;
#ifdef WITCHISWITCH_WIWInteractable_generated_h
#error "WIWInteractable.generated.h already included, missing '#pragma once' in WIWInteractable.h"
#endif
#define WITCHISWITCH_WIWInteractable_generated_h

#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_SPARSE_DATA
#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_RPC_WRAPPERS \
	virtual void Interact_Implementation(AWIWCharacter* interactor) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(AWIWCharacter* interactor) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_EVENT_PARMS \
	struct WIWInteractable_eventInteract_Parms \
	{ \
		AWIWCharacter* interactor; \
	};


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_CALLBACK_WRAPPERS
#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWIWInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWIWInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWIWInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWIWInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWIWInteractable(UWIWInteractable&&); \
	NO_API UWIWInteractable(const UWIWInteractable&); \
public:


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWIWInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWIWInteractable(UWIWInteractable&&); \
	NO_API UWIWInteractable(const UWIWInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWIWInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWIWInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWIWInteractable)


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWIWInteractable(); \
	friend struct Z_Construct_UClass_UWIWInteractable_Statics; \
public: \
	DECLARE_CLASS(UWIWInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WitchIsWitch"), NO_API) \
	DECLARE_SERIALIZER(UWIWInteractable)


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_GENERATED_UINTERFACE_BODY() \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_GENERATED_UINTERFACE_BODY() \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWIWInteractable() {} \
public: \
	typedef UWIWInteractable UClassType; \
	typedef IWIWInteractable ThisClass; \
	static void Execute_Interact(UObject* O, AWIWCharacter* interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IWIWInteractable() {} \
public: \
	typedef UWIWInteractable UClassType; \
	typedef IWIWInteractable ThisClass; \
	static void Execute_Interact(UObject* O, AWIWCharacter* interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_7_PROLOG \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_EVENT_PARMS


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_SPARSE_DATA \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_RPC_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_CALLBACK_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_SPARSE_DATA \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_CALLBACK_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WITCHISWITCH_API UClass* StaticClass<class UWIWInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WitchIsWitch_Source_WitchIsWitch_WIWInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
