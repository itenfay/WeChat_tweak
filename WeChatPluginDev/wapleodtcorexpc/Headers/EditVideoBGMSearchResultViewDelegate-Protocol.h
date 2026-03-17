//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RecommendedMusicInfo;

@protocol EditVideoBGMSearchResultViewDelegate <NSObject>
- (void)onSelectSearchViewTripLoadMoreData;
- (void)onSelectSearchResult:(RecommendedMusicInfo *)arg1 index:(unsigned long long)arg2;
- (void)onSelectSearchViewClick;
@end

