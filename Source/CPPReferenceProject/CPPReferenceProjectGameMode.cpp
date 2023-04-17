// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPReferenceProjectGameMode.h"
#include "CPPReferenceProjectHUD.h"
#include "CPPReferenceProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPReferenceProjectGameMode::ACPPReferenceProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACPPReferenceProjectHUD::StaticClass();
}
