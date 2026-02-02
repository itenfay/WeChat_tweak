//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCDataItem, WCTimeLineViewController;

@protocol IWCTimeLineViewControllerExt <NSObject>

@optional
- (void)onTimeLineFoldedStateChanged;
- (void)onTimeLineViewClearEarlierContentTipsItem;
- (void)onTimeLineViewFakeScrollToUnreadItemEnd:(NSString *)arg1;
- (void)onTimeLineViewFakeScrollToUnreadItem:(NSString *)arg1;
- (void)onTimelineViewDidEndDisplayingDataItem:(WCDataItem *)arg1;
- (void)onTimeLineViewWillDisplayDataItem:(WCDataItem *)arg1;
- (void)onTimeLineViewDealloc;
- (void)onTimeLineViewMissReadJumpBtnClick;
- (void)onTimelineDidLeavePage:(WCTimeLineViewController *)arg1;
- (void)onTimelineWillEnterPage:(WCTimeLineViewController *)arg1;
@end

