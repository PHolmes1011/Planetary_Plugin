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
	// How large the body is
	UPROPERTY(EditAnywhere, DisplayName = "Size", meta=(ClampMin = "0", UIMin = "0"))
	float  mSize = 2;

	// Precalculate the orbit necessary
	UPROPERTY(EditAnywhere, DisplayName = "Auto Orbit")
	bool mAutoOrbit = false;

	// The mass of the object
	UPROPERTY(EditAnywhere, DisplayName = "Mass", meta = (ClampMin = "0", UIMin = "0"))
	float  mMass = 1;

	// The initial velocity to apply to the body
	UPROPERTY(EditAnywhere, DisplayName = "Starting Velocity")
	FVector  mInitVelocity = FVector(0.f, 1.f, 0.f);
	// The calculated velocity to move the body by based on the orbit
	FVector  mVelocity = FVector(0.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, DisplayName = "Rotational Velocity")
	FVector mRotVel = FVector(0.f, 0.f, 1.f);

	// The visual representation of the body
	UPROPERTY(VisibleAnywhere, DisplayName = "PlanetModel")
	class UStaticMeshComponent* mPlanetModel;

	class USphereComponent* mPlanetCollision;

	float mTimeStep = 0.1f;

protected:
	// ===== APlanetObject Methods =====
	// Name: BeginPlay - Setup the planetary system when the game starts or when spawned
	// In: NONE
	// Out: NONE
	virtual void BeginPlay() override;

public:
	// ===== APlanetObject Methods =====
	// Name: UpdateVelocity - Calculate the new velocity based on orbit and other bodies
	// In: DeltaTime, bodies
	// Out: NONE
	void UpdateVelocity(float DeltaTime, TArray<APlanetObject*> bodies);
	// Name: MoveBody - Adds an impulse to the body to move it
	// In: DeltaTime
	// Out: NONE
	void MoveBody(float DeltaTime);
	// Name: HandleCollisions - Check for sphere overlaps and handle them
	// In: DeltaTime, bodies
	// Out: bool
	bool HandleCollisions(float DeltaTime, TArray<APlanetObject*> bodies);
private:	
	// Name: Tick - Update the necessary information each tick
	// In: DeltaTime
	// Out: NONE
	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;
	// Name: EditorUpdate - Update editor time information
	// In: DeltaTime
	// Out: NONE
	void EditorUpdate(float DeltaTime);
	// Name: GameUpdate - Update level time information
	// In: DeltaTime
	// Out: NONE
	void GameUpdate(float DeltaTime);
	// Name: CreatePlanetModel - Creates a default spherical planet
	// In: NONE
	// Out: NONE
	void CreatePlanetModel();
	// Name: DestroyPlanetModel - Destroys the existing planet
	// In: NONE
	// Out: NONE
	inline void DestroyPlanetModel();

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