// Fill out your copyright notice in the Description page of Project Settings.

#include "AccountKitListener.h"

using namespace huawei;

AccountKitListener::AccountKitListener()
{

}

AccountKitListener::~AccountKitListener()
{

}

void AccountKitListener::onLoggedIn(const AccountInfo account) {

	FString errorMessage = FString::Printf(TEXT("onException - email:%d - openId:%d - displayName:%s - unionId:%s"), &account.email, &account.openId, &account.displayName, &account.unionId);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, errorMessage);

}

void AccountKitListener::onGetIdToken(const FString idToken, const AccountInfo account) {

	FString message = FString::Printf(TEXT("onGetIdToken -idToken:%s - email:%d - openId:%d - displayName:%s - unionId:%s"), &idToken, &account.email, &account.openId, &account.displayName, &account.unionId);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AccountKitListener::onGetAuthCode(const FString authCode, const AccountInfo account) {

	FString message = FString::Printf(TEXT("onGetIdToken -idToken:%s - email:%d - openId:%d - displayName:%s - unionId:%s"), &authCode, &account.email, &account.openId, &account.displayName, &account.unionId);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AccountKitListener::onLoggedOut() {

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onLoggedOut"));

}

void AccountKitListener::onCancelledAuth() {

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onCancelledAuth"));

}

void AccountKitListener::onException(int action, const FString message) {

	FString messageText = FString::Printf(TEXT("onException -action:%d - message:%s"), &action, &message);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, messageText);
}