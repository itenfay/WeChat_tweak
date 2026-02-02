//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMMetricsUtil : NSObject
{
}

+ (_Bool)isMatchByRatio:(double)arg1;
+ (unsigned long long)averageFootprintMemoryByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (id)averageGPUUtilizationByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (float)averageDeviceCPUUsageByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (float)averageAppCPUUsageByInfos:(id)arg1 count:(unsigned long long)arg2;
+ (id)dumpThreadInfos:(double)arg1 minCpuUsageToDump:(double)arg2 outAppCPUUsage:(float *)arg3;
+ (id)currentThreadStack:(_Bool)arg1 skipFrames:(unsigned int)arg2;
+ (double)currentTimeSince1970;

@end

