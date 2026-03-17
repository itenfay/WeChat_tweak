//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class DelayBubble, FinderObjectPlaceHolderInfo, FinderSyncTipsShowInfo, NSNumber, WCFinderFeedContentVM, WCFinderLeadToMachineCellState, WCFinderRedDotCtrlInfo;
@protocol WCFinderTabViewControllerProtocol;

@protocol WCFinderTimelineTabDelegateProtocol <NSObject>
- (void)updateTimelineScrollViewPageEnabledState;
- (void)resetAllTimelineTabBubbleViews;
- (void)onClickLeadToOtherTabWithPlaceHolderInfo:(FinderObjectPlaceHolderInfo *)arg1 completion:(void (^)(void))arg2;
- (WCFinderFeedContentVM *)timelineTabVCGetCurrentPlayableContentVMWithTabType:(int)arg1;
- (void)onTimelineTabVCShowSettingPlayRateAnimatedWithRate:(double)arg1;
- (void)onTimelineTabVCWillStartPlayRateViewAnimation:(double)arg1;
- (void)onTimelineTabVCCurrentFeedPlayRateChange:(double)arg1;
- (WCFinderLeadToMachineCellState *)getLeadToMachineCellState;
- (NSNumber *)getTimelineTabHalfScreenProgress;
- (void)timelineTabHalfScreenProgressChanged:(NSNumber *)arg1;
- (_Bool)getTimelineHalfScreenIsShow;
- (void)timelineTabHalfScreenIsShow:(_Bool)arg1;
- (void)onCurrentFocusContentVMChanged:(id <WCFinderTabViewControllerProtocol>)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
- (void)onTimelineTabVC:(id <WCFinderTabViewControllerProtocol>)arg1 updatestreamTipsShowInfo:(FinderSyncTipsShowInfo *)arg2 delayBubble:(DelayBubble *)arg3 originCtrlInfo:(WCFinderRedDotCtrlInfo *)arg4;
- (void)onCurrentForceIndexPathDidChangedAboveNewFeed:(_Bool)arg1 curFeedIndex:(unsigned long long)arg2;
- (void)onMediaCellPreparedContent;
- (void)onTimelineTabVCTopRefeshTriggleLoading:(id <WCFinderTabViewControllerProtocol>)arg1 enterRefresh:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
- (void)onTimelineTabVC:(id <WCFinderTabViewControllerProtocol>)arg1 byUser:(_Bool)arg2 byTopRefresh:(_Bool)arg3;
@end

