// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetSystemFactoryNew.h"

#include "PlanetSystem.h"

// The constructor for the context menu
UPlanetSystemFactoryNew::UPlanetSystemFactoryNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// The class to make
	SupportedClass = APlanetSystem::StaticClass();
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
UObject* UPlanetSystemFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<APlanetSystem>(InParent, InClass, InName, Flags);
}
// =============================
// Name: ShouldShowInNewMenu
// Desc: Returns true - thus telling the editor to expose it to the context menu
// Input: NONE
// Output: bool
bool UPlanetSystemFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}