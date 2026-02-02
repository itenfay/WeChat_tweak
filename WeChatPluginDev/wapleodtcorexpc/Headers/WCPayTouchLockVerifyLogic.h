//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, WCPayCloseWalletLockCgi, WCPayTouchLockAuthenCgi;
@protocol WCPayTouchLockVerifyLogicDelegate;

@interface WCPayTouchLockVerifyLogic
{
    unsigned int _patternLockLogicTag;
    id <WCPayTouchLockVerifyLogicDelegate> _delegate;
    WCPayCloseWalletLockCgi *_closeWalletLockCgi;
    NSData *_domainData;
    WCPayTouchLockAuthenCgi *_authenCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTouchLockAuthenCgi *authenCgi; // @synthesize authenCgi=_authenCgi;
@property(retain, nonatomic) NSData *domainData; // @synthesize domainData=_domainData;
@property(retain, nonatomic) WCPayCloseWalletLockCgi *closeWalletLockCgi; // @synthesize closeWalletLockCgi=_closeWalletLockCgi;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) __weak id <WCPayTouchLockVerifyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchLockAuthenCgiVerifyPwdFail:(id)arg1;
- (void)touchLockAuthenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)touchLockAuthenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)closeWalletLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)closeWalletLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)walletLockSettingLogicWillStop:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)walletLockDidClose:(id)arg1;
- (_Bool)needCancelPopAnimation;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (void)verifyViewControllerBack:(id)arg1;
- (_Bool)needBlockBack:(id)arg1;
- (void)shouldVerifyPassword:(id)arg1;
- (void)shouldVerifyTouchLock:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1 vc:(id)arg2;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)checkTouchID;
- (void)showPasswordVC:(long long)arg1;
- (void)showTouchIDNotEnrolled;
- (void)showNotSupportTouchID;
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

