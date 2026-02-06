// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/HCTThapBanTiaDien.h"


// Sets default values
AHCTThapBanTiaDien::AHCTThapBanTiaDien()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create root scene component
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	// Create a Niagara component for Tesla coil effect and attach to root
	HieuUngBanTiaDien = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Tesla Coil Niagara Component"));
	HieuUngBanTiaDien->SetupAttachment(SceneRoot);

	// Create a Niagara component for area effect and attach to root
	HieuUngVungAnhHuong = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Boundary Effect Niagara Component"));
	HieuUngVungAnhHuong->SetupAttachment(SceneRoot);

	// Initialize cached pawn pointer
	CachedPlayerPawn = nullptr;
}

// Called when the actor is constructed, both in editor and at runtime
void AHCTThapBanTiaDien::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// if (HieuUngVungAnhHuong != nullptr)
	// {
	// 	HieuUngVungAnhHuong->SetFloatParameter(FName("Radius"), 350.f);
	// 	HieuUngVungAnhHuong->SetFloatParameter(FName("Height"), 70.f);
	// 	HieuUngVungAnhHuong->SetColorParameter(FName("Color"), FLinearColor::FromSRGBColor(FColor(48, 41, 255)));
	// }
}

// Called when the game starts or when spawned
void AHCTThapBanTiaDien::BeginPlay()
{
	Super::BeginPlay();

	// Cache the player's pawn
	if (const APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		CachedPlayerPawn = PlayerController->GetPawn();
	}
}

// Called every frame
void AHCTThapBanTiaDien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (HieuUngBanTiaDien != nullptr && CachedPlayerPawn != nullptr)
	{
		HieuUngBanTiaDien->SetVariablePosition(FName("PositionTarget"), CachedPlayerPawn->GetActorLocation());
	}
}
