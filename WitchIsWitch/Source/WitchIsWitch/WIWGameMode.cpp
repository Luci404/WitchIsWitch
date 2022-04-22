// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWGameMode.h"

#include "WIWPlayerController.h"
#include "WIWCharacter.h"

AWIWGameMode::AWIWGameMode()
{
	PlayerControllerClass = AWIWPlayerController::StaticClass();
	DefaultPawnClass = AWIWCharacter::StaticClass();
}