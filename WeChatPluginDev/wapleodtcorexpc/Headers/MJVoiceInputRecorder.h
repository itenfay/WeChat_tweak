//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SimpleAudioRecorder;
@protocol MJVoiceInputRecorderDelegate;

@interface MJVoiceInputRecorder : NSObject
{
    _Bool _hasStopped;
    unsigned int _outputPCMBufferLength;
    id <MJVoiceInputRecorderDelegate> _delegate;
    SimpleAudioRecorder *_recorder;
    NSString *_identifier;
}

+ (double)durationFromPCMBufLength:(long long)arg1 bitsPerChannel:(long long)arg2 channelCount:(long long)arg3 sampleRate:(long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned int outputPCMBufferLength; // @synthesize outputPCMBufferLength=_outputPCMBufferLength;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) SimpleAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) _Bool hasStopped; // @synthesize hasStopped=_hasStopped;
@property(nonatomic) __weak id <MJVoiceInputRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleInterruptionBy3rdApp;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (double)simpleRateForBuffer;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (unsigned int)bitsPerChannel;
- (void)onAudioBufferRecordEnd;
- (void)outputPeakPower:(float)arg1;
- (void)outputPcmBuffer:(void *)arg1 bufferSize:(unsigned int)arg2;
- (_Bool)stopRecord;
- (void)startRecordAsyncWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)startRecord;
- (long long)currentRecordingTime;
- (_Bool)isRecording;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

