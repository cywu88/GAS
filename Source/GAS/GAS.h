// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(Blueprintable)
enum  class EGASAbilityInputID : uint8
{
	//0.None
	None	UMETA(DisplayName = "NONE"),
	//1 Jump	
	Jump	UMETA(DisplayName = "Jump"),
	//2 Sprint
	Sprint	UMETA(DisplayName = "Sprint"),
	
};