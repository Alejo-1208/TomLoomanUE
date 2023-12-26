// Copyright Epic Games, Inc. All Rights Reserved.

#include "TomLoomanGameMode.h"
#include "TomLoomanHUD.h"
#include "TomLoomanCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATomLoomanGameMode::ATomLoomanGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATomLoomanHUD::StaticClass();
}
