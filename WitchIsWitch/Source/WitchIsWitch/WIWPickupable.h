#pragma once

#include "WIWPickupable.generated.h"

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
	bool Pickup();
};