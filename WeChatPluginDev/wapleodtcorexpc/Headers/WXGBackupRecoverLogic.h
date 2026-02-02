//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXGBackupRecoverHelper;

@interface WXGBackupRecoverLogic
{
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastSessionName;
    _Bool m_bFirstTag;
    _Bool m_bStopService;
    _Bool m_bProcessFinish;
    WXGBackupRecoverHelper *_recoverHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXGBackupRecoverHelper *recoverHelper; // @synthesize recoverHelper=_recoverHelper;
- (_Bool)onPhoneDiskNotEnouge;
- (void)onLastImportFinished;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)onFilterRequestEnd:(id)arg1 filterSize:(unsigned long long)arg2;
- (void)onRequestSessionProcessEndWithResponse:(id)arg1;
- (void)onDataTagProcessEnd:(id)arg1;
- (void)onData:(id)arg1 writeToFileFinish:(_Bool)arg2;
- (void)processFinishRequestData:(id)arg1;
- (void)processFilterRequestData:(id)arg1;
- (void)processBackupDataTagData:(id)arg1;
- (void)processDataPushData:(id)arg1;
- (void)processRequestSessionData:(id)arg1;
- (void)processStartRequestData:(id)arg1;
- (void)sendFilterResponse:(id)arg1;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)arg1;
- (void)sendDataTagResponseForDataTag:(id)arg1;
- (void)sendDataPushResponse:(id)arg1;
- (void)sendRecoverConfirm;
- (void)sendStartResponseWithStatus:(int)arg1;
- (_Bool)sendData:(id)arg1;
- (void)confirmLogic;
- (void)stopService;
- (void)startService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

