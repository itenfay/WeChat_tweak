//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderFeedFlowView, WCFinderLiveFeedGenericAutoPlayModel, WCFinderLiveHomePageAggregationTabLiveStreamVM, WCFinderLiveTabInfo, WCFinderMoreLiveTagListHeaderView;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate;

@interface WCFinderLiveHomePageAggregationTabLiveStreamAdapter : NSObject
{
    id <WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    WCFinderLiveHomePageAggregationTabLiveStreamVM *_vm;
    WCFinderLiveFeedGenericAutoPlayModel *_autoPlayCtx;
    WCFinderMoreLiveTagListHeaderView *_tagListHeaderView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMoreLiveTagListHeaderView *tagListHeaderView; // @synthesize tagListHeaderView=_tagListHeaderView;
@property(retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayCtx; // @synthesize autoPlayCtx=_autoPlayCtx;
@property(retain, nonatomic) WCFinderLiveHomePageAggregationTabLiveStreamVM *vm; // @synthesize vm=_vm;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportOnDisAppear;
- (void)bindNewExposeReport:(id)arg1 feedVM:(id)arg2 indexPath:(id)arg3;
- (void)onHomePageAggregationCellClickJumpThemeTemplate:(id)arg1;
- (void)onHomePageAggregationCell:(id)arg1 clickJumpLive:(id)arg2;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onBaseLiveCellForwardAction:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveHomePageAggregationTabLiveStreamNoMoreData;
- (void)onLiveHomePageAggregationTabLiveStreamBatchReplaceDataFromRange:(struct _NSRange)arg1 insertRange:(struct _NSRange)arg2 removeRange:(struct _NSRange)arg3;
- (void)onLiveHomePageAggregationTabLiveStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveHomePageAggregationTabLiveStreamReloadAllData:(id)arg1;
- (void)onTagListHeaderView:(id)arg1 didSelectedTabInfo:(id)arg2 isToggle:(_Bool)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didClickLinkWithUrl:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)goToSettingLocationAuthorization:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property(readonly, nonatomic) unsigned long long selectSubTabId;
- (void)stopPlayWithIndexPath:(id)arg1;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)stopAutoPlay;
- (_Bool)checkAutoPlay:(struct CGPoint)arg1;
- (void)scrollToTop;
- (void)deleteTid:(id)arg1;
- (void)initTagListView;
- (void)requestCheckAutoPlay;
- (void)finishFirstPageRequest:(id)arg1;
- (void)refreshTop;
- (void)updateSkeletonStatus:(_Bool)arg1;
- (void)showBottomSkeletonIfNeeded;
- (id)initWithLiveTabInfo:(id)arg1 view:(id)arg2 InViewController:(id)arg3 delegate:(id)arg4 vm:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

