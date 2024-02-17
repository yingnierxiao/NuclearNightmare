// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NuclearNightmare/NuclearNightmareCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmareCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmareCharacter();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmareCharacter_NoRegister();
	NUCLEARNIGHTMARE_API UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NuclearNightmare, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execHasItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execAttemptItemPickUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttemptItemPickUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execPickUpItemOnServer)
	{
		P_GET_OBJECT(AItemActor,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUpItemOnServer_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execPickUpItem)
	{
		P_GET_OBJECT(AItemActor,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickUpItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execCameraToggleOnClient)
	{
		P_GET_UBOOL(Z_Param_ThirdPersonView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraToggleOnClient_Implementation(Z_Param_ThirdPersonView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execCrouchOnClient)
	{
		P_GET_UBOOL(Z_Param_Crouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchOnClient_Implementation(Z_Param_Crouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execCrouchOnServer)
	{
		P_GET_UBOOL(Z_Param_Crouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrouchOnServer_Implementation(Z_Param_Crouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execGlowstickOnClient)
	{
		P_GET_UBOOL(Z_Param_Glowstick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GlowstickOnClient_Implementation(Z_Param_Glowstick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execGlowstickOnServer)
	{
		P_GET_UBOOL(Z_Param_Glowstick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GlowstickOnServer_Implementation(Z_Param_Glowstick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execFlashlightOnClient)
	{
		P_GET_UBOOL(Z_Param_Flashlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlashlightOnClient_Implementation(Z_Param_Flashlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execFlashlightOnServer)
	{
		P_GET_UBOOL(Z_Param_Flashlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlashlightOnServer_Implementation(Z_Param_Flashlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execSprintOnClient)
	{
		P_GET_UBOOL(Z_Param_Sprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintOnClient_Implementation(Z_Param_Sprinting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANuclearNightmareCharacter::execSprintOnServer)
	{
		P_GET_UBOOL(Z_Param_Sprinting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintOnServer_Implementation(Z_Param_Sprinting);
		P_NATIVE_END;
	}
	struct NuclearNightmareCharacter_eventCameraToggleOnClient_Parms
	{
		bool ThirdPersonView;
	};
	struct NuclearNightmareCharacter_eventCrouchOnClient_Parms
	{
		bool Crouch;
	};
	struct NuclearNightmareCharacter_eventCrouchOnServer_Parms
	{
		bool Crouch;
	};
	struct NuclearNightmareCharacter_eventFlashlightOnClient_Parms
	{
		bool Flashlight;
	};
	struct NuclearNightmareCharacter_eventFlashlightOnServer_Parms
	{
		bool Flashlight;
	};
	struct NuclearNightmareCharacter_eventGlowstickOnClient_Parms
	{
		bool Glowstick;
	};
	struct NuclearNightmareCharacter_eventGlowstickOnServer_Parms
	{
		bool Glowstick;
	};
	struct NuclearNightmareCharacter_eventPickUpItemOnServer_Parms
	{
		AItemActor* Item;
	};
	struct NuclearNightmareCharacter_eventSprintOnClient_Parms
	{
		bool Sprinting;
	};
	struct NuclearNightmareCharacter_eventSprintOnServer_Parms
	{
		bool Sprinting;
	};
	static FName NAME_ANuclearNightmareCharacter_CameraToggleOnClient = FName(TEXT("CameraToggleOnClient"));
	void ANuclearNightmareCharacter::CameraToggleOnClient(bool ThirdPersonView)
	{
		NuclearNightmareCharacter_eventCameraToggleOnClient_Parms Parms;
		Parms.ThirdPersonView=ThirdPersonView ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_CameraToggleOnClient),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_CrouchOnClient = FName(TEXT("CrouchOnClient"));
	void ANuclearNightmareCharacter::CrouchOnClient(bool Crouch)
	{
		NuclearNightmareCharacter_eventCrouchOnClient_Parms Parms;
		Parms.Crouch=Crouch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_CrouchOnClient),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_CrouchOnServer = FName(TEXT("CrouchOnServer"));
	void ANuclearNightmareCharacter::CrouchOnServer(bool Crouch)
	{
		NuclearNightmareCharacter_eventCrouchOnServer_Parms Parms;
		Parms.Crouch=Crouch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_CrouchOnServer),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_FlashlightOnClient = FName(TEXT("FlashlightOnClient"));
	void ANuclearNightmareCharacter::FlashlightOnClient(bool Flashlight)
	{
		NuclearNightmareCharacter_eventFlashlightOnClient_Parms Parms;
		Parms.Flashlight=Flashlight ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_FlashlightOnClient),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_FlashlightOnServer = FName(TEXT("FlashlightOnServer"));
	void ANuclearNightmareCharacter::FlashlightOnServer(bool Flashlight)
	{
		NuclearNightmareCharacter_eventFlashlightOnServer_Parms Parms;
		Parms.Flashlight=Flashlight ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_FlashlightOnServer),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_GlowstickOnClient = FName(TEXT("GlowstickOnClient"));
	void ANuclearNightmareCharacter::GlowstickOnClient(bool Glowstick)
	{
		NuclearNightmareCharacter_eventGlowstickOnClient_Parms Parms;
		Parms.Glowstick=Glowstick ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_GlowstickOnClient),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_GlowstickOnServer = FName(TEXT("GlowstickOnServer"));
	void ANuclearNightmareCharacter::GlowstickOnServer(bool Glowstick)
	{
		NuclearNightmareCharacter_eventGlowstickOnServer_Parms Parms;
		Parms.Glowstick=Glowstick ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_GlowstickOnServer),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_PickUpItemOnServer = FName(TEXT("PickUpItemOnServer"));
	void ANuclearNightmareCharacter::PickUpItemOnServer(AItemActor* Item)
	{
		NuclearNightmareCharacter_eventPickUpItemOnServer_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_PickUpItemOnServer),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_SprintOnClient = FName(TEXT("SprintOnClient"));
	void ANuclearNightmareCharacter::SprintOnClient(bool Sprinting)
	{
		NuclearNightmareCharacter_eventSprintOnClient_Parms Parms;
		Parms.Sprinting=Sprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_SprintOnClient),&Parms);
	}
	static FName NAME_ANuclearNightmareCharacter_SprintOnServer = FName(TEXT("SprintOnServer"));
	void ANuclearNightmareCharacter::SprintOnServer(bool Sprinting)
	{
		NuclearNightmareCharacter_eventSprintOnServer_Parms Parms;
		Parms.Sprinting=Sprinting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ANuclearNightmareCharacter_SprintOnServer),&Parms);
	}
	void ANuclearNightmareCharacter::StaticRegisterNativesANuclearNightmareCharacter()
	{
		UClass* Class = ANuclearNightmareCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttemptItemPickUp", &ANuclearNightmareCharacter::execAttemptItemPickUp },
			{ "CameraToggleOnClient", &ANuclearNightmareCharacter::execCameraToggleOnClient },
			{ "CrouchOnClient", &ANuclearNightmareCharacter::execCrouchOnClient },
			{ "CrouchOnServer", &ANuclearNightmareCharacter::execCrouchOnServer },
			{ "FlashlightOnClient", &ANuclearNightmareCharacter::execFlashlightOnClient },
			{ "FlashlightOnServer", &ANuclearNightmareCharacter::execFlashlightOnServer },
			{ "GlowstickOnClient", &ANuclearNightmareCharacter::execGlowstickOnClient },
			{ "GlowstickOnServer", &ANuclearNightmareCharacter::execGlowstickOnServer },
			{ "HasItem", &ANuclearNightmareCharacter::execHasItem },
			{ "PickUpItem", &ANuclearNightmareCharacter::execPickUpItem },
			{ "PickUpItemOnServer", &ANuclearNightmareCharacter::execPickUpItemOnServer },
			{ "SprintOnClient", &ANuclearNightmareCharacter::execSprintOnClient },
			{ "SprintOnServer", &ANuclearNightmareCharacter::execSprintOnServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "AttemptItemPickUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics
	{
		static void NewProp_ThirdPersonView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ThirdPersonView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::NewProp_ThirdPersonView_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventCameraToggleOnClient_Parms*)Obj)->ThirdPersonView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::NewProp_ThirdPersonView = { "ThirdPersonView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventCameraToggleOnClient_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::NewProp_ThirdPersonView_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::NewProp_ThirdPersonView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Toggle\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Toggle" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "CameraToggleOnClient", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventCameraToggleOnClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventCameraToggleOnClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics
	{
		static void NewProp_Crouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crouch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::NewProp_Crouch_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventCrouchOnClient_Parms*)Obj)->Crouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventCrouchOnClient_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::NewProp_Crouch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::NewProp_Crouch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "CrouchOnClient", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventCrouchOnClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventCrouchOnClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics
	{
		static void NewProp_Crouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crouch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::NewProp_Crouch_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventCrouchOnServer_Parms*)Obj)->Crouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventCrouchOnServer_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::NewProp_Crouch_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::NewProp_Crouch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crouch Logic\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch Logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "CrouchOnServer", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventCrouchOnServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventCrouchOnServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics
	{
		static void NewProp_Flashlight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Flashlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::NewProp_Flashlight_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventFlashlightOnClient_Parms*)Obj)->Flashlight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::NewProp_Flashlight = { "Flashlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventFlashlightOnClient_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::NewProp_Flashlight_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::NewProp_Flashlight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "FlashlightOnClient", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventFlashlightOnClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventFlashlightOnClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics
	{
		static void NewProp_Flashlight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Flashlight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::NewProp_Flashlight_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventFlashlightOnServer_Parms*)Obj)->Flashlight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::NewProp_Flashlight = { "Flashlight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventFlashlightOnServer_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::NewProp_Flashlight_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::NewProp_Flashlight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flashlight Logic\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flashlight Logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "FlashlightOnServer", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventFlashlightOnServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventFlashlightOnServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics
	{
		static void NewProp_Glowstick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Glowstick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::NewProp_Glowstick_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventGlowstickOnClient_Parms*)Obj)->Glowstick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::NewProp_Glowstick = { "Glowstick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventGlowstickOnClient_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::NewProp_Glowstick_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::NewProp_Glowstick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "GlowstickOnClient", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventGlowstickOnClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventGlowstickOnClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics
	{
		static void NewProp_Glowstick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Glowstick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::NewProp_Glowstick_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventGlowstickOnServer_Parms*)Obj)->Glowstick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::NewProp_Glowstick = { "Glowstick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventGlowstickOnServer_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::NewProp_Glowstick_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::NewProp_Glowstick,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Glowstick Logic\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Glowstick Logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "GlowstickOnServer", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventGlowstickOnServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventGlowstickOnServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics
	{
		struct NuclearNightmareCharacter_eventHasItem_Parms
		{
			FString ItemName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareCharacter_eventHasItem_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventHasItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventHasItem_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NuclearNightmareCharacter_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::NuclearNightmareCharacter_eventHasItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics
	{
		struct NuclearNightmareCharacter_eventPickUpItem_Parms
		{
			AItemActor* Item;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareCharacter_eventPickUpItem_Parms, Item), Z_Construct_UClass_AItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inventory\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "PickUpItem", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::NuclearNightmareCharacter_eventPickUpItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::NuclearNightmareCharacter_eventPickUpItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NuclearNightmareCharacter_eventPickUpItemOnServer_Parms, Item), Z_Construct_UClass_AItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "PickUpItemOnServer", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventPickUpItemOnServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventPickUpItemOnServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics
	{
		static void NewProp_Sprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Sprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::NewProp_Sprinting_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventSprintOnClient_Parms*)Obj)->Sprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::NewProp_Sprinting = { "Sprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventSprintOnClient_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::NewProp_Sprinting_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::NewProp_Sprinting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "SprintOnClient", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventSprintOnClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventSprintOnClient_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics
	{
		static void NewProp_Sprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Sprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::NewProp_Sprinting_SetBit(void* Obj)
	{
		((NuclearNightmareCharacter_eventSprintOnServer_Parms*)Obj)->Sprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::NewProp_Sprinting = { "Sprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NuclearNightmareCharacter_eventSprintOnServer_Parms), &Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::NewProp_Sprinting_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::NewProp_Sprinting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called for sprinting\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for sprinting" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANuclearNightmareCharacter, nullptr, "SprintOnServer", nullptr, nullptr, Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::PropPointers), sizeof(NuclearNightmareCharacter_eventSprintOnServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::PropPointers) < 2048);
	static_assert(sizeof(NuclearNightmareCharacter_eventSprintOnServer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANuclearNightmareCharacter);
	UClass* Z_Construct_UClass_ANuclearNightmareCharacter_NoRegister()
	{
		return ANuclearNightmareCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANuclearNightmareCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmFPCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmFPCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryHud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryHud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightLightSourceMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightLightSourceMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopSprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StopSprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstThirdCameraAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstThirdCameraAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsInInv_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInInv_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInInv;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryUpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InventoryUpdatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryCapcity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryCapcity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemLookedAt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemLookedAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlashlightToggle_MetaData[];
#endif
		static void NewProp_bFlashlightToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlashlightToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightOnSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightOnSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightOffSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightOffSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlashlightAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlashlightAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlowstickToggle_MetaData[];
#endif
		static void NewProp_bGlowstickToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlowstickToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickOnSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickOnSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickOffSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickOffSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowstickAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowstickAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCameraThirdToggle_MetaData[];
#endif
		static void NewProp_bCameraThirdToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraThirdToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerCrouched_MetaData[];
#endif
		static void NewProp_bIsPlayerCrouched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerCrouched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationBeforeCrouch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationBeforeCrouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationAfterCrouch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationAfterCrouch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANuclearNightmareCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANuclearNightmareCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_AttemptItemPickUp, "AttemptItemPickUp" }, // 1946516490
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_CameraToggleOnClient, "CameraToggleOnClient" }, // 3409967154
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnClient, "CrouchOnClient" }, // 1091692659
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_CrouchOnServer, "CrouchOnServer" }, // 1457779063
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnClient, "FlashlightOnClient" }, // 1721160597
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_FlashlightOnServer, "FlashlightOnServer" }, // 1424184229
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnClient, "GlowstickOnClient" }, // 258725295
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_GlowstickOnServer, "GlowstickOnServer" }, // 3820998505
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_HasItem, "HasItem" }, // 645814734
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItem, "PickUpItem" }, // 4074552153
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_PickUpItemOnServer, "PickUpItemOnServer" }, // 2713900082
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnClient, "SprintOnClient" }, // 1995746813
		{ &Z_Construct_UFunction_ANuclearNightmareCharacter_SprintOnServer, "SprintOnServer" }, // 2100253083
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NuclearNightmareCharacter.h" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SpringArmFPCam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm For Camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm For Camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SpringArmFPCam = { "SpringArmFPCam", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, SpringArmFPCam), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SpringArmFPCam_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SpringArmFPCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryHud_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HUD\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryHud = { "InventoryHud", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, InventoryHud), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryHud_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryHud_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hud" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryClass = { "InventoryClass", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, InventoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryClass_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flashlight Mesh & Light Source\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flashlight Mesh & Light Source" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightMesh = { "FlashlightMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightMesh_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightLightSourceMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LightSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightLightSourceMesh = { "FlashlightLightSourceMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightLightSourceMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightLightSourceMesh_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightLightSourceMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LightSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightSource = { "FlashlightSource", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightSource), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightSource_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Glowstick Mesh & Light Source\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Glowstick Mesh & Light Source" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickMesh = { "GlowstickMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickMesh_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickSource_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LightSource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickSource = { "GlowstickSource", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickSource), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickSource_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickSource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sprint Input Action\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_StopSprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_StopSprintAction = { "StopSprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, StopSprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_StopSprintAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_StopSprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flashlight Input Action\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flashlight Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAction = { "FlashlightAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Glowstick Input Action\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Glowstick Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAction = { "GlowstickAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crouch Input Action\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_CrouchAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_CrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstThirdCameraAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//First Person/Third Person Camera Toggle Input Action\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First Person/Third Person Camera Toggle Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstThirdCameraAction = { "FirstThirdCameraAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FirstThirdCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstThirdCameraAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstThirdCameraAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Interact Input\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InteractAction_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv_Inner = { "ItemsInInv", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AItemActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Inventory\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv = { "ItemsInInv", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, ItemsInInv), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryUpdatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryUpdatedDelegate = { "InventoryUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, InventoryUpdatedDelegate), Z_Construct_UDelegateFunction_NuclearNightmare_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryUpdatedDelegate_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryUpdatedDelegate_MetaData) }; // 3760714769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryCapcity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryCapcity = { "InventoryCapcity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, InventoryCapcity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryCapcity_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryCapcity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemLookedAt_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemLookedAt = { "ItemLookedAt", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, ItemLookedAt), Z_Construct_UClass_AItemActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemLookedAt_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemLookedAt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sprint Value\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Value" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintValue = { "SprintValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, SprintValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintValue_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_WalkValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sprint Value\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint Value" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_WalkValue = { "WalkValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, WalkValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_WalkValue_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_WalkValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle_MetaData[] = {
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Flashlight Toggle\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flashlight Toggle" },
#endif
	};
#endif
	void Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle_SetBit(void* Obj)
	{
		((ANuclearNightmareCharacter*)Obj)->bFlashlightToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle = { "bFlashlightToggle", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANuclearNightmareCharacter), &Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOnSound_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOnSound = { "FlashlightOnSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightOnSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOnSound_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOnSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOffSound_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOffSound = { "FlashlightOffSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightOffSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOffSound_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOffSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAttenuation_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAttenuation = { "FlashlightAttenuation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, FlashlightAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAttenuation_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAttenuation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle_MetaData[] = {
		{ "Category", "LightSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Glowstick Toggle\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Glowstick Toggle" },
#endif
	};
#endif
	void Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle_SetBit(void* Obj)
	{
		((ANuclearNightmareCharacter*)Obj)->bGlowstickToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle = { "bGlowstickToggle", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANuclearNightmareCharacter), &Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOnSound_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOnSound = { "GlowstickOnSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickOnSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOnSound_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOnSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOffSound_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOffSound = { "GlowstickOffSound", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickOffSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOffSound_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOffSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAttenuation_MetaData[] = {
		{ "Category", "LightSource" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAttenuation = { "GlowstickAttenuation", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, GlowstickAttenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAttenuation_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAttenuation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera Toggle\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Toggle" },
#endif
	};
#endif
	void Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle_SetBit(void* Obj)
	{
		((ANuclearNightmareCharacter*)Obj)->bCameraThirdToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle = { "bCameraThirdToggle", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANuclearNightmareCharacter), &Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Crouching\n" },
#endif
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouching" },
#endif
	};
#endif
	void Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched_SetBit(void* Obj)
	{
		((ANuclearNightmareCharacter*)Obj)->bIsPlayerCrouched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched = { "bIsPlayerCrouched", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANuclearNightmareCharacter), &Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationBeforeCrouch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationBeforeCrouch = { "LocationBeforeCrouch", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, LocationBeforeCrouch), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationBeforeCrouch_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationBeforeCrouch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationAfterCrouch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "NuclearNightmareCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationAfterCrouch = { "LocationAfterCrouch", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmareCharacter, LocationAfterCrouch), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationAfterCrouch_MetaData), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationAfterCrouch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANuclearNightmareCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SpringArmFPCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryHud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightLightSourceMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_StopSprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_CrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FirstThirdCameraAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemsInInv,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryUpdatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_InventoryCapcity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_ItemLookedAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_SprintValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_WalkValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bFlashlightToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOnSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightOffSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_FlashlightAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bGlowstickToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOnSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickOffSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_GlowstickAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bCameraThirdToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_bIsPlayerCrouched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationBeforeCrouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmareCharacter_Statics::NewProp_LocationAfterCrouch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANuclearNightmareCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANuclearNightmareCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANuclearNightmareCharacter_Statics::ClassParams = {
		&ANuclearNightmareCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANuclearNightmareCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANuclearNightmareCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmareCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANuclearNightmareCharacter()
	{
		if (!Z_Registration_Info_UClass_ANuclearNightmareCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANuclearNightmareCharacter.OuterSingleton, Z_Construct_UClass_ANuclearNightmareCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANuclearNightmareCharacter.OuterSingleton;
	}
	template<> NUCLEARNIGHTMARE_API UClass* StaticClass<ANuclearNightmareCharacter>()
	{
		return ANuclearNightmareCharacter::StaticClass();
	}

	void ANuclearNightmareCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bFlashlightToggle(TEXT("bFlashlightToggle"));
		static const FName Name_FlashlightOnSound(TEXT("FlashlightOnSound"));
		static const FName Name_FlashlightOffSound(TEXT("FlashlightOffSound"));
		static const FName Name_FlashlightAttenuation(TEXT("FlashlightAttenuation"));
		static const FName Name_bGlowstickToggle(TEXT("bGlowstickToggle"));
		static const FName Name_GlowstickOnSound(TEXT("GlowstickOnSound"));
		static const FName Name_GlowstickOffSound(TEXT("GlowstickOffSound"));
		static const FName Name_GlowstickAttenuation(TEXT("GlowstickAttenuation"));
		static const FName Name_bCameraThirdToggle(TEXT("bCameraThirdToggle"));
		static const FName Name_bIsPlayerCrouched(TEXT("bIsPlayerCrouched"));
		static const FName Name_LocationBeforeCrouch(TEXT("LocationBeforeCrouch"));
		static const FName Name_LocationAfterCrouch(TEXT("LocationAfterCrouch"));

		const bool bIsValid = true
			&& Name_bFlashlightToggle == ClassReps[(int32)ENetFields_Private::bFlashlightToggle].Property->GetFName()
			&& Name_FlashlightOnSound == ClassReps[(int32)ENetFields_Private::FlashlightOnSound].Property->GetFName()
			&& Name_FlashlightOffSound == ClassReps[(int32)ENetFields_Private::FlashlightOffSound].Property->GetFName()
			&& Name_FlashlightAttenuation == ClassReps[(int32)ENetFields_Private::FlashlightAttenuation].Property->GetFName()
			&& Name_bGlowstickToggle == ClassReps[(int32)ENetFields_Private::bGlowstickToggle].Property->GetFName()
			&& Name_GlowstickOnSound == ClassReps[(int32)ENetFields_Private::GlowstickOnSound].Property->GetFName()
			&& Name_GlowstickOffSound == ClassReps[(int32)ENetFields_Private::GlowstickOffSound].Property->GetFName()
			&& Name_GlowstickAttenuation == ClassReps[(int32)ENetFields_Private::GlowstickAttenuation].Property->GetFName()
			&& Name_bCameraThirdToggle == ClassReps[(int32)ENetFields_Private::bCameraThirdToggle].Property->GetFName()
			&& Name_bIsPlayerCrouched == ClassReps[(int32)ENetFields_Private::bIsPlayerCrouched].Property->GetFName()
			&& Name_LocationBeforeCrouch == ClassReps[(int32)ENetFields_Private::LocationBeforeCrouch].Property->GetFName()
			&& Name_LocationAfterCrouch == ClassReps[(int32)ENetFields_Private::LocationAfterCrouch].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANuclearNightmareCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANuclearNightmareCharacter);
	ANuclearNightmareCharacter::~ANuclearNightmareCharacter() {}
	struct Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANuclearNightmareCharacter, ANuclearNightmareCharacter::StaticClass, TEXT("ANuclearNightmareCharacter"), &Z_Registration_Info_UClass_ANuclearNightmareCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANuclearNightmareCharacter), 200388658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_1387369887(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NuclearNightmare_NuclearNightmare_Source_NuclearNightmare_NuclearNightmareCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
