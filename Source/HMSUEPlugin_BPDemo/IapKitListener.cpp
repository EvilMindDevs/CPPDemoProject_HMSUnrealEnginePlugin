// Fill out your copyright notice in the Description page of Project Settings.

#include "IapKitListener.h"
#include "Iap.h"
#include "CoreMinimal.h"

using namespace huawei;

IapKitListener::IapKitListener() {

}

IapKitListener::~IapKitListener() {

}

void IapKitListener::onCheckEnvironmentSuccess() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onCheckEnvironmentSuccess"));

	TArray<FString> consumables = { "coins100","coins101" };
	TArray<FString> nonconsumables = { "removeAds","removeAds2" };
	TArray<FString> subscriptions = { "premium","premium2" };

	//Iap::queryProducts(consumables, IN_APP_CONSUMABLE);
	//Iap::queryProducts(nonconsumables, IN_APP_NONCONSUMABLE);
	//Iap::queryProducts(subscriptions, IN_APP_SUBSCRIPTION);

	//Iap::queryPurchases(IN_APP_NONCONSUMABLE);
	//Iap::queryPurchases(IN_APP_SUBSCRIPTION);

	//Iap::getPurchasedRecords(IN_APP_CONSUMABLE);
}

void IapKitListener::onException(int action, const FString message) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onException"));
}

void IapKitListener::onObtainProductList(const TArray<ProductInfo> products, int type) {

	for (const auto& product : products) {

		FString productInfo = FString::Printf(TEXT("Available Product: Product ID: %s, productName: %s"), *product.productId, *product.productName);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, productInfo);
	}
}

void IapKitListener::onPurchaseSuccess(const FString productId, int type) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onPurchaseSuccess " + productId));
}

void IapKitListener::onObtainPurchases(const TArray<InAppPurchaseData> purchasedProductDatas, const TArray<InAppPurchaseData> nonPurchasedProductDatas, int type) {

	for (const auto& product : purchasedProductDatas) {

		FString productInfo = FString::Printf(TEXT("Owned Product: Product ID: %s, productName: %s"), *product.productId, *product.productName);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, productInfo);
	}
}

void IapKitListener::onObtainPurchasedRecords(const TArray<InAppPurchaseData> purchasedProductDatas, int type) {

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("onObtainPurchasedRecords"));

	for (const auto& product : purchasedProductDatas) {

		FString productInfo = FString::Printf(TEXT("Consumable Purchase Record: Product ID: %s, productName: %s"), *product.productId, *product.productName);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, productInfo);
	}

}






