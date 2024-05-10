// Copyright Epic Games, Inc. All Rights Reserved.

#include "DevSimGameMode.h"
#include "DevSimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADevSimGameMode::ADevSimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
