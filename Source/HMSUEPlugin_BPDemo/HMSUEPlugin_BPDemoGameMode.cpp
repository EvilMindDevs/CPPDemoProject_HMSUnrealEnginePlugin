// Copyright Epic Games, Inc. All Rights Reserved.

#include "HMSUEPlugin_BPDemoGameMode.h"
#include "HMSUEPlugin_BPDemoHUD.h"
#include "HMSUEPlugin_BPDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHMSUEPlugin_BPDemoGameMode::AHMSUEPlugin_BPDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHMSUEPlugin_BPDemoHUD::StaticClass();
}
