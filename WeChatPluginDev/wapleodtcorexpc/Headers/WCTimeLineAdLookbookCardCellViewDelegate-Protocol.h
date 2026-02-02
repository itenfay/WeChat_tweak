//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCAdLookbookCardReportItem, WCTimeLineAdLookbookCardMediaView;

@protocol WCTimeLineAdLookbookCardCellViewDelegate <NSObject>

@optional
- (_Bool)onCellViewShouldHideItemTitleForIndex:(unsigned long long)arg1;
- (WCAdLookbookCardReportItem *)fetchLookbookReportItemForIndex:(unsigned long long)arg1;
- (void)onCellButtonClickedForIndex:(unsigned long long)arg1 originView:(UIView *)arg2;
- (struct CGSize)fetchMediaViewSizeForIndex:(unsigned long long)arg1;
- (WCTimeLineAdLookbookCardMediaView *)fetchMediaViewForIndex:(unsigned long long)arg1;
@end

