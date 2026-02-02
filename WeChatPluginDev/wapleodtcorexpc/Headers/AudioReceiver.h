//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol MsgAudioPlayerProtocol;

@interface AudioReceiver
{
    id <MsgAudioPlayerProtocol> m_audioPlayer;
}

- (void).cxx_destruct;
- (void)audioPlayer:(id)arg1 didChangePeakPower:(float)arg2;
- (void)onEarTip;
- (void)audioPlayerDidFinishPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)audioPlayerBeginPlaying:(id)arg1 success:(_Bool)arg2;
- (void)onGetLevelMeterPeak:(float)arg1 playData:(id)arg2;
- (void)notifyOnEndPlaying:(id)arg1 isForceStop:(_Bool)arg2;
- (void)notifyOnPlaying:(id)arg1 success:(_Bool)arg2;
- (void)setProgress:(unsigned int)arg1;
- (int)getCurrentTimeMs;
- (_Bool)isPlaying;
- (_Bool)StopPlay;
- (void)AsyncStartPlay:(id)arg1 Path:(id)arg2 Resume:(_Bool)arg3;
- (_Bool)StartPlay:(id)arg1 Path:(id)arg2 Resume:(_Bool)arg3;
- (_Bool)StartPlay:(id)arg1 Path:(id)arg2;
- (_Bool)StartPlay:(id)arg1;
- (unsigned int)getAudioFormatWithMsg:(id)arg1 path:(id)arg2;
- (id)generatePlayerWithAudioFormat:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

