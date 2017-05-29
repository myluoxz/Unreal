// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ASSIMPUNREAL_AssimpUnrealProjectile_generated_h
#error "AssimpUnrealProjectile.generated.h already included, missing '#pragma once' in AssimpUnrealProjectile.h"
#endif
#define ASSIMPUNREAL_AssimpUnrealProjectile_generated_h

#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAAssimpUnrealProjectile(); \
	friend ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealProjectile(); \
	public: \
	DECLARE_CLASS(AAssimpUnrealProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AssimpUnreal"), NO_API) \
	DECLARE_SERIALIZER(AAssimpUnrealProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAAssimpUnrealProjectile(); \
	friend ASSIMPUNREAL_API class UClass* Z_Construct_UClass_AAssimpUnrealProjectile(); \
	public: \
	DECLARE_CLASS(AAssimpUnrealProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AssimpUnreal"), NO_API) \
	DECLARE_SERIALIZER(AAssimpUnrealProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssimpUnrealProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssimpUnrealProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssimpUnrealProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssimpUnrealProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssimpUnrealProjectile(AAssimpUnrealProjectile&&); \
	NO_API AAssimpUnrealProjectile(const AAssimpUnrealProjectile&); \
public:


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssimpUnrealProjectile(AAssimpUnrealProjectile&&); \
	NO_API AAssimpUnrealProjectile(const AAssimpUnrealProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssimpUnrealProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssimpUnrealProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssimpUnrealProjectile)


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAssimpUnrealProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAssimpUnrealProjectile, ProjectileMovement); }


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_6_PROLOG
#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_RPC_WRAPPERS \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_INCLASS \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_PRIVATE_PROPERTY_OFFSET \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_INCLASS_NO_PURE_DECLS \
	AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AssimpUnreal_Source_AssimpUnreal_AssimpUnrealProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
