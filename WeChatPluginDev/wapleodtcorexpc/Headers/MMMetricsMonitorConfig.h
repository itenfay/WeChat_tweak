//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAudioMonitorConfig, MMCPUTimeProfilerConfig, MMGPUMonitorConfig, MMLocationMonitorConfig, MMNetworkMonitorConfig, NSString;

@interface MMMetricsMonitorConfig : NSObject
{
    _Bool _enabled;
    _Bool _autoKVReport;
    _Bool _autoStackReport;
    int _dumpInternal;
    int _kvReportInternal;
    int _dataRemainDays;
    MMCPUTimeProfilerConfig *_cpuTimeProfilerConfig;
    MMGPUMonitorConfig *_gpuMonitorConfig;
    MMLocationMonitorConfig *_locationMonitorConfig;
    MMNetworkMonitorConfig *_networkMonitorConfig;
    MMAudioMonitorConfig *_audioMonitorConfig;
}

+ (void)initialize;
+ (void)PBArrayAdd_autoStackReport;
+ (void)PBArrayAdd_autoKVReport;
+ (void)PBArrayAdd_dataRemainDays;
+ (void)PBArrayAdd_kvReportInternal;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_locationMonitorConfig;
+ (void)PBArrayAdd_audioMonitorConfig;
+ (void)PBArrayAdd_networkMonitorConfig;
+ (void)PBArrayAdd_gpuMonitorConfig;
+ (void)PBArrayAdd_cpuTimeProfilerConfig;
+ (void)PBArrayAdd_enabled;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAudioMonitorConfig *audioMonitorConfig; // @synthesize audioMonitorConfig=_audioMonitorConfig;
@property(retain, nonatomic) MMNetworkMonitorConfig *networkMonitorConfig; // @synthesize networkMonitorConfig=_networkMonitorConfig;
@property(retain, nonatomic) MMLocationMonitorConfig *locationMonitorConfig; // @synthesize locationMonitorConfig=_locationMonitorConfig;
@property(retain, nonatomic) MMGPUMonitorConfig *gpuMonitorConfig; // @synthesize gpuMonitorConfig=_gpuMonitorConfig;
@property(retain, nonatomic) MMCPUTimeProfilerConfig *cpuTimeProfilerConfig; // @synthesize cpuTimeProfilerConfig=_cpuTimeProfilerConfig;
@property(nonatomic) _Bool autoStackReport; // @synthesize autoStackReport=_autoStackReport;
@property(nonatomic) _Bool autoKVReport; // @synthesize autoKVReport=_autoKVReport;
@property(nonatomic) int dataRemainDays; // @synthesize dataRemainDays=_dataRemainDays;
@property(nonatomic) int kvReportInternal; // @synthesize kvReportInternal=_kvReportInternal;
@property(nonatomic) int dumpInternal; // @synthesize dumpInternal=_dumpInternal;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)updateKVConfigWithXLabConfig:(id)arg1;
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

