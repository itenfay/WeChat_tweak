//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSNumber, NSString, VoicePrintMgr, VoicePrintResourceItem, VoicePrintVerifyViewController;

@interface VoicePrintVerifyLogic : NSObject
{
    _Bool _loggedIn;
    _Bool _recordingTooShort;
    unsigned int _voiceId;
    NSString *_loggingUsername;
    NSString *_loggingTicket;
    MMUIViewController *_fromViewController;
    VoicePrintVerifyViewController *_verifyViewController;
    CDUnknownBlockType _completion;
    VoicePrintMgr *_voicePrintManager;
    VoicePrintResourceItem *_resourceItem;
    double _recordingBeginTime;
    NSNumber *_result;
    NSString *_randomAuthKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *randomAuthKey; // @synthesize randomAuthKey=_randomAuthKey;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
@property(nonatomic, getter=isRecordingTooShort) _Bool recordingTooShort; // @synthesize recordingTooShort=_recordingTooShort;
@property(nonatomic) double recordingBeginTime; // @synthesize recordingBeginTime=_recordingBeginTime;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId=_voiceId;
@property(retain, nonatomic) VoicePrintResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
@property(retain, nonatomic) VoicePrintMgr *voicePrintManager; // @synthesize voicePrintManager=_voicePrintManager;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) VoicePrintVerifyViewController *verifyViewController; // @synthesize verifyViewController=_verifyViewController;
@property(nonatomic) __weak MMUIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) NSString *loggingTicket; // @synthesize loggingTicket=_loggingTicket;
@property(retain, nonatomic) NSString *loggingUsername; // @synthesize loggingUsername=_loggingUsername;
@property(nonatomic, getter=isLoggedIn) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnVerifyOkWithRandomKey:(id)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnStartRecord;
- (void)onVerifyClose;
- (void)onVerifyEnded;
- (void)onVerifyStarted;
- (void)onAudioNotActiveOrInterrupted;
- (void)onMicrophonePermissionDenied;
- (void)endVerifyWithResult:(unsigned int)arg1;
- (void)presentVerifyViewController;
- (void)startLogicFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

