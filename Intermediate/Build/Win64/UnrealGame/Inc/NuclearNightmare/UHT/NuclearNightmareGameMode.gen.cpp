// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NuclearNightmare/NuclearNightmareGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmareGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmareGameMode();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmareGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	void ANuclearNightmareGameMode::StaticRegisterNativesANuclearNightmareGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANuclearNightmareGameMode);
	UClass* Z_Construct_UClass_ANuclearNightmareGameMode_NoRegister()
	{
		return ANuclearNightmareGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANuclearNightmareGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANuclearNightmareGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NuclearNightmareGameMode.h" },
		{ "ModuleRelativePath", "NuclearNightmareGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANuclearNightmareGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANuclearNightmareGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANuclearNightmareGameMode_Statics::ClassParams = {
		&ANuclearNightmareGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANuclearNightmareGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANuclearNightmareGameMode()
	{
		if (!Z_Registration_Info_UClass_ANuclearNightmareGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANuclearNightmareGameMode.OuterSingleton, Z_Construct_UClass_ANuclearNightmareGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANuclearNightmareGameMode.OuterSingleton;
	}
	template<> NUCLEARNIGHTMARE_API UClass* StaticClass<ANuclearNightmareGameMode>()
	{
		return ANuclearNightmareGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANuclearNightmareGameMode);
	ANuclearNightmareGameMode::~ANuclearNightmareGameMode() {}
	struct Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANuclearNightmareGameMode, ANuclearNightmareGameMode::StaticClass, TEXT("ANuclearNightmareGameMode"), &Z_Registration_Info_UClass_ANuclearNightmareGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANuclearNightmareGameMode), 1052017606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameMode_h_2300112614(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
