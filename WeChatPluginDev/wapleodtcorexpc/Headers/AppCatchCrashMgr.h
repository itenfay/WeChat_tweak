//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface AppCatchCrashMgr
{
    _Bool _hasCrashAppId;
    unsigned int _callMonitorCount;
}

- (void)loadCallMonitorCount;
- (void)saveCallMonitorCount;
- (void)setForceCallCanOpenUrl;
- (_Bool)canCallCanOpenUrlMethod;
- (void)endMonitor;
- (void)beginMonitor;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

