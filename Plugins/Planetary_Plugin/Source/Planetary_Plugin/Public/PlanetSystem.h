// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

// Engine includes
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
// Plugin classes
#include "PlanetObject.h"
// Generated file
#include "PlanetSystem.generated.h"

// ///////////////////////////////////////////////////////////////
//						 UPlanetSystem
// ///////////////////////////////////////////////////////////////
// A class for creating and managing the planet objects in the system
// Imagine it as the hub that the planets orbit around

UCLASS(BlueprintType, hidecategories=(Object))
class PLANETARY_PLUGIN_API APlanetSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanetSystem();

	// ===== UPlanetSystem Attributes =====
	// mNumOfBodies - How many bodies are in the system
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Number of Bodies")
	int32  mNumOfBodies;

	// mPlanetObjects - Internal array of all created planets in the system
	TArray<APlanetObject> mPlanetObjects;

	// mVisibleHub - Should the centre of the system have an associated model
	// [ Set to true by default, but can be changed should you wish ]
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Has Visible Centre")
	bool mVisibleHub = true;

protected:
	// ===== UPlanetSystem Methods =====
	// Name: BeginPlay - Setup the planetary system when the game starts or when spawned
	// In: NONE
	// Out: NONE
	virtual void BeginPlay() override;

public:	
	// ===== UPlanetSystem Methods =====
	// Name: Tick - Update the necessary information each tick
	// In: DeltaTime
	// Out: NONE
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.





