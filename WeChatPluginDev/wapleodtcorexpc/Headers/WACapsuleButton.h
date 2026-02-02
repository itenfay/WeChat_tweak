//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, UILabel, UIView;

@interface WACapsuleButton
{
    long long _navMode;
    long long _menuState;
    long long _translateState;
    UIView *_stateView;
    UIView *_bannerView;
    UIView *_iconView;
    UILabel *_iconSubtextLabel;
    UIView *_splitLineView;
    double _scale;
    CAShapeLayer *_maskLayer;
    UIView *_hightlightedView;
    UILabel *_bannerLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *bannerLabel; // @synthesize bannerLabel=_bannerLabel;
@property(retain, nonatomic) UIView *hightlightedView; // @synthesize hightlightedView=_hightlightedView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *iconSubtextLabel; // @synthesize iconSubtextLabel=_iconSubtextLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *stateView; // @synthesize stateView=_stateView;
@property(nonatomic) long long translateState; // @synthesize translateState=_translateState;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) long long navMode; // @synthesize navMode=_navMode;
- (id)highlightedColor:(long long)arg1;
- (id)splitLineColor:(long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (double)bannerWidth;
- (void)setSplitLineHidden:(_Bool)arg1;
- (void)resetBannerLayout;
- (void)updateSubviews;
- (void)layoutSubviews;
- (void)updateScale:(double)arg1;
- (void)rollIconView;
- (_Bool)isAutoWidth;
- (void)updateWithIconView:(id)arg1 iconSubtext:(id)arg2;
- (void)updateIcon:(id)arg1;
- (void)removeBanner;
- (void)sizeToFit;
- (void)configBanner:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

