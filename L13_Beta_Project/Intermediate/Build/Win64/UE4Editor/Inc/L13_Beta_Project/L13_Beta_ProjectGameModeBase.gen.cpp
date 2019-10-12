// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "L13_Beta_Project/L13_Beta_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeL13_Beta_ProjectGameModeBase() {}
// Cross Module References
	L13_BETA_PROJECT_API UClass* Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_NoRegister();
	L13_BETA_PROJECT_API UClass* Z_Construct_UClass_AL13_Beta_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_L13_Beta_Project();
// End Cross Module References
	void AL13_Beta_ProjectGameModeBase::StaticRegisterNativesAL13_Beta_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_NoRegister()
	{
		return AL13_Beta_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_L13_Beta_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "L13_Beta_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "L13_Beta_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AL13_Beta_ProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::ClassParams = {
		&AL13_Beta_ProjectGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AL13_Beta_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AL13_Beta_ProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AL13_Beta_ProjectGameModeBase, 3799113943);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AL13_Beta_ProjectGameModeBase(Z_Construct_UClass_AL13_Beta_ProjectGameModeBase, &AL13_Beta_ProjectGameModeBase::StaticClass, TEXT("/Script/L13_Beta_Project"), TEXT("AL13_Beta_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AL13_Beta_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
