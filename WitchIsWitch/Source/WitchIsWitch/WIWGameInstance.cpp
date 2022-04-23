// Fill out your copyright notice in the Description page of Project Settings.


#include "WIWGameInstance.h"

#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"

#include "Misc/Paths.h" 

void UWIWGameInstance::CreateSession()
{
	UE_LOG(LogTemp, Log, TEXT("Creating an online session..."));

	FOnlineSessionSettings SessionSettings;
	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	SessionSettings.bIsLANMatch = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.NumPublicConnections = 4;

	m_SessionInterface->CreateSession(0, FName("MySession"), SessionSettings);
}

void UWIWGameInstance::FindAndJoinSession()
{
	UE_LOG(LogTemp, Log, TEXT("Searching for online sessions..."));

	m_SessionSearch = MakeShareable(new FOnlineSessionSearch());
	m_SessionSearch->bIsLanQuery = IOnlineSubsystem::Get()->GetSubsystemName() == "NULL" ? true : false;
	m_SessionSearch->MaxSearchResults = 10000; // High max results since we are using the steam test AppID
	m_SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

	m_SessionInterface->FindSessions(0, m_SessionSearch.ToSharedRef());
}

void UWIWGameInstance::Init()
{
	Super::Init();

	if (IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get())
	{
		m_SessionInterface = OnlineSubsystem->GetSessionInterface();
		if (m_SessionInterface.IsValid())
		{
			m_SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UWIWGameInstance::OnCreateSessionComplete);
			m_SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UWIWGameInstance::OnFindSessionComplete);
			m_SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UWIWGameInstance::OnJoinSessionComplete);
		}
	}
}

void UWIWGameInstance::Shutdown()
{
	Super::Shutdown();
	// TODO: End session.
}


void UWIWGameInstance::OnCreateSessionComplete(FName serverName, bool succeeded)
{
	if (succeeded)
	{
		UE_LOG(LogTemp, Log, TEXT("Successfully created an online session."));
		UE_LOG(LogTemp, Log, TEXT("%s?listen"), *FPaths::GetBaseFilename(GameLevel.GetAssetPathString()));
		GetWorld()->ServerTravel(FString::Printf(TEXT("%s?listen"), *FPaths::GetBaseFilename(GameLevel.GetAssetPathString())));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to create an online session."));
	}
}

void UWIWGameInstance::OnFindSessionComplete(bool succeeded)
{
	if (succeeded)
	{
		if (m_SessionSearch != nullptr)
		{
			TArray<FOnlineSessionSearchResult> searchResults = m_SessionSearch->SearchResults;
			UE_LOG(LogTemp, Log, TEXT("Successfully found %d online sessions."), searchResults.Num());
			if (searchResults.Num() > 0)
			{
				m_SessionInterface->JoinSession(0, FName("MySession"), searchResults[0]);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("m_SessionSearch failed validation."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to find an online session."));
	}
}

void UWIWGameInstance::OnJoinSessionComplete(FName sessionName, EOnJoinSessionCompleteResult::Type result)
{
	UE_LOG(LogTemp, Log, TEXT("Successfully joined an online sessions (session name: %s)."), *sessionName.ToString());

	APlayerController* playerController = GetWorld() ? GetWorld()->GetFirstPlayerController() : nullptr;
	if (IsValid(playerController))
	{
		FString resolvedConnectString;
		// Returns the platform specific connection information for joining the match.
		m_SessionInterface->GetResolvedConnectString(sessionName, resolvedConnectString);

		if (!resolvedConnectString.IsEmpty())
		{
			playerController->ClientTravel(resolvedConnectString, ETravelType::TRAVEL_Absolute);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("\"resolvedConnectString\" failed validation."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("\"playerController\" failed validation."));
	}
}