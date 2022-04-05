// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "PlanetObject.h"

#include "PlanetObjectFactoryNew.generated.h"

// ///////////////////////////////////////////////////////////////
//					 UPlanetObjectFactoryNew
// ///////////////////////////////////////////////////////////////

UCLASS()
class PLANETARY_PLUGIN_API UPlanetObjectFactoryNew : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	// Called by editor when new asset is created
	// Creates a new UPlanetaryManager
	virtual UObject* FactoryCreateNew(UClass* inClass, UObject* inParent, FName inName, EObjectFlags flags, UObject* Context, FFeedbackContext* Warn) override;
	// Override the pre-existing function
	// And tell it to return true, this it will appear in the context menu
	virtual bool ShouldShowInNewMenu() const override;
	
};
