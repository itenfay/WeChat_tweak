//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock;

@interface SilkAudioRecorder
{
    _Bool m_isNeedRestartAudioTalk;
    NSRecursiveLock *m_prepareSentLock;
    _Bool m_isPrepareSent;
    double m_smapleRate;
    double m_voiceRate;
}

+ (id)encodePcmBuffer:(id)arg1 Encoder:(struct AudioCoder *)arg2 SampleRate:(double)arg3 NoiseSupression:(_Bool)arg4;
+ (void)encodePcmBuffer:(short *)arg1 withBufferSize:(unsigned int)arg2 WithRecorderState:(struct RecorderState *)arg3 WithNumberPackets:(unsigned int)arg4;
+ (void)outputPcmBuffer:(short *)arg1 withBufferSize:(unsigned int)arg2 WithRecorderState:(struct RecorderState *)arg3;
+ (double)GetDynmicVoiceRate;
+ (double)GetDynmicSampleRate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_prepareSentLock; // @synthesize m_prepareSentLock;
@property(nonatomic) _Bool m_isPrepareSent; // @synthesize m_isPrepareSent;
- (void)prepareBuffers;
- (unsigned int)audioDuration;
- (void)setVoiceRate:(double)arg1;
- (void)setSmapleRate:(double)arg1;
- (void)TimerCheckMeter;
- (void)setDataFormat;
- (long long)getVoiceFormat;
- (void)stop;
- (void)cleanResource;
- (void)stopButNotNotify;
- (_Bool)prepareRecordButNotNotify;
- (_Bool)prepareSend;
- (void)createSilkFile:(id)arg1;
- (void)createFile:(id)arg1;
- (void)selectInputDevice;
- (_Bool)isNeedSwitchBuiltInMicDataSource;
- (void)initSilkEncoder;
- (_Bool)prepareQueue;
- (void)notify;
- (_Bool)prepareRecord;
- (void)ayncPrepareRecordWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

