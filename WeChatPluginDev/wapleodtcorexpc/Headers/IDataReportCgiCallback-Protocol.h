//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol IDataReportCgiCallback <NSObject>

@optional
- (void)handleCgiReportParams:(NSDictionary *)arg1 andItemId:(NSString *)arg2 andEventId:(NSString *)arg3 andResultParams:(NSMutableDictionary *)arg4;
@end

