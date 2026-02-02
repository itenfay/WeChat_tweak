//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, KSSongInfo, NSString;
@protocol KSAudioPlayerDelegate;

@interface MMKSLiveAudioPlayer : NSObject
{
    _Bool _manualProcessInterrup;
    _Bool _pauseOnHeadPhoneOut;
    _Bool _bIsObservering;
    _Bool _bIsManualPaused;
    _Bool _isPendingPlay;
    _Bool _isPreparing;
    double _playbackRate;
    KSSongInfo *_curSong;
    id <KSAudioPlayerDelegate> _delegate;
    unsigned long long _status;
    double _cacheProgress;
    double _bufferTime;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    double _seekTime;
    double _resumeTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(nonatomic) _Bool isPendingPlay; // @synthesize isPendingPlay=_isPendingPlay;
@property(nonatomic) _Bool bIsManualPaused; // @synthesize bIsManualPaused=_bIsManualPaused;
@property(nonatomic) _Bool bIsObservering; // @synthesize bIsObservering=_bIsObservering;
@property(nonatomic) double resumeTime; // @synthesize resumeTime=_resumeTime;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double cacheProgress; // @synthesize cacheProgress=_cacheProgress;
@property(nonatomic) _Bool pauseOnHeadPhoneOut; // @synthesize pauseOnHeadPhoneOut=_pauseOnHeadPhoneOut;
@property(nonatomic) _Bool manualProcessInterrup; // @synthesize manualProcessInterrup=_manualProcessInterrup;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) KSSongInfo *curSong; // @synthesize curSong=_curSong;
- (void)onPlayerItemFailedToPlayToEndTime:(id)arg1;
- (void)onPlayerDidFinishPlaying;
- (void)removeObserver;
- (void)addObserver;
- (void)releasePlayer;
@property(nonatomic) float volume;
- (void)setStatus:(unsigned long long)arg1 error:(id)arg2 presetParams:(id)arg3;
- (void)setStatus:(unsigned long long)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) double playbackRate; // @synthesize playbackRate=_playbackRate;
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(readonly, nonatomic) unsigned int secondCacheCnt;
@property(readonly, nonatomic) double curTime;
@property(readonly, nonatomic) double duration;
- (unsigned long long)errType;
- (id)errDetail;
- (id)dataProviderDetail;
- (double)firstBufTime;
- (void)seek:(double)arg1;
- (void)resume;
- (void)pause;
- (void)internalStop;
- (void)stop;
- (_Bool)play:(id)arg1 seekTime:(double)arg2;
- (_Bool)play:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

