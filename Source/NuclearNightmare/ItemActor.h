// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

class ANuclearNightmareCharacter;

UCLASS()
class NUCLEARNIGHTMARE_API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool PickedUp;

	UPROPERTY(EditAnywhere)
	class USoundBase* PickUpSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Equip(class ANuclearNightmareCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnEquip(class ANuclearNightmareCharacter* Character);

	virtual void UnEquip(class ANuclearNightmareCharacter* Character);

	UFUNCTION(BlueprintImplementableEvent)
	void OnUnEquip(class ANuclearNightmareCharacter* Character);

	UFUNCTION(NetMulticast, Reliable)
	void OnPickedUp();

	UFUNCTION(Server, Reliable)
	void OnPickedUpServer();

	virtual void PickUpEvent();

	UFUNCTION(NetMulticast, Reliable)
	void DropOnClients();

	UFUNCTION(Server, Reliable)
	void DropOnServer();

};
