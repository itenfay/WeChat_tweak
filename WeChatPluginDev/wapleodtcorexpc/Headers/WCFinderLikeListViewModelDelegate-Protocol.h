//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM;

@protocol WCFinderLikeListViewModelDelegate <NSObject>

@optional
- (void)finderLikeListStartTopLoadingData;
- (void)finderLikeListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1 index:(long long)arg2;
- (void)finderLikeListFetchFailWithErrorCode:(int)arg1;
- (void)finderLikeListEmpty;
- (void)finderLikeListDisinclineContentVM:(WCFinderFeedContentVM *)arg1 index:(long long)arg2;
- (void)finderLikeListNoMoreData;
- (void)finderLikeListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)finderLikeListLoadMoreFinished;
@end

