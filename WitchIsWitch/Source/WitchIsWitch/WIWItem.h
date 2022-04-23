// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WIWPickupable.h"
#include "WIWItem.generated.h"

class UStaticMeshComponent;
class AWIWCharacter;

UCLASS()
class WITCHISWITCH_API AWIWItem : public AActor, public IWIWPickupable
{
	GENERATED_BODY()
	
public:	
	AWIWItem();

	void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	AWIWCharacter* GetInteractor();

	void Pickup_Implementation(AWIWCharacter* interactor);
	void Drop_Implementation();
	void Reset_Implementation();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;

private:
	AWIWCharacter* m_Interactor;
	FTransform m_InitialTransform;
};
