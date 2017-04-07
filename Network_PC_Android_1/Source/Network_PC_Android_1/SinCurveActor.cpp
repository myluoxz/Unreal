// Fill out your copyright notice in the Description page of Project Settings.

#include "Network_PC_Android_1.h"
#include "SinCurveActor.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
ASinCurveActor::ASinCurveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SinCurveActorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SinCurveActorMesh"));

	//Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> pSphere(TEXT("StaticMesh'/Game/Blueprints/Sphere.Sphere'"));
	if (pSphere.Object)
	{
		SinCurveActorMesh->SetStaticMesh(pSphere.Object);
	}

	RootComponent = SinCurveActorMesh;
}

// Called when the game starts or when spawned
void ASinCurveActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASinCurveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 200.0f;       //Scale our height by a factor of 20
	NewLocation.Y += DeltaTime * 100.0f;
	RunningTime += DeltaTime;

	static const FString OnScreenLogMessage(TEXT("NewLocation: "));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, OnScreenLogMessage + FString(NewLocation.ToString()));

	SetActorLocation(NewLocation);
}

