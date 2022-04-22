// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWPlayerController.h"

#include "WIWInteractable.h"
#include "WIWPickupable.h"

#include "Blueprint/UserWidget.h"

void AWIWPlayerController::BeginPlay()
{
}

void AWIWPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", EInputEvent::IE_Pressed, this, &AWIWPlayerController::OnInteractPressed);
}

void AWIWPlayerController::OnInteractPressed()
{
	if (HoveredActor != nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
	{
	}
	else if (HoveredActor != nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{

	}
}

void AWIWPlayerController::Tick(float deltaTime)
{
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

	HoveredActor = hitResult.bBlockingHit ? hitResult.Actor : nullptr;
}