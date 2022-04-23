// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WIWCharacter.generated.h"

class USceneComponent;
class AWIWItem;

UCLASS()
class WITCHISWITCH_API AWIWCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AWIWCharacter();

public:	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void Tick(float deltaTime) override;

	UFUNCTION()
	void OnInteractPressed();

	void Local_Interact(AActor* interactor, AActor* interactionActor);

	UFUNCTION(Server, Reliable)
	void Server_Interact(AActor* interactor, AActor* interactionActor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Interact(AActor* interactor, AActor* interactionActor);

	void Local_Pickup(AActor* interactor, AActor* interactionActor);
	
	UFUNCTION(Server, Reliable)
	void Server_Pickup(AActor* interactor, AActor* interactionActor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Pickup(AActor* interactor, AActor* interactionActor);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* HandLocator;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AWIWItem* HeldItem;

	UPROPERTY(EditAnywhere)
	float InteractionDistance = 500.0f;

	AActor* HoveredActor;
};
