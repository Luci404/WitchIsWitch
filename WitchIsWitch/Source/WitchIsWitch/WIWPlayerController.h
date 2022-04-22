// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WIWPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class WITCHISWITCH_API AWIWPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	void SetupInputComponent() override;

private:
	UFUNCTION()
	void OnInteractPressed();
};
