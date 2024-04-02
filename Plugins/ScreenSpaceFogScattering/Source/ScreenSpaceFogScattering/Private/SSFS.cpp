// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#include "SSFS.h"
#include "Interfaces/IPluginManager.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FScreenSpaceFogScatteringModule"

void FScreenSpaceFogScatteringModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("ScreenSpaceFogScattering"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugins/ScreenSpaceFogScattering"), PluginShaderDir);
}

void FScreenSpaceFogScatteringModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FScreenSpaceFogScatteringModule, ScreenSpaceFogScattering)