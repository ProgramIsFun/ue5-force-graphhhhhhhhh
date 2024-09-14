// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KnowledgeNode.h"
#include "KnowledgeEdge.h"
// #include "GenericOctree333.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "CoreMinimal.h"
#include "octreeeeeeeeee3.h"

#include "KnowledgeGraph.generated.h"

/**
 *
 */
// class FORCEGRAPH_API AKnowledgeGraph : public AActor



UCLASS()
class UE544_BLANKKKKKKKKKK_API AKnowledgeGraph : public AActor
{
	GENERATED_BODY()

public:
	AKnowledgeGraph();
	~AKnowledgeGraph();
	void GenerateConnectedGraph(int32 NumClusters, int32 NodesPerCluster);
	void CalculatelinkAndatevelocity();
	void Calculatechargeforceandupdatevelocity();
	void DoWork2();
	void DoWork1();

	void AddNode1(int32 id, AKnowledgeNode* kn);
	// void AddNode(int32 id, AKnowledgeNode* kn, FVector location);
	void AddEdge(int32 id, int32 source, int32 target);
	// void AddOctreeElement(const FOctreeElement& inNewOctreeElement);
	void InitNodes();
	// void InitOctree(const FBox& inNewBounds);
	void CalculateBiasstrengthOflinks();
	// void RemoveElement(int key);
	void ApplyForces();
	// void Accumulate();
	// NodeStrength AddUpChildren(const FSimpleOctree::FNode& node, FString node_id);
	// void ApplyManyBody(AKnowledgeNode* kn);
	// void FindManyBodyForce(AKnowledgeNode* kn, const FSimpleOctree::FNode& node,
	                       // const FOctreeNodeContext3 CurrentContext, FString node_id);
	void tttttttttttt();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float alpha = 1;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float iterations = 1;
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float maxiterations = 1000000;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float alphaMin = 0.001;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	// float alphaDecay = pow(alphaMin, 0.05);
	float alphaDecay = 1 - FMath::Pow(alphaMin, 1.0 / 300);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	int32 wayofinitnodeslinks = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float edgeDistance = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float nodeStrength = -60;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float distancemin = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float distancemax = 10000000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float theta2 = 0.81;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	// Use extremely small tick interval
	bool use_tick_interval = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float tick_interval = 0.1f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	int jnodes1 = 300;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	int biasinitway=0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	int modeeeeeeeee=1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	float initialRadius = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Attributes)
	// Calculate many body force or not. 
	bool manybody = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	TMap<int32, AKnowledgeNode*> all_nodes;
	TMap<int32, AKnowledgeEdge*> all_links;
	// TMap<FString, NodeStrength> octree_node_strengths;
	//    FVector GetWeightedDistance(FVector prev_loc);
	float alphaTarget = 0;
	float velocityDecay = 0.6;
	float initialAngle = PI * (3 - sqrt(5));
	bool init = false;

	// FSimpleOctree* OctreeData;
	OctreeNode* OctreeData2;


	// Called every frame
public:
	virtual void Tick(float DeltaTime) override;

};
