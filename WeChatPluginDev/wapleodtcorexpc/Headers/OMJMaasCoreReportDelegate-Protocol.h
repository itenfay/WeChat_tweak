//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, OMJMaasCore;

@protocol OMJMaasCoreReportDelegate <NSObject>

@optional
- (void)maasCore:(OMJMaasCore *)arg1 didReportAnalyticsEventWithType:(long long)arg2 data:(NSData *)arg3;
@end

