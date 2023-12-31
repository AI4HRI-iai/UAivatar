// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author:Michael Neumann

#pragma once

#include "CoreMinimal.h"
#include "ROSBridgeHandler.h"
#include "ROSBridgeSubscriber.h"
#include "Controller/AController.h"


class UIAIAVATAR_API FROSActionCancelCallback : public FROSBridgeSubscriber
{
public:
	FROSActionCancelCallback(const FString& InTopic, const FString& InType, UObject* InController);

	~FROSActionCancelCallback() override;

	TSharedPtr<FROSBridgeMsg> ParseMessage(TSharedPtr<FJsonObject> JsonObject) const override;

	void Callback(TSharedPtr<FROSBridgeMsg> Msg) override;

	UAController* Controller;

};