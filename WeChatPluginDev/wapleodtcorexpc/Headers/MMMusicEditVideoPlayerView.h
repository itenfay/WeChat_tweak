//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicEditVideoMediaWrap, NSString, WCFinderFeedMediaWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol MMMusicEditVideoPlayerDelegate;

@interface MMMusicEditVideoPlayerView
{
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
    unsigned int _nativeViewId;
    WCPlayerView *_playerView;
    id <MMMusicEditVideoPlayerDelegate> _delegate;
    WCPlayerPlayArgs *_playerInfo;
    MMMusicEditVideoMediaWrap *_mediaWrap;
    NSString *_videoPath;
    WCFinderFeedMediaWrap *_finderMediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedMediaWrap *finderMediaWrap; // @synthesize finderMediaWrap=_finderMediaWrap;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) MMMusicEditVideoMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) __weak id <MMMusicEditVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int nativeViewId; // @synthesize nativeViewId=_nativeViewId;
- (void)setPlayerView:(id)arg1;
- (id)playerView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoBeginPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (double)videoDuration;
- (struct CGSize)videoSize;
- (double)currentPlayedTime;
- (_Bool)isPlaying;
- (id)genAvPlayerView;
- (void)destroy;
- (id)syncCaptureVideo;
- (void)seek:(double)arg1;
- (void)stop;
- (void)pause;
- (void)mutePlay;
- (void)play;
- (void)setMediaInfo:(id)arg1 initialTime:(double)arg2 shouldPlay:(_Bool)arg3;
- (void)setVideoPath:(id)arg1 initialTime:(double)arg2;
- (void)resetPlayerStatus;
- (void)dealloc;
- (id)initWithViewId:(unsigned int)arg1 delegate:(id)arg2;
- (void)setBufferTimeArr:(id)arg1;
- (void)setPreloadSec:(float)arg1;
- (void)setDownloadGrading:(float)arg1;
- (void)setMinBufferLength:(float)arg1 maxBufferLength:(float)arg2;
- (void)setAccurateSeek:(_Bool)arg1;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setPlayRate:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setLoop:(_Bool)arg1;
- (void)setAutoPlay:(_Bool)arg1;
- (void)initPlayerInfoWithMediaInfo:(id)arg1 initialTime:(double)arg2;
- (void)initPlayerInfoWithVideoPath:(id)arg1 initialTime:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

