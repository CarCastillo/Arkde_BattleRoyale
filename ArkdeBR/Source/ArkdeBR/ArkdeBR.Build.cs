// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ArkdeBR : ModuleRules
{
	public ArkdeBR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
