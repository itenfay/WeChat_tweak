//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayControlData;

@interface WCPayControlLogic
{
    WCPayControlData *m_data;
    NSString *m_nsErrorDetailUrl;
}

- (void).cxx_destruct;
- (void)onRealnameActionClick:(id)arg1;
- (void)setPayChannel:(unsigned int)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onErrorDetailClick:(id)arg1;
- (void)OnWCBizBaseViewControllerDidBePoped:(id)arg1;
- (void)showPayOrderConfirmViewWithData:(id)arg1 delegate:(id)arg2;
- (void)OnAddCardToVerifyUserInfoError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnVerifyUserInfo;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardBtnDonw;
- (void)OnLimitInsufficientError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)onAlertResetPwd:(id)arg1;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (_Bool)onNeedToControlCurrentPublicError;
- (void)showErrorTipsViewWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 errorDetailUrl:(id)arg6 extInfo:(id)arg7;
- (_Bool)onError:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)handleRouteInfo:(id)arg1;
- (void)stopTopVCLoadingNonBlocked;
- (void)startTopVCLoadingNonBlocked;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (void)addTopViewController:(id)arg1;
- (void)onNotifyResultProcessFinished;
- (void)popViewControllerAndPush:(id)arg1 data:(id)arg2 animated:(_Bool)arg3;
- (void)pushViewController:(id)arg1 data:(id)arg2;
- (id)getPayData;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

