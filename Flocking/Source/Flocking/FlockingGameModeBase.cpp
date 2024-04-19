// Copyright Epic Games, Inc. All Rights Reserved.


#include "FlockingGameModeBase.h"

AFlockingGameModeBase::AFlockingGameModeBase() {
    AgentMesh = CreateDefaultSubobject<UStaticMeshComponent>("AgentMesh");
    PrimaryActorTick.bCanEverTick = true;
}

void AFlockingGameModeBase::BeginPlay() {
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("GAMEMODE BEGINPLAY()"));
    Manager = NewObject<UFlockingManager>();
    Manager->Init(GetWorld(), AgentMesh);
}

void AFlockingGameModeBase::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);
    Manager->Flock();
};

void AFlockingGameModeBase::setLimits(float size) {
    Manager->boundingBox = size;
}

void AFlockingGameModeBase::setSolidity(float s) {
    Manager->bbSolidity = s;
}

void AFlockingGameModeBase::setCoefficient(int whichV, float c) {
    if (whichV == 1) {
        Manager->v1c = c;
    }
    else if (whichV == 2) {
        Manager->v2c = c;
    }
    else if (whichV == 3) {
        Manager->v3c = c;
    }
}

void AFlockingGameModeBase::addBoid() {
    Manager->addAgent();
}

void AFlockingGameModeBase::removeBoid() {
    Manager->removeAgent();
}