// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_D_init() {}
	PROJECT_D_API UFunction* Z_Construct_UDelegateFunction_Project_D_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Project_D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Project_D()
	{
		if (!Z_Registration_Info_UPackage__Script_Project_D.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Project_D_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Project_D",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD5346AB2,
				0xF0724F15,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Project_D.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Project_D.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Project_D(Z_Construct_UPackage__Script_Project_D, TEXT("/Script/Project_D"), Z_Registration_Info_UPackage__Script_Project_D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD5346AB2, 0xF0724F15));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
