// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class SMARTAI_API AMainCharacter : public ACharacter
{
public:
	GENERATED_BODY()

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

	// Sets default values for this character's properties
	AMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
};
