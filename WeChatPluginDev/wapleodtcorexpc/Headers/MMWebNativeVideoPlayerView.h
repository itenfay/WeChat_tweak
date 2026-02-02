//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebNativeVideoMediaWrap, NSString, WCFinderFeedMediaWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol MMWebNativeVideoPlayerDelegate;

@interface MMWebNativeVideoPlayerView : UIView
{
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
    unsigned int _nativeViewId;
    WCPlayerView *_playerView;
    id <MMWebNativeVideoPlayerDelegate> _delegate;
    WCPlayerPlayArgs *_playerInfo;
    long long _mediaType;
    MMWebNativeVideoMediaWrap *_webMediaWrap;
    NSString *_videoPath;
    WCFinderFeedMediaWrap *_finderMediaWrap;
}

+ (unsigned int)playerCountGlobal;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedMediaWrap *finderMediaWrap; // @synthesize finderMediaWrap=_finderMediaWrap;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) MMWebNativeVideoMediaWrap *webMediaWrap; // @synthesize webMediaWrap=_webMediaWrap;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) __weak id <MMWebNativeVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int nativeViewId; // @synthesize nativeViewId=_nativeViewId;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)stopObserveVolume;
- (void)startObserveVolume;
- (void)hiddenThumbImageView;
- (void)showThumbImageView;
- (void)onCreateThumbImage:(id)arg1;
- (void)onReceiveAllVideoData;
- (void)onVideoPlayFinish;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)hiddenBufferingView;
- (void)showBufferingView;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoDidPlayToEndTime;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)updateVideoCurrentTime:(double)arg1;
- (void)onVideoBeginPlay;
- (void)onVideoPrepareToPlay:(id)arg1;
- (unsigned int)playerType;
- (double)videoDuration;
- (struct CGSize)videoSize;
- (double)currentPlayedTime;
- (_Bool)isPlaying;
- (id)genAvPlayerView;
- (id)corePlayerView;
- (void)destroy;
- (id)syncCaptureVideo;
- (void)seek:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setFinderMediaWrap:(id)arg1 playerInfo:(id)arg2 initialTime:(double)arg3;
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
- (id)mediaWrap;
- (void)enableQuic;
- (void)updateMediaWrapWithDownloadConfiguration:(id)arg1;
- (void)initFinderPlayerInfoWithInitialTime:(double)arg1 mediaWrap:(id)arg2 playArgs:(id)arg3;
- (void)initDefaultPlayerInfoWithVideoPath:(id)arg1 initialTime:(double)arg2;
- (void)trySetupDefaultPlayArgs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

