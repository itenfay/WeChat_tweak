//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCDisplayMetrics, WCDisplayMetricsMonitor;

@interface MMLiveDisplayMonitor : NSObject
{
    WCDisplayMetricsMonitor *_metricsMonitor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WCDisplayMetricsMonitor *metricsMonitor; // @synthesize metricsMonitor=_metricsMonitor;
- (void)displayMetricsMonitor:(id)arg1 didCollectMetrics:(id)arg2;
- (void)stopMetricsMonitor;
- (void)startMetricsMonitor;
@property(readonly, nonatomic) NSArray *metricsRecords;
@property(readonly, nonatomic) WCDisplayMetrics *currentMetrics;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

