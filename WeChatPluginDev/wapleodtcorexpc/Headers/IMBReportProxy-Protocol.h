//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol IMBReportProxy <NSObject>

@optional
- (NSDictionary *)getReportExtraDictionary:(NSString *)arg1 publicServices:(NSArray *)arg2;
- (void)report:(int)arg1 logStr:(NSString *)arg2;
@end

