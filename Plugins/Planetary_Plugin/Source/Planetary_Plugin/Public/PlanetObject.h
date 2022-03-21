// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

// Engine includes
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Diameter")
	int32  m_diameter;

	// === UPlanetObject Methods ===
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