//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen, MMFinderLiveFeedStreamCarouselBaseItem, MMFinderLiveFeedStreamCarouselCell, NSMutableArray, NSString;
@protocol MMFinderLiveFeedStreamCarouselItemProtocol, MMFinderLiveFeedStreamCarouselViewDelegate;

@interface MMFinderLiveFeedStreamCarouselView
{
    _Bool _isCarouseling;
    _Bool _waitDataToCarousel;
    _Bool _isIsAnimation;
    _Bool _isDelaying;
    id <MMFinderLiveFeedStreamCarouselViewDelegate> _delegate;
    FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen *_config;
    NSMutableArray *_models;
    NSMutableArray *_cells;
    unsigned long long _index;
    double _lastCalculateHeight;
    MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *_waitAnimationFinishToRemovedItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(retain, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *waitAnimationFinishToRemovedItem; // @synthesize waitAnimationFinishToRemovedItem=_waitAnimationFinishToRemovedItem;
@property(nonatomic) _Bool isIsAnimation; // @synthesize isIsAnimation=_isIsAnimation;
@property(nonatomic) double lastCalculateHeight; // @synthesize lastCalculateHeight=_lastCalculateHeight;
@property(nonatomic) _Bool waitDataToCarousel; // @synthesize waitDataToCarousel=_waitDataToCarousel;
@property(nonatomic) _Bool isCarouseling; // @synthesize isCarouseling=_isCarouseling;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
@property(retain, nonatomic) FeedsPreviewLiveMultiStyleInfo_StyleSevenTeen *config; // @synthesize config=_config;
@property(nonatomic) __weak id <MMFinderLiveFeedStreamCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onCarouselViewProductStyleClicked:(id)arg1 jump2Type:(unsigned long long)arg2 productInfo:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveFeedStreamCarouselCell *currentCell;
@property(readonly, nonatomic) MMFinderLiveFeedStreamCarouselBaseItem<MMFinderLiveFeedStreamCarouselItemProtocol> *currentModel;
- (void)delayCarousel;
- (void)setTaskId:(id)arg1;
- (void)endExposeAction;
- (void)startExposeAction;
- (void)stopCarousel;
- (void)startCarousel;
- (id)createCellWithModel:(id)arg1;
- (void)carouselChangeToNext;
- (void)updateCellSize:(id)arg1;
- (void)updateSize;
- (_Bool)changeToIndex:(unsigned long long)arg1 animation:(_Bool)arg2;
- (void)resetIndex;
- (void)correctedIndex:(id)arg1;
- (void)checkDelayRemoveOnAnimationFinish;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)update:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addOrUpdate:(id)arg1;
- (void)reload:(id)arg1 config:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

