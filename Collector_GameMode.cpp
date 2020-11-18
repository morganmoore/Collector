// Fill out your copyright notice in the Description page of Project Settings.


#include "Collector_GameMode.h"
#include "GameFramework/Actor.h"


ACollector_GameMode::ACollector_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void ACollector_GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &ACollector_GameMode::SpawnPlayerRecharge, FMath::RandRange(2,5), true);
}

void ACollector_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACollector_GameMode::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Mn, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Mn, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}

