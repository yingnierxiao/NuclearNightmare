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
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_AItemActor();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmareCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	DEFINE_FUNCTION(AItemActor::execDropOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropOnServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execDropOnClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropOnClients_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnPickedUpServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickedUpServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemActor::execOnPickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickedUp_Implementation();
		P_NATIVE_END;
	}
	struct ItemActor_eventOnEquip_Parms
	{
		ANuclearNightmareCharacter* Character;
	};
	struct ItemActor_eventOnUnEquip_Parms
	{
		ANuclearNightmareCharacter* Character;
	};
	static FName NAME_AItemActor_DropOnClients = FName(TEXT("DropOnClients"));
	void AItemActor::DropOnClients()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_DropOnClients),NULL);
	}
	static FName NAME_AItemActor_DropOnServer = FName(TEXT("DropOnServer"));
	void AItemActor::DropOnServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_DropOnServer),NULL);
	}
	static FName NAME_AItemActor_OnEquip = FName(TEXT("OnEquip"));
	void AItemActor::OnEquip(ANuclearNightmareCharacter* Character)
	{
		ItemActor_eventOnEquip_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_OnEquip),&Parms);
	}
	static FName NAME_AItemActor_OnPickedUp = FName(TEXT("OnPickedUp"));
	void AItemActor::OnPickedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_OnPickedUp),NULL);
	}
	static FName NAME_AItemActor_OnPickedUpServer = FName(TEXT("OnPickedUpServer"));
	void AItemActor::OnPickedUpServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_OnPickedUpServer),NULL);
	}
	static FName NAME_AItemActor_OnUnEquip = FName(TEXT("OnUnEquip"));
	void AItemActor::OnUnEquip(ANuclearNightmareCharacter* Character)
	{
		ItemActor_eventOnUnEquip_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AItemActor_OnUnEquip),&Parms);
	}
	void AItemActor::StaticRegisterNativesAItemActor()
	{
		UClass* Class = AItemActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropOnClients", &AItemActor::execDropOnClients },
			{ "DropOnServer", &AItemActor::execDropOnServer },
			{ "OnPickedUp", &AItemActor::execOnPickedUp },
			{ "OnPickedUpServer", &AItemActor::execOnPickedUpServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemActor_DropOnClients_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_DropOnClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_DropOnClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "DropOnClients", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_DropOnClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_DropOnClients_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_DropOnClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_DropOnClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_DropOnServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_DropOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_DropOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "DropOnServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_DropOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_DropOnServer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_DropOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_DropOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnEquip_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnEquip_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnEquip_Parms, Character), Z_Construct_UClass_ANuclearNightmareCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_OnEquip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnEquip_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnEquip", nullptr, nullptr, Z_Construct_UFunction_AItemActor_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnEquip_Statics::PropPointers), sizeof(ItemActor_eventOnEquip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnEquip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnEquip_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemActor_eventOnEquip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnPickedUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnPickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnPickedUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnPickedUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnPickedUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_OnPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnPickedUpServer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AItemActor_OnPickedUpServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnPickedUpServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemActor_OnUnEquip_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventOnUnEquip_Parms, Character), Z_Construct_UClass_ANuclearNightmareCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "OnUnEquip", nullptr, nullptr, Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::PropPointers), sizeof(ItemActor_eventOnUnEquip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::PropPointers) < 2048);
	static_assert(sizeof(ItemActor_eventOnUnEquip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AItemActor_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemActor);
	UClass* Z_Construct_UClass_AItemActor_NoRegister()
	{
		return AItemActor::StaticClass();
	}
	struct Z_Construct_UClass_AItemActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUp_MetaData[];
#endif
		static void NewProp_PickedUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PickedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemActor_DropOnClients, "DropOnClients" }, // 557455750
		{ &Z_Construct_UFunction_AItemActor_DropOnServer, "DropOnServer" }, // 2408515410
		{ &Z_Construct_UFunction_AItemActor_OnEquip, "OnEquip" }, // 142257374
		{ &Z_Construct_UFunction_AItemActor_OnPickedUp, "OnPickedUp" }, // 2939570985
		{ &Z_Construct_UFunction_AItemActor_OnPickedUpServer, "OnPickedUpServer" }, // 2956935694
		{ &Z_Construct_UFunction_AItemActor_OnUnEquip, "OnUnEquip" }, // 3875221388
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemActor.h" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_ItemName_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_ItemName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_ItemDescription_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_ItemDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008002d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	void Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp_SetBit(void* Obj)
	{
		((AItemActor*)Obj)->PickedUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp = { "PickedUp", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AItemActor), &Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemActor_Statics::NewProp_PickUpSound_MetaData[] = {
		{ "Category", "ItemActor" },
		{ "ModuleRelativePath", "ItemActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_PickUpSound = { "PickUpSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, PickUpSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::NewProp_PickUpSound_MetaData), Z_Construct_UClass_AItemActor_Statics::NewProp_PickUpSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_PickedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_PickUpSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActor_Statics::ClassParams = {
		&AItemActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers) < 2048);
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

	void AItemActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Mesh(TEXT("Mesh"));
		static const FName Name_PickedUp(TEXT("PickedUp"));

		const bool bIsValid = true
			&& Name_Mesh == ClassReps[(int32)ENetFields_Private::Mesh].Property->GetFName()
			&& Name_PickedUp == ClassReps[(int32)ENetFields_Private::PickedUp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItemActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActor);
	AItemActor::~AItemActor() {}
	struct Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AItemActor, AItemActor::StaticClass, TEXT("AItemActor"), &Z_Registration_Info_UClass_AItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActor), 3004839992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_2188305083(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_ItemActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
