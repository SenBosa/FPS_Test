// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "FPS_Test.h"
#include "FPS_TestGameMode.h"
#include "FPS_TestHUD.h"
#include "FPS_TestCharacter.h"

AFPS_TestGameMode::AFPS_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_TestHUD::StaticClass();
}
