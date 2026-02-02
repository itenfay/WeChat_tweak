//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PAGView, UIView, WCAdLookbookCardInfo, WCAdLookbookLogic, WCTimeLineAdLookbookCollectionView;

@interface WCTimeLineAdLookbookCardView
{
    _Bool _isViewVisible;
    _Bool _isVideoReadyToPlay;
    WCAdLookbookCardInfo *_adLookbookCardInfo;
    WCTimeLineAdLookbookCollectionView *_collectionView;
    UIView *_effectPagViewContainer;
    PAGView *_effectPagView;
    PAGView *_slideEdgePagView;
    double _distanceBeginDragging;
    double _lastScrollDistance;
    WCAdLookbookLogic *_lookbookLogic;
    double _slideEdgePagViewMaxWidth;
    double _slideEdgePagViewInitialWidth;
    double _slideEdgePagViewInitialShowWidth;
}

+ (id)fetchAnimationViewForView:(id)arg1 isFromTimeline:(_Bool)arg2 dataItem:(id)arg3;
+ (id)fetchLookbookViewForView:(id)arg1;
+ (double)fetchHeightForDataItem:(id)arg1 withScene:(unsigned long long)arg2 fixMediaSize:(struct CGSize)arg3;
+ (double)fetchMediaWidthWithScene:(unsigned long long)arg1 fixMediaSize:(struct CGSize)arg2;
+ (double)fetchMediaHeightWithScene:(unsigned long long)arg1 fixMediaSize:(struct CGSize)arg2;
+ (double)fetchCardWidthWithScene:(unsigned long long)arg1 fixMediaSize:(struct CGSize)arg2;
+ (double)heightForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double slideEdgePagViewInitialShowWidth; // @synthesize slideEdgePagViewInitialShowWidth=_slideEdgePagViewInitialShowWidth;
@property(nonatomic) double slideEdgePagViewInitialWidth; // @synthesize slideEdgePagViewInitialWidth=_slideEdgePagViewInitialWidth;
@property(nonatomic) double slideEdgePagViewMaxWidth; // @synthesize slideEdgePagViewMaxWidth=_slideEdgePagViewMaxWidth;
@property(retain, nonatomic) WCAdLookbookLogic *lookbookLogic; // @synthesize lookbookLogic=_lookbookLogic;
@property(nonatomic) double lastScrollDistance; // @synthesize lastScrollDistance=_lastScrollDistance;
@property(nonatomic) double distanceBeginDragging; // @synthesize distanceBeginDragging=_distanceBeginDragging;
@property(nonatomic) _Bool isVideoReadyToPlay; // @synthesize isVideoReadyToPlay=_isVideoReadyToPlay;
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(retain, nonatomic) PAGView *slideEdgePagView; // @synthesize slideEdgePagView=_slideEdgePagView;
@property(retain, nonatomic) PAGView *effectPagView; // @synthesize effectPagView=_effectPagView;
@property(retain, nonatomic) UIView *effectPagViewContainer; // @synthesize effectPagViewContainer=_effectPagViewContainer;
@property(retain, nonatomic) WCTimeLineAdLookbookCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCAdLookbookCardInfo *adLookbookCardInfo; // @synthesize adLookbookCardInfo=_adLookbookCardInfo;
- (void)onViewDidBecomeActive:(id)arg1;
- (void)onViewWillResignActive:(id)arg1;
- (void)initNotificationObserver;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)onBrandNewAnimationDisplayLinkDone;
- (id)brandNewAnimationObject;
- (id)lookbookAnimationObject;
- (void)onBrandNewMediaTriggerZoomTimestamp;
- (void)onBrandNewMediaButtonClickedWithOriginView:(id)arg1;
- (id)onBrandNewMediaFetchReportItem;
- (_Bool)onMediaViewShouldForbidShowingPauseIcon;
- (_Bool)isBrandNewAnimationPlaying;
- (void)onBrandNewMediaPlayDoneForCollectionView;
- (void)onBrandNewMediaPlayDoneProcess;
- (void)onBrandNewMediaExposureProcess;
- (void)setBrandNewMediaWithPlayState:(_Bool)arg1;
- (id)brandNewAnimationDisplayLink;
- (id)brandNewMediaView;
- (void)tryToGetBrandNewItemReady;
- (id)fetchLookbookReportItemInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)reportInfo;
- (void)onCellButtonClickedInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2 originView:(id)arg3;
- (_Bool)isBrandNewAnimationPlayingForCollectionView:(id)arg1;
- (void)onCanvasPageViewAnimationForCollectionView:(id)arg1 setContentHidden:(_Bool)arg2;
- (_Bool)onCellMediaViewShouldForbidShowingPauseIconInCollectionView:(id)arg1;
- (struct CGSize)fetchMediaItemSizeInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)fetchMediaItemInCollectionView:(id)arg1 forIndex:(unsigned long long)arg2;
- (unsigned long long)fetchItemSceneInCollectionView:(id)arg1;
- (id)fetchDataItemInCollectionView:(id)arg1;
- (void)cellsExposureProcess;
- (void)checkCellsState;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (long long)getAnimateTransitionType:(id)arg1;
- (void)onSlideToJumpActionFired;
- (void)updateSlideEdgePagView;
- (void)updateEffectPagView;
- (void)updateFooterView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)getCurrentDistance:(id)arg1;
- (void)setTitleForFooterView:(id)arg1 withReleaseStyle:(_Bool)arg2;
- (_Bool)isBeginDraggingDistanceValidToJump;
- (id)createPagView:(id)arg1 pagMD5:(id)arg2;
- (void)updateSlideEdgePagViewRenderMatrix:(struct CGSize)arg1;
- (id)createSlideEdgePagView;
- (void)initSlideEdgePagView;
- (void)tryToAddSlideEdgePagView;
- (void)stopEffectPag;
- (void)realPlayEffectPag;
- (void)tryToPlayEffectPag;
- (id)createEffectPagView;
- (void)initEffectPagView;
- (void)tryToAddEffectPagView;
- (double)fetchSlideEdgeInitialHeight;
- (double)fetchSlideEdgeMaxHeight;
- (void)calculateSlideEdgeSize;
- (_Bool)hasSlideEdgeInfo;
- (_Bool)hasEffectInfo;
- (double)fetchMediaHeight;
- (double)fetchMediaWidth;
- (id)collectionLayout;
- (void)autoplayVideoProcess;
- (void)shutdownAllVideos;
- (void)updateVisibleVideoPauseIconState:(_Bool)arg1;
- (void)setVisibleVideoWithPlayState:(_Bool)arg1;
- (void)setVideosWithPlayState:(_Bool)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)contentItemBecomeInvisible;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

