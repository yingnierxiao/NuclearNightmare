// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "interfaces/OnlineSessionInterface.h"
#include "NuclearNightmareGameInstance.generated.h"

class IOnlineSession;

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
	IOnlineSessionPtr SessionInterface;

	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	virtual void OnFindSessionComplete(bool Succeeded);

	virtual void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	
	virtual void Init() override;

	virtual void OnCreateSessionComplete(FName ServerName, bool Succeeded);

	UFUNCTION(BlueprintCallable)
	void CreateServer();

	UFUNCTION(BlueprintCallable)
	void JoinServer();
	
};
