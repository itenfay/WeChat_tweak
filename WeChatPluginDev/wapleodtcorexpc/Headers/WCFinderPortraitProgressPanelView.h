//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSTimer, TextStateBlurButton, UIButton, WCFinderPlayerLoadingView, WCFinderPortraitProgressBar, WCFinderProgressBar;
@protocol WCFinderPortraitProgressPanelViewDelegate;

@interface WCFinderPortraitProgressPanelView
{
    WCFinderPlayerLoadingView *_playerloadingView;
    WCFinderProgressBar *_progressBar;
    id <WCFinderPortraitProgressPanelViewDelegate> _portraitDelegate;
    unsigned long long _startDragStyle;
    UIButton *_rotateButton;
    NSTimer *_smallerTimer;
    WCFinderPortraitProgressBar *_immersiveProgressBar;
    TextStateBlurButton *_exitPinchInButton;
    struct CGPoint _pauseButtonCenter;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint pauseButtonCenter; // @synthesize pauseButtonCenter=_pauseButtonCenter;
@property(retain, nonatomic) TextStateBlurButton *exitPinchInButton; // @synthesize exitPinchInButton=_exitPinchInButton;
@property(retain, nonatomic) WCFinderPortraitProgressBar *immersiveProgressBar; // @synthesize immersiveProgressBar=_immersiveProgressBar;
@property(retain, nonatomic) NSTimer *smallerTimer; // @synthesize smallerTimer=_smallerTimer;
@property(retain, nonatomic) UIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(nonatomic) unsigned long long startDragStyle; // @synthesize startDragStyle=_startDragStyle;
@property(nonatomic) __weak id <WCFinderPortraitProgressPanelViewDelegate> portraitDelegate; // @synthesize portraitDelegate=_portraitDelegate;
@property(retain, nonatomic) WCFinderPlayerLoadingView *playerloadingView; // @synthesize playerloadingView=_playerloadingView;
- (id)mediaCollectionView;
- (unsigned long long)progressStyle;
- (id)longVideoEntry;
- (id)progressBar;
- (id)dynamicWhiteColor;
- (_Bool)isPinchInState;
- (_Bool)isNewLoading;
- (_Bool)isAnimating;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isShowing;
- (void)updateControlsHiddenState;
- (void)updateOtherControlsLayout;
- (void)updateControlsLayout;
- (void)updateControlsEnhanceColor;
- (void)layoutProgressBar;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(_Bool)arg3 contentVM:(id)arg4 manual:(_Bool)arg5;
- (void)updateConfig;
- (void)checkProgressBarStatus;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)progressCenterY;
- (void)becomeBiger;
- (void)becomeSmaller;
- (void)fireBecomeSmaller;
- (void)hideAllSubControlWhileInteractive;
- (void)onClickRotateButton:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)resignStatic;
- (void)becomeStatic;
- (void)becomeLowest;
- (void)resignInteractive;
- (void)becomeInteractive;
- (void)cancelBecomeSmaller;
- (_Bool)isInteracting;
- (void)setHidden:(_Bool)arg1;
- (void)setTimeHidden:(_Bool)arg1;
- (void)updateCurProgressType;
- (void)setCurType:(unsigned long long)arg1;
- (_Bool)isLowestType;
- (_Bool)curSupportType:(unsigned long long)arg1;
- (unsigned long long)getStratImmersiveProgressBarDragStyle;
- (id)extendProgressPanGes;

@end

