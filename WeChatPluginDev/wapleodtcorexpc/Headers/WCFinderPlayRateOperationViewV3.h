//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, UIView, WCFinderFeedContentVM, WCFinderNormalProgressBar;

@interface WCFinderPlayRateOperationViewV3
{
    _Bool _currentIsTouchingBtn;
    CDUnknownBlockType _shownAction;
    CDUnknownBlockType _dismissAction;
    CDUnknownBlockType _selectAction;
    UIView *_gradientView;
    UIView *_maskView;
    UIView *_contentView;
    UILabel *_tipsLabel;
    UIImageView *_iconView;
    double _curruntShowingPlayRate;
    double _vernierY;
    double _panelAppearDurationConfig;
    double _gradientViewAppearDistanceYConfig;
    double _distanceMoveXLimitConfig;
    WCFinderFeedContentVM *_contentVM;
    WCFinderNormalProgressBar *_progressBar;
    struct CGPoint _lastGesturePos;
    struct CGPoint _startGesturePos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderNormalProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) double distanceMoveXLimitConfig; // @synthesize distanceMoveXLimitConfig=_distanceMoveXLimitConfig;
@property(nonatomic) double gradientViewAppearDistanceYConfig; // @synthesize gradientViewAppearDistanceYConfig=_gradientViewAppearDistanceYConfig;
@property(nonatomic) double panelAppearDurationConfig; // @synthesize panelAppearDurationConfig=_panelAppearDurationConfig;
@property(nonatomic) struct CGPoint startGesturePos; // @synthesize startGesturePos=_startGesturePos;
@property(nonatomic) struct CGPoint lastGesturePos; // @synthesize lastGesturePos=_lastGesturePos;
@property(nonatomic) double vernierY; // @synthesize vernierY=_vernierY;
@property(nonatomic) _Bool currentIsTouchingBtn; // @synthesize currentIsTouchingBtn=_currentIsTouchingBtn;
@property(nonatomic) double curruntShowingPlayRate; // @synthesize curruntShowingPlayRate=_curruntShowingPlayRate;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) CDUnknownBlockType shownAction; // @synthesize shownAction=_shownAction;
- (void)handleEnterBackgroundEvent;
- (void)onResignActive:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)removeObserver;
- (void)addObserver;
- (void)setProgressBarValue:(double)arg1;
- (void)_showGradientView;
- (void)handleLongPressGuesture:(id)arg1 stateModel:(id)arg2;
- (_Bool)isTouchingLockAreaWithGuesture:(id)arg1;
- (void)onDismiss;
- (void)onDismissAction;
- (void)showOnView:(id)arg1 withVM:(id)arg2;

@end

