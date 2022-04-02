// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetObject.h"

#include "UObject/ConstructorHelpers.h"

// Sets default values
APlanetObject::APlanetObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreatePlanetModel();

}

// Called when the game starts or when spawned
void APlanetObject::BeginPlay()
{
	Super::BeginPlay();
		
	
}

// Called every frame
void APlanetObject::TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction)
{
	Super::TickActor(DeltaTime, TickType, ThisTickFunction);

	// ====================================================
	//				Call Editor Functions 
	// ====================================================
	if (TickType == ELevelTick::LEVELTICK_ViewportsOnly)
	{
		// Update the planetary system if a change is detected
		EditorUpdate();
	}

	// ====================================================
	//				Call Non-Editor Functions 
	// ====================================================
	if (TickType == ELevelTick::LEVELTICK_TimeOnly)
	{
		// Do some ticking logic here
	}

}

void APlanetObject::EditorUpdate()
{	
	mPlanetModel->SetRelativeScale3D(FVector(mSize));

	
}

void APlanetObject::GameUpdate()
{

}

void APlanetObject::DestroyPlanetModel()
{
	mPlanetModel->DestroyComponent();
}

void APlanetObject::CreatePlanetModel()
{
	// Set load a default sphere mesh to use
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(
		TEXT("StaticMesh'/Planetary_Plugin/Shapes/Shape_Sphere.Shape_Sphere'"));
	UStaticMesh* mesh = MeshAsset.Object;

	mPlanetModel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlanetMesh"));
	mPlanetModel->SetHiddenInGame(false, true);		// and set it and its children to be visible
	mPlanetModel->SetRelativeScale3D(FVector(mSize));	// and set the size here
	mPlanetModel->SetStaticMesh(mesh);				// and set the default here
	mPlanetModel->SetupAttachment(RootComponent);
}



