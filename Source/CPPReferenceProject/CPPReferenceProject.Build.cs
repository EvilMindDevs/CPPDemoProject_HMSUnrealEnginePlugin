// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPPReferenceProject : ModuleRules
{
	public CPPReferenceProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "HuaweiAccount", "HuaweiAds", "HuaweiIAP", "HuaweiPush" });

	}
}
