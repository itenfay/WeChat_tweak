//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSMutableArray, WCDisplayMetrics;
@protocol WCDisplayMetricsMonitorDelegate;

@interface WCDisplayMetricsMonitor : NSObject
{
    CADisplayLink *_displayLink;
    NSMutableArray *_metricsRecords;
    id <WCDisplayMetricsMonitorDelegate> _delegate;
    long long _preferredFramesPerSecond;
    double _durationPerCollectionCycle;
    WCDisplayMetrics *_currentMetrics;
    unsigned long long _metricsRecordsMaximumCapacity;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long metricsRecordsMaximumCapacity; // @synthesize metricsRecordsMaximumCapacity=_metricsRecordsMaximumCapacity;
@property(readonly, nonatomic) WCDisplayMetrics *currentMetrics; // @synthesize currentMetrics=_currentMetrics;
@property(nonatomic) double durationPerCollectionCycle; // @synthesize durationPerCollectionCycle=_durationPerCollectionCycle;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) __weak id <WCDisplayMetricsMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)makeMetricsCompleted:(id)arg1;
- (void)handleScreenUpdate:(id)arg1;
- (void)resumeMonitoring;
- (void)pauseMonitoring;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic) _Bool isMonitoring;
@property(readonly, nonatomic) NSArray *metricsRecords;
- (id)init;

@end

