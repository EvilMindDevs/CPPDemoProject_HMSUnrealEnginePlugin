// Fill out your copyright notice in the Description page of Project Settings.


#include "HMSIAPKitManager.h"
#include "Iap.h"
#include "IapKitListener.h"

using namespace huawei;

// Sets default values
AHMSIAPKitManager::AHMSIAPKitManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Iap::setListener(new IapKitListener());
}

// Called when the game starts or when spawned
void AHMSIAPKitManager::BeginPlay()
{
	Super::BeginPlay();

	Iap::checkEnvironment();
}

// Called every frame
void AHMSIAPKitManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}