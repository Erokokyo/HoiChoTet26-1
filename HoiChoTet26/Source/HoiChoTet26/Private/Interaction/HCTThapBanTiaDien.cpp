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
}

// Called when the game starts or when spawned
void AHCTThapBanTiaDien::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHCTThapBanTiaDien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

