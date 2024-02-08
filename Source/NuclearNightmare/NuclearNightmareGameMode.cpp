// Copyright Epic Games, Inc. All Rights Reserved.

#include "NuclearNightmareGameMode.h"
#include "NuclearNightmareCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANuclearNightmareGameMode::ANuclearNightmareGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
