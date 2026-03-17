//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveAggregationCard, FinderLiveCardHighlightTag, FinderLiveStreamPlayTogetherInfo;

@protocol MMFinderLiveFeedExtraInfoFetchExt <NSObject>

@optional
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(FinderLiveStreamPlayTogetherInfo *)arg2;
- (void)onAggregationCardUpdate:(FinderLiveAggregationCard *)arg1;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(FinderLiveCardHighlightTag *)arg2;
@end

