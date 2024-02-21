// Fill out your copyright notice in the Description page of Project Settings.


#include "NuclearNightmareGameInstance.h"
#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Online/OnlineSessionNames.h"
#include "Kismet/GameplayStatics.h"

UNuclearNightmareGameInstance::UNuclearNightmareGameInstance()
{
	
}

void UNuclearNightmareGameInstance::OnFindSessionComplete(bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("OnFindSessionComplete, Succeeded: %d"), Succeeded);
	if(Succeeded)
	{
		TArray<FOnlineSessionSearchResult> SearchResults = SessionSearch->SearchResults;

		UE_LOG(LogTemp, Warning, TEXT("SearchResults, Server Count: %d"), SearchResults.Num());
		if(SearchResults.Num())
		{
			UE_LOG(LogTemp, Warning, TEXT("Joining Server..."));
			SessionInterface->JoinSession(0, "My Session", SearchResults[0]);
		}
	}
}

void UNuclearNightmareGameInstance::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	UE_LOG(LogTemp, Warning, TEXT("OnJoinedSessionComplete"));
	if(APlayerController* PCcontroller = UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		FString JoinAddress = "";
		SessionInterface->GetResolvedConnectString(SessionName, JoinAddress);
		if(JoinAddress != "")
		{
			PCcontroller->ClientTravel(JoinAddress, TRAVEL_Absolute);
		}
	}
}

void UNuclearNightmareGameInstance::Init()
{
	Super::Init();

	if(IOnlineSubsystem* SubSystem = IOnlineSubsystem::Get())
	{
		SessionInterface = SubSystem->GetSessionInterface();
		if(SessionInterface.IsValid())
		{
			//Bind Delegates Here
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UNuclearNightmareGameInstance::OnCreateSessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UNuclearNightmareGameInstance::OnFindSessionComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UNuclearNightmareGameInstance::OnJoinSessionComplete);
		}
	}
}

void UNuclearNightmareGameInstance::OnCreateSessionComplete(FName ServerName, bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("OnCreateSessionComplete, Succeeded: %d"), Succeeded);

	if(Succeeded)
	{
		GetWorld()->ServerTravel("/Game/Maps/Lobby?listen");
	}
}

void UNuclearNightmareGameInstance::CreateServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Creating Server..."));
	
	FOnlineSessionSettings SessionSettings;
	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	//Change LanMatch to false for steam package build
	SessionSettings.bIsLANMatch = true;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.NumPublicConnections = 4;
	SessionInterface->CreateSession(0, FName("My Session"), SessionSettings);
}

void UNuclearNightmareGameInstance::JoinServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Joining Server..."));
	
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->bIsLanQuery = true; //Is LanMatch
	SessionSearch->MaxSearchResults = 10000;
	SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
	SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
}
