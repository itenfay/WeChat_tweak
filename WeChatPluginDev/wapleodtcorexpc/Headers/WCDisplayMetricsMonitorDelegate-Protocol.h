//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDisplayMetrics, WCDisplayMetricsMonitor;

@protocol WCDisplayMetricsMonitorDelegate <NSObject>

@optional
- (void)displayMetricsMonitor:(WCDisplayMetricsMonitor *)arg1 didCollectMetrics:(WCDisplayMetrics *)arg2;
@end

