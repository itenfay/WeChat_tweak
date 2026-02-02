//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EVADProcessor, NSMutableArray, NSMutableDictionary, NSString, SimpleAudioRecorder, StreamInputResult, UploadStreamVoiceDataMgr;

@interface StreamVoiceInputLogic : NSObject
{
    unsigned int m_uiVoiceOffset;
    NSMutableArray *m_voiceIdArray;
    _Bool m_bStop;
    unsigned long long _startInputTiem;
    unsigned int _currentInputId;
    unsigned int _inputLanguageType;
    StreamInputResult *_result;
    long long _scene;
    double _silenceTimelimit;
    SimpleAudioRecorder *_recorder;
    UploadStreamVoiceDataMgr *_uploadMgr;
    EVADProcessor *_evad;
    NSMutableDictionary *_sequenceMap;
    NSString *_sessionId;
    NSString *_currentVoiceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentVoiceId; // @synthesize currentVoiceId=_currentVoiceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableDictionary *sequenceMap; // @synthesize sequenceMap=_sequenceMap;
@property(retain, nonatomic) EVADProcessor *evad; // @synthesize evad=_evad;
@property(retain, nonatomic) UploadStreamVoiceDataMgr *uploadMgr; // @synthesize uploadMgr=_uploadMgr;
@property(retain, nonatomic) SimpleAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) double silenceTimelimit; // @synthesize silenceTimelimit=_silenceTimelimit;
@property(readonly, nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(nonatomic) unsigned int currentInputId; // @synthesize currentInputId=_currentInputId;
@property(retain) StreamInputResult *result; // @synthesize result=_result;
- (void)handleInterruptionBy3rdApp;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)resetSquenceMap;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (void)onEndVoiceTrans:(unsigned int)arg1;
- (void)onNetworkError:(unsigned int)arg1;
- (void)onLocalFileOperationError;
- (void)onGetText:(id)arg1;
- (void)onVADDetectSilentTooLong;
- (void)onVADDetectDelayVoice:(id)arg1 Pcm:(id)arg2;
- (void)onVADFilterdSpeakingVoice:(id)arg1;
- (void)onVADDetectSpeakingToSlience:(long long)arg1 data:(id)arg2;
- (void)onVADDetectSlienceToSpeaking:(long long)arg1 data:(id)arg2 HasSpeak:(_Bool)arg3;
- (void)onVADDetectFirstStart:(id)arg1;
- (double)simpleRateForBuffer;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (void)onAudioBufferRecordEnd;
- (void)outputPeakPower:(float)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (void)setCheckMeterInterval:(double)arg1;
- (id)GetVoiceIds;
- (void)ExitVoiceInput;
- (_Bool)StopRecord;
- (void)asyncStartInput:(CDUnknownBlockType)arg1;
- (unsigned int)StartInput;
- (long long)getRecordingTime;
- (_Bool)isRecording;
- (id)initWithScene:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

