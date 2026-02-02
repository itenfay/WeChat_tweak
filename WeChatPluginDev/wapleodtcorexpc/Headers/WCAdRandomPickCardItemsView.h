//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, WCAdRandomPickCardItemsInfo;
@protocol WCAdRandomPickCardItemsViewDelegate;

@interface WCAdRandomPickCardItemsView
{
    id <WCAdRandomPickCardItemsViewDelegate> _delegate;
    long long _viewStatus;
    WCAdRandomPickCardItemsInfo *_itemsInfo;
    long long _viewType;
    NSMutableArray *_itemViews;
    NSArray *_sortedCardItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedCardItems; // @synthesize sortedCardItems=_sortedCardItems;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) WCAdRandomPickCardItemsInfo *itemsInfo; // @synthesize itemsInfo=_itemsInfo;
@property(nonatomic) long long viewStatus; // @synthesize viewStatus=_viewStatus;
@property(nonatomic) __weak id <WCAdRandomPickCardItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isReadyToPlayQuickSwitchAnimation;
- (_Bool)isCardSelectedPreviouslyWithCardId:(id)arg1;
- (_Bool)isCardSelectedWithCardId:(id)arg1;
- (void)resumeCardItemsViewAnimationsWithStatus:(long long)arg1;
- (void)pauseCardItemsViewAnimationsWithStatus:(long long)arg1;
- (void)setCardItemsViewActive:(_Bool)arg1;
- (void)noticeCardViewToPlayBackgroundAnimationWithStatus:(id)arg1;
- (void)noticeCardViewToUpdateStatus:(id)arg1;
- (void)playSimpleFlipAnimationForView:(id)arg1;
- (void)makePreparedForSimpleFlipWithView:(id)arg1;
- (void)playSimpleWaveAnimationForView:(id)arg1;
- (void)makePreparedForSimpleWaveWithView:(id)arg1;
- (void)scheduleAllPickedAnimation;
- (void)showAllPickedAnimation;
- (void)scheduleRandomAnimation;
- (void)showRandomAnimation;
- (void)playIntroduceTwoAnimationForView:(id)arg1;
- (void)playIntroduceOneAnimationForView:(id)arg1;
- (void)makePreparedForIntroduceOneWithView:(id)arg1;
- (void)scheduleIntroduceTwoAnimation;
- (void)scheduleIntroduceOneAnimation;
- (void)showIntroduceAnimation;
- (void)updateViewStateForAnimation;
- (void)prepareCardItemsViewForAnimation;
- (void)setCardItemsViewForTransitionBeginning:(_Bool)arg1;
- (void)resetCardItemsView;
- (void)onRandomPickCardItemViewQuickSwitchAnimationDone;
- (void)onRandomPickCardItemViewDidClick:(id)arg1;
- (_Bool)isCardPickedWithCardId:(id)arg1 inPickedCards:(id)arg2;
- (void)sortItemViewsWithSortedCardItems;
- (void)sortRandomCardItemsWithPickedCards;
- (struct CGSize)calcCardItemSize;
- (double)fetchContentMaxWidth;
- (unsigned long long)fetchCardIndexForCardId:(id)arg1;
- (unsigned long long)fetchPickedTimestampForCardId:(id)arg1 inCardsInfo:(id)arg2;
- (id)pickCardLogic;
- (id)fetchCanvasPageId;
- (_Bool)needToLayoutSubviews;
- (void)layoutSubviews;
- (void)generateSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 itemsInfo:(id)arg2 viewType:(long long)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

