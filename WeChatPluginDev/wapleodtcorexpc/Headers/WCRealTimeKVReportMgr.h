//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCRealTimeKVReportMgr
{
    NSMutableDictionary *m_realTimeReport;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)realTimeReportWithWrap:(id)arg1;
- (id)reportLogId2:(unsigned int)arg1 value:(id)arg2 extKey:(id)arg3;
- (id)reportLogId:(unsigned int)arg1 value:(id)arg2 extKey:(id)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

