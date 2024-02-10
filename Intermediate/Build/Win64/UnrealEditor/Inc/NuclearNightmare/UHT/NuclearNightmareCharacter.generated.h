// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NuclearNightmareCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NUCLEARNIGHTMARE_NuclearNightmareCharacter_generated_h
#error "NuclearNightmareCharacter.generated.h already included, missing '#pragma once' in NuclearNightmareCharacter.h"
#endif
#define NUCLEARNIGHTMARE_NuclearNightmareCharacter_generated_h

#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_SPARSE_DATA
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FlashlightOnClient_Implementation(bool Flashlight); \
	virtual void FlashlightOnServer_Implementation(bool Flashlight); \
	virtual void SprintOnClient_Implementation(bool Sprinting); \
	virtual void SprintOnServer_Implementation(bool Sprinting); \
 \
	DECLARE_FUNCTION(execFlashlightOnClient); \
	DECLARE_FUNCTION(execFlashlightOnServer); \
	DECLARE_FUNCTION(execSprintOnClient); \
	DECLARE_FUNCTION(execSprintOnServer);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_CALLBACK_WRAPPERS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_INCLASS_NO_PURE_DECLS \
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
		bFlashlightToggle=NETFIELD_REP_START, \
		NETFIELD_REP_END=bFlashlightToggle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANuclearNightmareCharacter(ANuclearNightmareCharacter&&); \
	NO_API ANuclearNightmareCharacter(const ANuclearNightmareCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANuclearNightmareCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANuclearNightmareCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANuclearNightmareCharacter) \
	NO_API virtual ~ANuclearNightmareCharacter();


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_23_PROLOG
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_SPARSE_DATA \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_CALLBACK_WRAPPERS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUCLEARNIGHTMARE_API UClass* StaticClass<class ANuclearNightmareCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
