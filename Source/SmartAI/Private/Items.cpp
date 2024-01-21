// Fill out your copyright notice in the Description page of Project Settings.


#include "Items.h"
#include "PlayerCharacter.h"

UItems::UItems()
{
	Weight = 1.0f;
	ItemDisplayName = FText::FromString("Item");
	UseActionText = FText::FromString("Use");
}

void UItems::Use(APlayerCharacter* Character)
{

}

