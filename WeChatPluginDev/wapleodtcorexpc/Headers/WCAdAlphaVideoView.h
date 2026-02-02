//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVMutableVideoComposition, AVPlayerItemVideoOutput, CADisplayLink, NSString, WCADVideoPlayInfo, WCAdAlphaVideoMetalRender, WCDataItem, WCMediaItem, WCPlayerPlayArgs, WCPlayerView, WCSNSADPlayerControlView;
@protocol WCAdAlphaVideoViewDelegate;

@interface WCAdAlphaVideoView
{
    _Bool _bTimelineScene;
    _Bool _readyToAddPlayCount;
    _Bool _intentToPlay;
    float _periodicTimeInterval;
    int _videoCompositeType;
    id <WCAdAlphaVideoViewDelegate> _delegate;
    WCMediaItem *_mediaData;
    WCDataItem *_dataItem;
    WCADVideoPlayInfo *_adPlayInfo;
    WCPlayerView *_wcPlayerView;
    WCSNSADPlayerControlView *_controlView;
    WCPlayerPlayArgs *_playerArgs;
    AVMutableVideoComposition *_videoComposition;
    double _lastPlaybackTime;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_displayLink;
    WCAdAlphaVideoMetalRender *_metalRender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdAlphaVideoMetalRender *metalRender; // @synthesize metalRender=_metalRender;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(nonatomic) double lastPlaybackTime; // @synthesize lastPlaybackTime=_lastPlaybackTime;
@property(nonatomic) _Bool intentToPlay; // @synthesize intentToPlay=_intentToPlay;
@property(nonatomic) _Bool readyToAddPlayCount; // @synthesize readyToAddPlayCount=_readyToAddPlayCount;
@property(nonatomic) int videoCompositeType; // @synthesize videoCompositeType=_videoCompositeType;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) WCSNSADPlayerControlView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *wcPlayerView; // @synthesize wcPlayerView=_wcPlayerView;
@property(nonatomic) float periodicTimeInterval; // @synthesize periodicTimeInterval=_periodicTimeInterval;
@property(retain, nonatomic) WCADVideoPlayInfo *adPlayInfo; // @synthesize adPlayInfo=_adPlayInfo;
@property(nonatomic) _Bool bTimelineScene; // @synthesize bTimelineScene=_bTimelineScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(nonatomic) __weak id <WCAdAlphaVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearRender;
- (void)displayLinkCallback:(id)arg1;
- (void)setupMetalRender;
- (_Bool)shouldUseCustomRender;
- (id)createVideoCompositionWithAsset:(id)arg1;
- (double)fetchCurrentPlaybackTimeMs;
- (double)fetchCurrentPlaybackTime;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayerCreated;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onWCPlayerPlayEnd:(_Bool)arg1;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)checkWCSightViewState;
- (void)updatePlayerSubviewsLayout;
- (void)setPlayEndPos:(float)arg1;
- (void)setPlayBeginPos:(float)arg1;
- (void)seekWCPlayerToTime:(double)arg1 needAddPlayCount:(_Bool)arg2 pauseFirstWhenPlaying:(_Bool)arg3;
- (void)exitVideoPlay;
- (_Bool)isWCPlayerPlaying;
- (void)pauseWCPlayer;
- (void)startWCPlayer;
- (void)setupWCPlayerView;
- (_Bool)isSightVideoExist;
- (void)clearShortVideo;
- (void)mergeWCPlaybackInfo;
- (void)updateWCPlayTotalTime:(double)arg1;
- (void)tryAddVideoPlayCount;
- (id)fetchVideoPlayInfo;
- (void)onTimeLineVcWillPop;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (void)addNotification;
- (void)setFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (void)initData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mediaData:(id)arg2 videoCompositeType:(int)arg3 dataItem:(id)arg4 bTimelineScene:(_Bool)arg5 adPlayInfo:(id)arg6 periodicTimeInterval:(float)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

