//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class NSArray, NSIndexPath, UIGestureRecognizer, WCGeneralMonitor, ZZCollectionViewChainModel;
@protocol WCGeneralMonitorDelegate;

@interface UICollectionView (gcFlowLayout)
+ (CDUnknownBlockType)zz_create;
- (id)gcCollectionViewFlowLayout;
- (void)stopPreloadFirstFrame;
- (id)sortedPreloadArrayWithTid:(id)arg1 inArray:(id)arg2;
- (id)_groupID;
- (void)_preloadFinderVideoFisrtFrameWithJustWatchId:(id)arg1 commentScene:(int)arg2 dataItemBlock:(CDUnknownBlockType)arg3;
- (void)preloadFinderVideoFisrtFrameWithJustWatchId:(id)arg1 commentScene:(int)arg2 dataItemBlock:(CDUnknownBlockType)arg3;
- (void)preloadFinderVideoFisrtFrameWithCommentScene:(int)arg1 dataItemBlock:(CDUnknownBlockType)arg2;
- (void)updatePreparePlayCellsWithPlayableCells:(id)arg1;
- (id)cellsPrepareToPlay;
- (void)setCellsPrepareToPlay:(id)arg1;
- (id)cellsPrepareToStop;
- (void)setCellsPrepareToStop:(id)arg1;
- (_Bool)cellIsPlaying:(id)arg1;
- (void)setCurrentPlayVisibleLiveCellArray:(id)arg1;
- (id)currentPlayVisibleLiveCellArray;
- (void)stopCurrentPlayCell;
- (void)stopDisappearingCellPlaying:(id)arg1;
- (void)autoPlayCellPlayEnd:(id)arg1;
- (void)playVisibleCellWithParams:(id)arg1;
- (void)playVisibleLiveCell;
- (void)safeDeleteItemsAtIndexPaths:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setNearbyLiveSubTabScene:(unsigned long long)arg1;
- (void)setNearbyLiveSubTabIndex:(unsigned long long)arg1;
- (void)setIsInPage:(_Bool)arg1;
- (void)triggerGeneralMonitorCheck;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 newExposedIds:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
@property(nonatomic) unsigned long long gm_observerType;
@property(nonatomic) __weak UIGestureRecognizer *externalGestureRecognizer;
@property(retain, nonatomic) WCGeneralMonitor *generalMonitor;
@property(nonatomic) __weak id <WCGeneralMonitorDelegate> monitorDelegate;
@property(readonly, nonatomic) NSIndexPath *mj_centralIndexPath;
- (void)stopLiveStreamAutoPlay:(id)arg1;
- (void)startLiveStreamAutoPlay:(id)arg1;
@property(nonatomic, readonly) NSArray *ls_visibleSkeletonableSubview;
- (void)ls_recoverUserAction;
- (void)ls_interuptUserAction;
@property(readonly, copy, nonatomic) ZZCollectionViewChainModel *zz_setup;
@end

