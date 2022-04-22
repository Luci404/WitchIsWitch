// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWCharacter.h"

// Sets default values
AWIWCharacter::AWIWCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWIWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWIWCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWIWCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

