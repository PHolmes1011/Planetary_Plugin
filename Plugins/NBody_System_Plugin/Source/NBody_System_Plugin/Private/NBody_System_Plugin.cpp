// Copyright Epic Games, Inc. All Rights Reserved.

#include "NBody_System_Plugin.h"

#define LOCTEXT_NAMESPACE "FNBody_System_PluginModule"

void FNBody_System_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FNBody_System_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNBody_System_PluginModule, NBody_System_Plugin)