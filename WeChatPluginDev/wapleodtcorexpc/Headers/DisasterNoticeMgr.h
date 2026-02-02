//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, SvrErrorTipViewController;

@interface DisasterNoticeMgr
{
    unsigned int m_gettingDisasterInfoNoticeId;
    NSMutableDictionary *m_dicSvrErrorInfo;
    unsigned int m_manualAuthNoticeId;
    _Bool m_needContinueHandleAfterManualAuth;
    SvrErrorTipViewController *_fullScreenViewController;
    unsigned long long m_lastFullScreenShowTime;
}

+ (void)onManualAuthFinished;
- (void).cxx_destruct;
- (void)OnGetSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3;
- (void)OnGetLoginDisaster:(id)arg1 Tips:(id)arg2 Url:(id)arg3 isManualAuth:(_Bool)arg4;
- (void)showFullScreenSvrErrorTip:(id)arg1 urlStr:(id)arg2 timeOut:(unsigned int)arg3;
- (void)handleDisasterInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getDisasterInfo:(unsigned int)arg1;
- (void)MainThreadNotifyIDCErrorMsg:(unsigned int)arg1;
- (void)onNewIDCErrorWithNoticeId:(unsigned int)arg1 uiCgi:(unsigned int)arg2;
- (void)MainThreadNotifyOldIDCErrorMsg:(id)arg1;
- (void)onNewDnsError:(id)arg1;
- (void)continueAfterManualAuthFinished;
- (void)SaveData;
- (void)removeExpireInfos;
- (void)makeSureInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

