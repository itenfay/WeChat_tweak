//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MatrixAppRebootInfo
{
    _Bool _isAppEnterForeground;
    _Bool _isAppEnterBackground;
    _Bool _isAppWillSuspend;
    _Bool _isAppBackgroundFetch;
    _Bool _isAppSuspendKilled;
    _Bool _isAppCrashed;
    _Bool _isAppQuitByExit;
    _Bool _isAppQuitByUser;
    _Bool _isAppMainThreadBlocked;
    unsigned long long _appLaunchTime;
    NSString *_appUUID;
    NSString *_osVersion;
    NSString *_dumpFileName;
    NSString *_userScene;
}

+ (id)infoPath;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userScene; // @synthesize userScene=_userScene;
@property(retain, nonatomic) NSString *dumpFileName; // @synthesize dumpFileName=_dumpFileName;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *appUUID; // @synthesize appUUID=_appUUID;
@property(nonatomic) unsigned long long appLaunchTime; // @synthesize appLaunchTime=_appLaunchTime;
@property(nonatomic) _Bool isAppMainThreadBlocked; // @synthesize isAppMainThreadBlocked=_isAppMainThreadBlocked;
@property(nonatomic) _Bool isAppQuitByUser; // @synthesize isAppQuitByUser=_isAppQuitByUser;
@property(nonatomic) _Bool isAppQuitByExit; // @synthesize isAppQuitByExit=_isAppQuitByExit;
@property(nonatomic) _Bool isAppCrashed; // @synthesize isAppCrashed=_isAppCrashed;
@property(nonatomic) _Bool isAppSuspendKilled; // @synthesize isAppSuspendKilled=_isAppSuspendKilled;
@property(nonatomic) _Bool isAppBackgroundFetch; // @synthesize isAppBackgroundFetch=_isAppBackgroundFetch;
@property(nonatomic) _Bool isAppWillSuspend; // @synthesize isAppWillSuspend=_isAppWillSuspend;
@property(nonatomic) _Bool isAppEnterBackground; // @synthesize isAppEnterBackground=_isAppEnterBackground;
@property(nonatomic) _Bool isAppEnterForeground; // @synthesize isAppEnterForeground=_isAppEnterForeground;
- (void)saveInfo;

@end

