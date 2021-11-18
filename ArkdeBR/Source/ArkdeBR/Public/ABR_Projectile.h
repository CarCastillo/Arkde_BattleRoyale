// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ABR_Projectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class UParticleSystemComponent;

UCLASS()
class ARKDEBR_API AABR_Projectile : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UParticleSystemComponent* ParticleSystemComponent;
	
public:	
	// Sets default values for this actor's properties
	AABR_Projectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
