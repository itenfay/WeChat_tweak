//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, WCFinderPrefetchCache, WXPBGeneratedMessage;

@protocol WCFinderCGIPrefetching <NSObject>

@optional
- (void)prefetchCacheWillBeDropped:(WCFinderPrefetchCache *)arg1;
- (unsigned long long)cacheValidityPeriod:(WXPBGeneratedMessage *)arg1;
- (_Bool)isEqualWithRequest:(WXPBGeneratedMessage *)arg1 extraData:(NSData *)arg2;
- (NSData *)prefetchExtraData;
- (NSString *)cachedHashKey;
- (int)requestType;
@end

