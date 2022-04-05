// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetObjectFactoryNew.h"


// The constructor for the context menu
UPlanetObjectFactoryNew::UPlanetObjectFactoryNew(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// The class to make
	SupportedClass = APlanetObject::StaticClass();
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
UObject* UPlanetObjectFactoryNew::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<APlanetObject>(InParent, InClass, InName, Flags);
}
// =============================
// Name: ShouldShowInNewMenu
// Desc: Returns true - thus telling the editor to expose it to the context menu
// Input: NONE
// Output: bool
bool UPlanetObjectFactoryNew::ShouldShowInNewMenu() const
{
	return true;
}