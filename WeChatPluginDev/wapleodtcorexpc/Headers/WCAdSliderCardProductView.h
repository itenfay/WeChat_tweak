//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAAnimation, CAGradientLayer, MMUIButton, MMUILabel, MMUIView, NSString, WCAdSliderCardLogic, WCAdSliderCardProductInfo, WCAdSliderCardProductItem, WCAdURLImageView, WCDataItem;
@protocol WCAdSliderCardProductViewDelegate;

@interface WCAdSliderCardProductView
{
    _Bool _isDetail;
    _Bool _isMediaPlayProcessed;
    id <WCAdSliderCardProductViewDelegate> _delegate;
    WCDataItem *_dataItem;
    WCAdSliderCardProductInfo *_productInfo;
    long long _currentIndex;
    long long _currentState;
    MMUIView *_barView;
    MMUILabel *_titleView;
    WCAdURLImageView *_productImageView;
    CAGradientLayer *_actionBgLayer;
    MMUIButton *_actionTitleView;
    MMUILabel *_nextTitleView;
    WCAdURLImageView *_nextProductImageView;
    CAAnimation *_currentAnimation;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMediaPlayProcessed; // @synthesize isMediaPlayProcessed=_isMediaPlayProcessed;
@property(retain, nonatomic) CAAnimation *currentAnimation; // @synthesize currentAnimation=_currentAnimation;
@property(retain, nonatomic) WCAdURLImageView *nextProductImageView; // @synthesize nextProductImageView=_nextProductImageView;
@property(retain, nonatomic) MMUILabel *nextTitleView; // @synthesize nextTitleView=_nextTitleView;
@property(retain, nonatomic) MMUIButton *actionTitleView; // @synthesize actionTitleView=_actionTitleView;
@property(retain, nonatomic) CAGradientLayer *actionBgLayer; // @synthesize actionBgLayer=_actionBgLayer;
@property(retain, nonatomic) WCAdURLImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMUIView *barView; // @synthesize barView=_barView;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCAdSliderCardProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdSliderCardProductViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onOpeningAnimationVisibleStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isVisible:(_Bool)arg3;
- (void)onBarViewTapped;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
@property(readonly, nonatomic) WCAdSliderCardProductItem *currentProductItem;
- (id)fetchProductItem:(long long)arg1;
- (void)resetCurrentContentView;
- (void)removeAllAnimations;
- (void)removeNextProductView;
- (void)initNextProductView:(long long)arg1;
- (void)updateVisible;
- (id)createProductImageView;
- (id)createTitleView;
- (void)hideActionView;
- (void)showActionView:(long long)arg1;
- (void)setContentWithIndex:(long long)arg1 andState:(long long)arg2;
- (void)doAnimationFirstShow;
- (void)doAnimationSwitchToActionState;
- (void)cancelDelaySwitchToActionState;
- (void)delaySwitchToActionState:(double)arg1;
- (void)doAnimationSwitchToIndex:(long long)arg1 isSlideLeft:(_Bool)arg2;
- (void)onMediaPlay;
- (void)switchToIndex:(long long)arg1;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 isDetail:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

