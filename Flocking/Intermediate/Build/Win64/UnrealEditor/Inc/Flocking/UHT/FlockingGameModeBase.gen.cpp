// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/FlockingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameModeBase();
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameModeBase_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_UFlockingManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Flocking();
// End Cross Module References
	DEFINE_FUNCTION(AFlockingGameModeBase::execremoveBoid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->removeBoid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockingGameModeBase::execaddBoid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addBoid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockingGameModeBase::execsetCoefficient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_whichV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_c);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setCoefficient(Z_Param_whichV,Z_Param_c);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockingGameModeBase::execsetSolidity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_s);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setSolidity(Z_Param_s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFlockingGameModeBase::execsetLimits)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setLimits(Z_Param_size);
		P_NATIVE_END;
	}
	void AFlockingGameModeBase::StaticRegisterNativesAFlockingGameModeBase()
	{
		UClass* Class = AFlockingGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addBoid", &AFlockingGameModeBase::execaddBoid },
			{ "removeBoid", &AFlockingGameModeBase::execremoveBoid },
			{ "setCoefficient", &AFlockingGameModeBase::execsetCoefficient },
			{ "setLimits", &AFlockingGameModeBase::execsetLimits },
			{ "setSolidity", &AFlockingGameModeBase::execsetSolidity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "setter" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockingGameModeBase, nullptr, "addBoid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockingGameModeBase_addBoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlockingGameModeBase_addBoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "setter" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockingGameModeBase, nullptr, "removeBoid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockingGameModeBase_removeBoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlockingGameModeBase_removeBoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics
	{
		struct FlockingGameModeBase_eventsetCoefficient_Parms
		{
			int32 whichV;
			float c;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_whichV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_c;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::NewProp_whichV = { "whichV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlockingGameModeBase_eventsetCoefficient_Parms, whichV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlockingGameModeBase_eventsetCoefficient_Parms, c), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::NewProp_whichV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::NewProp_c,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "setter" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockingGameModeBase, nullptr, "setCoefficient", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::FlockingGameModeBase_eventsetCoefficient_Parms), Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics
	{
		struct FlockingGameModeBase_eventsetLimits_Parms
		{
			float size;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlockingGameModeBase_eventsetLimits_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "setter" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockingGameModeBase, nullptr, "setLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::FlockingGameModeBase_eventsetLimits_Parms), Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockingGameModeBase_setLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlockingGameModeBase_setLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics
	{
		struct FlockingGameModeBase_eventsetSolidity_Parms
		{
			float s;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_s;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::NewProp_s = { "s", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FlockingGameModeBase_eventsetSolidity_Parms, s), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::NewProp_s,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::Function_MetaDataParams[] = {
		{ "Category", "setter" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockingGameModeBase, nullptr, "setSolidity", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::FlockingGameModeBase_eventsetSolidity_Parms), Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlockingGameModeBase_setSolidity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlockingGameModeBase_setSolidity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlockingGameModeBase);
	UClass* Z_Construct_UClass_AFlockingGameModeBase_NoRegister()
	{
		return AFlockingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFlockingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AgentMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlockingGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlockingGameModeBase_addBoid, "addBoid" }, // 2859913159
		{ &Z_Construct_UFunction_AFlockingGameModeBase_removeBoid, "removeBoid" }, // 112040212
		{ &Z_Construct_UFunction_AFlockingGameModeBase_setCoefficient, "setCoefficient" }, // 625060360
		{ &Z_Construct_UFunction_AFlockingGameModeBase_setLimits, "setLimits" }, // 2213132646
		{ &Z_Construct_UFunction_AFlockingGameModeBase_setSolidity, "setSolidity" }, // 1282769165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FlockingGameModeBase.h" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData[] = {
		{ "Category", "FlockingGameModeBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh = { "AgentMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlockingGameModeBase, AgentMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "FlockingGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlockingGameModeBase, Manager), Z_Construct_UClass_UFlockingManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_AgentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlockingGameModeBase_Statics::NewProp_Manager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlockingGameModeBase_Statics::ClassParams = {
		&AFlockingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton, Z_Construct_UClass_AFlockingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlockingGameModeBase.OuterSingleton;
	}
	template<> FLOCKING_API UClass* StaticClass<AFlockingGameModeBase>()
	{
		return AFlockingGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockingGameModeBase);
	AFlockingGameModeBase::~AFlockingGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlockingGameModeBase, AFlockingGameModeBase::StaticClass, TEXT("AFlockingGameModeBase"), &Z_Registration_Info_UClass_AFlockingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlockingGameModeBase), 3339673618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingGameModeBase_h_2350448781(TEXT("/Script/Flocking"),
		Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Toby_Wilensky_Documents_Unreal_Projects_FlockingAssignment_Flocking_Source_Flocking_FlockingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
