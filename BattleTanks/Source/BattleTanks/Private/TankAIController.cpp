// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleTanks.h"
#include "TankAIController.h"




ATank* ATankAIController::GetAIControlledTank() const {
    return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() {
    
    Super::BeginPlay();
    auto PlayerTank = GetPlayerTank();
    
    if(!PlayerTank) {
        UE_LOG(LogTemp, Warning, TEXT("Cannot find player tank"));
    } else {
        UE_LOG(LogTemp, Warning, TEXT("I found a player Tank: %s"), *(PlayerTank->GetName()));
    }
    
}


ATank* ATankAIController::GetPlayerTank() const{
    auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
    if(!PlayerPawn) { return nullptr; }
    return Cast<ATank>(PlayerPawn);
    
}
