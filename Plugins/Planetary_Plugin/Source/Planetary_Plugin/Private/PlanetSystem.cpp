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
	
	// --- Create Planet ---

	// Information we want the object we're about to create to have
	FActorSpawnParameters planetSpawnInfo;
	planetSpawnInfo.Name = "Planet";	// Name
	planetSpawnInfo.Owner = this;		// Object that made it

	// The function to spawn a new actor
	APlanetObject* planetObject = GWorld->SpawnActor<APlanetObject>(APlanetObject::StaticClass(),
		this->GetActorLocation(), FRotator::ZeroRotator, planetSpawnInfo);

	// Assert the spawning didn't fail
	check(planetObject != nullptr);

}

// Called every frame
void APlanetSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

