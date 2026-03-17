//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;

@protocol MegaVideoAbsFeedsDataFetchModel <NSObject, UnitRCBaseProtocol>
- (void)fetchFeeds:(NSData *)arg1 cacheResult:(NSData *)arg2 onSuccess:(void (^)(NSData *))arg3 onFail:(void (^)(int, NSString *))arg4;
- (NSString *)respCacheKey;
@end

