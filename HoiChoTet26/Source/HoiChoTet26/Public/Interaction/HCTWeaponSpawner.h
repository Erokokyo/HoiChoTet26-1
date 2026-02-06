// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HCTButtonBase.h"
#include "HCTWeaponSpawner.generated.h"

class UNiagaraSystem;

UCLASS()
class HOICHOTET26_API AHCTWeaponSpawner : public AHCTButtonBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHCTWeaponSpawner();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="HoiChoTet|FX_XinSoConCo")
	TObjectPtr<UNiagaraSystem> HieuUngKhiLumVuKhi;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
