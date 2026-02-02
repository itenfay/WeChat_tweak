//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WAAppTaskSilentOpenReport : NSObject
{
}

+ (void)reportLaunchWhenSilentRelaunchNotFinished;
+ (void)reportHotLaunchSilentOpenRelaunchInBackground;
+ (void)reportLaunchSilentOpenNotTriggerRelaunch;
+ (void)reportLaunchSilentOpenTriggerReLaunch;
+ (void)reportLaunchWhenSilentOpenNotFinished;
+ (void)reportLaunchSilentOpen;
+ (void)reportHotLaunchSilentOpen;
+ (void)reportColdLaunchSilentOpen;
+ (void)reportTriggerSilentOpen;

@end

