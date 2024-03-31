// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"
#include "MotionControllerComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
APickup::APickup() {
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Base = CreateDefaultSubobject<UBoxComponent>(TEXT("Base"));
	Base->SetSimulatePhysics(true);
	Base->SetBoxExtent(FVector(1, 1, 1));
	Base->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	Base->SetupAttachment(Root);

	InteractiveCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("InterativeCollider"));
	InteractiveCollider->SetupAttachment(Base);

	bUsing = false;

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APickup::BeginPlay() {
	Super::BeginPlay();

	bSimulatePhysics = Base->IsSimulatingPhysics();
}

// Called every frame
void APickup::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

void APickup::Pickup_Implementation(class UMotionControllerComponent* MotionController) {
	if (!bUsing) {
		bUsing = true;

		currentMotionController = MotionController;

		Base->SetSimulatePhysics(false);
		Base->AttachToComponent(MotionController, FAttachmentTransformRules::KeepWorldTransform, NAME_None);
	}
}

void APickup::Drop_Implementation(class UMotionControllerComponent* MotionController) {
	if ((MotionController == nullptr) || (currentMotionController == MotionController)) {
		bUsing = false;

		Base->SetSimulatePhysics(bSimulatePhysics);

		currentMotionController = nullptr;

		Base->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	}
}
