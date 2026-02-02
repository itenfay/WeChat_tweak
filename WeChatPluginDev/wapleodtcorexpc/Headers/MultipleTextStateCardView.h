//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLRUCache, MultipleTextStateCardFooterDotsView, NSArray, NSString, TextStateHeaderSectionView, UIScrollView;
@protocol MultipleTextStateCardViewDataSource, MultipleTextStateCardViewDelegate, TextStateBaseCardContentViewDelegate, WCStatusViewDelegate;

@interface MultipleTextStateCardView : UIView
{
    _Bool _showDraggingGuide;
    _Bool _scrollEnabled;
    _Bool _passthroughTouches;
    _Bool _forbidUpdateData;
    id <MultipleTextStateCardViewDataSource> _dataSource;
    id <MultipleTextStateCardViewDelegate> _delegate;
    id <TextStateBaseCardContentViewDelegate> _cardContentDelegate;
    NSArray *_infoList;
    TextStateHeaderSectionView *_headerView;
    double _headerTopPadding;
    double _footerBottomPadding;
    MultipleTextStateCardFooterDotsView *_dotsView;
    double _cornerRadius;
    unsigned long long _startPosition;
    unsigned long long _positionInCardList;
    NSString *_cardListId;
    double _contentAlpha;
    id <WCStatusViewDelegate> _statusViewDelegate;
    unsigned long long _activeIndex;
    MMLRUCache *_cardViewCache;
    unsigned long long _candidateActiveIndex;
    UIScrollView *_autoLoopView;
    UIView *_draggingGuideView;
}

+ (id)popAnimationForView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *draggingGuideView; // @synthesize draggingGuideView=_draggingGuideView;
@property(retain, nonatomic) UIScrollView *autoLoopView; // @synthesize autoLoopView=_autoLoopView;
@property(nonatomic) unsigned long long candidateActiveIndex; // @synthesize candidateActiveIndex=_candidateActiveIndex;
@property(retain, nonatomic) MMLRUCache *cardViewCache; // @synthesize cardViewCache=_cardViewCache;
@property(nonatomic) unsigned long long activeIndex; // @synthesize activeIndex=_activeIndex;
@property(nonatomic) __weak id <WCStatusViewDelegate> statusViewDelegate; // @synthesize statusViewDelegate=_statusViewDelegate;
@property(nonatomic) _Bool forbidUpdateData; // @synthesize forbidUpdateData=_forbidUpdateData;
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(retain, nonatomic) NSString *cardListId; // @synthesize cardListId=_cardListId;
@property(nonatomic) unsigned long long positionInCardList; // @synthesize positionInCardList=_positionInCardList;
@property(nonatomic) _Bool passthroughTouches; // @synthesize passthroughTouches=_passthroughTouches;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) unsigned long long startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) MultipleTextStateCardFooterDotsView *dotsView; // @synthesize dotsView=_dotsView;
@property(nonatomic) _Bool showDraggingGuide; // @synthesize showDraggingGuide=_showDraggingGuide;
@property(nonatomic) double footerBottomPadding; // @synthesize footerBottomPadding=_footerBottomPadding;
@property(nonatomic) double headerTopPadding; // @synthesize headerTopPadding=_headerTopPadding;
@property(retain, nonatomic) TextStateHeaderSectionView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList=_infoList;
@property(nonatomic) __weak id <TextStateBaseCardContentViewDelegate> cardContentDelegate; // @synthesize cardContentDelegate=_cardContentDelegate;
@property(nonatomic) __weak id <MultipleTextStateCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MultipleTextStateCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)showNextTextStateAnimated;
- (void)showTextStateAtIndex:(unsigned long long)arg1;
- (void)showFromStartPosition;
- (void)onWillDisplayCardViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)prevIndexForIndex:(unsigned long long)arg1;
- (unsigned long long)nextIndexForIndex:(unsigned long long)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateAutoLoopContent;
- (_Bool)ensureCreateCardViewAtIndex:(unsigned long long)arg1;
- (void)reloadAutoLoopView;
- (void)updateActiveIndexToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateIndexByInnerIndex:(unsigned long long)arg1;
- (void)updateActiveIndex;
- (void)restartActiveCardView;
- (void)startActiveCardView;
- (void)residentStopActiveCardView;
- (void)stopActiveCardView;
- (void)pauseActiveCardView;
- (void)pauseCardViewAtIndex:(unsigned long long)arg1;
- (void)onWCStatusViewShowGroup:(id)arg1 view:(id)arg2;
- (void)startCardViewAtIndex:(unsigned long long)arg1 needReset:(_Bool)arg2;
- (void)removePopAnimation;
- (void)createOrUpdatePopAnimation;
@property(readonly, nonatomic) _Bool isSingle;
- (id)cardViewAtIndex:(unsigned long long)arg1;
- (id)activeCardView;
- (id)activeTextState;
- (void)updateScrollEnabled;
- (double)contentBottomPadding;
@property(nonatomic) _Bool shouldShowLocationDistance; // @dynamic shouldShowLocationDistance;
- (_Bool)isSameInfoList:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateDotsView;
- (void)updateAutoLoopView;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

