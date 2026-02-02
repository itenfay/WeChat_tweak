//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, MinimizeAudioTaskExtendCoverView, NSString;
@protocol MiniAudioTaskContentViewDelegate;

@interface MiniAudioTaskContentView : UIView
{
    _Bool _isPlaying;
    _Bool _useBlurBackgroundView;
    unsigned int _style;
    NSString *_accessibilityBizPrefix;
    id <MiniAudioTaskContentViewDelegate> _delegate;
    MMUIButton *_playPauseButton;
    MMUIButton *_closeButton;
    MMUIButton *_outerContentButton;
    UIView *_outerContentView;
    CAGradientLayer *_gradientShadowLayer;
    MinimizeAudioTaskExtendCoverView *_coverView;
    UIView *_customizedLeftView;
    UIView *_customizedTopRightView;
}

+ (struct CGSize)fullSizeForOuterContentViewSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customizedTopRightView; // @synthesize customizedTopRightView=_customizedTopRightView;
@property(retain, nonatomic) UIView *customizedLeftView; // @synthesize customizedLeftView=_customizedLeftView;
@property(retain, nonatomic) MinimizeAudioTaskExtendCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) CAGradientLayer *gradientShadowLayer; // @synthesize gradientShadowLayer=_gradientShadowLayer;
@property(retain, nonatomic) UIView *outerContentView; // @synthesize outerContentView=_outerContentView;
@property(retain, nonatomic) MMUIButton *outerContentButton; // @synthesize outerContentButton=_outerContentButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) _Bool useBlurBackgroundView; // @synthesize useBlurBackgroundView=_useBlurBackgroundView;
@property(nonatomic) __weak id <MiniAudioTaskContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)setUpButton:(id)arg1 withState:(unsigned int)arg2;
- (void)setPlayOrPauseButtonState:(unsigned int)arg1;
- (void)setCloseButtonState:(unsigned int)arg1;
- (void)onOuterContentViewClicked;
- (void)onCloseButtonClicked;
- (void)onPlayPauseButtonClicked;
- (void)layoutSubviews;
- (id)buttonTintColor;
- (void)setOuterContentViewAccessibilityLabel:(id)arg1;
- (void)setButtonsShow:(_Bool)arg1;
- (void)setShadowShow:(_Bool)arg1;
- (void)setPlayOrPauseButtonDisabled:(_Bool)arg1;
@property(retain, nonatomic) NSString *accessibilityBizPrefix; // @synthesize accessibilityBizPrefix=_accessibilityBizPrefix;
- (void)setCoverImage:(id)arg1;
- (void)setCoverDefaultImage:(id)arg1;
- (void)setCoverImageUrl:(id)arg1;
- (void)setupSubviews;
- (id)initWitStyle:(unsigned int)arg1;

@end

