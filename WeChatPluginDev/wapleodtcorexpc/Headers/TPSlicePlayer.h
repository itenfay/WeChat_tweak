//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TPPlayerLayerViewContainer, TPPlayerLogContext, TPPlayerVideo;

@interface TPSlicePlayer
{
    _Bool needToCacheNext;
    _Bool isPlayInPIP;
    _Bool _needToNotifySeekCompleteAfterPrepared;
    _Bool _needToSwitchPlayerAfterPrepared;
    _Bool _isPausedByUser;
    _Bool _isCachingNext;
    long long _currentClipIndex;
    TPPlayerLayerViewContainer *_containerView;
    long long _playOrder;
    double _VROutputInterval;
    TPPlayerVideo *_video;
    TPSlicePlayer *_nextPlayer;
    TPPlayerLogContext *_log;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TPPlayerLogContext *log; // @synthesize log=_log;
@property(nonatomic) _Bool isCachingNext; // @synthesize isCachingNext=_isCachingNext;
@property(nonatomic) _Bool isPausedByUser; // @synthesize isPausedByUser=_isPausedByUser;
@property(nonatomic) _Bool needToSwitchPlayerAfterPrepared; // @synthesize needToSwitchPlayerAfterPrepared=_needToSwitchPlayerAfterPrepared;
@property(nonatomic) _Bool needToNotifySeekCompleteAfterPrepared; // @synthesize needToNotifySeekCompleteAfterPrepared=_needToNotifySeekCompleteAfterPrepared;
@property(retain, nonatomic) TPSlicePlayer *nextPlayer; // @synthesize nextPlayer=_nextPlayer;
@property(retain, nonatomic) TPPlayerVideo *video; // @synthesize video=_video;
@property(nonatomic) double VROutputInterval; // @synthesize VROutputInterval=_VROutputInterval;
@property(nonatomic) long long playOrder; // @synthesize playOrder=_playOrder;
@property(retain, nonatomic) TPPlayerLayerViewContainer *containerView; // @synthesize containerView=_containerView;
- (void)setIsPlayInPIP:(_Bool)arg1;
- (_Bool)isPlayInPIP;
- (void)setCurrentClipIndex:(long long)arg1;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(struct CGSize)arg2;
- (void)player:(id)arg1 onVideoFrame:(struct __CVBuffer *)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 airplayDidActive:(_Bool)arg2;
- (void)player:(id)arg1 seekCompleted:(_Bool)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (long long)currentClipIndex;
- (void)switchToNextPlayer;
@property(readonly, nonatomic) _Bool needToCacheNext; // @synthesize needToCacheNext;
- (void)jumpToSlice:(long long)arg1 offsetPosition:(long long)arg2 withSeekMode:(long long)arg3;
- (id)assemblePlayerWithOrder:(unsigned long long)arg1 autoSwitchPlayer:(_Bool)arg2 needToNotifySeekComplete:(_Bool)arg3 previousPlayer:(id)arg4;
- (void)cachePlayerWithOrder:(unsigned long long)arg1 video:(id)arg2 autoSwitchPlayer:(_Bool)arg3 needToNotifySeekComplete:(_Bool)arg4;
- (void)cacheNext;
- (void)playNext;
- (void)startOutputFrame:(double)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(_Bool)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setRate:(float)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (long long)totalBufferedDuration;
- (void)updateVideo:(id)arg1;
- (void)loadVideo:(id)arg1;
- (void)updateContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

