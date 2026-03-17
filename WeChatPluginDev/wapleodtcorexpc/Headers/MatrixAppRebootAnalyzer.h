//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MatrixAppRebootAnalyzer : NSObject
{
}

+ (_Bool)isOSReboot;
+ (unsigned long long)getSystemLaunchTimeStamp;
+ (_Bool)isOSChange;
+ (_Bool)isAppChange;
+ (unsigned long long)checkXPCLagFile:(unsigned long long)arg1 withDate:(id)arg2;
+ (_Bool)checkXPCReboot;
+ (id)lastDumpFileName;
+ (void)setDumpFileName:(id)arg1;
+ (void)isForegroundMainThreadBlock:(_Bool)arg1;
+ (id)userSceneOfLastRun;
+ (void)setUserScene:(id)arg1;
+ (void)notifyAppWillSuspend;
+ (void)notifyAppBackgroundFetch;
+ (void)notifyAppEnterBackground;
+ (void)notifyAppEnterForeground;
+ (void)notifyAppCrashed;
+ (void)notifyAppQuitByUser;
+ (void)notifyAppQuitByExit;
+ (unsigned long long)lastAppLaunchTime;
+ (unsigned long long)appLaunchTime;
+ (unsigned long long)lastRebootType;
+ (_Bool)isAfterLastLaunchUserRebootDevice;
+ (void)checkRebootType;
+ (void)installAppRebootAnalyzer;

@end

