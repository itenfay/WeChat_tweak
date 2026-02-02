//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMFinderLiveNewAnchorTaskViewModel, MMFinderLiveTaskId, MMUIActivityIndicatorView, MMUIView, NSString, UICollectionView, UIScrollView, WCFinderLiveAnchorLogReporter, WCFinderLiveStarterReporter;

@interface MMFinderLiveNewAnchorTaskView
{
    _Bool _shouldShowCompletePageAnchorNotice;
    unsigned int _scene;
    CDUnknownBlockType _actionBlock;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveNewAnchorTaskViewModel *_taskVM;
    long long _curIndex;
    WCFinderLiveStarterReporter *_starterReporter;
    WCFinderLiveAnchorLogReporter *_liveReporter;
    UIScrollView *_detailContainerView;
    CAGradientLayer *_gradientLayer;
    MMUIActivityIndicatorView *_loadingView;
    UICollectionView *_taskCollectionView;
    MMUIView *_statusView;
    UICollectionView *_taskStatusCollectionView;
    CAGradientLayer *_statusGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *statusGradientLayer; // @synthesize statusGradientLayer=_statusGradientLayer;
@property(retain, nonatomic) UICollectionView *taskStatusCollectionView; // @synthesize taskStatusCollectionView=_taskStatusCollectionView;
@property(retain, nonatomic) MMUIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UICollectionView *taskCollectionView; // @synthesize taskCollectionView=_taskCollectionView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIScrollView *detailContainerView; // @synthesize detailContainerView=_detailContainerView;
@property(retain, nonatomic) WCFinderLiveAnchorLogReporter *liveReporter; // @synthesize liveReporter=_liveReporter;
@property(retain, nonatomic) WCFinderLiveStarterReporter *starterReporter; // @synthesize starterReporter=_starterReporter;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(retain, nonatomic) MMFinderLiveNewAnchorTaskViewModel *taskVM; // @synthesize taskVM=_taskVM;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool shouldShowCompletePageAnchorNotice; // @synthesize shouldShowCompletePageAnchorNotice=_shouldShowCompletePageAnchorNotice;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)onRightButtonTapped;
- (void)jumpRewardHomeWithJumpInfo:(id)arg1;
- (id)liveTask;
- (void)reportCard;
- (void)initData;
- (void)onNewAnchorQuestUpdated:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct CGSize)statusCellSize;
- (struct CGSize)taskCellSize;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dealloc;
- (void)showWithAnimated:(_Bool)arg1;
- (id)rightNavButton;
- (void)layoutTaskStatus;
- (void)layoutTaskContent;
- (void)layoutUI;
- (void)setupTaskStatus;
- (void)setupTaskContent;
- (void)setupUI;
- (void)pageSheetDidRotation;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

