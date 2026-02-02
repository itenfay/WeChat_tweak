//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MMWebJSLogMgr
{
    NSMutableArray *logList;
    NSMutableDictionary *invalidLogDic;
    _Bool cgiRunning;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)getMaxSendSize;
- (id)getReportPackage;
- (void)realtimeReport;
- (void)tryRealtimeReport;
- (id)getKVLogHead;
- (_Bool)addJSLog:(unsigned int)arg1 logExt:(id)arg2 type:(unsigned int)arg3;
- (void)handleRespInvalidLogList:(id)arg1;
- (_Bool)isInvaildWithLogId:(unsigned int)arg1;
- (void)filterInvalidLogItem;
- (id)pathForInvalidLogCache;
- (void)saveInvalidLogDic;
- (void)loadInvalidLogDic;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

