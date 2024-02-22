// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NuclearNightmareGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerInfo;
#ifdef NUCLEARNIGHTMARE_NuclearNightmareGameInstance_generated_h
#error "NuclearNightmareGameInstance.generated.h already included, missing '#pragma once' in NuclearNightmareGameInstance.h"
#endif
#define NUCLEARNIGHTMARE_NuclearNightmareGameInstance_generated_h

#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerInfo_Statics; \
	NUCLEARNIGHTMARE_API static class UScriptStruct* StaticStruct();


template<> NUCLEARNIGHTMARE_API UScriptStruct* StaticStruct<struct FServerInfo>();

#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_44_DELEGATE \
NUCLEARNIGHTMARE_API void FServerDelegate_DelegateWrapper(const FMulticastScriptDelegate& ServerDelegate, FServerInfo ServerListDel);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_45_DELEGATE \
NUCLEARNIGHTMARE_API void FServerRefreshFinished_DelegateWrapper(const FMulticastScriptDelegate& ServerRefreshFinished, bool FoundServers);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_46_DELEGATE \
NUCLEARNIGHTMARE_API void FStartLookingForServers_DelegateWrapper(const FMulticastScriptDelegate& StartLookingForServers);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_SPARSE_DATA
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execFindServers); \
	DECLARE_FUNCTION(execCreateServer);


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_ACCESSORS
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNuclearNightmareGameInstance(); \
	friend struct Z_Construct_UClass_UNuclearNightmareGameInstance_Statics; \
public: \
	DECLARE_CLASS(UNuclearNightmareGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NuclearNightmare"), NO_API) \
	DECLARE_SERIALIZER(UNuclearNightmareGameInstance)


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNuclearNightmareGameInstance(UNuclearNightmareGameInstance&&); \
	NO_API UNuclearNightmareGameInstance(const UNuclearNightmareGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNuclearNightmareGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNuclearNightmareGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNuclearNightmareGameInstance) \
	NO_API virtual ~UNuclearNightmareGameInstance();


#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_51_PROLOG
#define FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_SPARSE_DATA \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_ACCESSORS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_INCLASS_NO_PURE_DECLS \
	FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NUCLEARNIGHTMARE_API UClass* StaticClass<class UNuclearNightmareGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
