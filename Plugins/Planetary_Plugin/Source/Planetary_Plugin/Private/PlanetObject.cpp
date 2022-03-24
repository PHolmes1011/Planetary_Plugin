// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetObject.h"

#include "UObject/ConstructorHelpers.h"

// Sets default values
APlanetObject::APlanetObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set load a default sphere mesh to use
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(
		TEXT("StaticMesh'/Planetary_Plugin/Shapes/Shape_Sphere.Shape_Sphere'"));
	UStaticMesh* mesh = MeshAsset.Object;

	mPlanetModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlanetMesh"));
	mPlanetModel->SetHiddenInGame(false, true);		// and set it and its children to be visible
	mPlanetModel->SetWorldScale3D(FVector(mSize));	// and set the size here
	mPlanetModel->SetStaticMesh(mesh);				// and set the default here
	RootComponent = mPlanetModel;

}

// Called when the game starts or when spawned
void APlanetObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanetObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mPlanetModel->SetWorldScale3D(FVector(mSize));
}

