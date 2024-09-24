// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPawnnnn1_cpp.h"

UPawnMovementComponent* ADefaultPawnnnn1_cpp::GetMovementComponent() const
{
	return MovementComponent;

}

void ADefaultPawnnnn1_cpp::UpdateNavigationRelevance()
{
	if (CollisionComponent)
	{
		CollisionComponent->SetCanEverAffectNavigation(bCanAffectNavigationGeneration);
	}
}

// Sets default values
ADefaultPawnnnn1_cpp::ADefaultPawnnnn1_cpp()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADefaultPawnnnn1_cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADefaultPawnnnn1_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADefaultPawnnnn1_cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

