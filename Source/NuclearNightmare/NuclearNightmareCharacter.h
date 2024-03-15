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
class AItemActor;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryScroll, int32, CurrentSlot);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowPickUpIcon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRemovePickUpIcon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryFull);

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

	//HUD
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hud, meta = (AllowPrivateAccess = "true"))
	UUserWidget* InventoryHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hud, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> InventoryClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* InventoryScrollAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* InventoryScrollBackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* InventoryDropItemAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Inventory, meta=(AllowPrivateAccess = "true"))
	USoundBase* DropItemSound;

	//Flashlight Mesh & Light Source
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FlashlightMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* FlashlightLightSourceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	USpotLightComponent* FlashlightSource;

	//Glowstick Mesh & Light Source
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* GlowstickMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LightSource, meta = (AllowPrivateAccess = "true"))
	UPointLightComponent* GlowstickSource;

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

	//Glowstick Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* GlowstickAction;

	//Crouch Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* CrouchAction;

	//Peak Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* PeakLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* PeakRightAction;

	//First Person/Third Person Camera Toggle Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* FirstThirdCameraAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	//Interact Input
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* InteractAction;
	
public:
	ANuclearNightmareCharacter();

protected:
	virtual void BeginPlay();

	virtual void Tick(float DeltaSeconds) override;

public:

	//Inventory
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	TArray<class AItemActor*> ItemsInInv;

	UPROPERTY(BlueprintAssignable)
	FOnInventoryUpdated InventoryUpdatedDelegate;

	UPROPERTY(BlueprintAssignable)
	FInventoryFull InventoryFull;

	UPROPERTY(BlueprintAssignable)
	FShowPickUpIcon ShowPickUpIcon;

	UPROPERTY(BlueprintAssignable)
	FRemovePickUpIcon RemovePickUpIcon;

	UPROPERTY(BlueprintAssignable)
	FOnInventoryScroll InventoryScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	int32 InventoryCapcity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	class AItemActor* ItemLookedAt;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	int32 CurrentSlotIndex;
	
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	//Sprint Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float SprintValue;

	//Sprint Value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float WalkValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	bool bSprinting;

	bool bPressingSprint;

	//Peak Logic
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	bool bPeakLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	bool bPeakRight;

	//Flashlight Toggle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	bool bFlashlightToggle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundBase* FlashlightOnSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundBase* FlashlightOffSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundAttenuation* FlashlightAttenuation;

	//Snowmobile Logic
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Snowmobile)
	bool Driver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Snowmobile)
	bool Passenger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Snowmobile)
	float YawControlRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Snowmobile)
	float PitchControlRotation;

	//Glowstick Toggle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	bool bGlowstickToggle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundBase* GlowstickOnSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundBase* GlowstickOffSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = LightSource)
	class USoundAttenuation* GlowstickAttenuation;

	//Camera Toggle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Camera)
	bool bCameraThirdToggle;

	//Crouching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	bool bIsPlayerCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	FVector LocationBeforeCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = Movement)
	FVector LocationAfterCrouch;

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

	void MovementStopSprint();

	FVector2d MovementXY;

	//Peak Logic
	UFUNCTION(Server, Reliable)
	void PeakOnServer(bool Peaking, bool bLeft);

	UFUNCTION(NetMulticast, Reliable)
	void PeakOnClient(bool Peaking, bool bLeft);

	void PeakLeft();
	void PeakRight();

	void StopPeakLeft();
	void StopPeakRight();

	//Flashlight Logic
	UFUNCTION(Server, Reliable)
	void FlashlightOnServer(bool Flashlight);

	UFUNCTION(NetMulticast, Reliable)
	void FlashlightOnClient(bool Flashlight);

	UFUNCTION(BlueprintCallable)
	void FlashlightOn();
	UFUNCTION(BlueprintCallable)
	void FlashlightOff();
	
	void FlashlightToggle();

	//Glowstick Logic

	UFUNCTION(Server, Reliable)
	void GlowstickOnServer(bool Glowstick);

	UFUNCTION(NetMulticast, Reliable)
	void GlowstickOnClient(bool Glowstick);

	UFUNCTION(BlueprintCallable)
	void GlowstickOn();
	UFUNCTION(BlueprintCallable)
	void GlowstickOff();
	
	void GlowstickToggle();

	//Crouch Logic
	UFUNCTION(Server, Reliable)
	void CrouchOnServer(bool Crouch);

	UFUNCTION(NetMulticast, Reliable)
	void CrouchOnClient(bool Crouch);
	
	void CrouchToggle();

	FVector InitalCrouchTraceLoc;

	//Camera Toggle
	UFUNCTION(Client, Reliable)
	void CameraToggleOnClient(bool ThirdPersonView);

	void CameraToggle();

	//Inventory
	UFUNCTION()
	void PickUpItem(AItemActor* Item);

	UFUNCTION(BlueprintCallable)
	void PickUpItemBlueprint(AItemActor* Item);

	UFUNCTION(Server, Reliable)
	void PickUpItemOnServer(AItemActor* Item);

	UFUNCTION()
	void AttemptItemPickUp();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasItem(FString ItemName);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	int32 GetItemSlot(FString ItemName);
	
	void InventoryScrollFunction(bool backwards);

	void InventoryScrollForward();
	void InventoryScrollBack();

	void DropItem();

	UFUNCTION(Server, Reliable)
	void DropItemOnServer(AItemActor* Item);

	UFUNCTION(NetMulticast, Reliable)
	void DropItemOnClient(AItemActor* Item);

	void ResetValuesAfterDropping();

	int32 IndexThatWasDropped;

	//Snowmobile Funcs
	UFUNCTION(Server, Unreliable)
	void RPCSetYawControlRotationServer(float value);

	UFUNCTION(NetMulticast, Unreliable)
	void RPCSetYawControlRotationMulticast(float value);

	UFUNCTION(Server, Unreliable)
	void RPCSetPitchControlRotationServer(float value);

	UFUNCTION(NetMulticast, Unreliable)
	void RPCSetPitchControlRotationMulticast(float value);

	//Input
	UFUNCTION(BlueprintCallable)
	void AddMappingInput();
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

