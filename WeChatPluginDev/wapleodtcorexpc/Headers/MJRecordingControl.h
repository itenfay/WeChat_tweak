//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MJGradientView, NSString, UIImage, UIImageView, UIImpactFeedbackGenerator, UILabel, UIView;
@protocol MJRecordingControlDelegate;

@interface MJRecordingControl : UIControl
{
    id <MJRecordingControlDelegate> _delegate;
    UIImage *_initialIcon;
    UIImage *_recordingIcon;
    UIImage *_cancelIcon;
    NSString *_initialTitle;
    NSString *_initialTips;
    NSString *_recordingTitle;
    NSString *_cancelTitle;
    unsigned long long _recordingControlState;
    MJGradientView *_recordingBackgroundView;
    unsigned long long _options;
    UIImageView *_recordingIconView;
    UIView *_recordingShadowView;
    MJGradientView *_cancelBackgroundView;
    UIImageView *_cancelIconView;
    UIView *_cancelShadowView;
    UILabel *_initialTitleLabel;
    UILabel *_initialTipsLabel;
    UILabel *_recordingTitleLabel;
    UILabel *_cancelTitleLabel;
    UIImpactFeedbackGenerator *_feedback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) UILabel *cancelTitleLabel; // @synthesize cancelTitleLabel=_cancelTitleLabel;
@property(retain, nonatomic) UILabel *recordingTitleLabel; // @synthesize recordingTitleLabel=_recordingTitleLabel;
@property(retain, nonatomic) UILabel *initialTipsLabel; // @synthesize initialTipsLabel=_initialTipsLabel;
@property(retain, nonatomic) UILabel *initialTitleLabel; // @synthesize initialTitleLabel=_initialTitleLabel;
@property(retain, nonatomic) UIView *cancelShadowView; // @synthesize cancelShadowView=_cancelShadowView;
@property(retain, nonatomic) UIImageView *cancelIconView; // @synthesize cancelIconView=_cancelIconView;
@property(retain, nonatomic) MJGradientView *cancelBackgroundView; // @synthesize cancelBackgroundView=_cancelBackgroundView;
@property(retain, nonatomic) UIView *recordingShadowView; // @synthesize recordingShadowView=_recordingShadowView;
@property(retain, nonatomic) UIImageView *recordingIconView; // @synthesize recordingIconView=_recordingIconView;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) MJGradientView *recordingBackgroundView; // @synthesize recordingBackgroundView=_recordingBackgroundView;
@property(readonly, nonatomic) unsigned long long recordingControlState; // @synthesize recordingControlState=_recordingControlState;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) NSString *recordingTitle; // @synthesize recordingTitle=_recordingTitle;
@property(retain, nonatomic) NSString *initialTips; // @synthesize initialTips=_initialTips;
@property(retain, nonatomic) NSString *initialTitle; // @synthesize initialTitle=_initialTitle;
@property(retain, nonatomic) UIImage *cancelIcon; // @synthesize cancelIcon=_cancelIcon;
@property(retain, nonatomic) UIImage *recordingIcon; // @synthesize recordingIcon=_recordingIcon;
@property(retain, nonatomic) UIImage *initialIcon; // @synthesize initialIcon=_initialIcon;
@property(nonatomic) __weak id <MJRecordingControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forceStopRecordingManually;
- (void)_setupCancelViewsToHidden;
- (void)_setupCancelViewsToHold;
- (void)_setupCancelViewsToInitial;
- (void)_setupRecordingViewsToCancel;
- (void)_setupRecordingViewsToHold;
- (void)_setupRecordingViewsToInitial;
- (void)_updateRecordingControlFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_updateRecordingControlState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setupAllToInitialState;
- (void)_updateIcons;
- (_Bool)_touchInsideCancel:(id)arg1 withEvent:(id)arg2;
- (_Bool)_touchInsideRecording:(id)arg1 withEvent:(id)arg2;
- (void)_cancel;
- (void)_endWithPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_continueWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_beginWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (void)impactFeedback;
- (void)resetToInitialState;
- (void)commonLayout;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

@end

