// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WIWPickupable.h"
#include "WIWItem.generated.h"

class UStaticMeshComponent;

UCLASS()
class WITCHISWITCH_API AWIWItem : public AActor, public IWIWPickupable
{
	GENERATED_BODY()
	
public:	
	AWIWItem();

	void Pickup_Implementation();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* Mesh;
};
