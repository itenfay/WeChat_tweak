//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EditVideoBGMPlayer, NSString, RecommendedMusicInfo;
@protocol WCFinderBGMPlayerDelegate;

@interface WCFinderBGMPlayer : NSObject
{
    _Bool _isRegisterAudioModule;
    _Bool _loop;
    _Bool _isPlaying;
    _Bool _allowsExternalPlayback;
    _Bool _playOnSystemMutedState;
    _Bool _interruptedWhenAppResignActive;
    _Bool _autoStartWhenAudioModuleActiveFailed;
    _Bool _hasPerformPlay;
    _Bool _isRealPlaying;
    _Bool _registerBackgroundNotify;
    _Bool _interreptByEnterBackground;
    _Bool _needResumeWhenAudioModuleIdle;
    _Bool _needObserve;
    _Bool _lastStartActiveFail;
    id <WCFinderBGMPlayerDelegate> _delegate;
    RecommendedMusicInfo *_musicInfo;
    EditVideoBGMPlayer *_player;
    id _progressObserver;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool lastStartActiveFail; // @synthesize lastStartActiveFail=_lastStartActiveFail;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) id progressObserver; // @synthesize progressObserver=_progressObserver;
@property(nonatomic) _Bool needObserve; // @synthesize needObserve=_needObserve;
@property(nonatomic) _Bool needResumeWhenAudioModuleIdle; // @synthesize needResumeWhenAudioModuleIdle=_needResumeWhenAudioModuleIdle;
@property(nonatomic) _Bool interreptByEnterBackground; // @synthesize interreptByEnterBackground=_interreptByEnterBackground;
@property(nonatomic) _Bool registerBackgroundNotify; // @synthesize registerBackgroundNotify=_registerBackgroundNotify;
@property(nonatomic) _Bool isRealPlaying; // @synthesize isRealPlaying=_isRealPlaying;
@property(nonatomic) _Bool hasPerformPlay; // @synthesize hasPerformPlay=_hasPerformPlay;
@property(retain, nonatomic) EditVideoBGMPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool autoStartWhenAudioModuleActiveFailed; // @synthesize autoStartWhenAudioModuleActiveFailed=_autoStartWhenAudioModuleActiveFailed;
@property(nonatomic) _Bool interruptedWhenAppResignActive; // @synthesize interruptedWhenAppResignActive=_interruptedWhenAppResignActive;
@property(nonatomic) _Bool playOnSystemMutedState; // @synthesize playOnSystemMutedState=_playOnSystemMutedState;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain, nonatomic) RecommendedMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <WCFinderBGMPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) _Bool isRegisterAudioModule; // @synthesize isRegisterAudioModule=_isRegisterAudioModule;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)releaseAudioModuleRegisterDuty;
- (void)deactive;
- (_Bool)tryActive;
- (void)onProgressChanged:(double)arg1;
- (void)_observePlayerProgress;
@property(readonly, nonatomic) double currentTime;
- (void)seek:(double)arg1;
- (void)_pause;
- (void)pause;
- (_Bool)_resume;
- (_Bool)resume;
- (void)stop;
- (_Bool)start;
- (void)mute:(_Bool)arg1;
- (id)audioIdentifier;
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

