// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cpptest1 : ModuleRules
{
	public Cpptest1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
