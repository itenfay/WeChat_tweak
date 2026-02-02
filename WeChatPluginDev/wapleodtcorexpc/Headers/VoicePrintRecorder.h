//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString, VoicePrintMgr;
@protocol VoicePrintRecorderDelegate;

@interface VoicePrintRecorder : NSObject
{
    _Bool _recording;
    _Bool _active;
    _Bool _recordingTooShort;
    unsigned int _resourceId;
    unsigned int _voiceId;
    unsigned int _retryCount;
    id <VoicePrintRecorderDelegate> _delegate;
    VoicePrintMgr *_voicePrintManager;
    double _recordingBeginTime;
    MMTimer *_timeoutTimer;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) MMTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic, getter=isRecordingTooShort) _Bool recordingTooShort; // @synthesize recordingTooShort=_recordingTooShort;
@property(nonatomic) double recordingBeginTime; // @synthesize recordingBeginTime=_recordingBeginTime;
@property(retain, nonatomic) VoicePrintMgr *voicePrintManager; // @synthesize voicePrintManager=_voicePrintManager;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned int voiceId; // @synthesize voiceId=_voiceId;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) unsigned int resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) __weak id <VoicePrintRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnStartRecord;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)stopRecord;
- (void)startRecordForResourceId:(unsigned int)arg1 isFirstStep:(_Bool)arg2;
- (void)deactiveAudio;
- (id)initWithManger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

