// Fill out your copyright notice in the Description page of Project Settings.


#include "FoodItems.h"
#include "InventoryComponent.h"
#include "PlayerCharacter.h"

void UFoodItems::Use(APlayerCharacter* Character)
{
	if (Character)
	{
		if (OwningInventory)
		{
			OwningInventory->RemoveItem(this);
		}
	}
}
