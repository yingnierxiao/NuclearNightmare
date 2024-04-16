// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NuclearNightmare : ModuleRules
{
	public NuclearNightmare(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UMG", "Slate", "SlateCore", "InputCore", "EnhancedInput", "OnlineSubsystem", "OnlineSubsystemSteam", "AsyncLoadingScreen", "SmoothSyncPlugin", "ScreenSpaceFogScattering", "Steamworks"});
	}
}
