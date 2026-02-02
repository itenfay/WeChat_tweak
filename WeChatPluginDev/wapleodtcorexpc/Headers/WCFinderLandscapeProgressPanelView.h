//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UILabel, WCFinderFullScrollTextView, WCFinderProgressBar;

@interface WCFinderLandscapeProgressPanelView
{
    WCFinderProgressBar *_progressBar;
    WCFinderFullScrollTextView *_textView;
    unsigned long long _dragState;
    UILabel *_totalProgressTimeLabel;
    CAGradientLayer *_gradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UILabel *totalProgressTimeLabel; // @synthesize totalProgressTimeLabel=_totalProgressTimeLabel;
@property(nonatomic) unsigned long long dragState; // @synthesize dragState=_dragState;
@property(retain, nonatomic) WCFinderFullScrollTextView *textView; // @synthesize textView=_textView;
- (id)mediaCollectionView;
- (unsigned long long)progressStyle;
- (id)progressBar;
- (id)dynamicWhiteColor;
- (id)allViewsExceptProgressBar;
- (void)resetViewsAlpha;
- (void)setViewsAlphaZero;
- (void)hideSelfAndResetElemState;
- (void)setViews:(id)arg1 alpha:(double)arg2;
- (void)hideSelfAndResetElemStateWithDelayTime:(double)arg1;
- (void)cancelPreviousHideSelfAndResetElemFunc;
- (void)handleWithDraggingState:(unsigned long long)arg1;
- (id)genTextView;
- (void)setupTextViewIfNeeded;
- (void)updateControlsHiddenState;
- (void)updateSubviewsStyle;
- (double)getBottomGradientPositionY;
- (_Bool)isShowing;
- (void)resetUIViewState;
- (void)updateControlsLayout;
- (void)updateControlsEnhanceColor;
- (void)layoutProgressBar;
- (void)updateProgressElementsWithCurrentPlayPosition:(double)arg1 videoDuration:(double)arg2 forbidProgressBarMovAnim:(_Bool)arg3 contentVM:(id)arg4 manual:(_Bool)arg5;

@end

