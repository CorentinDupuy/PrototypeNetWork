// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPENETWORK_PrototypeNetWorkCharacter_generated_h
#error "PrototypeNetWorkCharacter.generated.h already included, missing '#pragma once' in PrototypeNetWorkCharacter.h"
#endif
#define PROTOTYPENETWORK_PrototypeNetWorkCharacter_generated_h

#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_RPC_WRAPPERS
#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrototypeNetWorkCharacter(); \
	friend struct Z_Construct_UClass_APrototypeNetWorkCharacter_Statics; \
public: \
	DECLARE_CLASS(APrototypeNetWorkCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeNetWork"), NO_API) \
	DECLARE_SERIALIZER(APrototypeNetWorkCharacter)


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPrototypeNetWorkCharacter(); \
	friend struct Z_Construct_UClass_APrototypeNetWorkCharacter_Statics; \
public: \
	DECLARE_CLASS(APrototypeNetWorkCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PrototypeNetWork"), NO_API) \
	DECLARE_SERIALIZER(APrototypeNetWorkCharacter)


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrototypeNetWorkCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrototypeNetWorkCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeNetWorkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeNetWorkCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeNetWorkCharacter(APrototypeNetWorkCharacter&&); \
	NO_API APrototypeNetWorkCharacter(const APrototypeNetWorkCharacter&); \
public:


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrototypeNetWorkCharacter(APrototypeNetWorkCharacter&&); \
	NO_API APrototypeNetWorkCharacter(const APrototypeNetWorkCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrototypeNetWorkCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrototypeNetWorkCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrototypeNetWorkCharacter)


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APrototypeNetWorkCharacter, L_MotionController); }


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_11_PROLOG
#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_RPC_WRAPPERS \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_INCLASS \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_INCLASS_NO_PURE_DECLS \
	PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPENETWORK_API UClass* StaticClass<class APrototypeNetWorkCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrototypeNetWork_Source_PrototypeNetWork_PrototypeNetWorkCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
