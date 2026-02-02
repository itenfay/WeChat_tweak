//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, SimpleAudioPlayer;
@protocol AudioDataRead;

@interface WavAudioPlayer
{
    unsigned int _m_currentReadPos;
    unsigned int _m_bitsPerChannel;
    unsigned int _m_framesPerPacket;
    unsigned int _m_channesPerFrame;
    SimpleAudioPlayer *_m_audioPlayer;
    id <AudioDataRead> _m_audioData;
    double _m_sampleRateForBuffer;
    NSRecursiveLock *_dataLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
@property(nonatomic) unsigned int m_channesPerFrame; // @synthesize m_channesPerFrame=_m_channesPerFrame;
@property(nonatomic) unsigned int m_framesPerPacket; // @synthesize m_framesPerPacket=_m_framesPerPacket;
@property(nonatomic) unsigned int m_bitsPerChannel; // @synthesize m_bitsPerChannel=_m_bitsPerChannel;
@property(nonatomic) double m_sampleRateForBuffer; // @synthesize m_sampleRateForBuffer=_m_sampleRateForBuffer;
@property(nonatomic) unsigned int m_currentReadPos; // @synthesize m_currentReadPos=_m_currentReadPos;
@property(retain, nonatomic) id <AudioDataRead> m_audioData; // @synthesize m_audioData=_m_audioData;
@property(retain, nonatomic) SimpleAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
- (void)onAudioBufferPlayEnd;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (double)simpleRateForBuffer;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (_Bool)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;
- (id)initWithSampleRate:(double)arg1 bitsPerChannel:(unsigned int)arg2 framesPerPacket:(unsigned int)arg3 channelsPerFrame:(unsigned int)arg4;
- (id)init;
- (void)setSampleRate:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

