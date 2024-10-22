// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupInterface.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class VR_ENVIRONMENT_API APickup : public AActor, public IPickupInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pickup")
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pickup")
	class UBoxComponent* Base;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pickup")
	class UBoxComponent* InteractiveCollider;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pickup")
	bool bUsing;

	bool bSimulatePhysics;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pickup")
	class UMotionControllerComponent* currentMotionController;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup Interface")
	void Pickup(class UMotionControllerComponent* MotionController);

	virtual void Pickup_Implementation(class UMotionControllerComponent* MotionController) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup Interface")
	void Drop(class UMotionControllerComponent* MotionController);

	virtual void Drop_Implementation(class UMotionControllerComponent* MotionController) override;

};
