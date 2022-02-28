#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"

#include "NBody_Factory_ContextMenu.generated.h"

// ///////////////////////////////////////////////////////////////
//				UNBodyFactoryContextMenu Factory
// ///////////////////////////////////////////////////////////////
// A factory for creating new UPlanetaryManagers from the context menu
// For historic reasons the factories have to be in seperate classes

UCLASS(hidecategories=(Object))
class UNBodyFactoryContextMenu : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	// === UFactory Interface ===

	// Called by editor when new asset is created
	// Creates a new UPlanetaryManager
	virtual UObject* FactoryCreateNew(UClass* inClass, UObject* inParent, FName inName, EObjectFlags flags, UObject* Context, FFeedbackContext* Warn) override;
	// Override the pre-existing function
	// And tell it to return true, this it will appear in the context menu
	virtual bool ShouldShowInNewMenu() const override { return true; }
};