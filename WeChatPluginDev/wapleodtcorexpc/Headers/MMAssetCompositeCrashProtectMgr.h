//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMAssetCompositeCrashProtectMgr
{
    NSArray *_concernedRebootTypes;
}

+ (id)defaultMMKVMapID;
+ (id)defaultMMkv;
+ (void)saveRunningTaskInfo:(id)arg1;
+ (id)runningTaskInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *concernedRebootTypes; // @synthesize concernedRebootTypes=_concernedRebootTypes;
- (_Bool)isTaskSafe:(id)arg1;
- (void)endMonitorTask:(id)arg1;
- (void)startMonitorTask:(id)arg1;
- (void)checkRunningTask;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

