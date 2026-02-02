//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCAdLookbookCardReportItem;

@protocol WCTimeLineAdLookbookCardBrandNewMediaViewDelegate <NSObject>

@optional
- (void)onBrandNewMediaTriggerZoomTimestamp;
- (void)onBrandNewMediaButtonClickedWithOriginView:(UIView *)arg1;
- (WCAdLookbookCardReportItem *)onBrandNewMediaFetchReportItem;
@end

