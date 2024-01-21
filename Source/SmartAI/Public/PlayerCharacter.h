// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "MainCharacter.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SMARTAI_API APlayerCharacter : public AMainCharacter
{
	GENERATED_BODY()
	
public:
	APlayerCharacter();
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UInventoryComponent* Inventory;

	UFUNCTION(BlueprintCallable, Category = "Items")
	void UseItem(class UItems* Item);

	//UPROPERTY(BlueprintReadWrite)
	//float Speed;

	//void LineTraceCast();
	//void RunPressed();
	//void RunReleased();

	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
