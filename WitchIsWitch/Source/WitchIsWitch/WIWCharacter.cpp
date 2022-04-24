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
	PlayerInputComponent->BindAction("Use", EInputEvent::IE_Pressed, this, &AWIWCharacter::OnUsePressed);
}

void AWIWCharacter::BeginPlay()
{
	Super::BeginPlay();

	m_PlayerID = HasAuthority() ? 0 : 1;
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
		world->LineTraceSingleByChannel(hitResult, StartLocation, EndLocation, ECollisionChannel::ECC_GameTraceChannel1, FCollisionQueryParams::DefaultQueryParam, FCollisionResponseParams::DefaultResponseParam);
	}

	HoveredActor = hitResult.bBlockingHit && !hitResult.Component->ComponentHasTag("InteractBlock") ? hitResult.Actor.Get() : nullptr;
}

void AWIWCharacter::OnInteractPressed()
{
	if (HoveredActor != nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
	{
		Local_Interact(HoveredActor);
		Server_Interact(m_PlayerID, HoveredActor);
	}
	else if (HoveredActor != nullptr && HeldItem == nullptr && HoveredActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		Local_Pickup(HoveredActor);
		Server_Pickup(m_PlayerID, HoveredActor);
	}
}

void AWIWCharacter::OnUsePressed()
{
	if (HeldItem != nullptr && HeldItem->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		Local_Use();
		Server_Use(m_PlayerID);
	}
}

int AWIWCharacter::GetPlayerID() const
{
	return static_cast<int>(m_PlayerID);
}

void AWIWCharacter::Local_Interact(AActor* interactionActor)
{
	if (interactionActor != nullptr && interactionActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
	{
		IWIWInteractable::Execute_Interact(interactionActor, this);
	}
}

void AWIWCharacter::Server_Interact_Implementation(uint16 interactorID, AActor* interactionActor)
{
	Multicast_Interact(interactorID, interactionActor);
}

void AWIWCharacter::Multicast_Interact_Implementation(uint16 interactorID, AActor* interactionActor)
{
	if (interactorID == m_PlayerID) return;
	Local_Interact(interactionActor);
}

void AWIWCharacter::Local_Pickup(AActor* interactionActor)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWCharacter::Local_Pickup(), HasAuthority: %s"), HasAuthority() ? TEXT("true") : TEXT("false"));

	if (interactionActor != nullptr && interactionActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		IWIWPickupable::Execute_Pickup(interactionActor, this);
	}
}

void AWIWCharacter::Server_Pickup_Implementation(uint16 interactorID, AActor* interactionActor)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWCharacter::Server_Pickup(), HasAuthority: %s"), HasAuthority() ? TEXT("true") : TEXT("false"));

	Multicast_Pickup(interactorID, interactionActor);
}

void AWIWCharacter::Multicast_Pickup_Implementation(uint16 interactorID, AActor* interactionActor)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWCharacter::Multicast_Pickup(), HasAuthority: %s"), HasAuthority() ? TEXT("true") : TEXT("false"));

	if (interactorID == m_PlayerID) return;
	Local_Pickup(interactionActor);
}

void AWIWCharacter::Local_Use()
{
	if (HeldItem != nullptr && HeldItem->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
	{
		IWIWPickupable::Execute_Use(HeldItem);
	}
}

void AWIWCharacter::Server_Use_Implementation(uint16 interactorID)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWCharacter::Server_Use_Implementation(), HasAuthority: %s"), HasAuthority() ? TEXT("true") : TEXT("false"));

	Multicast_Use(interactorID);
}

void AWIWCharacter::Multicast_Use_Implementation(uint16 interactorID)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWCharacter::Multicast_Use_Implementation(), HasAuthority: %s"), HasAuthority() ? TEXT("true") : TEXT("false"));

	if (interactorID == m_PlayerID) return;
	Local_Use();
}