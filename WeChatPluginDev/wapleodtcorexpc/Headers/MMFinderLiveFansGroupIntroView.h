//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMFinderLiveFansGroupIntroViewConfig, MMLiveColorfulLabel, UIImageView;

@interface MMFinderLiveFansGroupIntroView : UIView
{
    _Bool _highlighted;
    MMFinderLiveFansGroupIntroViewConfig *_config;
    UIImageView *_iconImageView;
    UIImageView *_wecoinImageView;
    UIImageView *_bgFanGroupImageView;
    MMLiveColorfulLabel *_titleLabel;
    MMLiveColorfulLabel *_priceDescLabel;
    MMLiveColorfulLabel *_rightDetailLabel;
    CAGradientLayer *_bgGradientLayer;
    CAGradientLayer *_borderGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *borderGradientLayer; // @synthesize borderGradientLayer=_borderGradientLayer;
@property(retain, nonatomic) CAGradientLayer *bgGradientLayer; // @synthesize bgGradientLayer=_bgGradientLayer;
@property(retain, nonatomic) MMLiveColorfulLabel *rightDetailLabel; // @synthesize rightDetailLabel=_rightDetailLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *priceDescLabel; // @synthesize priceDescLabel=_priceDescLabel;
@property(retain, nonatomic) MMLiveColorfulLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgFanGroupImageView; // @synthesize bgFanGroupImageView=_bgFanGroupImageView;
@property(retain, nonatomic) UIImageView *wecoinImageView; // @synthesize wecoinImageView=_wecoinImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMFinderLiveFansGroupIntroViewConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (id)getFanBGImage;
- (id)getWecoinImage;
- (id)getIconImage;
- (struct CGSize)getIconImageSize;
- (void)layoutSubviews;
- (void)clearGradientLayers;
- (void)createGradientLayers;
- (void)reloadUI;
- (void)updateColorfulLabelColor:(id)arg1;
- (id)buildColorfulLabel;
- (void)initUI;
- (void)resizeToFitWidth;
- (id)initWithConfig:(id)arg1;

@end

