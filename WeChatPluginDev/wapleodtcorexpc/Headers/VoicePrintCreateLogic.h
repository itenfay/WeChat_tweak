//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSNumber, NSString, VoicePrintCreateViewController, VoicePrintEnvironmentChecker, VoicePrintMgr, VoicePrintRecorder, VoicePrintResourceItem;

@interface VoicePrintCreateLogic : NSObject
{
    _Bool _firstRecording;
    _Bool _needVerify;
    VoicePrintResourceItem *_resourceItem;
    MMUIViewController *_fromViewController;
    VoicePrintCreateViewController *_createViewController;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _closeHandler;
    NSNumber *_result;
    VoicePrintMgr *_voicePrintManager;
    VoicePrintRecorder *_recorder;
    VoicePrintEnvironmentChecker *_environmentChecker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoicePrintEnvironmentChecker *environmentChecker; // @synthesize environmentChecker=_environmentChecker;
@property(retain, nonatomic) VoicePrintRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) VoicePrintMgr *voicePrintManager; // @synthesize voicePrintManager=_voicePrintManager;
@property(nonatomic) _Bool needVerify; // @synthesize needVerify=_needVerify;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
@property(nonatomic, getter=isFirstRecording) _Bool firstRecording; // @synthesize firstRecording=_firstRecording;
@property(copy, nonatomic) CDUnknownBlockType closeHandler; // @synthesize closeHandler=_closeHandler;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) VoicePrintCreateViewController *createViewController; // @synthesize createViewController=_createViewController;
@property(nonatomic) __weak MMUIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) VoicePrintResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
- (void)onVolumeChanged:(double)arg1;
- (void)onRecordingOK;
- (void)onRecordingFirstStepOK;
- (void)onRecordingFailedWithError:(id)arg1 rollback:(unsigned int)arg2;
- (void)onRecordingStopWithLoading:(_Bool)arg1;
- (void)onRecordingStart;
- (void)forceRecordButtonLift;
- (_Bool)isRecordButtonPressed;
- (void)onCannotActivateAudioWithWording:(id)arg1;
- (id)digitTitle;
- (void)onRecordButtonLifted;
- (void)onRecordButtonPressed;
- (void)onVerifyAfterOK;
- (void)onCreateClose;
- (void)onCreateError;
- (void)prepare;
- (void)endCreateWithResult:(unsigned int)arg1;
- (void)showCreate;
- (void)checkEnvironment;
- (void)requestMicrophoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)attemptGetResourceWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentCreateViewController;
- (void)startLogicFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2 closeHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

