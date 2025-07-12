// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_DCharacter.h"

#ifdef PROJECT_D_Project_DCharacter_generated_h
#error "Project_DCharacter.generated.h already included, missing '#pragma once' in Project_DCharacter.h"
#endif
#define PROJECT_D_Project_DCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_DCharacter ******************************************************
#define FID_Project_D_Source_Project_D_Project_DCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PROJECT_D_API UClass* Z_Construct_UClass_AProject_DCharacter_NoRegister();

#define FID_Project_D_Source_Project_D_Project_DCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_DCharacter(); \
	friend struct Z_Construct_UClass_AProject_DCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_D_API UClass* Z_Construct_UClass_AProject_DCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_DCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_D"), Z_Construct_UClass_AProject_DCharacter_NoRegister) \
	DECLARE_SERIALIZER(AProject_DCharacter)


#define FID_Project_D_Source_Project_D_Project_DCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_DCharacter(AProject_DCharacter&&) = delete; \
	AProject_DCharacter(const AProject_DCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_DCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_DCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AProject_DCharacter) \
	NO_API virtual ~AProject_DCharacter();


#define FID_Project_D_Source_Project_D_Project_DCharacter_h_21_PROLOG
#define FID_Project_D_Source_Project_D_Project_DCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_D_Source_Project_D_Project_DCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_D_Source_Project_D_Project_DCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Project_D_Source_Project_D_Project_DCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_DCharacter;

// ********** End Class AProject_DCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_D_Source_Project_D_Project_DCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
