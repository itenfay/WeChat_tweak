//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WALoadPerformanceMgr
{
    unsigned long long _lanchStartTimeStamp;
    unsigned long long _navigateToStartTimeStamp;
    unsigned long long _redirectToStartTimeStamp;
    unsigned long long _switchTabTimeStamp;
    unsigned long long _lastWebviewID;
    long long _lastActionType;
    NSString *_currentAppID;
    unsigned int _currentVersion;
}

- (void).cxx_destruct;
- (void)reportLoadPerformanceInfo:(unsigned int)arg1 reportType:(unsigned long long)arg2 appType:(unsigned int)arg3;
- (unsigned int)logAppRouteActionType:(long long)arg1 webviewID:(unsigned long long)arg2 appType:(unsigned int)arg3;
- (void)logLaunchAppWithAppID:(id)arg1 version:(unsigned int)arg2;
- (void)logFromJSWithAppID:(id)arg1 message:(id)arg2;
- (void)logPerformancePreloadCostTime:(unsigned long long)arg1 withAppID:(id)arg2 isPreload:(_Bool)arg3;
- (void)logPerformanceWithType:(long long)arg1 costTime:(unsigned long long)arg2 withAppID:(id)arg3 fromPreloadTask:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

