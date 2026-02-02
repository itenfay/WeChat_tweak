//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AQAudioRecorder
{
    _Bool mIsNeedRestartMusic;
    _Bool mIsNeedRestartAudioTalk;
    _Bool mDisableWritingToFile;
    _Bool _enableMultiChannel;
    float _pcmSampleRate;
    unsigned int _maxAudioChannels;
    unsigned long long _firstTimeStamp;
}

@property(nonatomic) unsigned int maxAudioChannels; // @synthesize maxAudioChannels=_maxAudioChannels;
@property(nonatomic) _Bool enableMultiChannel; // @synthesize enableMultiChannel=_enableMultiChannel;
@property(nonatomic) float pcmSampleRate; // @synthesize pcmSampleRate=_pcmSampleRate;
@property(nonatomic) unsigned long long firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
@property(nonatomic) _Bool disableWritingToFile; // @synthesize disableWritingToFile=mDisableWritingToFile;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=mIsNeedRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=mIsNeedRestartMusic;
- (void)autostop;
- (void)cleanResource;
- (void)record;
- (_Bool)prepareRecordWithPCMFile:(id)arg1;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (id)init;
- (void)setMagicCookieToAudioFile:(struct OpaqueAudioFileID *)arg1;
- (void)prepareBuffers;
- (void)setDataFormat_PCM;
- (void)createAudioFile_WAVE:(id)arg1 Fd:(struct OpaqueAudioFileID **)arg2;

@end

