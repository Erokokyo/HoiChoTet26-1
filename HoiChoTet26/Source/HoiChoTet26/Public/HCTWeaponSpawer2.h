// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interaction/HCTButtonBase.h"
#include "HCTWeaponSpawer2.generated.h"

class UNiagaraSystem;

UCLASS()
class HOICHOTET26_API AHCTWeaponSpawer2 : public AHCTButtonBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHCTWeaponSpawer2();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="HoiChoTet|FX_Sin_XO")
	TObjectPtr<UNiagaraSystem> HieuUngLumVukhi;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	
};
