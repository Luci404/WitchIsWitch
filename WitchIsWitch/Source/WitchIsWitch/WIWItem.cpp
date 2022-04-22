#include "WIWItem.h"

#include "Components/StaticMeshComponent.h" 

AWIWItem::AWIWItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}

void AWIWItem::Pickup_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("This would be nice..."));
}
