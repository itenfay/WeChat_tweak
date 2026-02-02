//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSIndexPath, NSString, UIPanGestureRecognizer, WCFinderDataItem, WCFinderFeedFlowView, WCFinderLiveHomePageScrollActionSheet, WCFinderLiveTabInfo, WCFinderMoreLiveTagListHeaderView, WCFinderNearbyMoreLiveCellPlayModel, WCFinderNearbyMoreLivePageViewModel, WCFinderStreamFooterView;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderNearbyMoreLivePageViewManagerDelegate;

@interface WCFinderNearbyMoreLivePageViewManager : NSObject
{
    _Bool _isFirstPageRequestFinished;
    _Bool _isViewCurrentAppear;
    _Bool _relatedRecommendVisible;
    id <WCFinderNearbyMoreLivePageViewManagerDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    WCFinderNearbyMoreLivePageViewModel *_viewModel;
    NSIndexPath *_playingIndexPath;
    WCFinderNearbyMoreLiveCellPlayModel *_playingIndexModel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSString *_byPassInfo;
    WCFinderStreamFooterView *_footerLoadingView;
    WCFinderDataItem *_enterRoomDataItem;
    WCFinderMoreLiveTagListHeaderView *_tagListHeaderView;
    WCFinderLiveHomePageScrollActionSheet *_currentActionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageScrollActionSheet *currentActionSheet; // @synthesize currentActionSheet=_currentActionSheet;
@property(retain, nonatomic) WCFinderMoreLiveTagListHeaderView *tagListHeaderView; // @synthesize tagListHeaderView=_tagListHeaderView;
@property(nonatomic) _Bool relatedRecommendVisible; // @synthesize relatedRecommendVisible=_relatedRecommendVisible;
@property(retain, nonatomic) WCFinderDataItem *enterRoomDataItem; // @synthesize enterRoomDataItem=_enterRoomDataItem;
@property(retain, nonatomic) WCFinderStreamFooterView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(retain, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) _Bool isViewCurrentAppear; // @synthesize isViewCurrentAppear=_isViewCurrentAppear;
@property(retain, nonatomic) WCFinderNearbyMoreLiveCellPlayModel *playingIndexModel; // @synthesize playingIndexModel=_playingIndexModel;
@property(retain, nonatomic) NSIndexPath *playingIndexPath; // @synthesize playingIndexPath=_playingIndexPath;
@property(retain, nonatomic) WCFinderNearbyMoreLivePageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) _Bool isFirstPageRequestFinished; // @synthesize isFirstPageRequestFinished=_isFirstPageRequestFinished;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderNearbyMoreLivePageViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTagListHeaderView:(id)arg1 didSelectedTabInfo:(id)arg2 isToggle:(_Bool)arg3;
- (void)morphTransitionCanceled;
- (void)morphTransitionEnding;
- (void)onMonoServiceDidEnd;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onBeginMultiTalk;
- (void)onLiveTaskDisliked:(id)arg1;
- (_Bool)isLiveTaskValidForFetchRelatedRecommendList:(id)arg1;
- (void)_innelCancelDelayFetchByMinimizeLiveTask:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)onCollapseAnimationWillStartBeforeRotation:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onMMLiveWillStart;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onForwardAction:(id)arg1;
- (void)onNearbyRelatedLiveCellForwardAction:(id)arg1;
- (void)onNearbyLiveCellForwardAction:(id)arg1;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowViewReloadData:(id)arg1;
- (void)finderFeedFlowViewDidFooterViewStateChange:(id)arg1 state:(unsigned long long)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didClickLinkWithUrl:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 andContentVM:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (_Bool)nearbyLiveAnchorsIsAppearing;
- (void)nearbyLiveAnchorsDeleteWithTid:(id)arg1;
- (void)nearbyLiveAnchorsFetchFailWithErrorCode:(int)arg1;
- (void)nearbyLiveAnchorsNoMoreData;
- (void)nearbyLiveAnchorsAppendToSection:(long long)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 insertSection:(id)arg4;
- (void)nearbyLiveAnchorsAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)nearbyLiveAnchorsReloadAllData;
- (id)reportExposeCommentScene;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property(readonly, nonatomic) unsigned long long selectSubTabId;
- (_Bool)checkStartLiveRecommendInRedDotScene;
- (void)onExpandFollowAction;
- (_Bool)isAudioTabInfo;
- (void)stopPlayIfCan:(id)arg1;
- (id)getPlayModelWithCenterY_TwoFeed:(double)arg1;
- (id)autoPlayModelWithPoint:(struct CGPoint)arg1;
- (id)centerAutoPlayModel;
- (_Bool)isCellFullExpose:(id)arg1;
- (id)topAutoPlayModel;
- (void)reportAutoPlayIndex:(id)arg1;
- (void)tryAutoPlayAtIndex:(id)arg1 enableSound:(_Bool)arg2;
- (void)checkIfCanAutoPlay;
- (void)checkLivePageReady;
- (void)resumePlayIfCan;
- (_Bool)isCellExposed:(id)arg1;
- (void)checkAppendReadyRelatedList;
- (_Bool)isUsingDarkMode;
- (void)tryStopVisibleCell;
- (void)viewDidBePopedOrDismissed;
- (void)cleanCloseLive;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)initTagListView;
- (void)refreshTop;
- (id)initWithLiveTabInfo:(id)arg1 view:(id)arg2 InViewController:(id)arg3 fromScene:(int)arg4 byPassInfo:(id)arg5 scene:(unsigned long long)arg6 delegate:(id)arg7;
- (void)manualReportOnDisAppear;
- (void)reportNewPlayStateWithModel:(id)arg1 state:(unsigned long long)arg2 indexPath:(id)arg3;
- (void)reportNewValidRatioExposeEnd:(id)arg1 indexPath:(id)arg2;
- (void)reportNewValidRatioExposeStart:(id)arg1 indexPath:(id)arg2;
- (id)contentVMWithCell:(id)arg1;
- (void)bindNewExposeReport:(id)arg1 contentVM:(id)arg2 indexPath:(id)arg3;
- (void)reportLiveCardElementAction:(unsigned long long)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
- (void)onMoreLiveEnterFromTabId:(unsigned long long)arg1 subTabId:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (_Bool)isMoreLiveReportScene:(int)arg1;
- (int)getViewModelTargetCommentScene:(int)arg1 tabInfo:(id)arg2;
- (void)exposeItemViewDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

