// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NuclearNightmare/ItemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_AItemActor();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	void AItemActor::StaticRegisterNativesAItemActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemActor);
	UClass* Z_Construct_UClass_AItemActor_NoRegister()
	{
		return AItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemActor.h" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActor_Statics::ClassParams = {
		&AItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AItemActor()
	{
		if (!Z_Registration_Info_UClass_AItemActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemActor.OuterSingleton, Z_Construct_UClass_AItemActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AItemActor.OuterSingleton;
	}
	template<> NUCLEARNIGHTMARE_API UClass* StaticClass<AItemActor>()
	{
		return AItemActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActor);
	AItemActor::~AItemActor() {}
	struct Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemActor, AItemActor::StaticClass, TEXT("AItemActor"), &Z_Registration_Info_UClass_AItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActor), 596909639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_2942324913(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
