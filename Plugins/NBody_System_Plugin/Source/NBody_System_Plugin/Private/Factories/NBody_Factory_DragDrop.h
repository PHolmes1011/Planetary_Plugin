#pragma once

// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "Factories/Factory.h"
#include "UObject/ObjectMacros.h"

#include "NBody_Factory_DragDrop.generated.h"

// ///////////////////////////////////////////////////////////////
//				NBody_Factory_DragDrop Constructors
// ///////////////////////////////////////////////////////////////
// A factory for creating new UPlanetaryManagers from the content menu (to be dragged and dropped)
// For historic reasons the factories have to be in seperate classes

UCLASS(hidecategories = (Object))
class UNBodyFactoryDragDrop : public UFactory
{
	GENERATED_UCLASS_BODY()

public:
	// === UFactory Interface ===

	// Called when released over the game after being dragged
	// Creates a new UPlanetManager object pointer
	virtual UObject* FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
		const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled) override;
};