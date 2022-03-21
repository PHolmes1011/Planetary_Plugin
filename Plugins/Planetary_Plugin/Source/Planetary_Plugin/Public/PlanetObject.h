#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"

#include "UObject/ObjectMacros.h"

#include "PlanetObject.generated.h"

/**
 *
 */
UCLASS(BlueprintType, hidecategories=(Object))
class PLANETARY_PLUGIN_API UPlanetObject : public UObject
{
	GENERATED_BODY()

public:
	// === UPlanetObject Attributes ===
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Diameter")
	int32  m_diameter;

	// === UPlanetObject Methods ===
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