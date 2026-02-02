//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SWMidasUser;

@interface SWMidasAPI : NSObject
{
    MISSING_TYPE *currentProcess;
    MISSING_TYPE *currentEnvrionment;
    MISSING_TYPE *currentLocale;
    MISSING_TYPE *currentUser;
    MISSING_TYPE *$__lazy_storage_$_restoreHelper;
}

+ (void)setCustomLoadingWithLoading:(id)arg1;
+ (void)clearMemory;
+ (id)sdkVersion;
+ (_Bool)canMakePayments;
+ (id)queryAppleProductInfosInMemoryWithProductIDs:(id)arg1;
+ (void)queryAppleProductInfosInObjCWithAppleProductIDs:(id)arg1 useMemoryCached:(_Bool)arg2 usingStoreKit2:(_Bool)arg3 shouldQueryIntroOfferQualification:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)bindingPaymentMethodWithPinningID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showRefundPageWithTransactionID:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showManageSubscriptionPageWithShouldDowngrade:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showDowngradeManageSubscriptionPageWithCompletion:(CDUnknownBlockType)arg1;
+ (void)setAvailableWindowScene:(id)arg1;
+ (id)availableWindowScene;
+ (void)getSubscriptionProductStatusWithSubscriptionProductIDs:(id)arg1 usingStoreKit2:(_Bool)arg2 shouldUpdateReceipt:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)setRuntimeDelegateWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithUser:(id)arg1 process:(long long)arg2 environment:(long long)arg3 locale:(long long)arg4 reprovideDelegate:(id)arg5;
@property(nonatomic, retain) SWMidasUser *currentUser; // @synthesize currentUser;
@property(nonatomic) long long currentLocale; // @synthesize currentLocale;
@property(nonatomic) long long currentEnvrionment; // @synthesize currentEnvrionment;
@property(nonatomic) long long currentProcess; // @synthesize currentProcess;
- (void)purchaseInObjCWithContent:(id)arg1 forUser:(id)arg2 with:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)reprovideManually;
- (void)restoreWithCompletion:(CDUnknownBlockType)arg1;

@end

