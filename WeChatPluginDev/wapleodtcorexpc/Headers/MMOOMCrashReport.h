//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMOOMCrashReport : NSObject
{
}

+ (void)reportFinderExitReason:(unsigned long long)arg1;
+ (void)clearFinderKV;
+ (void)logFinderOrLiveKV:(id)arg1;
+ (void)repotWCFinderScene:(id)arg1;
+ (void)reportLiveScene:(id)arg1;
+ (void)reportWeAppQualityIssueForAppid:(id)arg1 nickname:(id)arg2 inScene:(id)arg3;
+ (void)reportWeAppCrashScene;
+ (void)reportWeAppSuspendOOMScene;
+ (void)reportWeAppBoomScene;
+ (void)reportWeAppFoomScene;
+ (void)reportFoomScene;
+ (void)reportKVData:(unsigned long long)arg1;
+ (void)reportIDKeyData:(unsigned long long)arg1;
+ (void)userHasWatch:(_Bool)arg1;
+ (id)lastWeAppName;
+ (void)setWeAppName:(id)arg1;
+ (id)lastScene;
+ (void)setScene:(id)arg1;
+ (void)checkAndReport;
+ (id)rebootTypeString:(unsigned long long)arg1;

@end

