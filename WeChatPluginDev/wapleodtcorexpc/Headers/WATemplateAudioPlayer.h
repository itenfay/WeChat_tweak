//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVPlayer, MPVolumeView, NSMutableArray, NSString;

@interface WATemplateAudioPlayer
{
    float _m_lastVolume;
    NSMutableArray *_queue;
    AVPlayer *_audioPlayer;
    MPVolumeView *_m_privateVoulmeView;
}

- (void).cxx_destruct;
@property(nonatomic) float m_lastVolume; // @synthesize m_lastVolume=_m_lastVolume;
@property(retain, nonatomic) MPVolumeView *m_privateVoulmeView; // @synthesize m_privateVoulmeView=_m_privateVoulmeView;
@property(retain, nonatomic) AVPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void)resumeLastVolumn;
- (void)setSystemVolume:(float)arg1;
- (void)forceSetSystemVolume;
- (void)removeVolumeView;
- (void)forceSetVolumeView;
@property(readonly, nonatomic) _Bool isPlaying;
- (_Bool)playNextIfNeed;
- (void)playFinished;
- (void)stop;
- (void)play:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

