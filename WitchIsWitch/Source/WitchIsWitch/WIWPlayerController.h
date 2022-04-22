// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WIWPlayerController.generated.h"

class UWIWOverlay;
/**
 * 
 */
UCLASS()
class WITCHISWITCH_API AWIWPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;
	void SetupInputComponent() override;
	void Tick(float deltaTime) override;

private:
	UFUNCTION()
	void OnInteractPressed();

public:
	UPROPERTY(EditAnywhere)
	float InteractionDistance = 500.0f;

	TWeakObjectPtr<AActor> HoveredActor;
};
