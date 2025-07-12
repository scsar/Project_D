// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_D/Project_DGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProject_DGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DGameMode();
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProject_DGameMode *******************************************************
void AProject_DGameMode::StaticRegisterNativesAProject_DGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProject_DGameMode;
UClass* AProject_DGameMode::GetPrivateStaticClass()
{
	using TClass = AProject_DGameMode;
	if (!Z_Registration_Info_UClass_AProject_DGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Project_DGameMode"),
			Z_Registration_Info_UClass_AProject_DGameMode.InnerSingleton,
			StaticRegisterNativesAProject_DGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AProject_DGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProject_DGameMode_NoRegister()
{
	return AProject_DGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProject_DGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_DGameMode.h" },
		{ "ModuleRelativePath", "Project_DGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_DGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject_DGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_DGameMode_Statics::ClassParams = {
	&AProject_DGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_DGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_DGameMode()
{
	if (!Z_Registration_Info_UClass_AProject_DGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_DGameMode.OuterSingleton, Z_Construct_UClass_AProject_DGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_DGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DGameMode);
AProject_DGameMode::~AProject_DGameMode() {}
// ********** End Class AProject_DGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DGameMode_h__Script_Project_D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_DGameMode, AProject_DGameMode::StaticClass, TEXT("AProject_DGameMode"), &Z_Registration_Info_UClass_AProject_DGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_DGameMode), 1080488290U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DGameMode_h__Script_Project_D_1221760330(TEXT("/Script/Project_D"),
	Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DGameMode_h__Script_Project_D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DGameMode_h__Script_Project_D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
