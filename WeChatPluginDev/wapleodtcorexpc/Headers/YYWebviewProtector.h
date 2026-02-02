//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface YYWebviewProtector
{
    long long _xpcFailWkCount;
}

+ (void)reportDidTakeSnapshotAfterUpdates;
+ (_Bool)disableUIViewSnapshotAfterScreenUpdates;
+ (_Bool)enableUIViewSnapshotHook;
+ (void)forceKillNetworkProcess;
+ (long long)wkXpcDisableDetectTimeoutInMs;
+ (long long)wkXpcDisableStateCount;
+ (long long)wxXpcDisableFixType;
+ (long long)wxXpcAliveDetectType;
+ (void)reportDidCheckMpAliveRecovery:(_Bool)arg1 url:(id)arg2;
+ (void)reportDidCheckMpAliveFailed:(id)arg1;
+ (void)reportDidCheckMpAliveOK:(id)arg1;
+ (void)reportDidUseKillNetworkProcess:(id)arg1;
+ (void)reportDidUseNonPersistentDataStore;
+ (void)reportDidJudgeDetectFailedEvent:(id)arg1;
+ (void)reportDetectXpcDisableEvent:(id)arg1;
+ (void)reportBecomeUnresponsiveEvent:(id)arg1;
@property(nonatomic) long long xpcFailWkCount; // @synthesize xpcFailWkCount=_xpcFailWkCount;
- (_Bool)shouldUseModifiedConfig;
- (void)increateXpcDisableCheckCount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

