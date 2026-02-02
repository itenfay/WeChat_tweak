//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIImageView, UILabel, UIView, WCMarqueeLabel;

@interface WAMainFrameAudioCenterView_V4
{
    MMUILabel *_mainTitle;
    UIView *_recentPlayArea;
    UIView *_rightBackgroundContainerView;
    MMUIButton *_playOrPauseButton;
    WCMarqueeLabel *_audioTitleLabel;
    MMUILabel *_rightPartTitleLabel;
    UILabel *_recentPlayLabel;
    UIView *_musicArea;
    MMUIButton *_musicButton;
    MMUILabel *_musicLabel;
    UIView *_audioArea;
    MMUIButton *_audioButton;
    MMUILabel *_audioLabel;
    MMUIButton *_notifyContainerBtn;
    MMUILabel *_notifyLabel;
    UIView *_redDotView;
    UIImageView *_arrowIconView;
    UIImageView *_loadingIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *loadingIconView; // @synthesize loadingIconView=_loadingIconView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UIView *redDotView; // @synthesize redDotView=_redDotView;
@property(retain, nonatomic) MMUILabel *notifyLabel; // @synthesize notifyLabel=_notifyLabel;
@property(retain, nonatomic) MMUIButton *notifyContainerBtn; // @synthesize notifyContainerBtn=_notifyContainerBtn;
@property(retain, nonatomic) MMUILabel *audioLabel; // @synthesize audioLabel=_audioLabel;
@property(retain, nonatomic) MMUIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UIView *audioArea; // @synthesize audioArea=_audioArea;
@property(retain, nonatomic) MMUILabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(retain, nonatomic) MMUIButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) UIView *musicArea; // @synthesize musicArea=_musicArea;
@property(retain, nonatomic) UILabel *recentPlayLabel; // @synthesize recentPlayLabel=_recentPlayLabel;
@property(retain, nonatomic) MMUILabel *rightPartTitleLabel; // @synthesize rightPartTitleLabel=_rightPartTitleLabel;
@property(retain, nonatomic) WCMarqueeLabel *audioTitleLabel; // @synthesize audioTitleLabel=_audioTitleLabel;
@property(retain, nonatomic) MMUIButton *playOrPauseButton; // @synthesize playOrPauseButton=_playOrPauseButton;
@property(retain, nonatomic) UIView *rightBackgroundContainerView; // @synthesize rightBackgroundContainerView=_rightBackgroundContainerView;
@property(retain, nonatomic) UIView *recentPlayArea; // @synthesize recentPlayArea=_recentPlayArea;
@property(retain, nonatomic) MMUILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onHideWAMainFrameTaskBar;
- (void)setIsLoading:(_Bool)arg1;
- (id)dataReportParamsWithPlayInfo:(id)arg1;
- (id)playPauseParamsWithPlayInfo:(id)arg1;
- (void)updateStateWithPlayInfo:(id)arg1 enable:(_Bool)arg2;
- (void)updateStateWithPlayInfo:(id)arg1;
- (void)updateUIComptsWithPlayInfo:(id)arg1;
- (void)onTingTaskBarSyncInfoChanged;
- (void)applyViewModel:(id)arg1;
- (void)onTingPlayingInfoUpdate:(id)arg1;
- (void)onAudioButtonLongClicked;
- (void)onMusicButtonLongClicked;
- (void)onShowClearActionSheet;
- (void)onAudioButtonClicked;
- (void)onMusicButtonClicked;
- (void)doOpenAppFromTaskBar;
- (void)onRightBackgroundClicked;
- (void)onPlayOrPauseButtonClicked;
- (void)updateEntryButtonsImageIfNeed;
- (id)audioButtonImage;
- (id)musicButtonImage;
- (unsigned int)buttonIconStyle;
- (void)onBecomeUnVisible;
- (void)onBecomeVisible;
- (void)willBecomeVisible;
- (void)tryShowFirstTask;
- (void)updateCurPlayingInfo;
- (double)onelineLabelHeightForFontSize:(double)arg1;
- (void)layoutNotfiyBtn;
- (void)layoutSubviews;
- (double)rightPartDescLength;
- (void)onNotifyClicked;
- (void)initNotifyBtn;
- (void)initViews;
- (void)applyLastSyncItem;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (int)taskBarVersion;
- (double)contentHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

