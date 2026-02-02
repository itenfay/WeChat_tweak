//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMKCgi, MMKNetworkMockManager, NSData;

@protocol MMKNetworkService <NSObject>
- (void)invoke:(MMKCgi *)arg1 mockManager:(MMKNetworkMockManager *)arg2;
- (NSData *)getBaseRequest:(int)arg1;
@end

