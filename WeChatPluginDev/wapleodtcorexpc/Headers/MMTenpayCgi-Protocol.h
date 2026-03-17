//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTenpayCgiCallback, NSDictionary, NSString;

@protocol MMTenpayCgi <NSObject>
- (void)request:(int)arg1 url:(NSString *)arg2 reqText:(NSDictionary *)arg3 reqTextWx:(NSDictionary *)arg4 callback:(MMTenpayCgiCallback *)arg5;
@end

