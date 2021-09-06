// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EABR_AbilityInputID : uint8
{
	None		UMETA(DisplayName = "None"),
	Confirm		UMETA(DisplayName = "Confirm"),
	Cancel		UMETA(DisplayName = "Cancel"),
	Ability1	UMETA(DisplayName = "Ability1"),
	Ability2	UMETA(DisplayName = "Ability2"),
	Sprint		UMETA(DisplayName = "Sprint"),
	Jump		UMETA(DisplayName = "Jump")
};
