//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface AudioPlayingEventMgr
{
    NSMutableArray *m_AVAudioPlayers;
    NSMutableArray *m_AVPlayers;
    NSMutableArray *m_OpenALs;
    NSMutableArray *m_audioUnits;
    NSMutableArray *m_webViews;
    _Bool _canPlaySound;
}

+ (void)hookAudio;
- (void).cxx_destruct;
@property(nonatomic) _Bool canPlaySound; // @synthesize canPlaySound=_canPlaySound;
- (void)onWebViewControllerDisappear:(id)arg1;
- (void)onWebViewControllerAppear:(id)arg1;
- (void)onSystemSoundWillPlay:(unsigned int)arg1 stop:(inout _Bool *)arg2;
- (void)onALDeleteSources:(unsigned int)arg1;
- (void)onALGenSources:(unsigned int)arg1;
- (void)onALSourcePlayBegin:(unsigned int)arg1;
- (void)onALSourcefBegin:(unsigned int)arg1 param:(int)arg2 value:(float)arg3 stop:(inout _Bool *)arg4;
- (void)onSetScheduleAudioSlice:(struct ScheduledAudioSlice *)arg1;
- (void)onAudioUnitPlaybackEnd:(struct AudioBufferList *)arg1;
- (void)onAudioQueue:(struct OpaqueAudioQueue *)arg1 willEnqueueBuffer:(struct AudioQueueBuffer *)arg2;
- (void)onAudioQueueNewOutput:(struct OpaqueAudioQueue *)arg1;
- (void)onAVPlayer:(id)arg1 setVolume:(float)arg2 stop:(inout _Bool *)arg3;
- (void)onAVPlayerWillPlay:(id)arg1;
- (void)onAVPlayerInit:(id)arg1;
- (void)onAVAudioPlayer:(id)arg1 setVolume:(float)arg2 stop:(inout _Bool *)arg3;
- (void)onAVAudioPlayerWillPlay:(id)arg1;
- (void)onAVAudioPlayerInit:(id)arg1;
- (void)onLeaveWebView;
- (void)onEnterWebView;
- (void)turnAllAudioPlayerVolumeOn:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isWebViewPlaying;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

