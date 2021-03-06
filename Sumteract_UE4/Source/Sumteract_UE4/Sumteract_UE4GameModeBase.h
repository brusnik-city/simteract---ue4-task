// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Car.h"
#include "Containers/Array.h"
#include "Sumteract_UE4GameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class SUMTERACT_UE4_API ASumteract_UE4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	TArray<ACar*>  CarsArray;
};
