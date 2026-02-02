//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCDataItem;

@protocol WCMicroMerchantSubTimelineViewControllerDelegate <NSObject>

@optional
- (void)onSubTimelineConfirmedUnfold;
- (void)onSubTimelineClickedUnfold;
- (void)onSubTimelineFromDataItem:(WCDataItem *)arg1 changedFoldedStateTo:(_Bool)arg2;
- (void)onSubTimelineDisplayCellForItem:(WCDataItem *)arg1;
- (void)onSubTimeLineViewPushed:(WCDataItem *)arg1;
- (void)onSubTimeLineViewReturn;
@end

