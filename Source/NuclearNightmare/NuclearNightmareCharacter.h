// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Logging/LogMacros.h"
#include "CoreMinimal.h"
#include "Engine.h"
#include "NuclearNightmareCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ANuclearNightmareCharacter : public ACharacter
{
	GENERATED_BODY()

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Spring Arm For Camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmFPCam;

	//Flashlight Mesh & Light Source
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	USpotLightComponent* FlashlightSource;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	//Sprint Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* StopSprintAction;

	//Flashlight Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* FlashlightAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
public:
	ANuclearNightmareCharacter();

protected:
	virtual void BeginPlay();

public:
		
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	//Sprint Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float SprintValue;

	//Sprint Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float WalkValue;

	//Flashlight Toggle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	bool bFlashlightToggle;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	//Called for sprinting
	UFUNCTION(Server, Reliable)
	void SprintOnServer(bool Sprinting);

	UFUNCTION(NetMulticast, Reliable)
	void SprintOnClient(bool Sprinting);

	void sprint();
	void StopSprint();

	//Flashlight Logic
	UFUNCTION(Server, Reliable)
	void FlashlightOnServer(bool Flashlight);

	UFUNCTION(NetMulticast, Reliable)
	void FlashlightOnClient(bool Flashlight);

	void FlashlightOn();
	void FlashlightOff();
	void FlashlightToggle();
	

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

