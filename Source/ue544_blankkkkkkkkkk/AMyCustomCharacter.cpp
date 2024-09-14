// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyCustomCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AAMyCustomCharacter::AAMyCustomCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->GravityScale = 0.0f;
}

// Called when the game starts or when spawned
void AAMyCustomCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAMyCustomCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAMyCustomCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("SpawnActorRRRRRRRRRR", IE_Pressed, this, &AAMyCustomCharacter::SpawnMyActor);
	PlayerInputComponent->BindAxis("MoveForward", this, &AAMyCustomCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAMyCustomCharacter::MoveRight);


	
}

void AAMyCustomCharacter::SpawnMyActor()
{
	
	// Implementation of actor spawning
	// Ensure a valid Actor Class is set to spawn before calling this function
}


void AAMyCustomCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
        
		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AAMyCustomCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}