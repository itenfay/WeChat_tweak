//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class DataReportNewUBACacheWCDB, NSNumber, NSString;

@interface DataReportNewUBAReporter
{
    DataReportNewUBACacheWCDB *m_cacheDB;
    NSNumber *m_openNewUBASwitch;
    unsigned long long m_reportStrMaxLimit;
    NSNumber *m_isReportAllUBA;
}

- (void).cxx_destruct;
- (void)realReportFlutterAllOutEvent;
- (void)reportFlutterAllOutEvent:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3;
- (void)reportLogId:(unsigned long long)arg1 time:(unsigned long long)arg2;
- (void)reportAllUBA:(id)arg1 time:(unsigned long long)arg2 data:(id)arg3;
- (void)realReportKeyUBA:(id)arg1;
- (void)reportKeyUBA:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 data:(id)arg4;
- (void)reportStandardEvent:(id)arg1 time:(unsigned long long)arg2 target:(id)arg3 params:(id)arg4;
- (_Bool)isReportAllUBA;
- (_Bool)isOpenNewUBA;
- (void)onServiceInit;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

