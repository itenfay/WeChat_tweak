//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol VoicePrintCreateViewControllerDelegate;

@interface VoicePrintCreateViewController
{
    _Bool _recordButtonPressed;
    id <VoicePrintCreateViewControllerDelegate> _delegate;
    NSString *_digits;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isRecordButtonPressed) _Bool recordButtonPressed; // @synthesize recordButtonPressed=_recordButtonPressed;
@property(retain, nonatomic) NSString *digits; // @synthesize digits=_digits;
@property(nonatomic) __weak id <VoicePrintCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onVolumeChanged:(double)arg1;
- (void)onStopRecordWithLoading:(_Bool)arg1;
- (void)onStartRecord;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onVerifyAfterOK;
- (void)onOK;
- (void)onClose;
- (void)forceRecordButtonLift;
- (void)showOK;
- (void)showRollbackToFirstWithWording:(id)arg1;
- (void)showCreateError:(id)arg1 rollback:(unsigned int)arg2;
- (void)createReset;
- (void)showCreate;
- (void)prepareReset;
- (void)showPrepareError:(id)arg1 canRecover:(_Bool)arg2;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

