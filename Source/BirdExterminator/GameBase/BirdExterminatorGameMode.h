// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BirdExterminatorGameMode.generated.h"

class AUIController;
class AWorldBuilder;
class ABirdsController;
UCLASS()
class BIRDEXTERMINATOR_API ABirdExterminatorGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	AWorldBuilder* WorldBuilder;

public:
	
	void CheckWinLooseConditions(const int &_);
	
	UPROPERTY()
	ABirdsController* BirdsController;
	UPROPERTY()
	AUIController* UIController;

	UPROPERTY(EditAnywhere)
	uint16 BirdFlocksToSpawn = 10;
	
	UPROPERTY(EditAnywhere)
	uint16 PredatorBirdsAvailable = 10;
};
