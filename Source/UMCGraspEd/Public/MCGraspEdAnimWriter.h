// Copyright 2017-2019, Institute for Artificial Intelligence - University of Bremen

#pragma once

#include "CoreMinimal.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/LocalTimestampDirectoryVisitor.h"
#include "MCGraspAnimDataAsset.h"

/**
 * This Class is used to write animations to data assets
 */
class UMCGraspEdAnimWriter
{
public:

	static void WriteToDataAsset(const FString& InAnimName, const TArray<FString>& InBoneNames, const TArray<FMCGraspAnimFrameData>& InFrames);
};
