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
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCountStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerCountStr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLan_MetaData[];
#endif
		static void NewProp_IsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerArrayIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_PlayerCountStr_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_PlayerCountStr = { "PlayerCountStr", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, PlayerCountStr), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_PlayerCountStr_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_PlayerCountStr_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers = { "CurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, CurrentPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan_SetBit(void* Obj)
	{
		((FServerInfo*)Obj)->IsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan = { "IsLan", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FServerInfo), &Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, Ping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerArrayIndex_MetaData[] = {
		{ "Category", "ServerInfo" },
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerArrayIndex = { "ServerArrayIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerInfo, ServerArrayIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerArrayIndex_MetaData), Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerArrayIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_PlayerCountStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_CurrentPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_IsLan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_Ping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerInfo_Statics::NewProp_ServerArrayIndex,
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature_Statics::NewProp_ServerListDel = { "ServerListDel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NuclearNightmare_eventServerDelegate_Parms, ServerListDel), Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 4117687150
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
	struct Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics
	{
		struct _Script_NuclearNightmare_eventServerRefreshFinished_Parms
		{
			bool FoundServers;
		};
		static void NewProp_FoundServers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FoundServers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::NewProp_FoundServers_SetBit(void* Obj)
	{
		((_Script_NuclearNightmare_eventServerRefreshFinished_Parms*)Obj)->FoundServers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::NewProp_FoundServers = { "FoundServers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NuclearNightmare_eventServerRefreshFinished_Parms), &Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::NewProp_FoundServers_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::NewProp_FoundServers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NuclearNightmare, nullptr, "ServerRefreshFinished__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::_Script_NuclearNightmare_eventServerRefreshFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::_Script_NuclearNightmare_eventServerRefreshFinished_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FServerRefreshFinished_DelegateWrapper(const FMulticastScriptDelegate& ServerRefreshFinished, bool FoundServers)
{
	struct _Script_NuclearNightmare_eventServerRefreshFinished_Parms
	{
		bool FoundServers;
	};
	_Script_NuclearNightmare_eventServerRefreshFinished_Parms Parms;
	Parms.FoundServers=FoundServers ? true : false;
	ServerRefreshFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NuclearNightmare, nullptr, "StartLookingForServers__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FStartLookingForServers_DelegateWrapper(const FMulticastScriptDelegate& StartLookingForServers)
{
	StartLookingForServers.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execServerTravelToMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerTravelToMap(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execCheckLevelLoadStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckLevelLoadStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execJoinServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ServerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer(Z_Param_ServerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execFindServers)
	{
		P_GET_UBOOL(Z_Param_IsLan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindServers(Z_Param_IsLan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNuclearNightmareGameInstance::execCreateServer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_IsLan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateServer(Z_Param_SessionName,Z_Param_IsLan);
		P_NATIVE_END;
	}
	void UNuclearNightmareGameInstance::StaticRegisterNativesUNuclearNightmareGameInstance()
	{
		UClass* Class = UNuclearNightmareGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckLevelLoadStatus", &UNuclearNightmareGameInstance::execCheckLevelLoadStatus },
			{ "CreateServer", &UNuclearNightmareGameInstance::execCreateServer },
			{ "FindServers", &UNuclearNightmareGameInstance::execFindServers },
			{ "JoinServer", &UNuclearNightmareGameInstance::execJoinServer },
			{ "ServerTravelToMap", &UNuclearNightmareGameInstance::execServerTravelToMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics
	{
		struct NuclearNightmareGameInstance_eventCheckLevelLoadStatus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NuclearNightmareGameInstance_eventCheckLevelLoadStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareGameInstance_eventCheckLevelLoadStatus_Parms), &Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "CheckLevelLoadStatus", nullptr, nullptr, Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NuclearNightmareGameInstance_eventCheckLevelLoadStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::NuclearNightmareGameInstance_eventCheckLevelLoadStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics
	{
		struct NuclearNightmareGameInstance_eventCreateServer_Parms
		{
			FString SessionName;
			bool IsLan;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static void NewProp_IsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareGameInstance_eventCreateServer_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_IsLan_SetBit(void* Obj)
	{
		((NuclearNightmareGameInstance_eventCreateServer_Parms*)Obj)->IsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_IsLan = { "IsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareGameInstance_eventCreateServer_Parms), &Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_IsLan_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NewProp_IsLan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "CreateServer", nullptr, nullptr, Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NuclearNightmareGameInstance_eventCreateServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::NuclearNightmareGameInstance_eventCreateServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics
	{
		struct NuclearNightmareGameInstance_eventFindServers_Parms
		{
			bool IsLan;
		};
		static void NewProp_IsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NewProp_IsLan_SetBit(void* Obj)
	{
		((NuclearNightmareGameInstance_eventFindServers_Parms*)Obj)->IsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NewProp_IsLan = { "IsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareGameInstance_eventFindServers_Parms), &Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NewProp_IsLan_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NewProp_IsLan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "FindServers", nullptr, nullptr, Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NuclearNightmareGameInstance_eventFindServers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::NuclearNightmareGameInstance_eventFindServers_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics
	{
		struct NuclearNightmareGameInstance_eventJoinServer_Parms
		{
			int32 ServerIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ServerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::NewProp_ServerIndex = { "ServerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareGameInstance_eventJoinServer_Parms, ServerIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::NewProp_ServerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "JoinServer", nullptr, nullptr, Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::NuclearNightmareGameInstance_eventJoinServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::NuclearNightmareGameInstance_eventJoinServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics
	{
		struct NuclearNightmareGameInstance_eventServerTravelToMap_Parms
		{
			FString MapName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareGameInstance_eventServerTravelToMap_Parms, MapName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNuclearNightmareGameInstance, nullptr, "ServerTravelToMap", nullptr, nullptr, Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::NuclearNightmareGameInstance_eventServerTravelToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::NuclearNightmareGameInstance_eventServerTravelToMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerRefreshFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerRefreshFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLookingForServers_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartLookingForServers;
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
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_CheckLevelLoadStatus, "CheckLevelLoadStatus" }, // 3467072529
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_CreateServer, "CreateServer" }, // 4246938950
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_FindServers, "FindServers" }, // 3436234803
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_JoinServer, "JoinServer" }, // 3835465570
		{ &Z_Construct_UFunction_UNuclearNightmareGameInstance_ServerTravelToMap, "ServerTravelToMap" }, // 3038853401
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
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate = { "ServerListDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNuclearNightmareGameInstance, ServerListDelegate), Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate_MetaData), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate_MetaData) }; // 3341117933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerRefreshFinished_MetaData[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerRefreshFinished = { "ServerRefreshFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNuclearNightmareGameInstance, ServerRefreshFinished), Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerRefreshFinished_MetaData), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerRefreshFinished_MetaData) }; // 868902489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_StartLookingForServers_MetaData[] = {
		{ "ModuleRelativePath", "NuclearNightmareGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_StartLookingForServers = { "StartLookingForServers", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNuclearNightmareGameInstance, StartLookingForServers), Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_StartLookingForServers_MetaData), Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_StartLookingForServers_MetaData) }; // 1093281772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerListDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_ServerRefreshFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNuclearNightmareGameInstance_Statics::NewProp_StartLookingForServers,
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
		{ FServerInfo::StaticStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps, TEXT("ServerInfo"), &Z_Registration_Info_UScriptStruct_ServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerInfo), 4117687150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNuclearNightmareGameInstance, UNuclearNightmareGameInstance::StaticClass, TEXT("UNuclearNightmareGameInstance"), &Z_Registration_Info_UClass_UNuclearNightmareGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNuclearNightmareGameInstance), 79139028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_4021695666(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
