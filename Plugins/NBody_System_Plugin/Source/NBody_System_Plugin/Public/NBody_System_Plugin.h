// Copyright Epic Games, Inc. All Rights Reserved.
// Planetary System Plugin developed by Peter Holmes 2022

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FNBody_System_PluginModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
