//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DataReportRouteRule, NSDictionary, NSString;

@protocol DataReportReportCallbackExt <NSObject>
- (unsigned long long)routeType;
- (_Bool)onDataReport:(NSString *)arg1 time:(unsigned long long)arg2 params:(NSDictionary *)arg3 routeRule:(DataReportRouteRule *)arg4;
@end

