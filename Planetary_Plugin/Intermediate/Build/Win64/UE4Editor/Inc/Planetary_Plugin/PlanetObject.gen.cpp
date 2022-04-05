// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Planetary_Plugin/Public/PlanetObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetObject() {}
// Cross Module References
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_APlanetObject_NoRegister();
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_APlanetObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Planetary_Plugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void APlanetObject::StaticRegisterNativesAPlanetObject()
	{
	}
	UClass* Z_Construct_UClass_APlanetObject_NoRegister()
	{
		return APlanetObject::StaticClass();
	}
	struct Z_Construct_UClass_APlanetObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAutoOrbit_MetaData[];
#endif
		static void NewProp_mAutoOrbit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mAutoOrbit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInitVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mInitVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRotVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRotVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlanetModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPlanetModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanetObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Planetary_Plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ///////////////////////////////////////////////////////////////\n//\x09\x09\x09\x09\x09\x09  APlanetObject\n// ///////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlanetObject.h" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "APlanetObject" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mSize_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "ClampMin", "0" },
		{ "Comment", "// === UPlanetObject Attributes ===\n// How large the body is\n" },
		{ "DisplayName", "Size" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "=== UPlanetObject Attributes ===\nHow large the body is" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mSize = { "mSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mSize), METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "Comment", "// Precalculate the orbit necessary\n" },
		{ "DisplayName", "Auto Orbit" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "Precalculate the orbit necessary" },
	};
#endif
	void Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit_SetBit(void* Obj)
	{
		((APlanetObject*)Obj)->mAutoOrbit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit = { "mAutoOrbit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanetObject), &Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mMass_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "ClampMin", "0" },
		{ "Comment", "// The mass of the object\n" },
		{ "DisplayName", "Mass" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "The mass of the object" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mMass = { "mMass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mMass), METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mInitVelocity_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "Comment", "// The initial velocity to apply to the body\n" },
		{ "DisplayName", "Starting Velocity" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "The initial velocity to apply to the body" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mInitVelocity = { "mInitVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mInitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mInitVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mInitVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mRotVel_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "DisplayName", "Rotational Velocity" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mRotVel = { "mRotVel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mRotVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mRotVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mRotVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mPlanetModel_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "Comment", "// The visual representation of the body\n" },
		{ "DisplayName", "Planet Model" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
		{ "ToolTip", "The visual representation of the body" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mPlanetModel = { "mPlanetModel", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mPlanetModel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mPlanetModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mPlanetModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetObject_Statics::NewProp_mMaterial_MetaData[] = {
		{ "Category", "PlanetObject" },
		{ "DisplayName", "Planet Material" },
		{ "ModuleRelativePath", "Public/PlanetObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetObject_Statics::NewProp_mMaterial = { "mMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetObject, mMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::NewProp_mMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::NewProp_mMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mAutoOrbit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mInitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mRotVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mPlanetModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetObject_Statics::NewProp_mMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanetObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanetObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanetObject_Statics::ClassParams = {
		&APlanetObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanetObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanetObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanetObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanetObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanetObject, 2086697480);
	template<> PLANETARY_PLUGIN_API UClass* StaticClass<APlanetObject>()
	{
		return APlanetObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanetObject(Z_Construct_UClass_APlanetObject, &APlanetObject::StaticClass, TEXT("/Script/Planetary_Plugin"), TEXT("APlanetObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanetObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
