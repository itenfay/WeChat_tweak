//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCLoopMetrics, WCLoopMetricsCollector;

@protocol WCLoopMetricsCollectorDelegate <NSObject>

@optional
- (void)loopMetricsCollection:(WCLoopMetricsCollector *)arg1 didFinishCollectingMetrics:(WCLoopMetrics *)arg2;
@end

