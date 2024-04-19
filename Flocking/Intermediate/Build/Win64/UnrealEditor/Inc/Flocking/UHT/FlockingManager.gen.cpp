// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/FlockingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Flocking();
// End Cross Module References
	void UFlockingManager::StaticRegisterNativesUFlockingManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlockingManager);
	UClass* Z_Construct_UClass_UFlockingManager_NoRegister()
	{
		return UFlockingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFlockingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlockingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlockingManager.h" },
		{ "ModuleRelativePath", "FlockingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlockingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlockingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlockingManager_Statics::ClassParams = {
		&UFlockingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlockingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlockingManager()
	{
		if (!Z_Registration_Info_UClass_UFlockingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlockingManager.OuterSingleton, Z_Construct_UClass_UFlockingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlockingManager.OuterSingleton;
	}
	template<> FLOCKING_API UClass* StaticClass<UFlockingManager>()
	{
		return UFlockingManager::StaticClass();
	}
	UFlockingManager::UFlockingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlockingManager);
	UFlockingManager::~UFlockingManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlockingManager, UFlockingManager::StaticClass, TEXT("UFlockingManager"), &Z_Registration_Info_UClass_UFlockingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlockingManager), 1938983661U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingManager_h_2750145108(TEXT("/Script/Flocking"),
		Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
