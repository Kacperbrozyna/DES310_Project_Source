// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "mainCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class DES310_PROJECT_API AmainCharacterController : public APlayerController
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		void changingGameMode(bool InConsumeCaptureMouseDown);

};
