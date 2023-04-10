// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class HMSUEPlugin_BPDemoEditorTarget : TargetRules
{
	public HMSUEPlugin_BPDemoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("HMSUEPlugin_BPDemo");
	}
}
