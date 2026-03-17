//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSC2Helper : NSObject
{
}

+ (void)enableCEvaluateJSScriptIfNeeded;
+ (void)checkClasses;
+ (void)hook;
+ (void)startHook;
+ (void)enableLogEvaluateDetail;
+ (void)commonSetup;
+ (void)setupOptions;
+ (_Bool)fetchOSLogWithDate:(id)arg1 subsystems:(id)arg2 limit:(long long)arg3 includingXPC:(_Bool)arg4;
+ (_Bool)fetchOSLogWithDate:(id)arg1 subsystem:(id)arg2 limit:(long long)arg3 includingXPC:(_Bool)arg4;
+ (_Bool)enableWebKitLogStore;
+ (_Bool)enableOSLogTraceHook;
+ (_Bool)enableOSLogRedirect;
+ (void)enableOSLogTrace;
+ (_Bool)shouldOSLogStore;
+ (_Bool)shouldOSLogTrace;
+ (void)enableXPC;
+ (_Bool)enableFastGC;
+ (void)fixA15GCCrash;
+ (_Bool)canGlobalHook;
+ (_Bool)isOSAvailable;
+ (_Bool)jsc2Hooked;
+ (_Bool)abtestCanEnableByteCode;
+ (_Bool)abtestCanHook;
+ (_Bool)systemCanHook;
+ (_Bool)osVersionInBlackList:(id)arg1;
+ (_Bool)osVersionInWhiteList:(id)arg1;
+ (void)hookJSValue:(Class)arg1;

@end

