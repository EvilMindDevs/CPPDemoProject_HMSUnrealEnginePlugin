// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HMSUEPlugin_BPDemoTarget : TargetRules
{
	public HMSUEPlugin_BPDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("HMSUEPlugin_BPDemo");
	}
}
