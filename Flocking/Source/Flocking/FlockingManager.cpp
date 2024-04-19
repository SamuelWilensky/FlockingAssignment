#include "FlockingManager.h"
#include "Agent.h"

#define AGENT_COUNT 10    

void UFlockingManager::Init(UWorld* world, UStaticMeshComponent* mesh) {
    UE_LOG(LogTemp, Warning, TEXT("MANAGER INIT"));

    boidMesh = mesh;
    World = world;
    boundingBox = 500;
    bbSolidity = 3;
    v1c = 1;
    v2c = 1;
    v3c = 1;

    float incr = (PI * 2.f) / AGENT_COUNT;
    for (int i = 0; i < AGENT_COUNT; i++) {
        if (World != nullptr) {
            FRotator rotation = FRotator();

            FVector location = FVector();
            location.X = FMath::Sin(incr * i) * 150.f;
            location.Z = FMath::Cos(incr * i) * 150.f;
            location.Y = FMath::Cos(incr * i * 3) * 150.f;

            AAgent* agent = World->SpawnActor<AAgent>(location, rotation);
            agent->Init(mesh, i);
            Agents.Add(agent);
        }
    }

    initialized = true;
}

void UFlockingManager::Flock() {
    FVector v1, v2, v3;
    AAgent* b;

    for (int i = 0; i < Agents.Num(); i++) {
        v1 = FVector(0.f);
        v2 = FVector(0.f);
        v3 = FVector(0.f);

        b = Agents[i];

        FVector pc;
        for (int j = 0; j < Agents.Num(); j++) {
            if (j != i) {
                pc = pc + Agents[j]->GetActorLocation();
            }
        }
        pc = pc / (Agents.Num() - 1);
        v1 = (pc - b->GetActorLocation()) / 5000;

        FVector c = FVector(0.f);
        for (int j = 0; j < Agents.Num(); j++) {
            if (j != i) {
                FVector dif = b->GetActorLocation() - Agents[j]->GetActorLocation();
                if (dif.Size() < 100) {
                    c = c - (Agents[j]->GetActorLocation() - b->GetActorLocation());
                }
            }
        }
        v2 = c/10;

        FVector pv;
        for (int j = 0; j < Agents.Num(); j++) {
            if (j != i) {
                pv = pv + Agents[j]->Velocity;
            }
        }
        pv = pv / (Agents.Num() - 1);
        v3 = (pv - b->Velocity) / 80;

        
        FVector v4;
        if (b->GetActorLocation().X < -boundingBox) {
            v4.X = bbSolidity;
        }
        else if (b->GetActorLocation().X > boundingBox) {
            v4.X = -bbSolidity;
        }
        if (b->GetActorLocation().Y < -boundingBox) {
            v4.Y = bbSolidity;
        }
        else if (b->GetActorLocation().Y > boundingBox) {
            v4.Y = -bbSolidity;
        }
        if (b->GetActorLocation().Z < -boundingBox) {
            v4.Z = bbSolidity;
        }
        else if (b->GetActorLocation().Z > boundingBox) {
            v4.Z = -bbSolidity;
        }

        b->Velocity = b->Velocity + v1*v1c + v2*v2c + v3*v3c + v4;

        int vlim = 20;
        if (b->Velocity.Size() > vlim) {
            b->Velocity = (b->Velocity / b->Velocity.Size()) * vlim;
        }

        

        
    }
}

void UFlockingManager::addAgent() {
    FRotator rotation = FRotator();
    FVector location = FVector(0.f);
    AAgent* agent = World->SpawnActor<AAgent>(location, rotation);
    agent->Init(boidMesh, 0);
    Agents.Add(agent);
}

void UFlockingManager::removeAgent() {
    if (Agents.Num() > 2) {
        AAgent* agent = Agents.Pop();
        agent->Destroy();
    }
}
