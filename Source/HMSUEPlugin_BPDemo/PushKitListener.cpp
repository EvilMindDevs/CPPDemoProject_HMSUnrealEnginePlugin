// Fill out your copyright notice in the Description page of Project Settings.

#include "PushKitListener.h"

PushKitListener::PushKitListener()
{

}

PushKitListener::~PushKitListener()
{
}

void PushKitListener::onGetTokenSuccess(const FString token) {

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("token: "+ token));

}

void PushKitListener::onDeleteTokenSuccess() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onDeleteTokenSuccess"));
}

void PushKitListener::onNewToken(const FString token) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onNewToken - token:"+ token));
}

void PushKitListener::onMessageReceived(const FString messageJson) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onMessageReceived - messageJson:"+ messageJson));
}

void PushKitListener::onSubscribeSuccess() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onSubscribeSuccess"));
}

void PushKitListener::onUnSubscribeSuccess() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onUnSubscribeSuccess"));
}

void PushKitListener::onException(int errorcode, int action, const FString message) {

	FString errorMessage = FString::Printf(TEXT("onException - errorcode:%d action:%d message:%s"), &errorcode, &action, &message);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, errorMessage);
}