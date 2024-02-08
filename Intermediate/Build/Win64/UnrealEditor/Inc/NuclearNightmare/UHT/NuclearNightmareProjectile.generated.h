// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NuclearNightmareProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NUCLEARNIGHTMARE_NuclearNightmareProjectile_generated_h
#error "NuclearNightmareProjectile.generated.h already included, missing '#pragma once' in NuclearNightmareProjectile.h"
#endif
#define NUCLEARNIGHTMARE_NuclearNightmareProjectile_generated_h

#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_SPARSE_DATA
#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_ACCESSORS
#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANuclearNightmareProjectile(); \
	friend struct Z_Construct_UClass_ANuclearNightmareProjectile_Statics; \
public: \
	DECLARE_CLASS(ANuclearNightmareProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NuclearNightmare"), NO_API) \
	DECLARE_SERIALIZER(ANuclearNightmareProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANuclearNightmareProjectile(ANuclearNightmareProjectile&&); \
	NO_API ANuclearNightmareProjectile(const ANuclearNightmareProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANuclearNightmareProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANuclearNightmareProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANuclearNightmareProjectile) \
	NO_API virtual ~ANuclearNightmareProjectile();


#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_12_PROLOG
#define FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_SPARSE_DATA \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_ACCESSORS \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUCLEARNIGHTMARE_API UClass* StaticClass<class ANuclearNightmareProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
