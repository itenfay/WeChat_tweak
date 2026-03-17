//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BackgroundTask : NSObject
{
}

+ (void)notifySuspendOnMainThread;
+ (void)p_reportCostTime:(double)arg1 lowPowerMode:(_Bool)arg2;
+ (void)run;
+ (void)backgroundTaskRelease;
+ (void)backgroundTaskHold;

@end

