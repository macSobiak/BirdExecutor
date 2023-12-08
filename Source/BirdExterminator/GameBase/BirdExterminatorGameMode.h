// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BirdExterminatorGameMode.generated.h"

class AWorldBuilder;
class ABirdFlock;
UCLASS()
class BIRDEXTERMINATOR_API ABirdExterminatorGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	AWorldBuilder* WorldBuilder;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABirdFlock> BirdFlockBlueprint;
public:
	FVector3f PlayableArea;
};
