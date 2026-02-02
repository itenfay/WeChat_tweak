//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayAddPayCardLogic;

@interface WCPayCreateOfflinePayLogic
{
    WCPayAddPayCardLogic *m_cardLogic;
    _Bool _bHasHandleBindQueryResp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHasHandleBindQueryResp; // @synthesize bHasHandleBindQueryResp=_bHasHandleBindQueryResp;
- (void)OnAddCardBtnDonw:(id)arg1;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnCreateOfflinePayResponse:(id)arg1 Error:(id)arg2;
- (void)showAddPayCardAlert;
- (_Bool)isRegButNotRealnameUser;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnPreFinishedWCPayLogic:(id)arg1 waitUntilDone:(_Bool *)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)enterOfflinePayInternal;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(_Bool)arg2 Error:(id)arg3;
- (void)handleEnterOfflinePayAfterUpdateCard:(id)arg1 error:(id)arg2;
- (void)justEndCreateOfflinePay:(_Bool)arg1;
- (void)EndCreateOfflinePayWithResponse:(id)arg1;
- (void)onNeedVerifyCancel;
- (void)onNeedVerifyConfirm;
- (void)startGetUserData;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

