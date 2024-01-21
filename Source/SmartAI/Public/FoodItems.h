// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items.h"
#include "FoodItems.generated.h"

/**
 * 
 */
UCLASS()
class SMARTAI_API UFoodItems : public UItems
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items", meta = (ClampMin = 0.0))
	float HealthAmount;
	
protected:
	
	virtual void Use(class APlayerCharacter* Character) override;
};
