// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WIWOverlay.generated.h"

class UCanvasPanel;

UCLASS()
class WITCHISWITCH_API UWIWOverlay : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* InteractCanvasPanel;
};
