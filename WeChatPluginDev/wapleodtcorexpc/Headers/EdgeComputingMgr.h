//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EdgeComputingConfigBreaker, EdgeComputingConfigService, EdgeComputingDataSourceService, EdgeComputingDataStorage, EdgeComputingReporter, EdgeComputingRunRecord, EdgeComputingThresholdController, NSString;
@protocol IEdgeComputingDataCacheProtocol;

@interface EdgeComputingMgr
{
    EdgeComputingConfigService *configService;
    EdgeComputingDataSourceService *dataSourceService;
    id <IEdgeComputingDataCacheProtocol> normalDataCache;
    id <IEdgeComputingDataCacheProtocol> instantDataCache;
    EdgeComputingDataStorage *dataStorage;
    EdgeComputingReporter *reporter;
    EdgeComputingConfigBreaker *configBreaker;
    EdgeComputingRunRecord *runRecord;
    EdgeComputingThresholdController *thresholdController;
}

- (void).cxx_destruct;
- (id)edgeComputing:(id)arg1 andData:(id)arg2;
- (void)onSqlConfigSame:(id)arg1;
- (void)onSqlConfigOffline:(id)arg1;
- (void)onSqlConfigUpdate:(id)arg1;
- (void)onScriptConfigSame:(id)arg1;
- (void)onScriptConfigOffline:(id)arg1;
- (void)onScriptConfigUpdate:(id)arg1;
- (id)getThresholdController;
- (id)getConfigService;
- (void)executeSqlTask;
- (void)executeUnInstantTask;
- (void)executeInstantTask;
- (void)handleRegularTask:(id)arg1;
- (void)handlePeriodTask;
- (id)edgeComputing:(id)arg1 withConfig:(id)arg2 withData:(id)arg3 withReportTimeEC:(unsigned long long)arg4 withPeriodStartTime:(unsigned long long)arg5 withPeriodEndTime:(unsigned long long)arg6;
- (id)edgeComputing:(id)arg1 withConfig:(id)arg2 withDatas:(id)arg3 withPeriodStartTime:(unsigned long long)arg4 withPeriodEndTime:(unsigned long long)arg5;
- (void)onReceiveData:(id)arg1 withConfig:(id)arg2 withTime:(unsigned long long)arg3;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

