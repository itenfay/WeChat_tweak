//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJRecordingControl, MMUIButton, NSString;
@protocol MJNarrationRecordingControlViewDelegate;

@interface MJNarrationRecordingControlView : UIView
{
    _Bool _isHoldRecording;
    id <MJNarrationRecordingControlViewDelegate> _delegate;
    unsigned long long _narrationType;
    MJRecordingControl *_backingControl;
    MMUIButton *_typeSwitchButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *typeSwitchButton; // @synthesize typeSwitchButton=_typeSwitchButton;
@property(retain, nonatomic) MJRecordingControl *backingControl; // @synthesize backingControl=_backingControl;
@property(nonatomic) unsigned long long narrationType; // @synthesize narrationType=_narrationType;
@property(nonatomic) _Bool isHoldRecording; // @synthesize isHoldRecording=_isHoldRecording;
@property(nonatomic) __weak id <MJNarrationRecordingControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)typeSwitchButtonDidTouchUpInside:(id)arg1;
- (void)switchToNarrationType:(unsigned long long)arg1;
- (id)_getReportNameWithNarrationType:(unsigned long long)arg1;
- (void)cancelHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)beginHoldRecordingImpl;
- (void)recordingControlDidCancelRecording:(id)arg1;
- (void)recordingControlDidStopRecording:(id)arg1;
- (void)recordingControlDidStartRecording:(id)arg1;
- (void)forceStopRecordingManually;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (void)impactFeedback;
- (void)reset;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutViews;
- (void)setupTypeSwitchButton;
- (void)setupBackingControl;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 narrationType:(unsigned long long)arg2;
- (id)initWithNarrationType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

