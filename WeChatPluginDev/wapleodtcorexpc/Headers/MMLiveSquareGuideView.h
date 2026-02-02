//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMTimer, MMUIImageView, MMUILabel, NSData, NSMutableArray, NSString, UIButton, UICollectionView, UIView, WCFinderNavLiveStreamPreFetchParams;

@interface MMLiveSquareGuideView
{
    _Bool _squarePrefetchPerformed;
    _Bool _dataLoading;
    CDUnknownBlockType _closeActionBlock;
    CDUnknownBlockType _goSquareActionBlock;
    CDUnknownBlockType _goLiveActionBlock;
    MMFinderLiveTaskId *_taskId;
    MMTimer *_refreshRecommendTimer;
    MMTimer *_refreshSquareTimer;
    WCFinderNavLiveStreamPreFetchParams *_prefetchParams;
    NSMutableArray *_recommendItems;
    NSData *_jumpNavliveBuffer;
    UIView *_dialogView;
    MMUILabel *_title;
    UIButton *_leaveBtn;
    UIButton *_stopShowBtn;
    MMUILabel *_moreLiveLabel;
    MMUILabel *_goSquareLabel;
    MMUIImageView *_arrowImageView;
    UICollectionView *_videoCollectionView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UICollectionView *videoCollectionView; // @synthesize videoCollectionView=_videoCollectionView;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *goSquareLabel; // @synthesize goSquareLabel=_goSquareLabel;
@property(retain, nonatomic) MMUILabel *moreLiveLabel; // @synthesize moreLiveLabel=_moreLiveLabel;
@property(retain, nonatomic) UIButton *stopShowBtn; // @synthesize stopShowBtn=_stopShowBtn;
@property(retain, nonatomic) UIButton *leaveBtn; // @synthesize leaveBtn=_leaveBtn;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView=_dialogView;
@property(nonatomic) _Bool dataLoading; // @synthesize dataLoading=_dataLoading;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(retain, nonatomic) NSMutableArray *recommendItems; // @synthesize recommendItems=_recommendItems;
@property(retain, nonatomic) WCFinderNavLiveStreamPreFetchParams *prefetchParams; // @synthesize prefetchParams=_prefetchParams;
@property(nonatomic) _Bool squarePrefetchPerformed; // @synthesize squarePrefetchPerformed=_squarePrefetchPerformed;
@property(retain, nonatomic) MMTimer *refreshSquareTimer; // @synthesize refreshSquareTimer=_refreshSquareTimer;
@property(retain, nonatomic) MMTimer *refreshRecommendTimer; // @synthesize refreshRecommendTimer=_refreshRecommendTimer;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType goLiveActionBlock; // @synthesize goLiveActionBlock=_goLiveActionBlock;
@property(copy, nonatomic) CDUnknownBlockType goSquareActionBlock; // @synthesize goSquareActionBlock=_goSquareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType closeActionBlock; // @synthesize closeActionBlock=_closeActionBlock;
- (id)audienceLogReporter;
- (void)onClickedGoLive:(long long)arg1;
- (void)onClickedGoSquare;
- (void)onClickedStopShow;
- (void)onClickedLeave;
- (void)onEnterForeground;
- (void)refreshPrefetchData:(unsigned int)arg1;
- (void)stopPrefetchLiveStream;
- (void)startSquareJumpPrefetch;
- (void)initSquareJumpPrefetch;
- (void)loadRecommendItemCGI:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)stopPreloadRecommondItem;
- (void)preloadRecommendItem;
- (void)processRecommendItem:(id)arg1;
- (struct CGSize)cellSize;
- (id)liveTask;
- (void)dealloc;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)pageSheetDidRotation;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

