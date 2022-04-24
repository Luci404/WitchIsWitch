#include "WIWItem.h"

#include "Components/StaticMeshComponent.h" 

#include "WIWCharacter.h"

AWIWItem::AWIWItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);
	RootComponent = Mesh;

	bReplicates = true;
}

void AWIWItem::BeginPlay()
{
	InitialTransform = GetActorTransform();
	
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Test"));
		SetOwner(GetWorld()->GetFirstPlayerController()->GetPawn());
	}
}

AWIWCharacter* AWIWItem::GetInteractor()
{
	return m_Interactor;
}

void AWIWItem::Pickup_Implementation(AWIWCharacter* interactor)
{
	SetActorHiddenInGame(!interactor->IsLocallyControlled());
	//Mesh->SetVisibility(interactor->IsLocallyControlled());
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	m_Interactor = interactor;
	m_Interactor->HeldItem = this;
	RootComponent->AttachToComponent(m_Interactor->HandLocator, FAttachmentTransformRules::SnapToTargetIncludingScale);
}

void AWIWItem::Drop_Implementation()
{
	RootComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	m_Interactor->HeldItem = nullptr;
	m_Interactor = nullptr;
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	//Mesh->SetVisibility(true);
	SetActorHiddenInGame(false);

}

void AWIWItem::Reset_Implementation()
{
	if (IsValid(m_Interactor))
	{
		IWIWPickupable::Execute_Drop(this);
	}
	SetActorTransform(InitialTransform);
}
