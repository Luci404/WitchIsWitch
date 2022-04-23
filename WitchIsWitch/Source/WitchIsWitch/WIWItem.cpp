#include "WIWItem.h"

#include "Components/StaticMeshComponent.h" 

#include "WIWCharacter.h"

AWIWItem::AWIWItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

void AWIWItem::BeginPlay()
{
	m_InitialTransform = GetActorTransform();
}

void AWIWItem::Pickup_Implementation(AWIWCharacter* interactor)
{
	UE_LOG(LogTemp, Warning, TEXT("AWIWItem::Pickup"));

	m_Interactor = interactor;
	m_Interactor->HeldItem = this;
	RootComponent->AttachToComponent(m_Interactor->HandLocator, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void AWIWItem::Drop_Implementation()
{
	RootComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	m_Interactor->HeldItem = nullptr;
	m_Interactor = nullptr;
}

void AWIWItem::Reset_Implementation()
{
	if (IsValid(m_Interactor))
	{
		Drop();
	}
	SetActorTransform(m_InitialTransform);
}