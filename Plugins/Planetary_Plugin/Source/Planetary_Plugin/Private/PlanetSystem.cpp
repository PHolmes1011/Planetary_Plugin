// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetSystem.h"

// Sets default values
APlanetSystem::APlanetSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlanetSystem::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void APlanetSystem::TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction)
{
	Super::TickActor(DeltaTime, TickType, ThisTickFunction);

	// ====================================================
	//				 Game/Level Update
	// ====================================================
	if (TickType == ELevelTick::LEVELTICK_All)
	{
		// When the play button in the editor is pressed and the game is running
		GameUpdate(DeltaTime);
	}

	// ====================================================
	//				 In-Editor Update 
	// ====================================================
	if (TickType == ELevelTick::LEVELTICK_ViewportsOnly)
	{
		// Update the objects inside the editor with some additional editor functionality
		EditorUpdate(DeltaTime);
	}
}

void APlanetSystem::EditorUpdate(float DeltaTime)
{
	// Calculate the difference between how many bodies we want and how many we have
	int32 sizeDif = mNumOfBodies - mPlanetObjects.Num();
	// If there's any new planets add them
	for (int32 i = 1; i <= sizeDif; ++i) {
		// Information we want the object we're about to create to have
		FActorSpawnParameters planetSpawnInfo;
		planetSpawnInfo.Name = FName(FString("Planet") += FString::FromInt(mNameI));
		planetSpawnInfo.Owner = this;											

		// The function to spawn a new planet
		APlanetObject* planetObject = GWorld->SpawnActor<APlanetObject>(APlanetObject::StaticClass(),
			this->GetActorLocation() + FVector(mI * 750.f, this->GetActorLocation().Y, this->GetActorLocation().Z),
			FRotator::ZeroRotator, planetSpawnInfo);

		// Assert the spawning didn't fail
		check(planetObject != nullptr);

		// Add our planet to the list
		mPlanetObjects.Emplace(planetObject);
		// Increase our global counter
		++mI;
		++mNameI;
	}
	// Flip the size difference
	sizeDif = mPlanetObjects.Num() - mNumOfBodies;
	// Destroy the planets we want to get rid of
	for (int32 i = 1; i <= sizeDif; ++i) {
		// Remove the items at the end
		GWorld->DestroyActor(mPlanetObjects[mI - 1]);
		// Remove the field in the array
		mPlanetObjects.RemoveAt(mI - 1);
		// Decrease our global counter
		--mI;
	}
}

void APlanetSystem::GameUpdate(float DeltaTime)
{
	for (int32 i = 0; i < mPlanetObjects.Num(); ++i) {
		mPlanetObjects[i]->UpdateVelocity(DeltaTime, mPlanetObjects);
		mPlanetObjects[i]->MoveBody(DeltaTime);
	}
}