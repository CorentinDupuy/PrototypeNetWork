// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrototypeNetWork/PrototypeNetWorkHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototypeNetWorkHUD() {}
// Cross Module References
	PROTOTYPENETWORK_API UClass* Z_Construct_UClass_APrototypeNetWorkHUD_NoRegister();
	PROTOTYPENETWORK_API UClass* Z_Construct_UClass_APrototypeNetWorkHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PrototypeNetWork();
// End Cross Module References
	void APrototypeNetWorkHUD::StaticRegisterNativesAPrototypeNetWorkHUD()
	{
	}
	UClass* Z_Construct_UClass_APrototypeNetWorkHUD_NoRegister()
	{
		return APrototypeNetWorkHUD::StaticClass();
	}
	struct Z_Construct_UClass_APrototypeNetWorkHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototypeNetWorkHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PrototypeNetWork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototypeNetWorkHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PrototypeNetWorkHUD.h" },
		{ "ModuleRelativePath", "PrototypeNetWorkHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototypeNetWorkHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototypeNetWorkHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototypeNetWorkHUD_Statics::ClassParams = {
		&APrototypeNetWorkHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototypeNetWorkHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APrototypeNetWorkHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototypeNetWorkHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototypeNetWorkHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototypeNetWorkHUD, 818463143);
	template<> PROTOTYPENETWORK_API UClass* StaticClass<APrototypeNetWorkHUD>()
	{
		return APrototypeNetWorkHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototypeNetWorkHUD(Z_Construct_UClass_APrototypeNetWorkHUD, &APrototypeNetWorkHUD::StaticClass, TEXT("/Script/PrototypeNetWork"), TEXT("APrototypeNetWorkHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototypeNetWorkHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
