//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJRecordingControl, NSString;
@protocol MJRecordingControlViewDelegate;

@interface MJRecordingControlView : UIView
{
    _Bool _isHoldRecording;
    id <MJRecordingControlViewDelegate> _delegate;
    unsigned long long _backingControlOptions;
    MJRecordingControl *_backingControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJRecordingControl *backingControl; // @synthesize backingControl=_backingControl;
@property(nonatomic) unsigned long long backingControlOptions; // @synthesize backingControlOptions=_backingControlOptions;
@property(nonatomic) _Bool isHoldRecording; // @synthesize isHoldRecording=_isHoldRecording;
@property(nonatomic) __weak id <MJRecordingControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelHoldRecordingImpl;
- (void)endHoldRecordingImpl;
- (void)beginHoldRecordingImpl;
- (void)recordingControlDidCancelRecording:(id)arg1;
- (void)recordingControlDidStopRecording:(id)arg1;
- (void)recordingControlDidStartRecording:(id)arg1;
- (void)updateLevelMeterWithPeakPower:(float)arg1;
- (void)impactFeedback;
- (void)reset;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

