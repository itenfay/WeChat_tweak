//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TSKReportManager;

@protocol TSKReportReceiving <NSObject>

@optional
- (void)reportManager:(TSKReportManager *)arg1 didReceiveEvent:(NSString *)arg2 andParams:(NSDictionary *)arg3;
@end

