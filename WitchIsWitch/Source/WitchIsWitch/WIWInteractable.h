#pragma once

#include "WIWInteractable.generated.h"

class AWIWCharacter;

UINTERFACE(BlueprintType)
class WITCHISWITCH_API UWIWInteractable : public UInterface
{
	GENERATED_BODY()
};

class IWIWInteractable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Interact(AWIWCharacter* interactor);
};
