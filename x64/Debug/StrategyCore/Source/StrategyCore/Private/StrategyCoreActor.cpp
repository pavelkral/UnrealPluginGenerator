#include "StrategyCoreActor.h"

// Sets default values

AStrategyCoreActor::AStrategyCoreActor()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AStrategyCoreActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AStrategyCoreActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
