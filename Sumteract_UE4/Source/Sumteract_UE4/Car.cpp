// Fill out your copyright notice in the Description page of Project Settings.


#include "Car.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"

// Sets default values
ACar::ACar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("m_rootComponent"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(20.f);
	m_rootComponent = SphereComponent;
	
	UStaticMeshComponent* CarBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarBody"));
	CarBody->AttachTo(RootComponent);
	m_carBodyComponent = CarBody;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CarVisualAsset(TEXT("/Game/meshes/car.car"));
	if (CarVisualAsset.Succeeded())
	{
		CarBody->SetStaticMesh(CarVisualAsset.Object);
		CarBody->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
		CarBody->SetWorldScale3D(FVector(1.f));
	}


}

// Called when the game starts or when spawned
void ACar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto loc = this->GetActorLocation();
	loc.Y = loc.Y + 1.f;
	this->SetActorLocation(loc);

}

