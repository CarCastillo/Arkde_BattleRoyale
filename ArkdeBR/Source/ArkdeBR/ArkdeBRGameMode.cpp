// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArkdeBRGameMode.h"
#include "ArkdeBRCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArkdeBRGameMode::AArkdeBRGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
