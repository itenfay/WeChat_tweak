//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SimpleAudioPlayer;
@protocol AudioDataRead;

@interface SilkAudioPlayerV2
{
    int _m_sampleRate;
    int _m_currentPcmBytePos;
    struct AudioDecoder *m_decoder;
    SimpleAudioPlayer *_m_audioPlayer;
    id <AudioDataRead> _m_audioData;
}

- (void).cxx_destruct;
@property(nonatomic) int m_currentPcmBytePos; // @synthesize m_currentPcmBytePos=_m_currentPcmBytePos;
@property(nonatomic) int m_sampleRate; // @synthesize m_sampleRate=_m_sampleRate;
@property(retain, nonatomic) id <AudioDataRead> m_audioData; // @synthesize m_audioData=_m_audioData;
@property(retain, nonatomic) SimpleAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
@property(nonatomic) struct AudioDecoder *m_decoder; // @synthesize m_decoder;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (double)simpleRateForBuffer;
- (void)onAudioBufferPlayEnd;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (void)prepareSilkBuffer;
- (double)duration;
- (_Bool)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

