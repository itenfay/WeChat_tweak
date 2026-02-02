//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKTimeSpentData : NSObject
{
    _Bool _isCurrentlyLoaded;
    _Bool _shouldLogActivateEvent;
    _Bool _shouldLogDeactivateEvent;
    long long _secondsSpentInCurrentSession;
    long long _timeSinceLastSuspend;
    int _numInterruptionsInCurrentSession;
    long long _lastRestoreTime;
    long long _lastSuspendTime;
    NSString *_sessionID;
}

+ (void)registerAutoResetSourceApplication;
+ (void)resetSourceApplication;
+ (id)getSourceApplication;
+ (void)setSourceApplication:(id)arg1 isFromAppLink:(_Bool)arg2;
+ (void)setSourceApplication:(id)arg1 openURL:(id)arg2;
+ (id)singleton;
+ (void)restore:(_Bool)arg1;
+ (void)suspend;
- (void).cxx_destruct;
- (id)appEventsParametersForDeactivate;
- (id)appEventsParametersForActivate;
- (void)instanceRestore:(_Bool)arg1;
- (void)instanceSuspend;

@end

