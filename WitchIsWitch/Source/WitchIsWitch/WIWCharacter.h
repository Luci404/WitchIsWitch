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
	
	void BeginPlay() override;
	void Tick(float deltaTime) override;

	UFUNCTION()
	void OnInteractPressed();

	UFUNCTION()
	void OnUsePressed();

	UFUNCTION(BlueprintCallable)
	int GetPlayerID() const;

	void Local_Interact(AActor* interactionActor);

	UFUNCTION(Server, Reliable)
	void Server_Interact(uint16 interactorID, AActor* interactionActor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Interact(uint16 interactorID, AActor* interactionActor);

	void Local_Pickup(AActor* interactionActor);
	
	UFUNCTION(Server, Reliable)
	void Server_Pickup(uint16 interactorID, AActor* interactionActor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Pickup(uint16 interactorID, AActor* interactionActor);

	void Local_Use();

	UFUNCTION(Server, Reliable)
	void Server_Use(uint16 interactorID);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_Use(uint16 interactorID);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* HandLocator;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AWIWItem* HeldItem;

	UPROPERTY(EditAnywhere)
	float InteractionDistance = 500.0f;

	AActor* HoveredActor;

private:
	uint16 m_PlayerID;
};
