// Fill out your copyright notice in the Description page of Project Settings.

#include "HMSPushKitManager.h"
#include "push.h"
#include "PushKitListener.h"

using namespace huawei;

// Sets default values
AHMSPushKitManager::AHMSPushKitManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Push::setListener(new PushKitListener());
}

AHMSPushKitManager::~AHMSPushKitManager()
{

}

// Called when the game starts or when spawned
void AHMSPushKitManager::BeginPlay()
{
	Super::BeginPlay();

	Push::init();
	Push::setAutoInitEnabled(true);
	Push::subscribe("topic1");
	Push::getToken();

}

// Called every frame
void AHMSPushKitManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHMSPushKitManager::UnSubscribe()
{
	Push::unSubscribe("topic1");
}

void AHMSPushKitManager::DeleteToken()
{
	Push::deleteToken();
}

