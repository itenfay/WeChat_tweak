//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMetricsInfo, MMMetricsMonitor;

@protocol MMMetricsMonitorExt <NSObject>

@optional
- (void)metricsMonitor:(MMMetricsMonitor *)arg1 didCollectMetricsInfo:(MMMetricsInfo *)arg2;
@end

