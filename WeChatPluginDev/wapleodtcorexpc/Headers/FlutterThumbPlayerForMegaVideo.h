//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderSimplePlayerView;

@interface FlutterThumbPlayerForMegaVideo
{
    WCFinderSimplePlayerView *_finderPlayer;
    double _initStartPlayTime;
}

- (void).cxx_destruct;
@property(nonatomic) double initStartPlayTime; // @synthesize initStartPlayTime=_initStartPlayTime;
@property(retain, nonatomic) WCFinderSimplePlayerView *finderPlayer; // @synthesize finderPlayer=_finderPlayer;
- (void)onVideoHiddenBufferingView;
- (void)onVideoShowBufferingView;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)playerView:(id)arg1 onVideoFrameOut:(id)arg2;
- (void)playerView:(id)arg1 onVideoPrepareToPlay:(id)arg2;
- (id)getFeedbackInfo;
- (unsigned long long)flutterPlayerStateFromPlayerState:(unsigned long long)arg1;
- (unsigned long long)playerState;
- (struct __CVBuffer *)getCVPixelBuffer;
- (void)setPlaySpeed:(float)arg1;
- (void)destroy;
- (void)stop;
- (void)setLoop:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)seek:(double)arg1;
- (void)pause;
- (void)play;
- (void)prepare;
- (double)getVideoDuration;
- (struct CGSize)getVideoSize;
- (void)updaetFinderPlayer:(id)arg1;
- (void)setupStartPlayPostionMs:(long long)arg1;
- (void)setupFinderObject:(id)arg1;
- (id)initWithPlayerId:(id)arg1 registry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

