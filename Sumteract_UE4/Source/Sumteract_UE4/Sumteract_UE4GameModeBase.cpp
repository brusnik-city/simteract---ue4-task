// Fill out your copyright notice in the Description page of Project Settings.


#include "Sumteract_UE4GameModeBase.h"
#include "Engine/World.h"
#include "Engine.h"

void ASumteract_UE4GameModeBase::StartPlay()
{
	Super::StartPlay();

	if(GEngine)
	{
		// Display a debug message for five seconds. 
		// The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		FTransform loc = FTransform(FVector(1.f), FVector(1.f), FVector(1.f), FVector(0.f,-500.f,10.f));
		ACar* car = GetWorld()->SpawnActor<ACar>(ACar::StaticClass(),loc);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}