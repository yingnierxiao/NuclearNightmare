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
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature();
	NUCLEARNIGHTMARE_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerInfo;
class UScriptStruct* FServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerInfo, (UObject*)Z_Construct_UPackage__Script_NuclearNightmare(), TEXT("ServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton;
}
template<> NUCLEARNIGHTMARE_API UScriptStruct* StaticStruct<FServerInfo>()
{
	return FServerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, CurrentPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
		nullptr,
		&NewStructOps,
		"ServerInfo",
		Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers),
		sizeof(FServerInfo),
		alignof(FServerInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FServerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FServerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics
	{
		struct _Script_NuclearNightmare_eventServerDelegate_Parms
		{
			FServerInfo ServerListDel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerListDel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::NewProp_ServerListDel = { "ServerListDel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NuclearNightmare_eventServerDelegate_Parms, ServerListDel), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 1298432765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::NewProp_ServerListDel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NuclearNightmare, nullptr, "ServerDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::_Script_NuclearNightmare_eventServerDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::_Script_NuclearNightmare_eventServerDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FServerDelegate_DelegateWrapper(const FMulticastScriptDelegate& ServerDelegate, FServerInfo ServerListDel)
{
	struct _Script_NuclearNightmare_eventServerDelegate_Parms
	{
		FServerInfo ServerListDel;
	};
	_Script_NuclearNightmare_eventServerDelegate_Parms Parms;
	Parms.ServerListDel=ServerListDel;
	ServerDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerListDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerListDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate_MetaData[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate = { "ServerListDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNuclearNightmareGameInstance, ServerListDelegate), Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate_MetaData), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate_MetaData) }; // 754634418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNuclearNightmareGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::ClassParams = {
		&UNuclearNightmareGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::PropPointers) < 2048);
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
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ScriptStructInfo[] = {
		{ FServerInfo::StaticStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps, TEXT("ServerInfo"), &Z_Registration_Info_UScriptStruct_ServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerInfo), 1298432765U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNuclearNightmareGameInstance, UNuclearNightmareGameInstance::StaticClass, TEXT("UNuclearNightmareGameInstance"), &Z_Registration_Info_UClass_UNuclearNightmareGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNuclearNightmareGameInstance), 871575825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_3922459140(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
