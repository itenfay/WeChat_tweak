//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AdExposureTimerHelper, NSArray, NSString, UICollectionView, WCAdCardEmitterView, WCAdSliderCardSlideJumpInfo, WCDataItem;
@protocol WCAdSliderCardViewDelegate;

@interface WCAdSliderCardView
{
    _Bool _isDetail;
    _Bool _canAutoPlay;
    _Bool _canAddEmitter;
    id <WCAdSliderCardViewDelegate> _delegate;
    UICollectionView *_collectionView;
    long long _sliderCardStyle;
    NSArray *_cardList;
    long long _cardType;
    WCAdSliderCardSlideJumpInfo *_slideJumpInfo;
    WCDataItem *_dataItem;
    long long _exposureIndex;
    long long _totalCellCount;
    WCAdCardEmitterView *_emitterView;
    AdExposureTimerHelper *_cardSlideTimer;
    double _distanceBeginDragging;
    double _lastScrollDistance;
}

- (void).cxx_destruct;
@property(nonatomic) double lastScrollDistance; // @synthesize lastScrollDistance=_lastScrollDistance;
@property(nonatomic) double distanceBeginDragging; // @synthesize distanceBeginDragging=_distanceBeginDragging;
@property(retain, nonatomic) AdExposureTimerHelper *cardSlideTimer; // @synthesize cardSlideTimer=_cardSlideTimer;
@property(nonatomic) _Bool canAddEmitter; // @synthesize canAddEmitter=_canAddEmitter;
@property(retain, nonatomic) WCAdCardEmitterView *emitterView; // @synthesize emitterView=_emitterView;
@property(nonatomic) long long totalCellCount; // @synthesize totalCellCount=_totalCellCount;
@property(nonatomic) long long exposureIndex; // @synthesize exposureIndex=_exposureIndex;
@property(nonatomic) _Bool canAutoPlay; // @synthesize canAutoPlay=_canAutoPlay;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdSliderCardSlideJumpInfo *slideJumpInfo; // @synthesize slideJumpInfo=_slideJumpInfo;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(nonatomic) long long sliderCardStyle; // @synthesize sliderCardStyle=_sliderCardStyle;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(nonatomic) __weak id <WCAdSliderCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fetchEmitterContainerView;
- (void)handlePanGesture:(id)arg1;
- (double)getCurrentDistance:(id)arg1;
- (void)setTitleForFooterView:(id)arg1 withReleaseStyle:(_Bool)arg2;
- (_Bool)isBeginDraggingDistanceValidToJump;
- (void)doSlideJump;
- (_Bool)isSlideJumpStyle;
- (void)contentItemWillDisplay;
- (long long)currentExposureIndex;
- (void)updateVisibleCellData:(id)arg1 dataItem:(id)arg2;
- (id)sortIndexPathArray:(id)arg1;
- (void)checkCellExposure;
- (void)pauseCell:(long long)arg1;
- (void)pauseAllCell;
- (void)checkCellPlayState;
- (void)autoPause;
- (void)autoPlay;
- (_Bool)nextPage;
- (void)checkAndResetIndex;
- (void)initCollectionView;
- (void)onCellClick:(long long)arg1 clickType:(long long)arg2;
- (_Bool)onMediaPlayEnd;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 sliderCardStyle:(long long)arg2 cardList:(id)arg3 cardType:(long long)arg4 slideJumpInfo:(id)arg5 dataItem:(id)arg6 isDetail:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

