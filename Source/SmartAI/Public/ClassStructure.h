// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "ClassStructure.generated.h"

USTRUCT(BlueprintType)
struct SMARTAI_API FClassStructure : public FTableRowBase
{
public:
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Armor;

	FClassStructure();
	~FClassStructure();
};
