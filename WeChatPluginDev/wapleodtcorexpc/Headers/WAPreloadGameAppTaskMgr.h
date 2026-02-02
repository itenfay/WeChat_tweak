//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAPreloadAppTask;

@interface WAPreloadGameAppTaskMgr
{
    WAPreloadAppTask *_preloadTask;
    long long _wkFeatureVersion;
}

+ (_Bool)haveGameAppRunningInBackground;
+ (_Bool)shouldAllowPreloadByMoment:(unsigned int)arg1 jitMode:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long wkFeatureVersion; // @synthesize wkFeatureVersion=_wkFeatureVersion;
@property(retain, nonatomic) WAPreloadAppTask *preloadTask; // @synthesize preloadTask=_preloadTask;
- (void)resetDelayReleasePreloadTask;
- (void)genNewPreloadTaskOnLaunch:(id)arg1;
- (void)genNewPreloadTaskIfNoTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)arg1 jitMode:(_Bool)arg2;
- (void)releasePreloadTask;
- (void)detachCurrentPreloadTask;
- (id)getPreloadTask;
- (void)createPreloadAppTask:(unsigned int)arg1 jitMode:(_Bool)arg2;
- (_Bool)shouldAllowPreloadJITRuntime;
- (void)resetWKFeatureVersion;
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

