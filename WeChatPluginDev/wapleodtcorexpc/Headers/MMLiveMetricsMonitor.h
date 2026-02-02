//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTask, MMMetricsInfo, NSString;
@protocol MMLiveMetricsMonitorDelegate;

@interface MMLiveMetricsMonitor : NSObject
{
    MMLiveTask<MMLiveMetricsMonitorDelegate> *_liveTaskDelegate;
    MMMetricsInfo *_lastReportedMetricsInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMetricsInfo *lastReportedMetricsInfo; // @synthesize lastReportedMetricsInfo=_lastReportedMetricsInfo;
@property(nonatomic) __weak MMLiveTask<MMLiveMetricsMonitorDelegate> *liveTaskDelegate; // @synthesize liveTaskDelegate=_liveTaskDelegate;
- (void)metricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)reportMetricsInfo:(id)arg1;
@property(readonly, nonatomic) double reportTimeInterval;
- (void)attachLiveInfoIntoMetricsInfo:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

