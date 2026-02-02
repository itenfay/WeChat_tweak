//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;
@protocol EmoticonStoreWeCoinPurchaseLogicDelegate;

@interface EmoticonStoreWeCoinPurchaseLogic
{
    id <EmoticonStoreWeCoinPurchaseLogicDelegate> _delegate;
    NSString *_billNo;
    NSData *_purchaseBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *purchaseBuff; // @synthesize purchaseBuff=_purchaseBuff;
@property(retain, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) __weak id <EmoticonStoreWeCoinPurchaseLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseTip;
- (void)consumeDidCancel:(id)arg1;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)startConsume;
- (void)createPreparePurchaseCgi;
- (void)realShowBuyTip;
- (_Bool)showBuyTipIfNeeded;
- (unsigned long long)startPurchase;
- (void)initWeCoinSDK;
- (id)initWithStoreItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

