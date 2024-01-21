// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Items.h"
#include "InventoryComponent.h"

APlayerCharacter::APlayerCharacter()//:
	//Speed(400.0f)
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	Inventory = CreateDefaultSubobject<UInventoryComponent>("Inventory");
	Inventory->Capacity = 20;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//GetCharacterMovement()->MaxWalkSpeed = Speed;
}

void APlayerCharacter::UseItem(UItems* Item)
{
	if (Item)
	{
		Item->Use(this);
		Item->OnUse(this); //its for blueprint 
	}
}

/*void APlayerCharacter::LineTraceCast()
{
	FVector Start = Camera->GetComponentLocation();
	FVector End = Start + Camera->GetForwardVector() * 5000.0f;

	FHitResult HitResult;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Camera, Params);

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.0f);

	if (bHit)
	{
		DrawDebugBox(GetWorld(), HitResult.ImpactPoint, FVector(5, 5, 5), FColor::Emerald, false, 2.0f);
	}
}


void APlayerCharacter::RunPressed()
{
	Speed = 800;
	GetCharacterMovement()->MaxWalkSpeed = Speed;
}

void APlayerCharacter::RunReleased()
{
	Speed = 400;
	GetCharacterMovement()->MaxWalkSpeed = Speed;
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("LineTrace", IE_Pressed, this, &APlayerCharacter::LineTraceCast);
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &APlayerCharacter::RunPressed);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &APlayerCharacter::RunReleased);
}
*/