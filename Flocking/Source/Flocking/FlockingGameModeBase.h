// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FlockingManager.h"
#include "FlockingGameModeBase.generated.h"

UCLASS()
class FLOCKING_API AFlockingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	AFlockingGameModeBase();

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* AgentMesh;

	UPROPERTY() UFlockingManager* Manager;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category="setter")
	void setLimits(float size);

	UFUNCTION(BlueprintCallable, Category = "setter")
	void setSolidity(float s);

	UFUNCTION(BlueprintCallable, Category = "setter")
	void setCoefficient(int whichV, float c);

	UFUNCTION(BlueprintCallable, Category = "setter")
	void addBoid();

	UFUNCTION(BlueprintCallable, Category = "setter")
	void removeBoid();
};
