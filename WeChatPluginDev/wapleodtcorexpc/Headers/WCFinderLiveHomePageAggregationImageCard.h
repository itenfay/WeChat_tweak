//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class InfiniteLoopContainerView, MMTimer, NSString, UIView;

@interface WCFinderLiveHomePageAggregationImageCard
{
    UIView *_headInfoBgView;
    InfiniteLoopContainerView *_loopPageView;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) InfiniteLoopContainerView *loopPageView; // @synthesize loopPageView=_loopPageView;
@property(retain, nonatomic) UIView *headInfoBgView; // @synthesize headInfoBgView=_headInfoBgView;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)containerView:(id)arg1 onTapItemAtIndex:(unsigned long long)arg2;
- (id)containerView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInContainerView:(id)arg1;
- (void)changeToNextPage;
- (void)startTimer;
- (void)stopTimer;
- (void)updateWithCard:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)initViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

