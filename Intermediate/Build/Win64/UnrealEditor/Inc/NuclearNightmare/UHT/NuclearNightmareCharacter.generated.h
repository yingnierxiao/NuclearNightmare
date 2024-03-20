// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NuclearNightmareCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItemActor;
#ifdef NUCLEARNIGHTMARE_NuclearNightmareCharacter_generated_h
#error "NuclearNightmareCharacter.generated.h already included, missing '#pragma once' in NuclearNightmareCharacter.h"
#endif
#define NUCLEARNIGHTMARE_NuclearNightmareCharacter_generated_h

#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_23_DELEGATE \
NUCLEARNIGHTMARE_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_24_DELEGATE \
NUCLEARNIGHTMARE_API void FOnInventoryScroll_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryScroll, int32 CurrentSlot);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_25_DELEGATE \
NUCLEARNIGHTMARE_API void FShowPickUpIcon_DelegateWrapper(const FMulticastScriptDelegate& ShowPickUpIcon);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_DELEGATE \
NUCLEARNIGHTMARE_API void FRemovePickUpIcon_DelegateWrapper(const FMulticastScriptDelegate& RemovePickUpIcon);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_27_DELEGATE \
NUCLEARNIGHTMARE_API void FInventoryFull_DelegateWrapper(const FMulticastScriptDelegate& InventoryFull);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_28_DELEGATE \
NUCLEARNIGHTMARE_API void FHealthDeath_DelegateWrapper(const FMulticastScriptDelegate& HealthDeath);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_29_DELEGATE \
NUCLEARNIGHTMARE_API void FDamageEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& DamageEventDelegate);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_SPARSE_DATA
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RPCSetPitchControlRotationMulticast_Implementation(float value); \
	virtual void RPCSetPitchControlRotationServer_Implementation(float value); \
	virtual void RPCSetYawControlRotationMulticast_Implementation(float value); \
	virtual void RPCSetYawControlRotationServer_Implementation(float value); \
	virtual void DropItemOnClient_Implementation(AItemActor* Item); \
	virtual void DropItemOnServer_Implementation(AItemActor* Item); \
	virtual void PickUpItemOnServer_Implementation(AItemActor* Item); \
	virtual void CameraToggleOnClient_Implementation(bool ThirdPersonView); \
	virtual void CrouchOnClient_Implementation(bool Crouch); \
	virtual void CrouchOnServer_Implementation(bool Crouch); \
	virtual void GlowstickOnClient_Implementation(bool Glowstick); \
	virtual void GlowstickOnServer_Implementation(bool Glowstick); \
	virtual void FlashlightOnClient_Implementation(bool Flashlight); \
	virtual void FlashlightOnServer_Implementation(bool Flashlight); \
	virtual void DamageEventMulticast_Implementation(float HealthAmount); \
	virtual void DamageEventServer_Implementation(float HealthAmount); \
	virtual void PeakOnClient_Implementation(bool Peaking, bool bLeft); \
	virtual void PeakOnServer_Implementation(bool Peaking, bool bLeft); \
	virtual void SprintOnClient_Implementation(bool Sprinting); \
	virtual void SprintOnServer_Implementation(bool Sprinting); \
 \
	DECLARE_FUNCTION(execAddMappingInput); \
	DECLARE_FUNCTION(execRPCSetPitchControlRotationMulticast); \
	DECLARE_FUNCTION(execRPCSetPitchControlRotationServer); \
	DECLARE_FUNCTION(execRPCSetYawControlRotationMulticast); \
	DECLARE_FUNCTION(execRPCSetYawControlRotationServer); \
	DECLARE_FUNCTION(execDropItemOnClient); \
	DECLARE_FUNCTION(execDropItemOnServer); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execGetItemSlot); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execAttemptItemPickUp); \
	DECLARE_FUNCTION(execPickUpItemOnServer); \
	DECLARE_FUNCTION(execPickUpItemBlueprint); \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execCameraToggleOnClient); \
	DECLARE_FUNCTION(execCrouchOnClient); \
	DECLARE_FUNCTION(execCrouchOnServer); \
	DECLARE_FUNCTION(execGlowstickOff); \
	DECLARE_FUNCTION(execGlowstickOn); \
	DECLARE_FUNCTION(execGlowstickOnClient); \
	DECLARE_FUNCTION(execGlowstickOnServer); \
	DECLARE_FUNCTION(execFlashlightOff); \
	DECLARE_FUNCTION(execFlashlightOn); \
	DECLARE_FUNCTION(execFlashlightOnClient); \
	DECLARE_FUNCTION(execFlashlightOnServer); \
	DECLARE_FUNCTION(execDamageEventMulticast); \
	DECLARE_FUNCTION(execDamageEventServer); \
	DECLARE_FUNCTION(execCallDamageEvent); \
	DECLARE_FUNCTION(execPeakOnClient); \
	DECLARE_FUNCTION(execPeakOnServer); \
	DECLARE_FUNCTION(execSprintOnClient); \
	DECLARE_FUNCTION(execSprintOnServer);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_CALLBACK_WRAPPERS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANuclearNightmareCharacter(); \
	friend struct Z_Construct_UClass_ANuclearNightmareCharacter_Statics; \
public: \
	DECLARE_CLASS(ANuclearNightmareCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NuclearNightmare"), NO_API) \
	DECLARE_SERIALIZER(ANuclearNightmareCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSprinting=NETFIELD_REP_START, \
		Health, \
		bPeakLeft, \
		bPeakRight, \
		bFlashlightToggle, \
		FlashlightOnSound, \
		FlashlightOffSound, \
		FlashlightAttenuation, \
		Driver, \
		Passenger, \
		YawControlRotation, \
		PitchControlRotation, \
		bGlowstickToggle, \
		GlowstickOnSound, \
		GlowstickOffSound, \
		GlowstickAttenuation, \
		bCameraThirdToggle, \
		bIsPlayerCrouched, \
		LocationBeforeCrouch, \
		LocationAfterCrouch, \
		NETFIELD_REP_END=LocationAfterCrouch	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANuclearNightmareCharacter(ANuclearNightmareCharacter&&); \
	NO_API ANuclearNightmareCharacter(const ANuclearNightmareCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANuclearNightmareCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANuclearNightmareCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANuclearNightmareCharacter) \
	NO_API virtual ~ANuclearNightmareCharacter();


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_31_PROLOG
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_SPARSE_DATA \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_CALLBACK_WRAPPERS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUCLEARNIGHTMARE_API UClass* StaticClass<class ANuclearNightmareCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
