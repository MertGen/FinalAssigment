// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Items.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class SMARTAI_API UItems : public UObject
{
	GENERATED_BODY()

public:

	UItems();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items")
	FText UseActionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items")
	class UStaticMesh* PickupMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items")
	class UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items")
	FText ItemDisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items", meta = (MultiLine = true))
	FText ItemDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Items", meta = (ClampMin = 0.0))
	float Weight;

	UPROPERTY(Transient)
	class UWorld* World;

	virtual class UWorld* GetWorld() const { return World; };

	UPROPERTY()
	class UInventoryComponent* OwningInventory;

	virtual void Use(class APlayerCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUse(class APlayerCharacter* Character);
};
