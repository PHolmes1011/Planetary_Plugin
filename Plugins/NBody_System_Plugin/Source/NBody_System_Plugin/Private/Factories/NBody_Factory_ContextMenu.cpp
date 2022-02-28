// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "NBody_Factory_ContextMenu.h"

#include "NBody_System_Objects.h"

// ///////////////////////////////////////////////////////////////
//				 UNBodyFactoryContextMenu Constructors
// ///////////////////////////////////////////////////////////////

// The constructor for the context menu
UNBodyFactoryContextMenu::UNBodyFactoryContextMenu(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// The class to make
	SupportedClass = UPlanetManager::StaticClass();
	// Makes new instance
	bCreateNew = true;
	// Makes name editable
	bEditAfterNew = true;
}

// ///////////////////////////////////////////////////////////////
//						UFactory Overrides
// ///////////////////////////////////////////////////////////////

// =============================
// Name: FactoryCreateNew
// Desc: Creates a new UPlanetManager object
// Input: UClass, UObject, FName, EObjectFlags, UObject, FFeedbackContext
// Output: UObject pointer
UObject* UNBodyFactoryContextMenu::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UPlanetManager>(InParent, InClass, InName, Flags);
}