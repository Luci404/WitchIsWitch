// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWOverlay.h"

#include "Components/CanvasPanel.h"

#include "WIWPlayerController.h"
#include "WIWInteractable.h"
#include "WIWPickupable.h"

void UWIWOverlay::NativeConstruct()
{

}

void UWIWOverlay::Tick(float deltaTime)
{
	UWorld* world = GetWorld();
	AWIWPlayerController* playerController = world->GetFirstPlayerController<AWIWPlayerController>();
	if (IsValid(playerController))
	{
		if (playerController->HoveredActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
		{
			SetInteractVisibility(true);
		}
		else if (playerController->HoveredActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
		{
			SetPickupVisibility(true);
		}
		else
		{
			SetInteractVisibility(false);
			SetPickupVisibility(false);
		}
	}
}

void UWIWOverlay::SetInteractVisibility(bool visible)
{
	InteractCanvasPanel->SetVisibility(visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void UWIWOverlay::SetPickupVisibility(bool visible)
{
	PickupCanvasPanel->SetVisibility(visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}
