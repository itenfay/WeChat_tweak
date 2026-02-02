//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderEnterStreamTips, NSString, WCFinderTimelineRedDotBubbleDisplayInfo, WCFinderTimelineTabBubbleController;

@protocol WCFinderTimelineTabBubbleDelegate <NSObject>

@optional
- (void)obBubbleClickRefreshBubble;
- (void)onBubblePopupPanelViewClickForFeedId:(NSString *)arg1;
- (void)onBubblePopupPanelViewWillShowForFeedId:(NSString *)arg1;
- (void)onBubbleBottomChange:(double)arg1;
- (void)onBubbleEnterStreamTipsClick:(FinderEnterStreamTips *)arg1 bubbleCtrl:(WCFinderTimelineTabBubbleController *)arg2;
- (void)onBubbleEnterStreamTipsShow:(FinderEnterStreamTips *)arg1 bubbleCtrl:(WCFinderTimelineTabBubbleController *)arg2;
- (double)getCurBubbleEnterStreamTipsY;
- (void)onBubbleNetTipsDisappear;
- (void)onBubbleNetTipsShow;
- (void)onBubbleCtrl:(WCFinderTimelineTabBubbleController *)arg1 dismisssBubbleWithShowInfo:(WCFinderTimelineRedDotBubbleDisplayInfo *)arg2;
- (void)onBubbleCtrl:(WCFinderTimelineTabBubbleController *)arg1 showBubbleWithShowInfo:(WCFinderTimelineRedDotBubbleDisplayInfo *)arg2;
- (void)onBubbleCtrlDidClick:(WCFinderTimelineTabBubbleController *)arg1 category:(long long)arg2 redDotInfo:(WCFinderTimelineRedDotBubbleDisplayInfo *)arg3;
- (void)onBubbleCtrlOnHeightChanged:(WCFinderTimelineTabBubbleController *)arg1;
- (_Bool)currentTabContainTargetFeedId:(NSString *)arg1;
@end

