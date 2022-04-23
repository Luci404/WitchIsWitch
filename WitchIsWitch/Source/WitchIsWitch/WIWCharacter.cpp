// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWCharacter.h"

#include "WIWItem.h"
#include "WIWInteractable.h"
#include "WIWPickupable.h"

#include "Components/SceneComponent.h"

AWIWCharacter::AWIWCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	HandLocator = CreateDefaultSubobject<USceneComponent>(TEXT("HandLocator"));
	HandLocator->AttachTo(RootComponent);
}

void AWIWCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Interact", EInputEvent::IE_Pressed, this, &AWIWCharacter::OnInteractPressed);
}

void AWIWCharacter::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	FVector StartLocation = CameraLocation;
	FVector EndLocation = CameraLocation + (CameraRotation.Vector() * InteractionDistance);

	FHitResult hitResult;

	UWorld* world = GetWorld();
	if (ensure(world))
	{
		world->LineTraceSingleByChannel(hitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility, FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam);
	}

	HoveredActor = hitResult.bBlockingHit ? hitResult.Actor.Get() : nullptr;
}

void AWIWCharacter::OnInteractPressed()
{
	if (HoveredActor != nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
	{
		Local_Interact(this, HoveredActor);
		Server_Interact(this, HoveredActor);
	}
	else if (HoveredActor != nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		Local_Pickup(this, HoveredActor);
		Server_Pickup(this, HoveredActor);
	}
}

void AWIWCharacter::Local_Interact(AActor* interactor, AActor* interactionActor)
{
	if (interactionActor != nullptr && interactionActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
	{
		AWIWCharacter* character = Cast<AWIWCharacter>(interactor);
		if (ensure(character))
		{
			IWIWInteractable::Execute_Interact(interactionActor, character);
		}
	}
}

void AWIWCharacter::Server_Interact_Implementation(AActor* interactor, AActor* interactionActor)
{
	Multicast_Interact(interactor, interactionActor);
}

void AWIWCharacter::Multicast_Interact_Implementation(AActor* interactor, AActor* interactionActor)
{
	if (this == interactor) return;
	Local_Interact(interactor, interactionActor);
}

void AWIWCharacter::Local_Pickup(AActor* interactor, AActor* interactionActor)
{
	if (interactionActor != nullptr && interactionActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		AWIWCharacter* character = Cast<AWIWCharacter>(interactor);
		if (ensure(character))
		{
			IWIWPickupable::Execute_Pickup(interactionActor, character);
		}
	}
}

void AWIWCharacter::Server_Pickup_Implementation(AActor* interactor, AActor* interactionActor)
{
	Multicast_Pickup(interactor, interactionActor);
}

void AWIWCharacter::Multicast_Pickup_Implementation(AActor* interactor, AActor* interactionActor)
{
	if (this == interactor) return;
	Local_Pickup(interactor, interactionActor);
}