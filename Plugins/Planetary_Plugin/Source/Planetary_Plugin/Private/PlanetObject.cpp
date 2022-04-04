// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetObject.h"

#include "UObject/ConstructorHelpers.h"

namespace MATHS
{
	// Gravitational constant
	const float G = 1.0001f;

	// Vector SqModulus function
	float SqModulus(FVector in)
	{
		return ((in.X * in.X) + (in.Y * in.Y) + (in.Z * in.Z));
	}
}

// Sets default values
APlanetObject::APlanetObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreatePlanetModel();

	mVelocity = mInitVelocity;

}

// Called when the game starts or when spawned
void APlanetObject::BeginPlay()
{
	Super::BeginPlay();
		
	mVelocity = mInitVelocity;
}

// Called every frame
void APlanetObject::TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction)
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

void APlanetObject::EditorUpdate(float DeltaTime)
{	
	// Update the size of the object in real-time
	mPlanetModel->SetRelativeScale3D(FVector(mSize));

	
}

void APlanetObject::GameUpdate(float DeltaTime)
{
	mTimeStep += 0.01f;
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
	mPlanetModel->SetHiddenInGame(false, true);			// and set it and its children to be visible
	mPlanetModel->SetRelativeScale3D(FVector(mSize));	// and set the size here
	mPlanetModel->SetStaticMesh(mesh);					// and set the default here
	mPlanetModel->SetupAttachment(RootComponent);
}

void APlanetObject::UpdateVelocity(float DeltaTime, TArray<APlanetObject*> bodies)
{
	GEngine->ClearOnScreenDebugMessages();

	// For all the bodies calculate their velocity
	// This is done by "Newton's law of universal gravitation" formula: F = G*m1*m2 / r^2
	// This code was taken from Sebastian Lague's video on coding solar systems
	// Sebastian Lague's channel: https://www.youtube.com/channel/UCmtyQOKKmrMVaKuRXz02jbQ
	// The video in question at time: https://youtu.be/7axImc1sxa0?t=51
	for (int32 i = 0; i < bodies.Num(); ++i) {
		if (bodies[i] != this) {
			// Distance between two bodies
			float sqrDist = MATHS::SqModulus(bodies[i]->GetActorLocation() - this->GetActorLocation());
			// Normalised direction to apply the force
			FVector forceDir = (bodies[i]->GetActorLocation() - this->GetActorLocation()).GetSafeNormal();
			// The force applied along that direction
			FVector force = forceDir * MATHS::G * bodies[i]->mMass / sqrDist;
			// Find acceleration to add to our velocity
			FVector acceleration = force / mMass;

			// Set that as our velocity multiplied with delta time
			mVelocity += acceleration * mTimeStep;

			FString debugmsg = "__________________________";
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, debugmsg);

			debugmsg = "force = (" + FString::SanitizeFloat(forceDir.X) + ", " + FString::SanitizeFloat(forceDir.Y) + ", " + FString::SanitizeFloat(forceDir.Z) + ") * " + FString::SanitizeFloat(MATHS::G) + " * " + FString::SanitizeFloat(bodies[i]->mMass) + " / " + FString::SanitizeFloat(sqrDist);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, debugmsg);

			debugmsg = "forceDir is: " +
				FString::SanitizeFloat(forceDir.X) +
				", " + FString::SanitizeFloat(forceDir.Y) +
				", " + FString::SanitizeFloat(forceDir.Z);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, debugmsg);

			debugmsg = "force is: " +
				FString::SanitizeFloat(force.X) +
				", " + FString::SanitizeFloat(force.Y) +
				", " + FString::SanitizeFloat(force.Z);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, debugmsg);

			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, FString(GetName()));
		}
	}
}

void APlanetObject::MoveBody(float DeltaTime)
{
	FRotator rotator;
	mPlanetModel->AddWorldRotation(rotator.Add(mRotVel.Y, mRotVel.Z, mRotVel.X));
	SetActorLocation(GetActorLocation() += mVelocity * DeltaTime);
}
