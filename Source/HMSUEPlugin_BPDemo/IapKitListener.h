// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Iap.h"

using namespace huawei;

class HMSUEPLUGIN_BPDEMO_API IapKitListener : public huawei::IapListener {
public:
    IapKitListener();
    ~IapKitListener();

    //virtual ~IapKitListener();

    void onCheckEnvironmentSuccess();
    void onException(int action, const FString message);
    void onObtainProductList(const TArray<ProductInfo> products, int type);
    void onPurchaseSuccess(const FString productId, int type);
    void onObtainPurchases(const TArray<InAppPurchaseData> purchasedProductDatas, const TArray<InAppPurchaseData> nonPurchasedProductDatas, int type);
    void onObtainPurchasedRecords(const TArray<InAppPurchaseData> purchasedProductDatas, int type);
};