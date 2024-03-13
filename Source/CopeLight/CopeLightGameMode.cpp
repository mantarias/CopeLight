// Copyright Epic Games, Inc. All Rights Reserved.

#include "CopeLightGameMode.h"
#include "CopeLightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACopeLightGameMode::ACopeLightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
