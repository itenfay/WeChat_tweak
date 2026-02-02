//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, WXGBackupDataInfo, WXGBackupDataMgr;
@protocol OS_dispatch_queue;

@interface WXGBackupBackupLogic
{
    WXGBackupDataMgr *m_dataMgr;
    WXGBackupDataInfo *m_backupDataInfo;
    _Bool m_bFirstTag;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastBackupSesionName;
    NSMutableDictionary *m_sessionNickDictionary;
    NSMutableArray *m_sendingArray;
    _Bool m_bStopService;
    NSObject<OS_dispatch_queue> *m_backupLogicQueue;
    _Bool m_bSendFinish;
}

- (void).cxx_destruct;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)onDataMgrFilterOneMedia:(unsigned long long)arg1;
- (void)onDataMgrRequiredFilterRequest:(id)arg1;
- (void)p_processBackupDataTag:(id)arg1;
- (void)p_sendBackupOutputToRemote:(id)arg1;
- (void)sendLotOfDataPush;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (void)sendBackupConfirm;
- (void)sendBackupDataTagWithDataInfo:(id)arg1;
- (void)sendFinishRequest;
- (void)sendRequestSession;
- (void)sendStartRequest;
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

