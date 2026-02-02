//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPipContentSourcePlaybackDelegateObj, WCPlayerPipDisplayLayerView;

@interface WCPipContentSourcePlayer_SampleBuffer
{
    _Bool _isPlaying;
    _Bool _isCompleted;
    int _pipControllerPlayState;
    WCPlayerPipDisplayLayerView *_displayLayerView;
    double _duration;
    double _seekingTime;
    WCPipContentSourcePlaybackDelegateObj *_playbackDelegateObj;
    CDUnknownBlockType _seekCompletionHandler;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType seekCompletionHandler; // @synthesize seekCompletionHandler=_seekCompletionHandler;
@property(retain, nonatomic) WCPipContentSourcePlaybackDelegateObj *playbackDelegateObj; // @synthesize playbackDelegateObj=_playbackDelegateObj;
@property(nonatomic) int pipControllerPlayState; // @synthesize pipControllerPlayState=_pipControllerPlayState;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double seekingTime; // @synthesize seekingTime=_seekingTime;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) WCPlayerPipDisplayLayerView *displayLayerView; // @synthesize displayLayerView=_displayLayerView;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(CDStruct_1ef3fb1f)arg2;
- (CDStruct_e83c9415)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (_Bool)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (void)pictureInPictureController:(id)arg1 setPlaying:(_Bool)arg2;
- (_Bool)isCurrentPlayingState;
- (void)onRenderedOneFrame:(id)arg1;
- (void)onPlayCallback:(double)arg1;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerEnterErrorState;
- (void)setLoopBack:(_Bool)arg1;
- (void)setRate:(double)arg1;
- (void)onBufferingComplete;
- (void)onStartBuffering;
- (void)seekTo:(double)arg1;
- (void)pause:(_Bool)arg1;
- (void)play;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (_Bool)isEnqueueSampleBufferType;
- (void)cleanResourceWhenPipNotSuccStart;
- (void)createPipResouce;
- (void)occupyAudioModuleSucc:(_Bool)arg1;
- (void)unregisterPipResourcre;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

