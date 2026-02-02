//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveAggregationCard, FinderLiveCardHighlightTag, FinderLiveCardProductShowcase, FinderLiveStreamPlayTogetherInfo, NSString;

@protocol MMFinderLiveFeedExtraInfoFetcherDelegate <NSObject>

@optional
- (void)onFeedExtraInfoFetchConfigUpdate;
- (void)onFeedEntertainmentCardUpdate:(unsigned long long)arg1 previewInfo:(FinderLiveStreamPlayTogetherInfo *)arg2;
- (void)onFeedProductCardUpdate:(unsigned long long)arg1 card:(FinderLiveCardProductShowcase *)arg2;
- (void)onFeedAggregationCardUpdate:(NSString *)arg1 card:(FinderLiveAggregationCard *)arg2;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(FinderLiveCardHighlightTag *)arg2;
@end

