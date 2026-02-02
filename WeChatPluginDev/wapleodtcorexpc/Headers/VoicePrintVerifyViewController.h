//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;
@protocol VoicePrintVerifyViewControllerDelegate;

@interface VoicePrintVerifyViewController
{
    _Bool _recordButtonPressed;
    _Bool _recording;
    id <VoicePrintVerifyViewControllerDelegate> _delegate;
    NSString *_digits;
    MMTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic, getter=isRecordButtonPressed) _Bool recordButtonPressed; // @synthesize recordButtonPressed=_recordButtonPressed;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(nonatomic) __weak id <VoicePrintVerifyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onVolumeChanged:(double)arg1;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onTimeout;
- (void)onClose;
- (void)onOK;
- (void)reset;
- (void)showOK;
- (void)showError:(id)arg1 canRecover:(_Bool)arg2;
- (void)onStopRecord;
- (void)stopRecord;
- (void)attemptStopRecordForReason:(unsigned int)arg1;
- (void)onStartRecord;
- (void)showAutioConflictToastWithCompletion:(CDUnknownBlockType)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

