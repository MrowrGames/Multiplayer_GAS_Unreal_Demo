// Fill out your copyright notice in the Description page of Project Settings.

#include "ThisIsAnExampleActorClass.h"

AThisIsAnExampleActorClass::AThisIsAnExampleActorClass() {
    PrimaryActorTick.bCanEverTick = true;
}

void AThisIsAnExampleActorClass::CallMeFromBlueprint() {
    UE_LOG(LogTemp, Warning, TEXT("This is a message from the C++ code!"));
}