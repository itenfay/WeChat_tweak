//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveMetricsMonitor, MMMetricsInfo;

@protocol MMLiveMetricsMonitorDelegate <NSObject>

@optional
- (void)liveMetricsMonitor:(MMLiveMetricsMonitor *)arg1 didCollectMetricsInfo:(MMMetricsInfo *)arg2;
@end

