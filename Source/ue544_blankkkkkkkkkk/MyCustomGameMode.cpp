// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCustomGameMode.h"

#include "AMyCustomCharacter.h"

AMyCustomGameMode::AMyCustomGameMode()
{
	DefaultPawnClass = AAMyCustomCharacter::StaticClass();
}
