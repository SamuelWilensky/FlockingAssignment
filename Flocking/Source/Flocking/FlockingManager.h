// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DrawDebugHelpers.h"
#include "FlockingManager.generated.h"

UCLASS()
class FLOCKING_API UFlockingManager : public UObject
{

public:
	GENERATED_BODY()

	
	float boundingBox;
	float bbSolidity;
	float v1c;
	float v2c;
	float v3c;
	void Init(UWorld* world, UStaticMeshComponent* mesh);
	void Flock();
	void addAgent();
	void removeAgent();

private:
	
	UWorld* World;
	bool initialized;
	TArray<class AAgent*> Agents;
	UStaticMeshComponent* boidMesh;
};