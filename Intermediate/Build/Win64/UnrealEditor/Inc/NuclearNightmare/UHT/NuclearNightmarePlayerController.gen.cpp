// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NuclearNightmare/NuclearNightmarePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuclearNightmarePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmarePlayerController();
	NUCLEARNIGHTMARE_API UClass* Z_Construct_UClass_ANuclearNightmarePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NuclearNightmare();
// End Cross Module References
	void ANuclearNightmarePlayerController::StaticRegisterNativesANuclearNightmarePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANuclearNightmarePlayerController);
	UClass* Z_Construct_UClass_ANuclearNightmarePlayerController_NoRegister()
	{
		return ANuclearNightmarePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANuclearNightmarePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NuclearNightmare,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NuclearNightmarePlayerController.h" },
		{ "ModuleRelativePath", "NuclearNightmarePlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "NuclearNightmarePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANuclearNightmarePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANuclearNightmarePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::ClassParams = {
		&ANuclearNightmarePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANuclearNightmarePlayerController()
	{
		if (!Z_Registration_Info_UClass_ANuclearNightmarePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANuclearNightmarePlayerController.OuterSingleton, Z_Construct_UClass_ANuclearNightmarePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANuclearNightmarePlayerController.OuterSingleton;
	}
	template<> NUCLEARNIGHTMARE_API UClass* StaticClass<ANuclearNightmarePlayerController>()
	{
		return ANuclearNightmarePlayerController::StaticClass();
	}
	ANuclearNightmarePlayerController::ANuclearNightmarePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANuclearNightmarePlayerController);
	ANuclearNightmarePlayerController::~ANuclearNightmarePlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmarePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmarePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANuclearNightmarePlayerController, ANuclearNightmarePlayerController::StaticClass, TEXT("ANuclearNightmarePlayerController"), &Z_Registration_Info_UClass_ANuclearNightmarePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANuclearNightmarePlayerController), 883493916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmarePlayerController_h_1302573304(TEXT("/Script/NuclearNightmare"),
		Z_CompiledInDeferFile_FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmarePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_blain_Documents_Unreal_Projects_NuclearNightmare_Source_NuclearNightmare_NuclearNightmarePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
