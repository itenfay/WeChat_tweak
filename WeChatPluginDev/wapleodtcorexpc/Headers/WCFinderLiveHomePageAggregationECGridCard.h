//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InfiniteLoopContainerView, MMLiveColorfulLabel, MMTimer, NSString;

@interface WCFinderLiveHomePageAggregationECGridCard
{
    MMLiveColorfulLabel *_titleLabel;
    MMLiveColorfulLabel *_subTitleLabel;
    InfiniteLoopContainerView *_loopPageView;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) InfiniteLoopContainerView *loopPageView; // @synthesize loopPageView=_loopPageView;
@property(retain, nonatomic) MMLiveColorfulLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)enableAggregationECGridHotSellingAnimation:(id)arg1;
- (void)onAggregationECGridStopHotSellingAnimation:(id)arg1;
- (void)onAggregationECGridStartHotSellingAnimation:(id)arg1;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)refreshHotSalePag;
- (id)currentGroupJumpBypassBuffer;
- (id)currentGroupEntryBuffer;
- (unsigned long long)currenLoopPageIndex;
- (void)changeToNextPage;
- (void)startTimer;
- (void)stopTimer;
- (void)layoutSubviews;
- (void)updateWithCard:(id)arg1;
- (double)pageSize;
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

