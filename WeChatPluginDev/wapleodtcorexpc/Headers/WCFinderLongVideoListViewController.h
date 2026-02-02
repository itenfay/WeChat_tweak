//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LVFeedListCostReport, MMTimer, MegaVideoPageMonitorHelper, NSData, NSDate, NSMutableDictionary, NSNumber, NSString, NSValue, UICollectionView, UICollectionViewDiffableDataSource, UIView, WCFinderEmptyTipsView, WCFinderLongVideoListCell, WCFinderLongVideoListViewModel, WCFinderPullDownRefreshHeaderView, WCFinderStreamFooterView, WCFinderStreamHotAreaTrigger;

@interface WCFinderLongVideoListViewController
{
    _Bool _isFirstLoad;
    _Bool _isViewExposing;
    _Bool _closeDetectionValidity;
    float _cellExposePercentage;
    LVFeedListCostReport *_timeCostReport;
    MegaVideoPageMonitorHelper *_pageMonitorHelper;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_collectionViewSource;
    WCFinderLongVideoListViewModel *_viewModel;
    WCFinderEmptyTipsView *_emptyTipsView;
    WCFinderStreamFooterView *_footerView;
    WCFinderPullDownRefreshHeaderView *_refreshHeaderView;
    double _refreshHeaderViewLastAlpha;
    WCFinderStreamHotAreaTrigger *_hotAreaTrigger;
    NSNumber *_dragStartOffset;
    unsigned long long _nextPageInType;
    NSMutableDictionary *_longVideoCellExposeDict;
    NSDate *_viewExposeDate;
    WCFinderLongVideoListCell *_playingCell;
    UIView *_lastExitFeedHint;
    MMTimer *_detectionValidityTimer;
    unsigned long long _lastdetectionValidityTimestamp;
    NSData *_lastCheckBuffer;
    unsigned long long _maxLaterLVExposeIndex;
    unsigned long long _maxLVExposeIndex;
    NSValue *_fixOffsetDue2Rotate;
    struct CGPoint _lastExitFeedHintStartOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *fixOffsetDue2Rotate; // @synthesize fixOffsetDue2Rotate=_fixOffsetDue2Rotate;
@property(nonatomic) _Bool closeDetectionValidity; // @synthesize closeDetectionValidity=_closeDetectionValidity;
@property(nonatomic) unsigned long long maxLVExposeIndex; // @synthesize maxLVExposeIndex=_maxLVExposeIndex;
@property(nonatomic) unsigned long long maxLaterLVExposeIndex; // @synthesize maxLaterLVExposeIndex=_maxLaterLVExposeIndex;
@property(retain, nonatomic) NSData *lastCheckBuffer; // @synthesize lastCheckBuffer=_lastCheckBuffer;
@property(nonatomic) unsigned long long lastdetectionValidityTimestamp; // @synthesize lastdetectionValidityTimestamp=_lastdetectionValidityTimestamp;
@property(retain, nonatomic) MMTimer *detectionValidityTimer; // @synthesize detectionValidityTimer=_detectionValidityTimer;
@property(nonatomic) struct CGPoint lastExitFeedHintStartOffset; // @synthesize lastExitFeedHintStartOffset=_lastExitFeedHintStartOffset;
@property(retain, nonatomic) UIView *lastExitFeedHint; // @synthesize lastExitFeedHint=_lastExitFeedHint;
@property(nonatomic) float cellExposePercentage; // @synthesize cellExposePercentage=_cellExposePercentage;
@property(retain, nonatomic) WCFinderLongVideoListCell *playingCell; // @synthesize playingCell=_playingCell;
@property(retain, nonatomic) NSDate *viewExposeDate; // @synthesize viewExposeDate=_viewExposeDate;
@property(nonatomic) _Bool isViewExposing; // @synthesize isViewExposing=_isViewExposing;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) NSMutableDictionary *longVideoCellExposeDict; // @synthesize longVideoCellExposeDict=_longVideoCellExposeDict;
@property(nonatomic) unsigned long long nextPageInType; // @synthesize nextPageInType=_nextPageInType;
@property(retain, nonatomic) NSNumber *dragStartOffset; // @synthesize dragStartOffset=_dragStartOffset;
@property(retain, nonatomic) WCFinderStreamHotAreaTrigger *hotAreaTrigger; // @synthesize hotAreaTrigger=_hotAreaTrigger;
@property(nonatomic) double refreshHeaderViewLastAlpha; // @synthesize refreshHeaderViewLastAlpha=_refreshHeaderViewLastAlpha;
@property(retain, nonatomic) WCFinderPullDownRefreshHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) WCFinderStreamFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView; // @synthesize emptyTipsView=_emptyTipsView;
@property(retain, nonatomic) WCFinderLongVideoListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewSource; // @synthesize collectionViewSource=_collectionViewSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MegaVideoPageMonitorHelper *pageMonitorHelper; // @synthesize pageMonitorHelper=_pageMonitorHelper;
@property(retain, nonatomic) LVFeedListCostReport *timeCostReport; // @synthesize timeCostReport=_timeCostReport;
- (void)onLVMinimizePaused:(id)arg1;
- (void)onLVMinimizePlay:(id)arg1;
- (void)onLVMinimizeDeactive:(id)arg1;
- (void)onLVMinimizeActive:(id)arg1;
- (void)stopCurrentMedia;
- (void)resumeFocusPlay;
- (void)stopCell:(id)arg1;
- (void)startPlayCell:(id)arg1;
- (_Bool)canFocusPlay;
- (id)currentFocusCell;
- (void)reportAdditionalPageEvent:(id)arg1;
- (void)onFullScreenDidEndPlayContentVM:(id)arg1 finderPlayerReport:(id)arg2;
- (CDUnknownBlockType)hotAreaCell:(id)arg1 releaseFocus:(id)arg2;
- (void)hotAreaCell:(id)arg1 acquireFocus:(id)arg2;
- (id)identifierForSupportFocusCell:(id)arg1 cell:(id)arg2 distance:(double *)arg3;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onDislikeWithContentVM:(id)arg1;
- (void)longVideoListCell:(id)arg1 contentVMUpdated:(id)arg2;
- (void)openLandscapePlayerDetailWithContentVM:(id)arg1 currentPlayTime:(double)arg2 playSessionId:(id)arg3 forceLandscape:(_Bool)arg4 fromCell:(id)arg5;
- (void)longVideoAutoPlay:(id)arg1;
- (void)longVideoListCell:(id)arg1 landscapeClicked:(id)arg2;
- (int)longVideoListCellGetCommentScene;
- (void)longVideoListCell:(id)arg1 longPressRecognizedWithContentVM:(id)arg2;
- (void)onLongVideoListCellClickSeeLaterButtonWithContentVM:(id)arg1 currentSeeLaterState:(_Bool)arg2;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)endRequestLongVideoDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(_Bool)arg2 success:(_Bool)arg3 cgiTimeCost:(unsigned long long)arg4;
- (void)startRequestLongVideoDataWithPullType:(unsigned long long)arg1;
- (void)finderLongVideoLoadingFailure;
- (void)finderLongVideoLoadingSuccessful:(_Bool)arg1;
- (void)finderLongVideoStartLoading;
- (int)seeLaterCellGetCommentScene;
- (void)onSeeLaterCellClickDeleteWithContentVM:(id)arg1;
- (void)fetchNextPage;
- (void)reloadData;
- (void)reportLongVideoListCell:(id)arg1 event:(id)arg2 cellAppearPercentage:(id)arg3;
- (void)reportLongVideoListCell:(id)arg1 event:(id)arg2;
- (_Bool)isCellAppearForPercentage:(double)arg1;
- (double)cellAppearPercentage:(id)arg1;
- (void)reportLongVideoSeeLaterCellExpose:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)hideLastExitFeedHint:(_Bool)arg1;
- (void)hideLastExitFeedHint;
- (void)onShowLastExitFeedHint:(id)arg1;
- (void)onEnterForegound:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)startLoadingHeaderView;
- (void)resetHeaderView;
- (void)goSeeLaterList;
- (void)requestDataWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)getLongVideoListCGIWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)reportCellUnexpose;
- (void)reportCellExpose;
- (void)reportUnexpose;
- (void)reportExpose;
- (void)reportPageInOut:(id)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)deleteLVFeedWithTid:(id)arg1;
- (void)detectionFeedsValidity;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)stopDetectionFeedsValidity;
- (void)startDetectionFeedsValidity;
- (void)viewWillAppear:(_Bool)arg1;
- (void)removeNotification;
- (void)setupNotification;
- (void)setupDataSource;
- (void)setupUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

