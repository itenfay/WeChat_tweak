//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface EdgeComputingMonitor
{
}

+ (void)updateCurConfigId:(id)arg1;
+ (_Bool)isMonitorOpen;
+ (void)statRealReportProcess:(unsigned int)arg1;
+ (void)statRejectDataLimit:(id)arg1 withAmount:(unsigned long long)arg2;
+ (void)statStorageAmount:(id)arg1 withAmount:(unsigned long long)arg2;
+ (void)reportScriptErrorLog:(id)arg1;
+ (void)statScriptDownloadSuccess:(_Bool)arg1;
+ (void)statSqlConfigParseError:(_Bool)arg1;
+ (void)statScriptConfigParseError:(_Bool)arg1;
+ (void)statJsApiCostTime:(unsigned long long)arg1 withType:(unsigned long long)arg2;
+ (void)statInstantWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statSingleScriptWorkTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statRegularSqlWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statRegularScriptWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statRegularWorkTime:(unsigned long long)arg1 withDataSzie:(unsigned long long)arg2;
+ (void)statSQLQueryCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statStorageCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statCacheCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)statComputingCostTime:(id)arg1 withCostTime:(unsigned long long)arg2 withDataSzie:(unsigned long long)arg3;
+ (void)monitorProcess:(id)arg1 withProcess:(unsigned int)arg2 withReportTimeEC:(unsigned long long)arg3;

@end

