//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, UIButton, UILabel, WCFinderDataItem, WCFinderLandScapePlayerParam, WCFinderNormalProgressBar, WCFinderPlayRateButton;
@protocol WCFinderLandScapeVideoProgressDisplayViewDelegate;

@interface WCFinderLandScapeVideoProgressDisplayView
{
    id <WCFinderLandScapeVideoProgressDisplayViewDelegate> _delegate;
    WCFinderDataItem *_dataItem;
    WCFinderLandScapePlayerParam *_param;
    WCFinderNormalProgressBar *_progressBar;
    MMUIButton *_pauseButton;
    UILabel *_timeLabelInPortrait;
    UILabel *_timeLabelInLandScapeLeft;
    UILabel *_timeLabelInLandScapeRight;
    WCFinderPlayRateButton *_playRateButton;
    MMUIButton *_rotateBtn;
    MMUIButton *_bulletButton;
    UIButton *_bulletSwitchButton;
    UIButton *_bulletInputButton;
    MMUIButton *_returnBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *returnBtn; // @synthesize returnBtn=_returnBtn;
@property(retain, nonatomic) UIButton *bulletInputButton; // @synthesize bulletInputButton=_bulletInputButton;
@property(retain, nonatomic) UIButton *bulletSwitchButton; // @synthesize bulletSwitchButton=_bulletSwitchButton;
@property(retain, nonatomic) MMUIButton *bulletButton; // @synthesize bulletButton=_bulletButton;
@property(retain, nonatomic) MMUIButton *rotateBtn; // @synthesize rotateBtn=_rotateBtn;
@property(retain, nonatomic) WCFinderPlayRateButton *playRateButton; // @synthesize playRateButton=_playRateButton;
@property(retain, nonatomic) UILabel *timeLabelInLandScapeRight; // @synthesize timeLabelInLandScapeRight=_timeLabelInLandScapeRight;
@property(retain, nonatomic) UILabel *timeLabelInLandScapeLeft; // @synthesize timeLabelInLandScapeLeft=_timeLabelInLandScapeLeft;
@property(retain, nonatomic) UILabel *timeLabelInPortrait; // @synthesize timeLabelInPortrait=_timeLabelInPortrait;
@property(retain, nonatomic) MMUIButton *pauseButton; // @synthesize pauseButton=_pauseButton;
@property(retain, nonatomic) WCFinderNormalProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCFinderLandScapePlayerParam *param; // @synthesize param=_param;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCFinderLandScapeVideoProgressDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickBulletSwitchButton:(id)arg1;
- (void)onClickBulletInputButton;
- (void)onClickBulletBtn;
- (void)onClickReturnBtn;
- (void)onClickRotateBtn;
- (void)onClickPauseBtn:(id)arg1;
- (double)progressBarWidth;
- (_Bool)shouldShowRotateBtnWithLandscape:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updateBulletUIStateWithDataItem:(id)arg1 isLandScape:(_Bool)arg2;
- (void)updateBulletState;
- (void)landScapeStateWillChange:(_Bool)arg1;
- (void)hideSelf;
- (double)progressViewPlayRate;
- (void)autoSetHidden:(_Bool)arg1;
- (void)setPauseBtnAlpha:(double)arg1;
- (void)changeTimeLabelWithCurStr:(id)arg1 totalStr:(id)arg2;
- (void)changeProgressValueWithCurrentTime:(double)arg1 totalTime:(double)arg2 forbitProgressBarMovAni:(_Bool)arg3;
- (void)setPauseBtnStateIsPause:(_Bool)arg1;
- (double)progressBarValue;
- (void)updateWithDataItem:(id)arg1 param:(id)arg2;
- (void)setupViewLandScapeState;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

