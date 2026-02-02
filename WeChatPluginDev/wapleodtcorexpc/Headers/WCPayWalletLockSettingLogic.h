//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayCloseWalletLockCgi, WCPayWalletLockSettingViewController;
@protocol WCPayWalletLockSettingLogicDelegate;

@interface WCPayWalletLockSettingLogic
{
    unsigned int _entryScene;
    unsigned int _patternLockLogicTag;
    id <WCPayWalletLockSettingLogicDelegate> _delegate;
    WCPayCloseWalletLockCgi *_closeWalletLockCgi;
    WCPayWalletLockSettingViewController *_settingVC;
    long long _m_patterLockScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_patterLockScene; // @synthesize m_patterLockScene=_m_patterLockScene;
@property(retain, nonatomic) WCPayWalletLockSettingViewController *settingVC; // @synthesize settingVC=_settingVC;
@property(retain, nonatomic) WCPayCloseWalletLockCgi *closeWalletLockCgi; // @synthesize closeWalletLockCgi=_closeWalletLockCgi;
@property(nonatomic) unsigned int patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
@property(nonatomic) unsigned int entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) __weak id <WCPayWalletLockSettingLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)closeWalletLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)closeWalletLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)touchLockSettingLogicSetupSuccess:(id)arg1;
- (_Bool)needCancelPopAnimation;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockLogicOperateCancel;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)walletLockVCClickModifyPatternLock:(id)arg1;
- (void)walletLockVCClickClose:(id)arg1;
- (void)walletLockVCClickPatternLock:(id)arg1;
- (void)walletLockVCClickTouchLock:(id)arg1;
- (unsigned int)walletLockVCEntryScene;
- (void)showPasswordVC;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)startKindaWalletLockSetting;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2 entryScene:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

