//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderKeepHolderProtocol-Protocol.h"

@class FinderCommByPass, NSArray, NSData, NSString, UIScrollView, UIView, UIViewController, WCFinderDataItem, WCFinderFeedContentVM, WCFinderMinimizePlayInfo, WCFinderRedDotCtrlInfo, WCFinderTableViewParamModel;

@protocol WCFinderTabViewControllerProtocol <WCFinderKeepHolderProtocol>
- (long long)currentVCTabType;
- (struct CGRect)getCurSearchBarFrame;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (void)resetRefreshState;
- (_Bool)isCurrentMediaBeginPlayed;
- (_Bool)isTopRrefreshing;
- (void)tabViewControllerRecordEnterInfo;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)markNeedReloadTeenagerModeChange;
- (_Bool)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)tabViewControllerStopCurrentPlayVideo;
- (_Bool)tabViewControllerGetSelectState;
- (NSData *)getCurViewModelLastBuff;
- (void)tabViewControllerSelectionDidChange:(_Bool)arg1;

@optional
- (double)pauseCurrentPlayingFeedReturnPalybackTime;
- (void)updateCurrentStats;
- (WCFinderRedDotCtrlInfo *)getPullingStreamCGIFindEntranceRedDot;
- (void)reportFullStatsImmediately;
- (void)updateTabViewByHalfScreenIsShow:(_Bool)arg1;
- (void)onMinimizeRestorePlayContentView:(UIView *)arg1 cleanPauseStatus:(_Bool)arg2;
- (_Bool)currentSelectedMediaIsPlay;
- (UIScrollView *)contentScrollView;
- (_Bool)checkNeedInterruptMinimize;
- (_Bool)checkIsDisableMinimize;
- (void)updateFloatContentMinimizePlayInfo:(WCFinderMinimizePlayInfo *)arg1;
- (WCFinderMinimizePlayInfo *)minimizePlayInfo:(_Bool)arg1;
- (UIView *)minimizeCaptureSnapView;
- (void)updateCurrentThumbForMinimize;
- (_Bool)isShowingScrollUpGuide;
- (UIView *)getCurMaskView;
- (WCFinderFeedContentVM *)getCurrentContentVM;
- (WCFinderDataItem *)getCurrentDataItemWithSessionBuffer;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (_Bool)tabViewControllerIsInPinchState;
- (void)tabViewControllerNeedRefreshDataByPassInfo:(FinderCommByPass *)arg1;
- (void)tabViewRemoveTargetFeedId:(NSString *)arg1;
- (WCFinderTableViewParamModel *)feedCellViewParamModelWithContentVM:(WCFinderFeedContentVM *)arg1;
- (_Bool)tabContainerHasTargetFeedId:(NSString *)arg1;
- (void)tabViewControllerSilenceInsertPopupFeedById:(NSString *)arg1;
- (void)tabViewControllerScrollInsertPopupFeedById:(NSString *)arg1 animated:(_Bool)arg2;
- (void)tabViewControllerScrollInsertPopupFeedById:(NSString *)arg1;
- (void)prepareToInsertFeedByTL;
- (void)tabBubbleBottomChange:(double)arg1;
- (void)tabViewControllerResetFullCellHalfScreen;
- (UIViewController *)pushSwipeGestureDestination;
- (_Bool)pushSwipeGestureShouldBeginWithLocation:(struct CGPoint)arg1;
- (_Bool)enablePushProfileSwipeGesture;
- (_Bool)canReceiveEdgeSwipGes:(struct CGPoint)arg1;
- (WCFinderDataItem *)firstPlayableDataItem;
- (void)tabViewControllerDidBePoped;
- (long long)tabViewControllerReturnCurFeedNum;
- (NSArray *)unreadCacheDataArray;
- (void)tabViewControllerInitIfNeeded;
- (void)tabViewControllerSelectionWillChange:(_Bool)arg1;
- (void)refreshHeadOnScrolltoTop:(long long)arg1;
@end

