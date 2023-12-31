// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author:Michael Neumann

#pragma once

#include "CoreMinimal.h"
#include "ROSBridgeHandler.h"
#include "ROSBridgeSubscriber.h"
#include "urobosim_msgs/PerceiveObjectActionGoal.h"
#include "Controller/AvatarPerceiveObjController.h"


class UIAIAVATAR_API FAvatarPerceiveObjActionGoalCallback : public FROSBridgeSubscriber
{
public:
	FAvatarPerceiveObjActionGoalCallback(const FString& InTopic, const FString& InType, UObject* InController);

	~FAvatarPerceiveObjActionGoalCallback() override;

	TSharedPtr<FROSBridgeMsg> ParseMessage(TSharedPtr<FJsonObject> JsonObject) const override;

	void Callback(TSharedPtr<FROSBridgeMsg> Msg) override;

	UAvatarPerceiveObjController* Controller;
};