// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomGameMode.h"

#include "AMyCustomCharacter.h"

#define ENABLE_LOGGING 1
#include "utillllllssss.h"
#include "GameFramework/DefaultPawn.h"

AMyCustomGameMode::AMyCustomGameMode()
{
	// DefaultPawnClass = AAMyCustomCharacter::StaticClass();
	DefaultPawnClass = ADefaultPawn::StaticClass();
	// ll("default pawn class"+DefaultPawnClass->GetName(), 2);
}
