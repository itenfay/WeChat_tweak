//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayerView, MVideoPlayerView, NSObject, NSString, SightRecoder;
@protocol SightPlayerViewDelegate;

@interface SightPlayerView : UIView
{
    NSString *m_path;
    _Bool m_isMute;
    AVPlayer *m_player;
    AVPlayerItem *m_playItem;
    int m_status;
    long long m_previewContentMode;
    long long m_avplayerContentMode;
    _Bool m_disableContentModeAnimation;
    _Bool m_disableResumeMusicPlayAfterPause;
    NSString *m_cpKey;
    _Bool m_isPlayerPause;
    _Bool m_isTryingProtect;
    struct timeval m_startProtectingTime;
    SightRecoder *m_sightRecoder;
    NSObject *m_oPlaybackTimeObserver;
    _Bool _isAnimating;
    _Bool _disablePlayerStatusTimerCheck;
    _Bool _neverHidePreview;
    _Bool _removeCrossFadeTransition;
    float _m_uiMaxLimitDuration;
    id <SightPlayerViewDelegate> m_delegate;
    unsigned long long _scene;
    long long _contentMode;
    NSString *_cpKey;
    AVPlayerLayerView *_playerLayerView;
    MVideoPlayerView *_m_preview;
    double _playRate;
    NSString *_recodedPath;
    NSString *_playerPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) NSString *recodedPath; // @synthesize recodedPath=_recodedPath;
@property(nonatomic) float m_uiMaxLimitDuration; // @synthesize m_uiMaxLimitDuration=_m_uiMaxLimitDuration;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(retain, nonatomic) MVideoPlayerView *m_preview; // @synthesize m_preview=_m_preview;
@property(retain, nonatomic) AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) _Bool removeCrossFadeTransition; // @synthesize removeCrossFadeTransition=_removeCrossFadeTransition;
@property(nonatomic) _Bool neverHidePreview; // @synthesize neverHidePreview=_neverHidePreview;
@property(nonatomic) _Bool disablePlayerStatusTimerCheck; // @synthesize disablePlayerStatusTimerCheck=_disablePlayerStatusTimerCheck;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) AVPlayerItem *playItem; // @synthesize playItem=m_playItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=m_player;
@property(nonatomic) _Bool disableResumeMusicPlayAfterPause; // @synthesize disableResumeMusicPlayAfterPause=m_disableResumeMusicPlayAfterPause;
@property(readonly, nonatomic) int status; // @synthesize status=m_status;
@property(nonatomic) __weak id <SightPlayerViewDelegate> delegate; // @synthesize delegate=m_delegate;
@property(readonly, nonatomic) _Bool isMute; // @synthesize isMute=m_isMute;
@property(retain, nonatomic) NSString *path; // @synthesize path=m_path;
- (id)makeNewTmpPath:(id)arg1 withSubfix:(id)arg2;
- (void)recodeSightWithCompletion:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitoringPlayback:(id)arg1;
- (int)getProtectType;
- (_Bool)isReEncode;
- (_Bool)isPlayProtect;
- (void)onResume;
- (void)willStack;
- (_Bool)performClear;
- (_Bool)performFullPlayWithMute:(_Bool)arg1;
- (_Bool)performFullPlay;
- (_Bool)performFullLoad;
- (void)silentPlayImmediately;
- (void)performSilentPlay;
- (void)performPauseForce:(_Bool)arg1;
- (void)performLoadItem:(id)arg1;
- (void)seekTo:(float)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)seekToStartFrame;
- (void)stopDownloadVideo;
- (unsigned long long)startDownloadVideo;
- (void)reportKVArgs:(id)arg1;
- (void)clearBufferCountAndPlayedTime;
- (void)savePlayedTimeToMemory;
- (_Bool)clear;
- (_Bool)fullPlayWithMute:(_Bool)arg1;
- (void)silentPlay;
- (void)clearPlayer;
- (void)pausePlayer;
- (void)startPlayer;
- (void)initPlayer;
- (void)setUnMute;
- (void)setMute;
- (void)pausePreview;
- (void)startPreview;
- (void)initPreview;
- (long long)getFullPlayContentMode;
- (long long)getSilentPlayContentMode;
- (void)setPlayerLayerContentMode:(long long)arg1 disableAnimation:(_Bool)arg2;
- (void)onPlayEnd;
- (void)startTransitionAnim;
- (void)itemPlayEnded:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

