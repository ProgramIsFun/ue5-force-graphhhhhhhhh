// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomGameMode.h"

#include "AMyCustomCharacter.h"

#define ENABLE_LOGGING 1
#include "utillllllssss.h"
#include "GameFramework/DefaultPawn.h"

AMyCustomGameMode::AMyCustomGameMode()
{
	if (0)
	{
		// DefaultPawnClass = AAMyCustomCharacter::StaticClass();
		if (0)
		{
			DefaultPawnClass = ADefaultPawn::StaticClass();
		}
		else
		{
			static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(
				TEXT("/Script/Engine.Blueprint'/Game/defaultpawnextendddddd.defaultpawnextendddddd_C'")



			
			);
			DefaultPawnClass = PlayerPawnClassFinder.Class;
		}
	}
	else
	{
		ll("DefaultPawnClass Will set in child blueprint");
		ll("Default game mode in the project settings will point to that child blueprint. ");
	}



	// ll("default pawn class"+DefaultPawnClass->GetName(), 2);
}
