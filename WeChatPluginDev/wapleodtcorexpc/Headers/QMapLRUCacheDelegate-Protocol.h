//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QMapLRUCache;

@protocol QMapLRUCacheDelegate <NSObject>

@optional
- (void)cache:(QMapLRUCache *)arg1 willEvictObject:(id)arg2;
@end

