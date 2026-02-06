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

	// Create Niagara component and attach to root
	NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
	NiagaraComponent->SetupAttachment(SceneRoot);
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

