//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, MMUIImageView, UIImageView, UILabel;
@protocol MJShootMusicEntryViewDelegate;

@interface MJShootMusicEntryView : UIView
{
    _Bool _needScrollAnimation;
    _Bool _isInMusicPlayingMode;
    MMUIButton *_micMuteButton;
    id <MJShootMusicEntryViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIImageView *_musicIconView;
    MMUIImageView *_arrowView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UILabel *_lytricLabel;
    MMUIButton *_disableMusicButton;
    UIView *_gradientMaskView;
    CAGradientLayer *_gradientLayer;
    double _titleContentWidth;
    double _titleBGViewWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInMusicPlayingMode; // @synthesize isInMusicPlayingMode=_isInMusicPlayingMode;
@property(nonatomic) double titleBGViewWidth; // @synthesize titleBGViewWidth=_titleBGViewWidth;
@property(nonatomic) double titleContentWidth; // @synthesize titleContentWidth=_titleContentWidth;
@property(nonatomic) _Bool needScrollAnimation; // @synthesize needScrollAnimation=_needScrollAnimation;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) MMUIButton *disableMusicButton; // @synthesize disableMusicButton=_disableMusicButton;
@property(retain, nonatomic) UILabel *lytricLabel; // @synthesize lytricLabel=_lytricLabel;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) MMUIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *musicIconView; // @synthesize musicIconView=_musicIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MJShootMusicEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *micMuteButton; // @synthesize micMuteButton=_micMuteButton;
- (void)disableMusicButtonDidTouchUpInside:(id)arg1;
- (void)micMuteButtonDidTouchUpInside:(id)arg1;
- (void)handleTapGesture:(id)arg1;
@property(readonly, nonatomic) _Bool isMicMuted;
- (void)updateForMicUnMuted;
- (void)updateForMicMuted;
- (void)stopAnimation;
- (double)calcContentWidth;
- (void)startAnimationIfNeeded;
- (void)removeGradientLayer;
- (void)addGradientLayer;
- (void)updateAccessbililtyLabelForMusicPlayingMode;
- (void)switchToMusicPlayingModeWithSongName:(id)arg1;
- (void)updateAccessbililtyLabelForNonMusicPlayingMode;
- (void)switchToNonMusicPlayingMode;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

