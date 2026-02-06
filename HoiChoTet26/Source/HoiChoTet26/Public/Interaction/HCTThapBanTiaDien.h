// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "Components/SceneComponent.h"
#include "HCTThapBanTiaDien.generated.h"

UCLASS()
class HOICHOTET26_API AHCTThapBanTiaDien : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHCTThapBanTiaDien();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* SceneRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VFX")
	UNiagaraComponent* NiagaraComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
