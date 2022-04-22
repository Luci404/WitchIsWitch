// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWPlayerController.h"

void AWIWPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", EInputEvent::IE_Pressed, this, &AWIWPlayerController::OnInteractPressed);
}

void AWIWPlayerController::OnInteractPressed()
{

}