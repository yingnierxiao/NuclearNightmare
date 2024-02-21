// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NuclearNightmare/NuclearNightmareGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmareGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_UNuclearNightmareGameInstance();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_UNuclearNightmareGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execCreateServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServer();
		P_NATIVE_END;
	}
	void UNuclearNightmareGameInstance::StaticRegisterNativesUNuclearNightmareGameInstance()
	{
		UClass* Class = UNuclearNightmareGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateServer", &UNuclearNightmareGameInstance::execCreateServer },
			{ "JoinServer", &UNuclearNightmareGameInstance::execJoinServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "CreateServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "JoinServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNuclearNightmareGameInstance);
	UClass* Z_Construct_UClass_UNuclearNightmareGameInstance_NoRegister()
	{
		return UNuclearNightmareGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNuclearNightmareGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer, "CreateServer" }, // 795366731
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer, "JoinServer" }, // 3741685306
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NuclearNightmareGameInstance.h" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNuclearNightmareGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::ClassParams = {
		&UNuclearNightmareGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNuclearNightmareGameInstance()
	{
		if (!Z_Registration_Info_UClass_UNuclearNightmareGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNuclearNightmareGameInstance.OuterSingleton, Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNuclearNightmareGameInstance.OuterSingleton;
	}
	template<> NUCLEARNIGHTMARE_API UClass* StaticClass<UNuclearNightmareGameInstance>()
	{
		return UNuclearNightmareGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNuclearNightmareGameInstance);
	UNuclearNightmareGameInstance::~UNuclearNightmareGameInstance() {}
	struct Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNuclearNightmareGameInstance, UNuclearNightmareGameInstance::StaticClass, TEXT("UNuclearNightmareGameInstance"), &Z_Registration_Info_UClass_UNuclearNightmareGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNuclearNightmareGameInstance), 682647056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_3855947952(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
