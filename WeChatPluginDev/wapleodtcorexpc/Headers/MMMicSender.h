//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMMicReceiver;

@interface MMMicSender
{
    long long startByteIndex;
    _Bool _needRestartMusic;
    _Bool _needRestartAudioTalk;
    _Bool _disableSendData;
    float _pcmSampleRate;
    int _channelCount;
    id <MMMicReceiver> _receiver;
    unsigned long long _firstTimeStamp;
    CDUnknownBlockType _queueAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType queueAction; // @synthesize queueAction=_queueAction;
@property(nonatomic) int channelCount; // @synthesize channelCount=_channelCount;
@property(nonatomic) _Bool disableSendData; // @synthesize disableSendData=_disableSendData;
@property(nonatomic) float pcmSampleRate; // @synthesize pcmSampleRate=_pcmSampleRate;
@property(nonatomic) unsigned long long firstTimeStamp; // @synthesize firstTimeStamp=_firstTimeStamp;
@property(nonatomic) _Bool needRestartAudioTalk; // @synthesize needRestartAudioTalk=_needRestartAudioTalk;
@property(nonatomic) _Bool needRestartMusic; // @synthesize needRestartMusic=_needRestartMusic;
@property(nonatomic) __weak id <MMMicReceiver> receiver; // @synthesize receiver=_receiver;
- (void)prepareBuffers;
- (void)setDataFormatPCM:(struct AudioStreamBasicDescription *)arg1;
- (struct AudioStreamBasicDescription *)format;
- (void)autostop;
- (void)stop;
- (void)cleanResource;
- (void)record;
- (_Bool)prepareRecord;
- (void)setDelegate:(id)arg1;
- (_Bool)canAutoRestart;
- (_Bool)shouldAutoRestartWith:(int)arg1;
- (void)handleQueue:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2 startTime:(const struct AudioTimeStamp *)arg3 inNumPackets:(unsigned int)arg4 inPacketDesc:(const struct AudioStreamPacketDescription *)arg5;

@end

