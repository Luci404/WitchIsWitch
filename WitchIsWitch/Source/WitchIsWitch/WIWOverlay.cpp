// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWOverlay.h"

#include "Components/CanvasPanel.h"

#include "WIWPlayerController.h"
#include "WIWCharacter.h"
#include "WIWInteractable.h"
#include "WIWPickupable.h"

void UWIWOverlay::NativeConstruct()
{
	SetInteractVisibility(false);
	SetPickupVisibility(false);
}

void UWIWOverlay::JankyTick()
{
	UWorld* world = GetWorld();
	AWIWPlayerController* playerController = IsValid(world) ? world->GetFirstPlayerController<AWIWPlayerController>() : nullptr;
	AWIWCharacter* character = IsValid(playerController) ? playerController->GetPawn<AWIWCharacter>() : nullptr;

	if (IsValid(character))
	{
		if (character->HoveredActor != nullptr && character->HoveredActor->GetClass()->ImplementsInterface(UWIWInteractable::StaticClass()))
		{
			SetInteractVisibility(true);
			SetPickupVisibility(false);
		}
		else if (character->HoveredActor != nullptr && character->HoveredActor->GetClass()->ImplementsInterface(UWIWPickupable::StaticClass()))
		{
			SetInteractVisibility(false);
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
