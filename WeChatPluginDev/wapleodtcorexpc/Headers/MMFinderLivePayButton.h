//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LOTAnimationView, MMUIButton, MMUILabel, UIImageView, UIView;

@interface MMFinderLivePayButton
{
    _Bool _isTrialTimeout;
    _Bool _isPayState;
    _Bool _isTicket;
    unsigned int _priceInWecoin;
    double _fullSizeWith;
    double _fullSizeOffsetX;
    long long _layoutOrientation;
    MMUILabel *_retryViewTipLabel;
    CDUnknownBlockType _payButtonClickCallback;
    UIView *_contentView;
    MMUIButton *_containerButton;
    UIImageView *_wecoinIconView;
    MMUILabel *_priceInWecoinLabel;
    MMUILabel *_payTipsLabel;
    LOTAnimationView *_breatheAnimationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LOTAnimationView *breatheAnimationView; // @synthesize breatheAnimationView=_breatheAnimationView;
@property(nonatomic) unsigned int priceInWecoin; // @synthesize priceInWecoin=_priceInWecoin;
@property(retain, nonatomic) MMUILabel *payTipsLabel; // @synthesize payTipsLabel=_payTipsLabel;
@property(retain, nonatomic) MMUILabel *priceInWecoinLabel; // @synthesize priceInWecoinLabel=_priceInWecoinLabel;
@property(retain, nonatomic) UIImageView *wecoinIconView; // @synthesize wecoinIconView=_wecoinIconView;
@property(retain, nonatomic) MMUIButton *containerButton; // @synthesize containerButton=_containerButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType payButtonClickCallback; // @synthesize payButtonClickCallback=_payButtonClickCallback;
@property(retain, nonatomic) MMUILabel *retryViewTipLabel; // @synthesize retryViewTipLabel=_retryViewTipLabel;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) _Bool isTicket; // @synthesize isTicket=_isTicket;
@property(nonatomic) double fullSizeOffsetX; // @synthesize fullSizeOffsetX=_fullSizeOffsetX;
@property(nonatomic) double fullSizeWith; // @synthesize fullSizeWith=_fullSizeWith;
@property(nonatomic) _Bool isPayState; // @synthesize isPayState=_isPayState;
@property(nonatomic) _Bool isTrialTimeout; // @synthesize isTrialTimeout=_isTrialTimeout;
- (void)onPayButtonClicked:(id)arg1;
- (void)stopBubbleBreatheAnimation;
- (void)startBubbleBreatheAnimation;
- (void)updateButtonAccessibilityLabelWithPayTips:(id)arg1;
- (void)updatePayState:(_Bool)arg1 animated:(_Bool)arg2;
- (double)internalPayButtonTop;
- (double)internalPayButtonWidth;
- (void)updatePriceInWecoin:(unsigned int)arg1 payState:(_Bool)arg2;
- (void)layoutTipsLabels;
- (void)layoutRetryViewTipLabel;
- (void)layoutUI:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

