//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAudioPlayer, NSString;

@interface SimpleCommonPlayer
{
    AVAudioPlayer *_m_audioPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
- (void)setNumberOfLoops:(long long)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (double)duration;
- (void)setVolume:(float)arg1;
- (_Bool)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

