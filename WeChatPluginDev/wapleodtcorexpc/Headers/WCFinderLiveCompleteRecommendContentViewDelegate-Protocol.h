//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView, WCFinderDataItem, WCFinderLiveCompleteRecommendContentView;

@protocol WCFinderLiveCompleteRecommendContentViewDelegate <NSObject>
- (UIScrollView *)compleScrollView;
- (void)liveCompleteRecommendLiveGoSquareClick:(WCFinderLiveCompleteRecommendContentView *)arg1;
- (void)liveCompleteRecommendLiveItemViewReport:(WCFinderLiveCompleteRecommendContentView *)arg1;
- (void)liveCompleteRecommendLiveItemViewClick:(WCFinderLiveCompleteRecommendContentView *)arg1 dataItem:(WCFinderDataItem *)arg2;
- (void)liveCompleteRecommendLiveMoreButtonClick:(WCFinderLiveCompleteRecommendContentView *)arg1 tabId:(unsigned long long)arg2;
@end

