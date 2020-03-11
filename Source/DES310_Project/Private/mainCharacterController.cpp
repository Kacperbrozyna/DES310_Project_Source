// Fill out your copyright notice in the Description page of Project Settings.


#include "mainCharacterController.h"


void AmainCharacterController::changingGameMode(bool InConsumeCaptureMouseDown)
{
	FInputModeGameOnly InputMode;
	InputMode.SetConsumeCaptureMouseDown(InConsumeCaptureMouseDown);
	SetInputMode(InputMode);
}