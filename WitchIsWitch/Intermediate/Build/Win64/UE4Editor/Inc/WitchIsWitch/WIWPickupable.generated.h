// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WITCHISWITCH_WIWPickupable_generated_h
#error "WIWPickupable.generated.h already included, missing '#pragma once' in WIWPickupable.h"
#endif
#define WITCHISWITCH_WIWPickupable_generated_h

#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_SPARSE_DATA
#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_RPC_WRAPPERS \
	virtual bool Pickup_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPickup);


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Pickup_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPickup);


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_EVENT_PARMS \
	struct WIWPickupable_eventPickup_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WIWPickupable_eventPickup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_CALLBACK_WRAPPERS
#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWIWPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWIWPickupable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWIWPickupable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWIWPickupable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWIWPickupable(UWIWPickupable&&); \
	NO_API UWIWPickupable(const UWIWPickupable&); \
public:


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWIWPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWIWPickupable(UWIWPickupable&&); \
	NO_API UWIWPickupable(const UWIWPickupable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWIWPickupable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWIWPickupable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWIWPickupable)


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWIWPickupable(); \
	friend struct Z_Construct_UClass_UWIWPickupable_Statics; \
public: \
	DECLARE_CLASS(UWIWPickupable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WitchIsWitch"), NO_API) \
	DECLARE_SERIALIZER(UWIWPickupable)


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_GENERATED_UINTERFACE_BODY() \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_GENERATED_UINTERFACE_BODY() \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWIWPickupable() {} \
public: \
	typedef UWIWPickupable UClassType; \
	typedef IWIWPickupable ThisClass; \
	static bool Execute_Pickup(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IWIWPickupable() {} \
public: \
	typedef UWIWPickupable UClassType; \
	typedef IWIWPickupable ThisClass; \
	static bool Execute_Pickup(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_5_PROLOG \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_EVENT_PARMS


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_SPARSE_DATA \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_RPC_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_CALLBACK_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_SPARSE_DATA \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_CALLBACK_WRAPPERS \
	WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WITCHISWITCH_API UClass* StaticClass<class UWIWPickupable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID WitchIsWitch_Source_WitchIsWitch_WIWPickupable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
