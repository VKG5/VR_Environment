// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickupInterface.generated.h"

/*
*VR_ENVIRONMENT_API
*/
// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UPickupInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VR_ENVIRONMENT_API IPickupInterface
{
	GENERATED_BODY()

// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup Interface")
    void Pickup(class UMotionControllerComponent* MotionController);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Pickup Interface")
    void Drop(class UMotionControllerComponent* MotionController);
};
