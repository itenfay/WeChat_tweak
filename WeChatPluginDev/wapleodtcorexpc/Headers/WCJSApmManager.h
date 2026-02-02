//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApmABTestItem, NSDateFormatter, NSString;

@interface WCJSApmManager
{
    JSApmABTestItem *_abtest;
    NSDateFormatter *_dateFormatter;
}

+ (id)weappInfoForName:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) JSApmABTestItem *abtest; // @synthesize abtest=_abtest;
- (void)setupJSC2;
- (void)logKVWithID:(id)arg1 type:(unsigned long long)arg2 duration:(unsigned int)arg3;
- (void)reportWithThreads:(id)arg1 type:(unsigned long long)arg2 weappInfo:(id)arg3 name:(id)arg4;
- (void)reportWithStack:(id)arg1 type:(unsigned long long)arg2 weappInfo:(id)arg3 name:(id)arg4;
- (id)makeJsonArrayWithStack:(id)arg1;
- (void)onCustomIssue:(id)arg1 uploadComplete:(_Bool)arg2;
- (void)upload:(id)arg1;
- (id)getFileName:(id)arg1;
- (long long)getDumpType:(id)arg1;
- (id)generateFilePathWithType:(long long)arg1 ReportID:(id)arg2;
- (id)getDiagnosticDirectory;
- (void)setupRunLoopMonitor;
- (void)setupPower;
- (void)setupWatchdog;
- (void)setupBacktrace;
- (void)setup;
- (void)onExptItemListChange;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

