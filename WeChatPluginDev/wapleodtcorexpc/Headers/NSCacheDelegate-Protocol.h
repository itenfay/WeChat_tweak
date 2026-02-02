//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSCache;

@protocol NSCacheDelegate <NSObject>

@optional
- (void)cache:(NSCache *)arg1 willEvictObject:(id)arg2;
@end

