// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_D/Project_DPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProject_DPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DPlayerController();
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProject_DPlayerController ***********************************************
void AProject_DPlayerController::StaticRegisterNativesAProject_DPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProject_DPlayerController;
UClass* AProject_DPlayerController::GetPrivateStaticClass()
{
	using TClass = AProject_DPlayerController;
	if (!Z_Registration_Info_UClass_AProject_DPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Project_DPlayerController"),
			Z_Registration_Info_UClass_AProject_DPlayerController.InnerSingleton,
			StaticRegisterNativesAProject_DPlayerController,
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
	return Z_Registration_Info_UClass_AProject_DPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AProject_DPlayerController_NoRegister()
{
	return AProject_DPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProject_DPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Project_DPlayerController.h" },
		{ "ModuleRelativePath", "Project_DPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Project_DPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_DPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProject_DPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProject_DPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProject_DPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProject_DPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_DPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProject_DPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProject_DPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_DPlayerController_Statics::ClassParams = {
	&AProject_DPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProject_DPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_DPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_DPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_DPlayerController()
{
	if (!Z_Registration_Info_UClass_AProject_DPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_DPlayerController.OuterSingleton, Z_Construct_UClass_AProject_DPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_DPlayerController.OuterSingleton;
}
AProject_DPlayerController::AProject_DPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DPlayerController);
AProject_DPlayerController::~AProject_DPlayerController() {}
// ********** End Class AProject_DPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DPlayerController_h__Script_Project_D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_DPlayerController, AProject_DPlayerController::StaticClass, TEXT("AProject_DPlayerController"), &Z_Registration_Info_UClass_AProject_DPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_DPlayerController), 3149168039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DPlayerController_h__Script_Project_D_2147526114(TEXT("/Script/Project_D"),
	Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DPlayerController_h__Script_Project_D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_D_Source_Project_D_Project_DPlayerController_h__Script_Project_D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
