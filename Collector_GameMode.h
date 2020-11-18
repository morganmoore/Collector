// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Collector_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class CPPTEST1_API ACollector_GameMode : public AGameMode
{
	GENERATED_BODY()

	ACollector_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere)
	float Spawn_X_Mn;

	UPROPERTY(EditAnywhere)
	float Spawn_X_Max;

	UPROPERTY(EditAnywhere)
	float Spawn_Y_Mn;

	UPROPERTY(EditAnywhere)
	float Spawn_Y_Max;

	void SpawnPlayerRecharge();
	
};
