// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

// Engine includes
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
// Generated file
#include "PlanetObject.generated.h"

// ///////////////////////////////////////////////////////////////
//						  APlanetObject
// ///////////////////////////////////////////////////////////////

UCLASS(BlueprintType, hidecategories = (Object))
class PLANETARY_PLUGIN_API APlanetObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanetObject();

	// === UPlanetObject Attributes ===
	UPROPERTY(EditAnywhere, DisplayName = "Size")
	uint32  mSize = 2;

	UPROPERTY(EditAnywhere, DisplayName = "Auto Orbit")
	bool mAutoOrbit = true;

	UPROPERTY(EditAnywhere, DisplayName = "Density")
	uint32  mDensity = 1;

	UPROPERTY(EditAnywhere, DisplayName = "Mass")
	uint32  mMass = 1;

	UPROPERTY(EditAnywhere, DisplayName = "Velocity")
	FVector  mVelocity = FVector(1.f, 0.f, 0.f);

	UPROPERTY(VisibleAnywhere, DisplayName = "PlanetModel")
	class UStaticMeshComponent* mPlanetModel;

	// === UPlanetObject Methods ===
protected:
	// ===== APlanetObject Methods =====
	// Name: BeginPlay - Setup the planetary system when the game starts or when spawned
	// In: NONE
	// Out: NONE
	virtual void BeginPlay() override;

public:	
	// ===== APlanetObject Methods =====
	// Name: Tick - Update the necessary information each tick
	// In: DeltaTime
	// Out: NONE
	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

	void CreatePlanetModel();
	inline void DestroyPlanetModel();
	// Name: EditorUpdate - Update editor time information
	// In: NONE
	// Out: NONE
	void EditorUpdate();
	// Name: GameUpdate - Update level time information
	// In: NONE
	// Out: NONE
	void GameUpdate();

	// ===== APlanetObject Methods =====
	// Name: ShouldTickIfViewportsOnly - Allows Tick to be called in editor
	// In: NONE
	// Out: bool
	bool ShouldTickIfViewportsOnly() const override { return true; }

};

// ///////////////////////////////////////////////////////////////
//								Notes
// ///////////////////////////////////////////////////////////////

// Possible datatypes for UPROPERTY
// bool 	 Bool
// ANSICHAR  Char
// double 	 Double
// float 	 Float
// int32 	 Int32
// int64 	 Int64
// uint64 	 Time