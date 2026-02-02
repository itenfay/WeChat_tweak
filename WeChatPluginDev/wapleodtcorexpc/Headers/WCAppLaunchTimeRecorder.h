//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAppLaunchTimeRecorder : NSObject
{
    struct unordered_map<WCAppLaunchTimeEvent, unsigned long long, std::hash<WCAppLaunchTimeEvent>, std::equal_to<WCAppLaunchTimeEvent>, std::allocator<std::pair<const WCAppLaunchTimeEvent, unsigned long long>>> _eventTimestamps;
    unsigned long long _processStartTime;
    _Bool _isBeingDebugged;
    _Bool _isNormalLaunch;
    _Bool _hasFinishedLaunching;
    NSString *_activePrewarm;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogOK;
- (void)onNewSyncEnd;
- (void)onNewSyncFinish;
- (void)onNewSyncStart;
- (void)onNewSyncBegin;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)eventName:(unsigned long long)arg1;
- (void)printTimeline;
- (void)reportAtStage:(unsigned long long)arg1;
- (void)setIsNormalLaunch:(_Bool)arg1;
- (unsigned long long)timestamp:(unsigned long long)arg1;
- (void)record:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

