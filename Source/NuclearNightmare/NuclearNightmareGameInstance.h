// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "interfaces/OnlineSessionInterface.h"
#include "NuclearNightmareGameInstance.generated.h"

class IOnlineSession;

USTRUCT(BlueprintType)
struct FServerInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FString ServerName;

	UPROPERTY(BlueprintReadOnly)
	FString PlayerCountStr;
	
	UPROPERTY(BlueprintReadOnly)
	int32 CurrentPlayers;

	UPROPERTY(BlueprintReadOnly)
	bool IsLan;

	UPROPERTY(BlueprintReadOnly)
	int32 Ping;
	
	UPROPERTY(BlueprintReadOnly)
	int32 MaxPlayers;

	UPROPERTY(BlueprintReadOnly)
	int32 ServerArrayIndex;

	void setPlayerCount()
	{
		PlayerCountStr = FString(FString::FromInt(CurrentPlayers) + "/" + FString::FromInt(MaxPlayers));
	}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerDelegate, FServerInfo, ServerListDel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FServerRefreshFinished, bool, FoundServers);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartLookingForServers);

/**
 * 
 */
UCLASS()
class NUCLEARNIGHTMARE_API UNuclearNightmareGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UNuclearNightmareGameInstance();

protected:
	FName MySessionName;
	
	UPROPERTY(BlueprintAssignable)
	FServerDelegate ServerListDelegate;

	UPROPERTY(BlueprintAssignable)
	FServerRefreshFinished ServerRefreshFinished;

	UPROPERTY(BlueprintAssignable)
	FStartLookingForServers StartLookingForServers;
	
	IOnlineSessionPtr SessionInterface;

	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	virtual void OnFindSessionComplete(bool Succeeded);

	virtual void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	
	virtual void Init() override;

	virtual void OnCreateSessionComplete(FName SessionName, bool Succeeded);

	UFUNCTION(BlueprintCallable)
	void CreateServer(FString SessionName, bool IsLan);

	UFUNCTION(BlueprintCallable)
	void FindServers(bool IsLan);

	UFUNCTION(BlueprintCallable)
	void JoinServer(int32 ServerIndex);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CheckLevelLoadStatus();

	UFUNCTION(BlueprintCallable)
	void ServerTravelToMap(FString MapName);
	
};
