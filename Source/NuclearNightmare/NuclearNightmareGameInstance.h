// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NuclearNightmareGameInstance.generated.h"

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
	virtual void Init() override;
};
