// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Items.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	Capacity = 20;
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (auto& Item : DefaultItems)
	{
		AddItem(Item);
	}
}

bool UInventoryComponent::AddItem(UItems* Item)
{
	Item->OwningInventory = this;
	Item->World = GetWorld();
	if (Items.Num() >= Capacity || !Item)
	{
		return false;
	}
	Items.Add(Item);
	OnInventoryUpdated.Broadcast();
	
	return true;
}

bool UInventoryComponent::RemoveItem(UItems* Item)
{
	if (Item)
	{
		Item->OwningInventory = nullptr;
		Item->World = nullptr;
		Items.RemoveSingle(Item);
		OnInventoryUpdated.Broadcast();
		return true;
	}
	return false;
}


