#pragma once

#include "WIWPickupable.generated.h"

class AWIWCharacter;

UINTERFACE(BlueprintType)
class WITCHISWITCH_API UWIWPickupable : public UInterface
{
	GENERATED_BODY()
};

class WITCHISWITCH_API IWIWPickupable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Pickup(AWIWCharacter* interactor);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Drop();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Reset();
};