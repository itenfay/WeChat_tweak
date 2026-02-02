//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdSliderCardLogic, WCAdSliderCardOpeningAnimationView, WCAdSliderCardProductView, WCAdSliderCardView;

@interface WCTimeLineAdSliderCardView
{
    WCAdSliderCardView *_sliderCard;
    WCAdSliderCardProductView *_productView;
    WCAdSliderCardOpeningAnimationView *_openingAnimationView;
}

+ (_Bool)hasOpeningAnimation:(id)arg1;
+ (_Bool)hasProductInfo:(id)arg1;
+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdSliderCardOpeningAnimationView *openingAnimationView; // @synthesize openingAnimationView=_openingAnimationView;
@property(retain, nonatomic) WCAdSliderCardProductView *productView; // @synthesize productView=_productView;
@property(retain, nonatomic) WCAdSliderCardView *sliderCard; // @synthesize sliderCard=_sliderCard;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
@property(readonly, nonatomic) WCAdSliderCardLogic *sliderCardLogic;
- (id)fetchMediaId;
- (void)onOpeningAnimationDisplayFinished;
- (void)onProductBarClick:(long long)arg1;
- (void)onSliderCardWillChangeIndex:(long long)arg1;
- (void)onSliderCardSlideWithDuration:(unsigned long long)arg1;
- (void)onAutoSlideFrom:(long long)arg1 to:(long long)arg2;
- (void)onSliderCardExposure:(long long)arg1;
- (void)onSliderCardSlideJump;
- (void)onSliderCardClick:(long long)arg1 clickType:(long long)arg2;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)contentItemWillDisplay;
- (void)initOpeningAnimationView;
- (void)initProductView;
- (id)createSliderCard:(id)arg1;
- (void)initSliderCard;
- (void)layoutSubviews;
- (void)initView;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

