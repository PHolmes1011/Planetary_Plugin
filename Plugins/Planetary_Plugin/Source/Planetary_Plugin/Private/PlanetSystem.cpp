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
void APlanetSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

