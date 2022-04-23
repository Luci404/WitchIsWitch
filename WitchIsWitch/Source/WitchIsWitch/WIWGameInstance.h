// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "WIWGameInstance.generated.h"

UCLASS()
class WITCHISWITCH_API UWIWGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void CreateSession();

	UFUNCTION(Exec)
	void FindAndJoinSession();

	UPROPERTY(EditAnywhere, AdvancedDisplay, meta = (AllowedClasses = "World"))
	FSoftObjectPath GameLevel;

private:
	virtual void Init() override;
	virtual void Shutdown() override;

	void OnCreateSessionComplete(FName serverName, bool succeeded);
	void OnFindSessionComplete(bool succeeded);
	void OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result);

private:
	IOnlineSessionPtr m_SessionInterface;
	TSharedPtr<FOnlineSessionSearch> m_SessionSearch;
};
