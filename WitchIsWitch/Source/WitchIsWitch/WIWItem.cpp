#include "WIWItem.h"

#include "Components/StaticMeshComponent.h" 

AWIWItem::AWIWItem()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
}