// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "ArkdeBR/ArkdeBR.h"
#include "ABR_GameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class ARKDEBR_API UABR_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public: 

	UABR_GameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Gameplay Ability")
	EABR_AbilityInputID AbilityInputID;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Gameplay Ability")
	EABR_AbilityInputID AbilityID;
	
};
