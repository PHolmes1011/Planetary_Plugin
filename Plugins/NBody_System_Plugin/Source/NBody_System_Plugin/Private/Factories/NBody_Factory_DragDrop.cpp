
// ///////////////////////////////////////////////////////////////
//							Includes
// ///////////////////////////////////////////////////////////////

#include "NBody_Factory_DragDrop.h"

#include "NBody_System_Objects.h"
//#include "Containers/UnrealString.h"
//#include "Misc/FileHelper.h"

// ///////////////////////////////////////////////////////////////
//				NBody_Factory_DragDrop Factory
// ///////////////////////////////////////////////////////////////

// Factory constructors 
UNBodyFactoryDragDrop::UNBodyFactoryDragDrop(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Files to read from
	//Formats.Add(FString(TEXT("txt;")) + NSLOCTEXT("UTextAssetFactory", "FormatTxt", "Text File").ToString());
	// The class to create
	SupportedClass = UPlanetManager::StaticClass();
	// Don't create new
	bCreateNew = false;
	// Allow for renaming
	bEditorImport = true;
}

// ///////////////////////////////////////////////////////////////
//						UFactory Overrides
// ///////////////////////////////////////////////////////////////

// =============================
// Name: FactoryCreateFile
// Desc: Creates an UPlanetManager object from read file data
// Input: InClass, InParent, InName, Flags, Filename, Parms, Warn, bOutOperationCanceled
// Output: UObject pointer
UObject* UNBodyFactoryDragDrop::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	UPlanetManager* planetManager = nullptr;
	FString TextString;

	//if (FFileHelper::LoadFileToString(TextString, *Filename))
	//{
		planetManager = NewObject<UPlanetManager>(InParent, InClass, InName, Flags);
	//}

	bOutOperationCanceled = false;

	return planetManager;
}