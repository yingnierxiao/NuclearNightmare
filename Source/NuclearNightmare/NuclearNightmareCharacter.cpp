// Copyright Epic Games, Inc. All Rights Reserved.

#include "NuclearNightmareCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Blueprint/UserWidget.h"
#include "Engine/LocalPlayer.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/CharacterMovementComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ANuclearNightmareCharacter

ANuclearNightmareCharacter::ANuclearNightmareCharacter()
{
	SprintValue = 600;
	WalkValue = 200;
	bFlashlightToggle = false;
	bCameraThirdToggle = false;
	bIsPlayerCrouched = false;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	//Create a SpringArmComponent
	SpringArmFPCam = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmFPCam"));
	//SpringArmFPCam->SetupAttachment(GetCapsuleComponent());
	const FName SocketNameHead = "neck_01";
	SpringArmFPCam->SetupAttachment(GetMesh(), SocketNameHead);
	SpringArmFPCam->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	SpringArmFPCam->bUsePawnControlRotation = true;
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(SpringArmFPCam);

	//Create Flashlight
	FlashlightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlashlightMesh"));
	const FName FlashlightSocketName = "FlashlightSocket";
	FlashlightMesh->SetupAttachment(GetMesh(), FlashlightSocketName);
	FlashlightMesh->SetVisibility(false);
	
	FlashlightSource = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlashlightSource"));
	FlashlightSource->SetupAttachment(FlashlightMesh);
	FlashlightSource->SetVisibility(false);
}

void ANuclearNightmareCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if(IsLocallyControlled())
	{
			GasMaskHud = Cast<UUserWidget>(CreateWidget(GetWorld(), GasMaskClass));
			if(GasMaskHud)
			{
				GasMaskHud->AddToViewport();
			}
	}

}

void ANuclearNightmareCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANuclearNightmareCharacter, bFlashlightToggle);
	DOREPLIFETIME(ANuclearNightmareCharacter, bCameraThirdToggle);
	DOREPLIFETIME(ANuclearNightmareCharacter, bIsPlayerCrouched);
	DOREPLIFETIME(ANuclearNightmareCharacter, LocationAfterCrouch);
	DOREPLIFETIME(ANuclearNightmareCharacter, LocationBeforeCrouch);
}

//////////////////////////////////////////////////////////////////////////// Input

void ANuclearNightmareCharacter::SprintOnServer_Implementation(bool Sprinting)
{
	SprintOnClient(Sprinting);
}

void ANuclearNightmareCharacter::SprintOnClient_Implementation(bool Sprinting)
{
	if(Sprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintValue;
		if(bIsPlayerCrouched)
		{
			CrouchOnServer(false);
		}
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkValue;
	}
}

void ANuclearNightmareCharacter::sprint()
{
	if(bIsPlayerCrouched)
	{
		InitalCrouchTraceLoc = GetCapsuleComponent()->GetComponentLocation();
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(this);
		FHitResult HitResultCrouch;
		UKismetSystemLibrary::SphereTraceSingle(GetWorld(), InitalCrouchTraceLoc, FVector(InitalCrouchTraceLoc.X, InitalCrouchTraceLoc.Y, InitalCrouchTraceLoc.Z + 96), 29, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitResultCrouch, true, FLinearColor::Green);
		if(!HitResultCrouch.bBlockingHit)
		{
			SprintOnServer(true);
		}
	}
	else
	{
		SprintOnServer(true);	
	}
}

void ANuclearNightmareCharacter::StopSprint()
{
	SprintOnServer(false);
}

void ANuclearNightmareCharacter::FlashlightOnServer_Implementation(bool Flashlight)
{
	FlashlightOnClient(Flashlight);
}

void ANuclearNightmareCharacter::FlashlightOnClient_Implementation(bool Flashlight)
{
	if(Flashlight)
	{
		FlashlightMesh->SetVisibility(true);
		FlashlightSource->SetVisibility(true);
		bFlashlightToggle = true;
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), FlashlightOnSound, GetActorLocation(), FRotator(0,0,0), 1.0, 1.0, 0.0, FlashlightAttenuation);
	}
	else
	{
		FlashlightMesh->SetVisibility(false);
		FlashlightSource->SetVisibility(false);
		bFlashlightToggle = false;
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), FlashlightOffSound, GetActorLocation(), FRotator(0,0,0), 1.0, 1.0, 0.0, FlashlightAttenuation);
	}
}

void ANuclearNightmareCharacter::FlashlightOn()
{
	FlashlightOnServer(true);
}

void ANuclearNightmareCharacter::FlashlightOff()
{
	FlashlightOnServer(false);
}

void ANuclearNightmareCharacter::FlashlightToggle()
{
	if(bFlashlightToggle)
	{
		FlashlightOff();
	}
	else
	{
		FlashlightOn();
	}
}

void ANuclearNightmareCharacter::CrouchOnServer_Implementation(bool Crouch)
{
	CrouchOnClient(Crouch);
}

void ANuclearNightmareCharacter::CameraToggleOnClient_Implementation(bool ThirdPersonView)
{
	if(ThirdPersonView)
	{
		SpringArmFPCam->TargetArmLength = 300.0f;
		if(GasMaskHud)
		{
			GasMaskHud->RemoveFromParent();
		}
	}
	else
	{
		SpringArmFPCam->TargetArmLength = 0.0f;

		if(IsLocallyControlled())
		{
			GasMaskHud = Cast<UUserWidget>(CreateWidget(GetWorld(), GasMaskClass));
			if(GasMaskHud)
			{
				GasMaskHud->AddToViewport();
			}
		}
	}
}

void ANuclearNightmareCharacter::CrouchOnClient_Implementation(bool Crouch)
{
	if(Crouch)
	{
		bIsPlayerCrouched = true;
		GetCapsuleComponent()->SetCapsuleHalfHeight(65);
		
			CacheInitialMeshOffset(FVector(LocationAfterCrouch.X, LocationAfterCrouch.Y, LocationAfterCrouch.Z - 64), FRotator(0, -90, 0));
		GetMesh()->SetRelativeLocation(LocationAfterCrouch);
	}
	else
	{
		bIsPlayerCrouched = false;
		GetCapsuleComponent()->SetCapsuleHalfHeight(96);
		
			CacheInitialMeshOffset(FVector(LocationBeforeCrouch.X, LocationBeforeCrouch.Y, LocationBeforeCrouch.Z - 97), FRotator(0, -90, 0));
		GetMesh()->SetRelativeLocation(LocationBeforeCrouch);
	}
}

void ANuclearNightmareCharacter::CrouchToggle()
{
	if(bIsPlayerCrouched)
	{
		InitalCrouchTraceLoc = GetCapsuleComponent()->GetComponentLocation();
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(this);
		FHitResult HitResultCrouch;
		UKismetSystemLibrary::SphereTraceSingle(GetWorld(), InitalCrouchTraceLoc, FVector(InitalCrouchTraceLoc.X, InitalCrouchTraceLoc.Y, InitalCrouchTraceLoc.Z + 96), 29, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, HitResultCrouch, true, FLinearColor::Green);
		if(!HitResultCrouch.bBlockingHit)
		{
			CrouchOnServer(false);
		}
	}
	else
	{
		LocationBeforeCrouch = GetMesh()->GetRelativeLocation();
		LocationAfterCrouch = LocationBeforeCrouch;
		LocationAfterCrouch.Z = LocationAfterCrouch.Z + 30;
		CrouchOnServer(true);
	}
}

void ANuclearNightmareCharacter::CameraToggle()
{
	if(bCameraThirdToggle)
	{
		CameraToggleOnClient(false);
		bCameraThirdToggle = false;
	}
	else
	{
		CameraToggleOnClient(true);
		bCameraThirdToggle = true;
	}
}

void ANuclearNightmareCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ANuclearNightmareCharacter::Move);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this, &ANuclearNightmareCharacter::sprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &ANuclearNightmareCharacter::StopSprint);

		//Crouching
		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Started, this, &ANuclearNightmareCharacter::CrouchToggle);

		//ThirdPersonToggle
		EnhancedInputComponent->BindAction(FirstThirdCameraAction, ETriggerEvent::Started, this, &ANuclearNightmareCharacter::CameraToggle);

		//Flashlight
		EnhancedInputComponent->BindAction(FlashlightAction, ETriggerEvent::Started, this, &ANuclearNightmareCharacter::FlashlightToggle);
		
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ANuclearNightmareCharacter::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void ANuclearNightmareCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}


void ANuclearNightmareCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
