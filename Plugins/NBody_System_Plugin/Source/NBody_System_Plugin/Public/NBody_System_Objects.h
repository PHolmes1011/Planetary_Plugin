// Copyright Epic Games, Inc. All Rights Reserved.
// Planetary System Plugin developed by Peter Holmes 2022

#pragma once

// Possible datatypes for UPROPERTY
// bool 	 Bool
// ANSICHAR  Char
// double 	 Double
// float 	 Float
// int32 	 Int32
// int64 	 Int64
// uint64 	 Time

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////
// Includes for required items
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
// Include generated glue code
#include "NBody_System_Objects.generated.h"

// ///////////////////////////////////////////////////////////////
//					   UPlanetManager Class
// ///////////////////////////////////////////////////////////////
// The manager class for the NBody system

UCLASS(Blueprintable, hidecategories=(Object))						// Macro adds several modern features and exposes the class...
class NBODY_SYSTEM_PLUGIN_API UPlanetManager : public UObject		// as an Unreal object that can be used in the editor and as a blueprint.
{
	// === GENERATED_BODY Macro ===
	// Creates the above .generate.h file full of glue code 
	GENERATED_BODY()

public:
	// === UPlanetObject Attributes ===
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlanetCount")		// Macro exposes the variable to the editor
	int32  m_bodyCount;														// Number of bodies in the system

	// === UPlanetObject Methods ===

};

// ///////////////////////////////////////////////////////////////
//						UPlanetObject Class
// ///////////////////////////////////////////////////////////////
// The class for objects in the system

UCLASS(BlueprintType, hidecategories = (Object))						
class NBODY_SYSTEM_PLUGIN_API UPlanetObject : public UObject			
{
	// === GENERATED_BODY Macro ===
	// Creates the above .generate.h file full of glue code 
	GENERATED_BODY()

public:
	// === UPlanetObject Attributes ===
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Diameter")		
	int32  m_diameter;

	// === UPlanetObject Methods ===

};

#pragma once
