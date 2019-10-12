// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class L13_Beta_ProjectEditorTarget : TargetRules
{
	public L13_Beta_ProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "L13_Beta_Project" } );
	}
}
