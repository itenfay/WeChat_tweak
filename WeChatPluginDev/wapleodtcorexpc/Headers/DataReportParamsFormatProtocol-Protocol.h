//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DataReportRelatedData, NSArray, NSDictionary, NSString;

@protocol DataReportParamsFormatProtocol <NSObject>
- (NSDictionary *)formatConvergeData:(NSString *)arg1 generalParams:(NSDictionary *)arg2 customParams:(NSDictionary *)arg3;
- (NSDictionary *)formatEventDatas:(NSArray *)arg1 pageData:(DataReportRelatedData *)arg2 customParams:(NSDictionary *)arg3 eventId:(NSString *)arg4;
@end

