//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, WXGBackupDataMgr;
@protocol OS_dispatch_queue;

@interface WXGBackupMigratePCLogic
{
    _Bool _bStopService;
    _Bool _bFirstTag;
    _Bool _bSendFinish;
    WXGBackupDataMgr *_dataMgr;
    NSMutableArray *_sendingArray;
    NSMutableDictionary *_sessionNickDictionary;
    NSMutableDictionary *_filterSizeDic;
    unsigned long long _backFilterSizes;
    NSObject<OS_dispatch_queue> *_migrateDataQueue;
    unsigned long long _curMigrateSessionCount;
    unsigned long long _totalMigrateSessionCount;
    NSString *_lastMigrateSesionName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSendFinish; // @synthesize bSendFinish=_bSendFinish;
@property(copy, nonatomic) NSString *lastMigrateSesionName; // @synthesize lastMigrateSesionName=_lastMigrateSesionName;
@property(nonatomic) _Bool bFirstTag; // @synthesize bFirstTag=_bFirstTag;
@property(nonatomic) unsigned long long totalMigrateSessionCount; // @synthesize totalMigrateSessionCount=_totalMigrateSessionCount;
@property(nonatomic) unsigned long long curMigrateSessionCount; // @synthesize curMigrateSessionCount=_curMigrateSessionCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *migrateDataQueue; // @synthesize migrateDataQueue=_migrateDataQueue;
@property(nonatomic) unsigned long long backFilterSizes; // @synthesize backFilterSizes=_backFilterSizes;
@property(retain, nonatomic) NSMutableDictionary *filterSizeDic; // @synthesize filterSizeDic=_filterSizeDic;
@property(retain, nonatomic) NSMutableDictionary *sessionNickDictionary; // @synthesize sessionNickDictionary=_sessionNickDictionary;
@property(retain, nonatomic) NSMutableArray *sendingArray; // @synthesize sendingArray=_sendingArray;
@property(nonatomic) _Bool bStopService; // @synthesize bStopService=_bStopService;
@property(retain, nonatomic) WXGBackupDataMgr *dataMgr; // @synthesize dataMgr=_dataMgr;
- (void)reportDisconnect:(unsigned long long)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processStartResponseData:(id)arg1;
- (void)onDataMgrFilterOneMedia:(unsigned long long)arg1 withMsgDataId:(id)arg2;
- (void)onDataMgrRequiredFilterRequest:(id)arg1;
- (id)p_processBackupDataTag:(id)arg1;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (void)sendLotOfDataPush:(unsigned int)arg1;
- (void)sendRequestSession;
- (void)sendFinishRequest;
- (void)sendMigratePCConfirm;
- (void)sendStartRequest;
- (_Bool)sendData:(id)arg1;
- (void)restartLogic;
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

