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
	UNiagaraComponent* HieuUngBanTiaDien;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VFX")
	UNiagaraComponent* HieuUngVungAnhHuong;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the actor is constructed, both in editor and at runtime
	virtual void OnConstruction(const FTransform& Transform) override;

private:
	// Cached reference to the player pawn
	UPROPERTY()
	APawn* CachedPlayerPawn;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
