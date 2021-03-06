// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "TankPlayerController.h"



ATank* ATankPlayerController::GetControlledTank() const{
    return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay() {
    Super::BeginPlay();
    
    
    
    auto ControlledTank = GetControlledTank();
    if(!ControlledTank) {
        UE_LOG(LogTemp, Warning, TEXT("There is currently no controlled Tank"))
    } else {
        UE_LOG(LogTemp, Warning, TEXT("Player controller possessing: %s"), *(ControlledTank->GetName()));
    }
    
}
