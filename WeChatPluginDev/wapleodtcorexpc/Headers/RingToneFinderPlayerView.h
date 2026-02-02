//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RingToneDetail, RingToneVibrateController, UIImage, UIImageView, WCFinderDataItem, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderPlayerControlView, WCPlayerView;

@interface RingToneFinderPlayerView
{
    _Bool _customVibrateEnabled;
    _Bool _readyToVibrateFlag;
    _Bool _isCurrentPlaying;
    WCPlayerView *_playerView;
    double _finderDuration;
    double _finderVideoPosition;
    unsigned long long _playTimeStamp;
    RingToneVibrateController *_vibrateController;
    RingToneDetail *_curRing;
    WCFinderPlayerControlView *_playerConfigControlView;
    WCFinderDataItem *_dataItem;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    NSString *_currentVideoTid;
    WCFinderFeedContentVM *_feedContentVM;
    UIImageView *_briefImageView;
    UIImage *_defaultImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIImageView *briefImageView; // @synthesize briefImageView=_briefImageView;
@property(retain, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool isCurrentPlaying; // @synthesize isCurrentPlaying=_isCurrentPlaying;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) RingToneDetail *curRing; // @synthesize curRing=_curRing;
@property(nonatomic) _Bool readyToVibrateFlag; // @synthesize readyToVibrateFlag=_readyToVibrateFlag;
@property(retain, nonatomic) RingToneVibrateController *vibrateController; // @synthesize vibrateController=_vibrateController;
@property(nonatomic) unsigned long long playTimeStamp; // @synthesize playTimeStamp=_playTimeStamp;
@property(nonatomic) double finderVideoPosition; // @synthesize finderVideoPosition=_finderVideoPosition;
@property(nonatomic) double finderDuration; // @synthesize finderDuration=_finderDuration;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool customVibrateEnabled; // @synthesize customVibrateEnabled=_customVibrateEnabled;
- (void)setAllowBackgroundPlay:(_Bool)arg1;
- (void)_reloadPlayView:(id)arg1;
- (void)onFeedContentUpdateByURLExpired:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnPlayerMoovReady:(id)arg1;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)tryDowngradePlay;
- (void)onVideoPlayFail:(unsigned long long)arg1;
- (void)checkPreloadTaskStatus;
- (void)onHiddenBufferingView;
- (void)onShowBufferingView;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onPlayToEnd;
- (void)onPlayerProxyIsUnAvaiable;
- (double)currentPlayTime;
- (void)seekToTime:(double)arg1;
- (void)contentMediaDidEndPlay;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (double)getCurrentPlayVideoTime;
- (void)pauseVideoIfSupport;
- (void)pauseVideoIfSupport:(_Bool)arg1;
- (void)playWithParams:(id)arg1;
- (void)createPlayerView:(double)arg1;
- (void)play;
- (void)stopVideoIfSupport;
- (void)changeDataSource:(id)arg1 ring:(id)arg2 feedContentVM:(id)arg3;
- (void)prepareForReuse;
- (void)restStatus;
- (void)resume;
- (void)pause;
- (void)stopPlay;
- (void)startToPlay;
- (void)playVideoMedia:(id)arg1;
- (void)playRing:(id)arg1;
- (void)dealloc;
- (void)changeFrame:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

