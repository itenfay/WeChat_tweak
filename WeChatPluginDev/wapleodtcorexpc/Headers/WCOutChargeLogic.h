//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCOutChargeLogicDelegate;

@interface WCOutChargeLogic : NSObject
{
    _Bool _isAutoVerify;
    unsigned int _autoVerifyMode;
    unsigned int _autoVerifyRet;
    unsigned int _autoVerifyErrcode;
    id <WCOutChargeLogicDelegate> _delegate;
    NSString *_autoVerifyBeginTs;
    NSString *_autoVerifyEndTs;
}

+ (id)logicWithAutoVerify;
- (void).cxx_destruct;
@property(nonatomic) unsigned int autoVerifyErrcode; // @synthesize autoVerifyErrcode=_autoVerifyErrcode;
@property(nonatomic) unsigned int autoVerifyRet; // @synthesize autoVerifyRet=_autoVerifyRet;
@property(nonatomic) unsigned int autoVerifyMode; // @synthesize autoVerifyMode=_autoVerifyMode;
@property(retain, nonatomic) NSString *autoVerifyEndTs; // @synthesize autoVerifyEndTs=_autoVerifyEndTs;
@property(retain, nonatomic) NSString *autoVerifyBeginTs; // @synthesize autoVerifyBeginTs=_autoVerifyBeginTs;
@property(nonatomic) _Bool isAutoVerify; // @synthesize isAutoVerify=_isAutoVerify;
@property(nonatomic) __weak id <WCOutChargeLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (long long)buyItem:(id)arg1 extInfo:(id)arg2;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)updateListFromAppleForSKProduct:(id)arg1;
- (void)didReceiveResponse:(_Bool)arg1 Respone:(id)arg2;
- (void)getproductList:(id)arg1 reqCurrency:(id)arg2 responeDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

