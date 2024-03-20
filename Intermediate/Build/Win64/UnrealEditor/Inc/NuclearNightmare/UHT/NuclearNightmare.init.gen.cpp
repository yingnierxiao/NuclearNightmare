// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmare_init() {}
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_DamageEventDelegate__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_HealthDeath__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_InventoryFull__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryScroll__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_RemovePickUpIcon__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_ShowPickUpIcon__DelegateSignature();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NuclearNightmare;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NuclearNightmare()
	{
		if (!Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_DamageEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_HealthDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_InventoryFull__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryScroll__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_RemovePickUpIcon__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_ServerDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_ServerRefreshFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_ShowPickUpIcon__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NuclearNightmare_StartLookingForServers__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NuclearNightmare",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3C984972,
				0xA97A28E0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NuclearNightmare.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NuclearNightmare(Z_Construct_UPackage__Script_NuclearNightmare, TEXT("/Script/NuclearNightmare"), Z_Registration_Info_UPackage__Script_NuclearNightmare, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3C984972, 0xA97A28E0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
