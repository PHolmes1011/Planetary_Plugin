// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Planetary_Plugin/Public/PlanetSystemFactoryNew.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetSystemFactoryNew() {}
// Cross Module References
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_UPlanetSystemFactoryNew_NoRegister();
	PLANETARY_PLUGIN_API UClass* Z_Construct_UClass_UPlanetSystemFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Planetary_Plugin();
// End Cross Module References
	void UPlanetSystemFactoryNew::StaticRegisterNativesUPlanetSystemFactoryNew()
	{
	}
	UClass* Z_Construct_UClass_UPlanetSystemFactoryNew_NoRegister()
	{
		return UPlanetSystemFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPlanetSystemFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Planetary_Plugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ///////////////////////////////////////////////////////////////\n//\x09\x09\x09\x09\x09 UPlanetSystemFactoryNew\n// ///////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "PlanetSystemFactoryNew.h" },
		{ "ModuleRelativePath", "Public/PlanetSystemFactoryNew.h" },
		{ "ToolTip", "UPlanetSystemFactoryNew" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetSystemFactoryNew>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::ClassParams = {
		&UPlanetSystemFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlanetSystemFactoryNew()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlanetSystemFactoryNew_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlanetSystemFactoryNew, 2257403846);
	template<> PLANETARY_PLUGIN_API UClass* StaticClass<UPlanetSystemFactoryNew>()
	{
		return UPlanetSystemFactoryNew::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlanetSystemFactoryNew(Z_Construct_UClass_UPlanetSystemFactoryNew, &UPlanetSystemFactoryNew::StaticClass, TEXT("/Script/Planetary_Plugin"), TEXT("UPlanetSystemFactoryNew"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetSystemFactoryNew);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
