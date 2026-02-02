//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCAdvertiseLogDB;

@interface WCAdvertiseLogMgr
{
    _Bool adLogReporting;
    _Bool reportTaskRunning;
    WCAdvertiseLogDB *logDB;
    unsigned int reportBeginLocalId;
    unsigned int reportCurrLocalId;
    unsigned int reportEndLocalId;
    _Bool delayInsertDB;
    NSMutableArray *tempLogs;
}

- (void).cxx_destruct;
- (unsigned int)getMaxSendSize;
- (unsigned int)getRandomInternalTime;
- (unsigned int)getExceptionMaxTime;
- (void)saveNextReportTime:(unsigned int)arg1;
- (unsigned int)getNextReportTime;
- (void)onAuthOK;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)startReportADLog;
- (id)getReportADLogPackage;
- (void)tryReportADLog;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)insertDBLogsToDb;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (id)getKVLogHead;
- (void)setupLogDB;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)getPathForLogCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

