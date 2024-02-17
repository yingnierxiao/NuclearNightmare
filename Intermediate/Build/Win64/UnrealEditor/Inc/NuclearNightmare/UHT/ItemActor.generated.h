// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANuclearNightmareCharacter;
#ifdef NUCLEARNIGHTMARE_ItemActor_generated_h
#error "ItemActor.generated.h already included, missing '#pragma once' in ItemActor.h"
#endif
#define NUCLEARNIGHTMARE_ItemActor_generated_h

#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_SPARSE_DATA
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickedUpServer_Implementation(); \
	virtual void OnPickedUp_Implementation(); \
 \
	DECLARE_FUNCTION(execOnPickedUpServer); \
	DECLARE_FUNCTION(execOnPickedUp);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_CALLBACK_WRAPPERS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
public: \
	DECLARE_CLASS(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NuclearNightmare"), NO_API) \
	DECLARE_SERIALIZER(AItemActor) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Mesh=NETFIELD_REP_START, \
		PickedUp, \
		NETFIELD_REP_END=PickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemActor(AItemActor&&); \
	NO_API AItemActor(const AItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActor) \
	NO_API virtual ~AItemActor();


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_11_PROLOG
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_SPARSE_DATA \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_CALLBACK_WRAPPERS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUCLEARNIGHTMARE_API UClass* StaticClass<class AItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
