//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, UIButton, UILabel, WCFinderFeedContentVM, WCFinderGradientView, WCFinderNormalProgressBar;
@protocol WCFinderFeedDetailVideoProgressViewDelegate;

@interface WCFinderFeedDetailVideoProgressView : UIView
{
    _Bool _fullScreenState;
    id <WCFinderFeedDetailVideoProgressViewDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    WCFinderNormalProgressBar *_progressBar;
    MMUIButton *_pauseButton;
    UILabel *_timeLabelInLeft;
    UILabel *_timeLabelInRight;
    MMUIButton *_playRateButton;
    MMUIButton *_fullScreenBtn;
    MMUIButton *_bulletButton;
    UIButton *_bulletSwitchButton;
    UIButton *_bulletInputButton;
    UIView *_closeBtnView;
    WCFinderGradientView *_progressBarGradientView;
    struct CGRect _layoutBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect layoutBounds; // @synthesize layoutBounds=_layoutBounds;
@property(nonatomic) _Bool fullScreenState; // @synthesize fullScreenState=_fullScreenState;
@property(retain, nonatomic) WCFinderGradientView *progressBarGradientView; // @synthesize progressBarGradientView=_progressBarGradientView;
@property(retain, nonatomic) UIView *closeBtnView; // @synthesize closeBtnView=_closeBtnView;
@property(retain, nonatomic) UIButton *bulletInputButton; // @synthesize bulletInputButton=_bulletInputButton;
@property(retain, nonatomic) UIButton *bulletSwitchButton; // @synthesize bulletSwitchButton=_bulletSwitchButton;
@property(retain, nonatomic) MMUIButton *bulletButton; // @synthesize bulletButton=_bulletButton;
@property(retain, nonatomic) MMUIButton *fullScreenBtn; // @synthesize fullScreenBtn=_fullScreenBtn;
@property(retain, nonatomic) MMUIButton *playRateButton; // @synthesize playRateButton=_playRateButton;
@property(retain, nonatomic) UILabel *timeLabelInRight; // @synthesize timeLabelInRight=_timeLabelInRight;
@property(retain, nonatomic) UILabel *timeLabelInLeft; // @synthesize timeLabelInLeft=_timeLabelInLeft;
@property(retain, nonatomic) MMUIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) WCFinderNormalProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderFeedDetailVideoProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCloseButtonClicked;
- (void)onClickPlayRateButton;
- (void)onClickBulletSwitchButton:(id)arg1;
- (void)onClickBulletInputButton;
- (void)onClickBulletBtn;
- (void)onClickFullScreenBtn;
- (void)onClickPauseBtn:(id)arg1;
- (void)hideSelf;
- (void)setHidden:(_Bool)arg1 autoHide:(_Bool)arg2;
- (_Bool)getPauseBtnStateIsPause;
- (void)setPauseBtnStateIsPause:(_Bool)arg1;
- (void)setPauseBtnAlpha:(double)arg1;
- (double)progressBarValue;
- (void)setProgressBarHighlight:(_Bool)arg1;
- (void)changeTimeLabelWithCurStr:(id)arg1 totalStr:(id)arg2;
- (void)changeProgressValueWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbitProgressBarMovAni:(_Bool)arg3;
- (void)updateBulletUIStateWithDataItem:(id)arg1 isLandScape:(_Bool)arg2;
- (void)updateBulletState;
- (void)updateFullScreenState:(_Bool)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutSubviews;
- (void)layoutViews;
- (void)updatePauseButtonImage;
- (void)setupViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

