//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CALayer, MMUIButton, MMUILabel, UIImageView;
@protocol MMFinderLiveGlobalRewardLevelViewDelegate;

@interface MMFinderLiveGlobalRewardLevelView
{
    _Bool _showEditButton;
    id <MMFinderLiveGlobalRewardLevelViewDelegate> _delegate;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    UIImageView *_globalRewardLevelBackImgView;
    MMUILabel *_globalRewardLevelHeadingLabel;
    MMUILabel *_globalRewardLevelNumLabel;
    MMUIButton *_globalRewardLevelEditButton;
    UIImageView *_globalRewardLevelIconView;
    UIImageView *_globalRewardLevelIconBgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *globalRewardLevelIconBgView; // @synthesize globalRewardLevelIconBgView=_globalRewardLevelIconBgView;
@property(retain, nonatomic) UIImageView *globalRewardLevelIconView; // @synthesize globalRewardLevelIconView=_globalRewardLevelIconView;
@property(retain, nonatomic) MMUIButton *globalRewardLevelEditButton; // @synthesize globalRewardLevelEditButton=_globalRewardLevelEditButton;
@property(retain, nonatomic) MMUILabel *globalRewardLevelNumLabel; // @synthesize globalRewardLevelNumLabel=_globalRewardLevelNumLabel;
@property(retain, nonatomic) MMUILabel *globalRewardLevelHeadingLabel; // @synthesize globalRewardLevelHeadingLabel=_globalRewardLevelHeadingLabel;
@property(retain, nonatomic) UIImageView *globalRewardLevelBackImgView; // @synthesize globalRewardLevelBackImgView=_globalRewardLevelBackImgView;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool showEditButton; // @synthesize showEditButton=_showEditButton;
@property(nonatomic) __weak id <MMFinderLiveGlobalRewardLevelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createColorLayer;
- (void)createGradientLayer;
- (void)updateLayersWithRank:(unsigned int)arg1;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)onGlobalRewardLevelEditButtonClicked:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

