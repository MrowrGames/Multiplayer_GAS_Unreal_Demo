// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ThisIsAnExampleActorClass.generated.h"

UCLASS()
class GRANTMETHIS_API AThisIsAnExampleActorClass : public AActor {
    GENERATED_BODY()

public:
    AThisIsAnExampleActorClass();

    UFUNCTION(BlueprintCallable)
    void CallMeFromBlueprint();
};
