// Copyright Epic Games, Inc. All Rights Reserved.

#include "Planetary_Plugin.h"

#define LOCTEXT_NAMESPACE "FPlanetary_PluginModule"

void FPlanetary_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FPlanetary_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPlanetary_PluginModule, Planetary_Plugin)