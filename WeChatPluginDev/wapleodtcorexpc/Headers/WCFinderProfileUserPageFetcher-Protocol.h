//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderBaseCgi, WCFinderUserPageParams;

@protocol WCFinderProfileUserPageFetcher <NSObject>
- (WCFinderBaseCgi *)userpageWithParams:(WCFinderUserPageParams *)arg1 successful:(void (^)(FinderUserPageResponse *, NSArray *, WCFinderContact *))arg2 failure:(void (^)(int))arg3;
@end

