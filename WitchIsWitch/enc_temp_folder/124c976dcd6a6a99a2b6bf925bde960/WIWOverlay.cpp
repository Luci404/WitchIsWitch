// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWOverlay.h"

#include "Components/CanvasPanel.h"

void UWIWOverlay::SetInteractVisibility(bool visible)
{
	InteractCanvasPanel->SetVisibility(visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void UWIWOverlay::SetPickupVisibility(bool visible)
{
	PickupCanvasPanel->SetVisibility(visible ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}
