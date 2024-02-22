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
	MySessionName = FName("My Session");
}

void UNuclearNightmareGameInstance::OnFindSessionComplete(bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("OnFindSessionComplete, Succeeded: %d"), Succeeded);
	ServerRefreshFinished.Broadcast(Succeeded);
	
	if(Succeeded)
	{

		int8 ArrayIndex = -1;
		for(FOnlineSessionSearchResult Result : SessionSearch->SearchResults)
		{
			++ArrayIndex;
			if(!Result.IsValid())
				continue;

			FServerInfo Info;
			FString ServerName = "New Server";
			FString HostName = "Local Host";

			Result.Session.SessionSettings.Get(FName("SERVER_NAME_KEY"), ServerName);
			Result.Session.SessionSettings.Get(FName("SERVER_HOSTNAME_KEY"), HostName);
			
			Info.ServerName = ServerName;
			Info.MaxPlayers = Result.Session.SessionSettings.NumPublicConnections;
			Info.CurrentPlayers = Info.MaxPlayers - Result.Session.NumOpenPublicConnections;
			Info.ServerArrayIndex = ArrayIndex;
			Info.setPlayerCount();
			Info.IsLan = Result.Session.SessionSettings.bIsLANMatch;
			Info.Ping = Result.PingInMs;
			
			ServerListDelegate.Broadcast(Info);
		}

		UE_LOG(LogTemp, Warning, TEXT("SearchResults, Server Count: %d"), SessionSearch->SearchResults.Num());
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

void UNuclearNightmareGameInstance::OnCreateSessionComplete(FName SessionName, bool Succeeded)
{
	UE_LOG(LogTemp, Warning, TEXT("OnCreateSessionComplete, Succeeded: %d"), Succeeded);

	if(Succeeded)
	{
		GetWorld()->ServerTravel("/Game/Maps/Lobby?listen");
	}
}

void UNuclearNightmareGameInstance::CreateServer(FString SessionName, bool IsLan)
{
	UE_LOG(LogTemp, Warning, TEXT("Creating Server..."));
	
	FOnlineSessionSettings SessionSettings;
	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	//Change LanMatch to false for steam package build
	SessionSettings.bIsLANMatch = IsLan;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.NumPublicConnections = 4;

	SessionSettings.Set(FName("SERVER_NAME_KEY"), SessionName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	SessionSettings.Set(FName("SERVER_HOSTNAME_KEY"), SessionName, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	
	SessionInterface->CreateSession(0, MySessionName, SessionSettings);
}

void UNuclearNightmareGameInstance::FindServers(bool IsLan)
{
	UE_LOG(LogTemp, Warning, TEXT("Finding Servers..."));
	StartLookingForServers.Broadcast();
	
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->bIsLanQuery = IsLan;
	SessionSearch->MaxSearchResults = 10000;
	SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
	SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
}

void UNuclearNightmareGameInstance::JoinServer(int32 ServerIndex)
{
	FOnlineSessionSearchResult Result = SessionSearch->SearchResults[ServerIndex];
	if(Result.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Joining server at index: %d"), ServerIndex);
		SessionInterface->JoinSession(0, MySessionName, Result);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to join server at index: %d"), ServerIndex);
	}
}
