//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol WCFinderCacheBaseProtocol;

@protocol WCFinderCacheDelegate <NSObject>
- (void)cache:(NSObject<WCFinderCacheBaseProtocol> *)arg1 didEvictObject:(id)arg2;
@end

