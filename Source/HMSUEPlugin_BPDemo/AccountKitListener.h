//Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Account.h"

using namespace huawei;

class HMSUEPLUGIN_BPDEMO_API AccountKitListener : public huawei::AccountListener
{
public:
	AccountKitListener();
	~AccountKitListener();

    void onLoggedIn(const AccountInfo account);
    void onGetIdToken(const FString idToken, const AccountInfo account);
    void onGetAuthCode(const FString authCode, const AccountInfo account);
    void onLoggedOut();
    void onCancelledAuth();
    void onException(int action, const FString message);
};
