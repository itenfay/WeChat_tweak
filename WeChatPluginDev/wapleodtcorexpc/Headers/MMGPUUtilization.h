//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMGPUUtilization : NSObject
{
    float _deviceUtilization;
    float _rendererUtilization;
    float _tilerUtilization;
}

+ (id)__getPerformanceStatisticsFromIteractor:(unsigned int)arg1 fastPath:(_Bool)arg2 outGpuEntry:(unsigned int *)arg3;
+ (id)__getPerformanceStatisticsForIntel;
+ (id)__getPerformanceStatisticsForSGX:(_Bool)arg1;
+ (id)__getPerformanceStatistics;
+ (id)currentGPUUtilization;
+ (_Bool)isSupported;
@property(nonatomic) float tilerUtilization; // @synthesize tilerUtilization=_tilerUtilization;
@property(nonatomic) float rendererUtilization; // @synthesize rendererUtilization=_rendererUtilization;
@property(nonatomic) float deviceUtilization; // @synthesize deviceUtilization=_deviceUtilization;
- (void)divideBy:(unsigned long long)arg1;
- (void)add:(id)arg1;

@end

