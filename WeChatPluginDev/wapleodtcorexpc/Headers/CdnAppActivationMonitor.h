//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CdnTicker;
@protocol OS_dispatch_source;

@interface CdnAppActivationMonitor : NSObject
{
    _Bool _isInForeground;
    _Bool _isActive;
    NSObject<OS_dispatch_source> *_activationCheckTimer;
    CdnTicker *_backgroundTicker;
}

+ (void)logAppState;
+ (_Bool)checkAppActiveState;
+ (_Bool)isAnySceneInForeground;
+ (_Bool)isAnySceneActive;
+ (_Bool)isAppInForeground;
+ (_Bool)isAppActive;
+ (void)start;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) CdnTicker *backgroundTicker; // @synthesize backgroundTicker=_backgroundTicker;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *activationCheckTimer; // @synthesize activationCheckTimer=_activationCheckTimer;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property _Bool isInForeground; // @synthesize isInForeground=_isInForeground;
- (void)onSceneResignActive:(id)arg1;
- (void)onSceneEnterBackground:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (void)onAppEnterForeground:(id)arg1;
- (void)onAppEnterBackground:(id)arg1;
- (void)stopActivationCheckTimer;
- (void)startActivationCheckTimer;
- (id)init;

@end

