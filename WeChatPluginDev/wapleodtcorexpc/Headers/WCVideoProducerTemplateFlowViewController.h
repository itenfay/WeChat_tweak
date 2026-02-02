//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJVideoTemplate, NSIndexPath, NSMutableSet, NSString, UIButton, UICollectionView, UIPanGestureRecognizer, UIView, WCUnhittableView, WCVideoProducerDataSource, WCVideoProducerLoadMoreView;
@protocol WCVideoProducerTemplateFlowDelegate;

@interface WCVideoProducerTemplateFlowViewController
{
    _Bool _isHangingStyleEnabled;
    _Bool _canRecreateWhileLoading;
    _Bool _isMJAppLauncherEnabled;
    _Bool _isRequesting;
    _Bool _isScrolling;
    _Bool _isScrolledByCode;
    id <WCVideoProducerTemplateFlowDelegate> _delegate;
    long long _itemCountPerRow;
    double _cellVisibleRateThresholdForAutoPlay;
    WCUnhittableView *_proxyRootView;
    UIView *_contentContainerView;
    UIView *_contentContainerBackgroundView;
    UIView *_topBarContainerView;
    UIButton *_finishButton;
    UIButton *_cancelButton;
    UICollectionView *_cvTemplateFlow;
    WCVideoProducerLoadMoreView *_loadMoreView;
    UIPanGestureRecognizer *_topBarSlideGesture;
    double _topBarSlideBeginViewTop;
    WCVideoProducerDataSource *_cellVMData;
    NSIndexPath *_selectedIndex;
    NSMutableSet *_playingIndexPathSet;
    MJVideoTemplate *_originalTemplate;
    struct CGPoint _topBarSlideBeginPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJVideoTemplate *originalTemplate; // @synthesize originalTemplate=_originalTemplate;
@property(retain, nonatomic) NSMutableSet *playingIndexPathSet; // @synthesize playingIndexPathSet=_playingIndexPathSet;
@property(nonatomic) _Bool isScrolledByCode; // @synthesize isScrolledByCode=_isScrolledByCode;
@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) WCVideoProducerDataSource *cellVMData; // @synthesize cellVMData=_cellVMData;
@property(nonatomic) double topBarSlideBeginViewTop; // @synthesize topBarSlideBeginViewTop=_topBarSlideBeginViewTop;
@property(nonatomic) struct CGPoint topBarSlideBeginPoint; // @synthesize topBarSlideBeginPoint=_topBarSlideBeginPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *topBarSlideGesture; // @synthesize topBarSlideGesture=_topBarSlideGesture;
@property(retain, nonatomic) WCVideoProducerLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) UICollectionView *cvTemplateFlow; // @synthesize cvTemplateFlow=_cvTemplateFlow;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIView *topBarContainerView; // @synthesize topBarContainerView=_topBarContainerView;
@property(retain, nonatomic) UIView *contentContainerBackgroundView; // @synthesize contentContainerBackgroundView=_contentContainerBackgroundView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) WCUnhittableView *proxyRootView; // @synthesize proxyRootView=_proxyRootView;
@property(nonatomic) _Bool isMJAppLauncherEnabled; // @synthesize isMJAppLauncherEnabled=_isMJAppLauncherEnabled;
@property(nonatomic) _Bool canRecreateWhileLoading; // @synthesize canRecreateWhileLoading=_canRecreateWhileLoading;
@property(nonatomic) double cellVisibleRateThresholdForAutoPlay; // @synthesize cellVisibleRateThresholdForAutoPlay=_cellVisibleRateThresholdForAutoPlay;
@property(nonatomic) long long itemCountPerRow; // @synthesize itemCountPerRow=_itemCountPerRow;
@property(nonatomic) _Bool isHangingStyleEnabled; // @synthesize isHangingStyleEnabled=_isHangingStyleEnabled;
@property(nonatomic) __weak id <WCVideoProducerTemplateFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_getHeightThresholdForAnimating;
- (double)_getContentHeightForHanging;
- (double)_getContentHeightForShowing;
- (double)_getContentHeightWithoutSafeArea;
- (void)_initFlowListView;
- (void)_initTopBarView;
- (void)_initContentContainerView;
- (void)_initContentContainerBackgroundView;
- (void)_initContentView;
- (void)_initBackgroundCloseView;
- (void)_initView;
- (void)_relayoutView;
- (id)_changingTemplate;
- (void)_updateCellChangingStatus;
- (void)_onDataChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_appendTemplateList:(id)arg1;
- (void)_appendMJAppLauncherTemplate;
- (void)_resetCellVMDataWithTemplateList:(id)arg1;
- (void)_requestLoadMore;
- (void)_initFirstPageData;
- (void)_onCellAtIndex:(id)arg1 changedSelectTo:(_Bool)arg2 manually:(_Bool)arg3;
- (id)_sortCellViewByIndexPath:(id)arg1;
- (_Bool)_isCellView:(id)arg1 visibleInCollectionView:(id)arg2 threshold:(double)arg3;
- (void)_onScrollFinished;
- (void)_onSlideTopBarFinishedWithDiff:(double)arg1;
- (void)_onSlideTopBarMoveToY:(double)arg1;
- (void)_onTopBarPanGesture:(id)arg1;
- (void)_unregisterTopBarSlideGesture;
- (void)_registerTopBarSlideGesture;
- (void)_onClickFinishButton:(id)arg1;
- (void)_onClickCancelButton:(id)arg1;
- (void)_ensureLoadMoreCellVMForInitialState:(unsigned long long)arg1;
- (void)_stopPlayingCellDemoForIndexPathSet:(id)arg1;
- (void)_startPlayingCellDemo;
- (void)_updateLoadMoreViewState:(unsigned long long)arg1 isError:(_Bool)arg2;
- (_Bool)_isIndexPathValid:(id)arg1;
- (void)_safeScrollToItemAtIndex:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onScrolledToLoading;
- (void)loadView;
- (void)viewWillPopOrDismiss:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (_Bool)hidesStatusBar;
- (_Bool)useTransparentNavibar;
- (void)resetDataWithTemplateList:(id)arg1;
- (void)updateOriginalTemplate:(id)arg1;
- (void)selectTemplateById:(id)arg1;
- (void)animateHangingWithCompletion:(CDUnknownBlockType)arg1;
- (double)getTemplateFlowHangingHeight;
- (double)getTemplateFlowShowingHeight;
- (void)setViewTop:(double)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (double)getContentHeightWhenShowing;
- (void)onRelayoutViews;
- (void)dealloc;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

