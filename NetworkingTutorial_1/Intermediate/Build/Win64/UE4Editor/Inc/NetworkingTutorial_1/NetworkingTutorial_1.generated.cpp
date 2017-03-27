// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NetworkingTutorial_1.h"
#include "NetworkingTutorial_1.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1NetworkingTutorial_1() {}
FName NETWORKINGTUTORIAL_1_MyServerFunc = FName(TEXT("MyServerFunc"));
	void ANetworkingTutorial_1Character::MyServerFunc()
	{
		ProcessEvent(FindFunctionChecked(NETWORKINGTUTORIAL_1_MyServerFunc),NULL);
	}
	void ANetworkingTutorial_1Character::StaticRegisterNativesANetworkingTutorial_1Character()
	{
		FNativeFunctionRegistrar::RegisterFunction(ANetworkingTutorial_1Character::StaticClass(), "MyServerFunc",(Native)&ANetworkingTutorial_1Character::execMyServerFunc);
	}
	IMPLEMENT_CLASS(ANetworkingTutorial_1Character, 983814692);
	void ANetworkingTutorial_1GameMode::StaticRegisterNativesANetworkingTutorial_1GameMode()
	{
	}
	IMPLEMENT_CLASS(ANetworkingTutorial_1GameMode, 2574264592);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	NETWORKINGTUTORIAL_1_API class UFunction* Z_Construct_UFunction_ANetworkingTutorial_1Character_MyServerFunc();
	NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1Character_NoRegister();
	NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1Character();
	NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1GameMode_NoRegister();
	NETWORKINGTUTORIAL_1_API class UClass* Z_Construct_UClass_ANetworkingTutorial_1GameMode();
	NETWORKINGTUTORIAL_1_API class UPackage* Z_Construct_UPackage__Script_NetworkingTutorial_1();
	UFunction* Z_Construct_UFunction_ANetworkingTutorial_1Character_MyServerFunc()
	{
		UObject* Outer=Z_Construct_UClass_ANetworkingTutorial_1Character();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MyServerFunc"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x80220CC0, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANetworkingTutorial_1Character_NoRegister()
	{
		return ANetworkingTutorial_1Character::StaticClass();
	}
	UClass* Z_Construct_UClass_ANetworkingTutorial_1Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_NetworkingTutorial_1();
			OuterClass = ANetworkingTutorial_1Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ANetworkingTutorial_1Character_MyServerFunc());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ANetworkingTutorial_1Character), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ANetworkingTutorial_1Character), 0x0010000000020015);
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, ANetworkingTutorial_1Character), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ANetworkingTutorial_1Character), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ANetworkingTutorial_1Character_MyServerFunc(), "MyServerFunc"); // 4418466
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1Character.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkingTutorial_1Character(Z_Construct_UClass_ANetworkingTutorial_1Character, &ANetworkingTutorial_1Character::StaticClass, TEXT("ANetworkingTutorial_1Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkingTutorial_1Character);
	UClass* Z_Construct_UClass_ANetworkingTutorial_1GameMode_NoRegister()
	{
		return ANetworkingTutorial_1GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ANetworkingTutorial_1GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_NetworkingTutorial_1();
			OuterClass = ANetworkingTutorial_1GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("NetworkingTutorial_1GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("NetworkingTutorial_1GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkingTutorial_1GameMode(Z_Construct_UClass_ANetworkingTutorial_1GameMode, &ANetworkingTutorial_1GameMode::StaticClass, TEXT("ANetworkingTutorial_1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkingTutorial_1GameMode);
	UPackage* Z_Construct_UPackage__Script_NetworkingTutorial_1()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/NetworkingTutorial_1")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x8287DE68;
			Guid.B = 0x802FE072;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
