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
	UPROPERTY(EditAnywhere, DisplayName = "Number of Bodies", meta=(ClampMax="50", UIMax = "50"))
	uint32  mNumOfBodies = 0;

	// mPlanetObjects - Internal array of all created planets in the system
	UPROPERTY(EditAnywhere, DisplayName = "Planet Array")
	TArray<APlanetObject*> mPlanetObjects;

	// mVisibleHub - Should the centre of the system have an associated model
	// [ Set to true by default, but can be changed should you wish ]
	UPROPERTY(EditAnywhere, DisplayName = "Has Visible Centre")
	bool mVisibleHub = true;

protected:
	// ===== UPlanetSystem Methods =====
	// Name: BeginPlay - Setup the planetary system when the game starts or when spawned
	// In: NONE
	// Out: NONE
	virtual void BeginPlay() override;

public:	
	// ===== UPlanetSystem Methods =====
	// Name: Tick - Update the necessary information each tick depending on state
	// In: DeltaTime, TickType, ThisTickFunction
	// Out: NONE
	void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

	// Name: ShouldTickIfViewportsOnly - Allows Tick to be called in editor
	// In: NONE
	// Out: bool
	bool ShouldTickIfViewportsOnly() const override { return true; }

private:
	// Name: EditorUpdate - Check and update the system when in editor mode
	// In: DeltaTime
	// Out: NONE
	void EditorUpdate();

	// The counter used to count how many planets exist
	uint32 mI = 0;
	// Dude to names apparently never being deleted we need a counter
	// to always make new ones, even if old ones are deleted.
	uint32 mNameI = 0;

};

// Fill out your copyright notice in the Description page of Project Settings.





