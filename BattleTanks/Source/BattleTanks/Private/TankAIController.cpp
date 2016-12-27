// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleTanks.h"
#include "TankAIController.h"




ATank* ATankAIController::GetAIControlledTank() const {
    return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() {
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("This is the Tank AI Controller possessed: %s"), *GetAIControlledTank()->GetName());
}
