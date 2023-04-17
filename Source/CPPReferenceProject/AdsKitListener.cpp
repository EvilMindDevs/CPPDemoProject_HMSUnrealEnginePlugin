#include "AdsKitListener.h"
#include "CoreMinimal.h"
#include "Ads.h"

using namespace huawei;

AdsKitListener::AdsKitListener()
{

}

void AdsKitListener::onBannerAdClosed()
{

}

void AdsKitListener::onBannerAdFailed(int errorCode)
{
	FString message = FString::Printf(TEXT("onBannerAdFailed errorCode: %d "), &errorCode);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AdsKitListener::onBannerAdLeftApp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onBannerAdLeftApp"));
}

void AdsKitListener::onBannerAdOpened()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onBannerAdOpened"));
}

void AdsKitListener::onBannerAdLoaded()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onBannerAdLoaded"));
}

void AdsKitListener::onBannerAdClicked()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onBannerAdClicked"));
}

void AdsKitListener::onBannerAdImpression()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onBannerAdImpression"));
}

void AdsKitListener::onInterstitialAdClosed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdClosed"));
}

void AdsKitListener::onInterstitialAdFailed(int errorCode)
{
	FString message = FString::Printf(TEXT("onInterstitialAdFailed errorCode: %d "), &errorCode);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AdsKitListener::onInterstitialAdLeftApp()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdLeftApp"));
}

void AdsKitListener::onInterstitialAdOpened()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdOpened"));
}

void AdsKitListener::onInterstitialAdLoaded()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdLoaded"));
}

void AdsKitListener::onInterstitialAdClicked()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdClicked"));
}

void AdsKitListener::onInterstitialAdImpression()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onInterstitialAdImpression"));
}

void AdsKitListener::onRewardAdFailedToLoad(int errorCode)
{
	FString message = FString::Printf(TEXT("onRewardAdFailedToLoad errorCode: %d "), &errorCode);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AdsKitListener::onRewardedLoaded()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onRewardedLoaded"));
}

void AdsKitListener::onRewardAdClosed()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onRewardAdClosed"));

	Ads::loadRewardAd("testx9dtjwj8hp");

}

void AdsKitListener::onRewardAdFailedToShow(int errorCode)
{
	FString message = FString::Printf(TEXT("onRewardAdFailedToShow errorCode: %d "), &errorCode);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}

void AdsKitListener::onRewardAdOpened()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onRewardAdOpened"));
}

void AdsKitListener::onRewarded(const FString type, int amount)
{
	FString message = FString::Printf(TEXT("onRewarded type: %s, amount: %d"), &type, &amount);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, message);
}