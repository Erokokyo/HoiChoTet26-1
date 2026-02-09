// Fill out your copyright notice in the Description page of Project Settings.


#include "HCTWeaponSpawer2.h"
#include "NiagaraFunctionLibrary.h"

// Sets default values
AHCTWeaponSpawer2::AHCTWeaponSpawer2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHCTWeaponSpawer2::BeginPlay()
{
	Super::BeginPlay();
	
	if (HieuUngLumVukhi)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, HieuUngLumVukhi, GetActorLocation());
	}
}


// Called every frame
void AHCTWeaponSpawer2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHCTWeaponSpawer2::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (HieuUngLumVukhi)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, HieuUngLumVukhi, GetActorLocation());
	}
}