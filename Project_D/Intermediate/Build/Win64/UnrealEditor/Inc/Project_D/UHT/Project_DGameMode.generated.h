// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_DGameMode.h"

#ifdef PROJECT_D_Project_DGameMode_generated_h
#error "Project_DGameMode.generated.h already included, missing '#pragma once' in Project_DGameMode.h"
#endif
#define PROJECT_D_Project_DGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_DGameMode *******************************************************
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DGameMode_NoRegister();

#define FID_Project_D_Source_Project_D_Project_DGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_DGameMode(); \
	friend struct Z_Construct_UClass_AProject_DGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_D_API UClass* Z_Construct_UClass_AProject_DGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_DGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_D"), Z_Construct_UClass_AProject_DGameMode_NoRegister) \
	DECLARE_SERIALIZER(AProject_DGameMode)


#define FID_Project_D_Source_Project_D_Project_DGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_DGameMode(AProject_DGameMode&&) = delete; \
	AProject_DGameMode(const AProject_DGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_DGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_DGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProject_DGameMode) \
	NO_API virtual ~AProject_DGameMode();


#define FID_Project_D_Source_Project_D_Project_DGameMode_h_12_PROLOG
#define FID_Project_D_Source_Project_D_Project_DGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_D_Source_Project_D_Project_DGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_D_Source_Project_D_Project_DGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_DGameMode;

// ********** End Class AProject_DGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_D_Source_Project_D_Project_DGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
