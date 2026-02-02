//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTVideoItemCellAutoMediaWrap, NSString, WCPlayerPlayArgs, WCPlayerView;
@protocol BTVideoItemCellAutoPlayerDelegate;

@interface BTVideoItemCellAutoPlayerView
{
    WCPlayerView *m_retainPlayerView;
    unsigned long long m_lastPlayerState;
    unsigned long long m_lastProcessState;
    unsigned int _nativeViewId;
    WCPlayerView *_playerView;
    id <BTVideoItemCellAutoPlayerDelegate> _delegate;
    WCPlayerPlayArgs *_playerInfo;
    BTVideoItemCellAutoMediaWrap *_mediaWrap;
    NSString *_videoPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) BTVideoItemCellAutoMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(nonatomic) __weak id <BTVideoItemCellAutoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int nativeViewId; // @synthesize nativeViewId=_nativeViewId;
- (void)setPlayerView:(id)arg1;
- (id)playerView;
- (void)hiddenBufferingView;
- (void)showBufferingView;
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
- (void)initPlayerInfoWithVideoPath:(id)arg1 initialTime:(double)arg2;

@end

