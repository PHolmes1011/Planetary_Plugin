// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Planetary_Plugin/Public/PlanetObjectFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetObjectFactoryNew() {}
// Cross Module References
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_UPlanetObjectFactoryNew_NoRegister();
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_UPlanetObjectFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Planetary_Plugin();
// End Cross Module References
	void UPlanetObjectFactoryNew::StaticRegisterNativesUPlanetObjectFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UPlanetObjectFactoryNew_NoRegister()
	{
		return UPlanetObjectFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPlanetObjectFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Planetary_Plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ///////////////////////////////////////////////////////////////\n//\x09\x09\x09\x09\x09 UPlanetObjectFactoryNew\n// ///////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PlanetObjectFactoryNew.h" },
		{ "ModuleRelativePath", "Public/PlanetObjectFactoryNew.h" },
		{ "ToolTip", "UPlanetObjectFactoryNew" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetObjectFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::ClassParams = {
		&UPlanetObjectFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanetObjectFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanetObjectFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanetObjectFactoryNew, 3061218483);
	template<> PLANETARY_PLUGIN_API UClass* StaticClass<UPlanetObjectFactoryNew>()
	{
		return UPlanetObjectFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanetObjectFactoryNew(Z_Construct_UClass_UPlanetObjectFactoryNew, &UPlanetObjectFactoryNew::StaticClass, TEXT("/Script/Planetary_Plugin"), TEXT("UPlanetObjectFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetObjectFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
