//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMITransmitKvData, MMVoidITransmitKvDataCallback, MMVoidITransmitKvDataNoticeItemCallback, NSString, WCPayAddPayCardLogic, WCPayJSApiVerifyPayPasswordControlLogic, WCPayOfflinePayMainLogic;

@interface KindaWCPayService : NSObject
{
    WCPayAddPayCardLogic *mAddPayCardLogic;
    WCPayOfflinePayMainLogic *mOfflinePayMainLogic;
    WCPayJSApiVerifyPayPasswordControlLogic *mVerifyPayPasswordLogic;
    MMVoidITransmitKvDataCallback *mQuitCallback;
    MMITransmitKvData *mData;
    MMVoidITransmitKvDataNoticeItemCallback *_bannerDataCallback;
    MMVoidITransmitKvDataCallback *_getCardListCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMVoidITransmitKvDataCallback *getCardListCallback; // @synthesize getCardListCallback=_getCardListCallback;
@property(retain, nonatomic) MMVoidITransmitKvDataNoticeItemCallback *bannerDataCallback; // @synthesize bannerDataCallback=_bannerDataCallback;
- (void)onAddPayCardResult:(_Bool)arg1;
- (id)getParams;
- (id)getCurrentURL;
- (id)getParam;
- (void)onVerifyResult:(id)arg1;
- (_Bool)walletLockVerifyLogicNeedBlock:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)callPaySecurityRefresh;
- (void)patternLockDidSetup:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (void)onOfflinePayLogicStop:(_Bool)arg1;
- (void)setBalanceMasked:(_Bool)arg1;
- (_Bool)isBalanceMasked;
- (void)clearFreezeBalanceMsg;
- (id)getFreezeBalanceMsg;
- (_Bool)isSetWalletLock;
- (_Bool)isNeedWalletLock;
- (void)getBannerInfoImpl:(int)arg1 callback:(id)arg2;
- (void)startUseCaseImpl:(id)arg1 data:(id)arg2 quitCallback:(id)arg3;
- (void)initAddPayCardLogic:(id)arg1;
- (void)initJSApiVerifyPayPasswordControlLogic:(id)arg1;
- (void)initOfflinePayMainLogic:(id)arg1;
- (id)genPayControlData;
- (id)convertUserInfoData:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)getCardListAndUsrVerifiedInfoImpl:(id)arg1;
- (id)getFiltedTruthName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

