//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderDataItem, WCFinderLiveHomePageAggregationCardCell;

@protocol WCFinderLiveHomePageAggregationCardCellDelegate <NSObject>

@optional
- (void)onHomePageAggregationCellClickJumpThemeTemplate:(WCFinderLiveHomePageAggregationCardCell *)arg1;
- (void)onHomePageAggregationCell:(WCFinderLiveHomePageAggregationCardCell *)arg1 clickJumpLive:(WCFinderDataItem *)arg2;
@end

