// Fill out your copyright notice in the Description page of Project Settings.

#include "SplinePaths.h"
#include "Components/SplineComponent.h"

// Sets default values
// Sets default values
ASplinePaths::ASplinePaths()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Road-Spline"));
	SplineComponent->SetupAttachment(RootComponent);
}

void ASplinePaths::OnConstruction(const FTransform & Transform)
{
	// Store number of spline points
	NumberofSplinePoints = SplineComponent->GetNumberOfSplinePoints();

	// Build Spline
	for (int32 i = 0; i <= NumberofSplinePoints - (Closed ? 1 : 2); i++)
	{
		int32 nextLoopIndex = (i + 1) % NumberofSplinePoints;
		FVector startLocation, startTangent, endLocation, endTangent;

		SplineComponent->GetLocationAndTangentAtSplinePoint(i, startLocation, startTangent, ESplineCoordinateSpace::Local);
		SplineComponent->GetLocationAndTangentAtSplinePoint(nextLoopIndex, endLocation, endTangent, ESplineCoordinateSpace::Local);
	}
	RegisterAllComponents();
}

