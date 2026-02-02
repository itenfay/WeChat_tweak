//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPlayerPlayArgs, WCPlayerView;

@interface WSWebFinderVideoPlayerLogic
{
    WCPlayerView *playerView;
    WCPlayerView *_retainPlayerView;
    WCPlayerPlayArgs *_playerPlayArgs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlayArgs *playerPlayArgs; // @synthesize playerPlayArgs=_playerPlayArgs;
@property(retain, nonatomic) WCPlayerView *retainPlayerView; // @synthesize retainPlayerView=_retainPlayerView;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)onReceiveAllVideoData;
- (void)onDownloadProgressChange:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoFristFrameRendered;
- (void)onAudioFirstFrameRendered;
- (void)seek:(double)arg1;
- (void)setLoop:(_Bool)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)destroy;
- (void)stop;
- (void)pause;
- (void)play;
- (_Bool)isPlaying;
- (id)createPlayerView:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithViewId:(unsigned int)arg1 andPlayerPlayArgs:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

