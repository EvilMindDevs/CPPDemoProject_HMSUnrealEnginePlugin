// Fill out your copyright notice in the Description page of Project Settings.

#include "HMSAdsKitManager.h"
#include "Ads.h"
#include "AdsKitListener.h"

using namespace huawei;

// Sets default values
AHMSAdsKitManager::AHMSAdsKitManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Ads::setListener(new AdsKitListener());

	//Ads::loadBannerAd("testw6vs28auh3", BannerPosition::POSITION_BOTTOM, BannerSize::BANNER_SIZE_320_50);
	//Ads::loadInterstitialAd("testb4znbuh3n2");
	//Ads::loadRewardAd("testx9dtjwj8hp");
}

// Called when the game starts or when spawned
void AHMSAdsKitManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHMSAdsKitManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

