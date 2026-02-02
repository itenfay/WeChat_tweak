//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayWalletLockReportCgi;
@protocol WCPayWalletLockVerifyLogicDelegate;

@interface WCPayWalletLockVerifyLogic
{
    unsigned int _patternLockLogicTag;
    unsigned long long _verifyScene;
    id <WCPayWalletLockVerifyLogicDelegate> _delegate;
    WCPayWalletLockReportCgi *_walletLockReportCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWalletLockReportCgi *walletLockReportCgi; // @synthesize walletLockReportCgi=_walletLockReportCgi;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) __weak id <WCPayWalletLockVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long verifyScene; // @synthesize verifyScene=_verifyScene;
- (void)realtimeReportWalletLock:(unsigned long long)arg1 verifyType:(unsigned long long)arg2 isVerifySuccess:(_Bool)arg3 failReason:(unsigned long long)arg4;
- (void)reportTouchLockToPwdVerifyCancel;
- (void)reportTouchLockToPwdVerifyResult:(_Bool)arg1;
- (void)reportTouchLockVerifyResult:(_Bool)arg1;
- (void)touchLockVerifyCancel:(id)arg1;
- (void)onPatternLockVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyResult:(_Bool)arg1;
- (void)onPatternLockToPwdVerifyCancel;
- (_Bool)needBlockUntilVerified:(id)arg1;
- (void)touchLockVerifySuccess:(id)arg1;
- (void)onPatternLockErrorOutOfLimit;
- (_Bool)needBlockLeftBarbuttonItemInEnteranceScene;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (_Bool)isInValidDuration;
- (void)reportUnlockWalletLockSuccess:(_Bool)arg1;
- (void)reportTryToUnlockWalletLock:(_Bool)arg1;
- (void)startKindaPatternLockVerify;
- (void)startKindaTouchLockVerify;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

