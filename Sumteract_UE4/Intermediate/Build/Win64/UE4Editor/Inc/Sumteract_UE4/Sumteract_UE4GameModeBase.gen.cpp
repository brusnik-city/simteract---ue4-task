// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sumteract_UE4/Sumteract_UE4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSumteract_UE4GameModeBase() {}
// Cross Module References
	SUMTERACT_UE4_API UClass* Z_Construct_UClass_ASumteract_UE4GameModeBase_NoRegister();
	SUMTERACT_UE4_API UClass* Z_Construct_UClass_ASumteract_UE4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sumteract_UE4();
// End Cross Module References
	void ASumteract_UE4GameModeBase::StaticRegisterNativesASumteract_UE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASumteract_UE4GameModeBase_NoRegister()
	{
		return ASumteract_UE4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sumteract_UE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Sumteract_UE4GameModeBase.h" },
		{ "ModuleRelativePath", "Sumteract_UE4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASumteract_UE4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::ClassParams = {
		&ASumteract_UE4GameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASumteract_UE4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASumteract_UE4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASumteract_UE4GameModeBase, 2382120715);
	template<> SUMTERACT_UE4_API UClass* StaticClass<ASumteract_UE4GameModeBase>()
	{
		return ASumteract_UE4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASumteract_UE4GameModeBase(Z_Construct_UClass_ASumteract_UE4GameModeBase, &ASumteract_UE4GameModeBase::StaticClass, TEXT("/Script/Sumteract_UE4"), TEXT("ASumteract_UE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASumteract_UE4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
