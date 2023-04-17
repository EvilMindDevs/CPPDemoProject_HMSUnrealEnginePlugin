#pragma once

#include "CoreMinimal.h"
#include "Ads.h"

using namespace huawei;

class CPPREFERENCEPROJECT_API AdsKitListener : public huawei::AdsListener
{
public:
    AdsKitListener();

    void onBannerAdClosed();
    void onBannerAdFailed(int errorCode);
    void onBannerAdLeftApp();
    void onBannerAdOpened();
    void onBannerAdLoaded();
    void onBannerAdClicked();
    void onBannerAdImpression();
    void onInterstitialAdClosed();
    void onInterstitialAdFailed(int errorCode);
    void onInterstitialAdLeftApp();
    void onInterstitialAdOpened();
    void onInterstitialAdLoaded();
    void onInterstitialAdClicked();
    void onInterstitialAdImpression();
    void onRewardAdFailedToLoad(int errorCode);
    void onRewardedLoaded();
    void onRewardAdClosed();
    void onRewardAdFailedToShow(int errorCode);
    void onRewardAdOpened();
    void onRewarded(const FString type, int amount);
};