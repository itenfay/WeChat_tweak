//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderPrefetchCache;

@protocol WCFinderPrefetchPoolExt <NSObject>
- (void)preFetchSuccessed:(WCFinderPrefetchCache *)arg1;
- (void)expiredCacheIsCleared:(WCFinderPrefetchCache *)arg1;
@end

