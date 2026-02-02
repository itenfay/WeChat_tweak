//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCRedEnvelopesControlData;

@interface WCRedEnvelopesControlLogic
{
    WCRedEnvelopesControlData *m_data;
}

- (void).cxx_destruct;
- (void)OnWCRedEnvBizBaseRequestCommonSystemError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvBizBaseRequestCommonError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvEnterpriseBaseRequestCommonError:(id)arg1 HBCmdType:(long long)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonSystemError:(id)arg1 HongbaoCmdType:(long long)arg2;
- (void)OnWCRedEnvelopesBaseRequestCommonError:(id)arg1 HongbaoCmdType:(long long)arg2;
- (_Bool)onNeedToControlCurrentPublicError;
- (_Bool)onError:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (_Bool)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (void)stopLoading;
- (void)startWCPayLoading;
- (void)startLoading;
- (void)stopLogic;
- (void)pause;
- (void)resume;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

