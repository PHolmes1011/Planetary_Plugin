// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Planetary_Plugin/Public/PlanetSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetSystem() {}
// Cross Module References
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_APlanetSystem_NoRegister();
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_APlanetSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Planetary_Plugin();
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_APlanetObject_NoRegister();
// End Cross Module References
	void APlanetSystem::StaticRegisterNativesAPlanetSystem()
	{
	}
	UClass* Z_Construct_UClass_APlanetSystem_NoRegister()
	{
		return APlanetSystem::StaticClass();
	}
	struct Z_Construct_UClass_APlanetSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumOfBodies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_mNumOfBodies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPlanetObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlanetObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPlanetObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVisibleHub_MetaData[];
#endif
		static void NewProp_mVisibleHub_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mVisibleHub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebug_MetaData[];
#endif
		static void NewProp_mDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanetSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Planetary_Plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ///////////////////////////////////////////////////////////////\n//\x09\x09\x09\x09\x09\x09 UPlanetSystem\n// ///////////////////////////////////////////////////////////////\n// A class for creating and managing the planet objects in the system\n// Imagine it as the hub that the planets orbit around\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlanetSystem.h" },
		{ "ModuleRelativePath", "Public/PlanetSystem.h" },
		{ "ToolTip", "UPlanetSystem\n\nA class for creating and managing the planet objects in the system\nImagine it as the hub that the planets orbit around" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetSystem_Statics::NewProp_mNumOfBodies_MetaData[] = {
		{ "Category", "PlanetSystem" },
		{ "ClampMax", "50" },
		{ "Comment", "// ===== UPlanetSystem Attributes =====\n// mNumOfBodies - How many bodies are in the system\n" },
		{ "DisplayName", "Number of Bodies" },
		{ "ModuleRelativePath", "Public/PlanetSystem.h" },
		{ "ToolTip", "===== UPlanetSystem Attributes =====\nmNumOfBodies - How many bodies are in the system" },
		{ "UIMax", "50" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_APlanetSystem_Statics::NewProp_mNumOfBodies = { "mNumOfBodies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetSystem, mNumOfBodies), METADATA_PARAMS(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mNumOfBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mNumOfBodies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects_Inner = { "mPlanetObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlanetObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects_MetaData[] = {
		{ "Category", "PlanetSystem" },
		{ "Comment", "// mPlanetObjects - Internal array of all created planets in the system\n" },
		{ "DisplayName", "Planet Array" },
		{ "ModuleRelativePath", "Public/PlanetSystem.h" },
		{ "ToolTip", "mPlanetObjects - Internal array of all created planets in the system" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects = { "mPlanetObjects", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetSystem, mPlanetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub_MetaData[] = {
		{ "Category", "PlanetSystem" },
		{ "Comment", "// mVisibleHub - Should the centre of the system have an associated model\n// [ Set to true by default, but can be changed should you wish ]\n" },
		{ "DisplayName", "Has Visible Centre" },
		{ "ModuleRelativePath", "Public/PlanetSystem.h" },
		{ "ToolTip", "mVisibleHub - Should the centre of the system have an associated model\n[ Set to true by default, but can be changed should you wish ]" },
	};
#endif
	void Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub_SetBit(void* Obj)
	{
		((APlanetSystem*)Obj)->mVisibleHub = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub = { "mVisibleHub", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanetSystem), &Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug_MetaData[] = {
		{ "Category", "PlanetSystem" },
		{ "Comment", "// Enable debug features\n" },
		{ "DisplayName", "Debug Mode" },
		{ "ModuleRelativePath", "Public/PlanetSystem.h" },
		{ "ToolTip", "Enable debug features" },
	};
#endif
	void Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug_SetBit(void* Obj)
	{
		((APlanetSystem*)Obj)->mDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug = { "mDebug", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanetSystem), &Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanetSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetSystem_Statics::NewProp_mNumOfBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetSystem_Statics::NewProp_mPlanetObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetSystem_Statics::NewProp_mVisibleHub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetSystem_Statics::NewProp_mDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanetSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanetSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanetSystem_Statics::ClassParams = {
		&APlanetSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanetSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanetSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanetSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanetSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanetSystem, 1541448766);
	template<> PLANETARY_PLUGIN_API UClass* StaticClass<APlanetSystem>()
	{
		return APlanetSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanetSystem(Z_Construct_UClass_APlanetSystem, &APlanetSystem::StaticClass, TEXT("/Script/Planetary_Plugin"), TEXT("APlanetSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanetSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
