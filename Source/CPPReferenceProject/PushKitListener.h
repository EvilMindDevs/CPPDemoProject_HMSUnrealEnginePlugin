// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "push.h"

using namespace huawei;

class CPPREFERENCEPROJECT_API PushKitListener : public PushListener {
public:
    PushKitListener();
    ~PushKitListener();

    void onGetTokenSuccess(const FString token) override;
    void onDeleteTokenSuccess() override;
    void onNewToken(const FString token) override;
    void onMessageReceived(const FString messageJson) override;
    void onSubscribeSuccess() override;
    void onUnSubscribeSuccess() override;
    void onException(int errorcode, int action, const FString message) override;
};