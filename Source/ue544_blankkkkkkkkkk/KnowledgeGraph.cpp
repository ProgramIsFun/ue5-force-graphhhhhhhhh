// Fill out your copyright notice in the Description page of Project Settings.


#include "KnowledgeGraph.h"

#include <random>


#include "utillllllssss.h"
#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10, FColor::White,text)


AKnowledgeGraph::AKnowledgeGraph()
{
	PrimaryActorTick.bCanEverTick = true;


}

AKnowledgeGraph::~AKnowledgeGraph()
{
	UE_LOG(LogTemp, Warning, TEXT("DESTRUCTOR CALLED!@!!!!!!!!!!!!!!!!!!!!!!!!!!"));
}


void AKnowledgeGraph::BeginPlay()
{
	Super::BeginPlay();


	UE_LOG(LogTemp, Warning, TEXT("Begin play called, Restricting tick interval"));

	if (use_tick_interval)
	{
		PrimaryActorTick.TickInterval = tick_interval;
		
	}


	if (0)
	{
		// InitOctree(FBox(
		// 		FVector(-200, -200, -200),
		// 		FVector(200, 200, 200)
		// 	)
		// );
	}
	else
	{
		
	}


	DoWork2();


	

	if (!init)
	{
		InitNodes();


		CalculateBiasstrengthOflinks();
	}
}


void AKnowledgeGraph::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	iterations += 1;


	if (iterations > maxiterations)
	{
		return;
	}


	if (1)
	{
		ll("TICK----------------------------------------------------------------------------"
	 "----------------------------------------------------------------------------");
		ll("alpha: " + FString::SanitizeFloat(alpha));
		ll("iterations: " + FString::FromInt(iterations));

		if (alpha < alphaMin)
		{
			UE_LOG(LogTemp, Warning, TEXT("alpha is less than alphaMin"));
			return;
		}

		alpha += (alphaTarget - alpha) * alphaDecay; //need to restart this if want to keep moving
		ll("alpha: " + FString::SanitizeFloat(alpha));


		ApplyForces();

		for (auto& node : all_nodes)
		{
			auto kn = node.Value;
			ll("FINAL POSITION! node: " + FString::FromInt(node.Key));
			ll("position: " + kn->GetActorLocation().ToString());
			ll("velocity: " + kn->velocity.ToString());
			
			
			
			
			kn->velocity *= velocityDecay;


			

			FVector NewLocation = kn->GetActorLocation() + kn->velocity;

			kn->SetActorLocation(
				NewLocation
			);
			ll("FINAL POSITION! node: " + FString::FromInt(node.Key));
			ll("position: " + kn->GetActorLocation().ToString());
			ll("velocity: " + kn->velocity.ToString());
			
			

			// kn->velocity *= 0; //reset velocities

			//            print("FINAL POSITION!");
			//            print(FString::FromInt(node.Key));
			//            print(kn->GetActorLocation().ToString());
		}

		for (auto& link : all_links)
		{
			auto l = link.Value;
			//            print("LOCCCCCC");
			//            print(all_nodes[l->source]->GetActorLocation().ToString());
			l->ChangeLoc(
				all_nodes[l->source]->GetActorLocation(),
				all_nodes[l->target]->GetActorLocation()
			);
		}

		
	}
	else
	{
	}
}
