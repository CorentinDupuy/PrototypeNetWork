// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PrototypeNetWorkGameMode.h"
#include "PrototypeNetWorkHUD.h"
#include "PrototypeNetWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypeNetWorkGameMode::APrototypeNetWorkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APrototypeNetWorkHUD::StaticClass();
}
