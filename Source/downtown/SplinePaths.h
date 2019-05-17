// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplinePaths.generated.h"

UCLASS()
class DOWNTOWN_API ASplinePaths : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USplineComponent* SplineComponent = nullptr;

	virtual void OnConstruction(const FTransform& Transform) override;

	// Sets default values for this actor's properties
	ASplinePaths();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug")
		bool Collision = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
		bool Closed = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Config")
		float DistanceBetweenPillars = 10000.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config")
		bool MakeColumn = false;
private:
	int32 NumberofSplinePoints = 0;
};
