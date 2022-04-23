#include "WIWItem.h"

#include "Components/StaticMeshComponent.h" 

#include "WIWCharacter.h"

AWIWItem::AWIWItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	bReplicates = true;
}

void AWIWItem::BeginPlay()
{
	m_InitialTransform = GetActorTransform();
	
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Test"));
		SetOwner(GetWorld()->GetFirstPlayerController()->GetPawn());
	}
}

// Pickup
void AWIWItem::Pickup_Implementation(AWIWCharacter* interactor)
{
	m_Interactor = interactor;
	m_Interactor->HeldItem = this;
	RootComponent->AttachToComponent(m_Interactor->HandLocator, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

// Drop
void AWIWItem::Drop_Implementation()
{
	RootComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	m_Interactor->HeldItem = nullptr;
	m_Interactor = nullptr;
}

// Reset
void AWIWItem::Reset_Implementation()
{
	if (IsValid(m_Interactor))
	{
		IWIWPickupable::Execute_Drop(this);
	}
	SetActorTransform(m_InitialTransform);
}
