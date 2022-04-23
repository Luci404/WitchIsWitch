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
	UE_LOG(LogTemp, Warning, TEXT("This would be nice..."));
	m_Interactor = interactor;
	AttachToComponent(m_Interactor->HandLocator, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void AWIWItem::Reset_Implementation()
{
	m_Interactor->HandLocator->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	SetActorTransform(m_InitialTransform);
	m_Interactor = nullptr;
}