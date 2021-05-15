// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestProjectGameMode.h"
#include "GitTestProjectHUD.h"
#include "GitTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGitTestProjectGameMode::AGitTestProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGitTestProjectHUD::StaticClass();
}
