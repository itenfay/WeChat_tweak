//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCPUTimeProfilerConfig : NSObject
{
    _Bool _enabled;
    unsigned int _checkTime;
    unsigned int _checkCount;
    unsigned int _reportLimit;
    double _dumpInternal;
    double _minCpuUsageToDump;
    double _criticalUsage;
    double _minCpuUsageToReport;
}

+ (void)initialize;
+ (void)PBArrayAdd_minCpuUsageToReport;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_minCpuUsageToDump;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_enabled;
@property(nonatomic) double minCpuUsageToReport; // @synthesize minCpuUsageToReport=_minCpuUsageToReport;
@property(nonatomic) double criticalUsage; // @synthesize criticalUsage=_criticalUsage;
@property(nonatomic) unsigned int reportLimit; // @synthesize reportLimit=_reportLimit;
@property(nonatomic) unsigned int checkCount; // @synthesize checkCount=_checkCount;
@property(nonatomic) unsigned int checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) double minCpuUsageToDump; // @synthesize minCpuUsageToDump=_minCpuUsageToDump;
@property(nonatomic) double dumpInternal; // @synthesize dumpInternal=_dumpInternal;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)generateEventConfig;
- (void)updateWithXLabConfig:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

