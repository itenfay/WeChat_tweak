//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAudioPlayer;

@interface TingAudioPlayer
{
    WCAudioPlayer *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAudioPlayer *player; // @synthesize player=_player;
- (void)wcAudioPlayer:(id)arg1 currentTime:(double)arg2 displayTime:(double)arg3 duration:(double)arg4;
- (void)wcAudioPlayer:(id)arg1 onEvent:(unsigned long long)arg2 audioInfo:(id)arg3 error:(id)arg4;
- (void)setVolume:(float)arg1;
- (void)setPlayRate:(float)arg1;
- (double)bufferedTime;
- (double)displayTime;
- (double)currentTime;
- (double)duration;
- (_Bool)canSeek;
- (void)seekToTime:(double)arg1;
- (void)stop;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)play;
- (void)prepareToPlay;
- (id)view;
- (int)playerKernelType;
- (id)audioInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

