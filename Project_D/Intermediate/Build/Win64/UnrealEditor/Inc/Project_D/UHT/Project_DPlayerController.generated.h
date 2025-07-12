// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Project_DPlayerController.h"

#ifdef PROJECT_D_Project_DPlayerController_generated_h
#error "Project_DPlayerController.generated.h already included, missing '#pragma once' in Project_DPlayerController.h"
#endif
#define PROJECT_D_Project_DPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AProject_DPlayerController ***********************************************
PROJECT_D_API UClass* Z_Construct_UClass_AProject_DPlayerController_NoRegister();

#define FID_Project_D_Source_Project_D_Project_DPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProject_DPlayerController(); \
	friend struct Z_Construct_UClass_AProject_DPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECT_D_API UClass* Z_Construct_UClass_AProject_DPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AProject_DPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project_D"), Z_Construct_UClass_AProject_DPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AProject_DPlayerController)


#define FID_Project_D_Source_Project_D_Project_DPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProject_DPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AProject_DPlayerController(AProject_DPlayerController&&) = delete; \
	AProject_DPlayerController(const AProject_DPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProject_DPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProject_DPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProject_DPlayerController) \
	NO_API virtual ~AProject_DPlayerController();


#define FID_Project_D_Source_Project_D_Project_DPlayerController_h_15_PROLOG
#define FID_Project_D_Source_Project_D_Project_DPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_D_Source_Project_D_Project_DPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Project_D_Source_Project_D_Project_DPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AProject_DPlayerController;

// ********** End Class AProject_DPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_D_Source_Project_D_Project_DPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
