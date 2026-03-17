//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedArray;

@protocol WCFinderCollectionFeedListProvider <NSObject>
- (void)pullFirstPage;
- (void)pullBottom;
- (void)pullTop;
- (_Bool)isPullingFirstPage;
- (_Bool)isPullingBottom;
- (_Bool)isPullingTop;
- (_Bool)hasMoreBottom;
- (_Bool)hasMoreTop;
- (WCFinderFeedArray *)feedArray;
- (unsigned long long)collectionTopicID;
@end

