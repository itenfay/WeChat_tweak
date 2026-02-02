//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSEnvironment : NSObject
{
}

+ (double)systemBootTime;
+ (id)bundleAppVersion;
+ (id)systemVersionString;
+ (float)systemVersion;
+ (id)model;
+ (id)vendorIdentifier;
+ (id)IMEI;
+ (id)IDFA;
+ (unsigned long long)chargingState;
+ (_Bool)WDAIsRunning;
+ (void)checkIfWDAIsRunningWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (int)buildNumber;
+ (id)bundleIdentifier;
+ (int)rootFlag;
+ (id)loadedImageNames;
+ (_Bool)isBeingDebugged;

@end

