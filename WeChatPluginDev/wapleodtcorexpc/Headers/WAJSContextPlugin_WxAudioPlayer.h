//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, WAAppTask, WXAudioNative;
@protocol OS_dispatch_queue;

@interface WAJSContextPlugin_WxAudioPlayer
{
    _Bool _isNeedResumeWXMusic;
    _Bool _obeyMuteSwitch;
    _Bool _mixWithOthers;
    _Bool _speakerOn;
    _Bool _useWXAUDIO;
    _Bool _muteOnBg;
    _Bool _isAudioModuleActiveNow;
    _Bool _bInterruptNow;
    _Bool _bInterruptByInnerApp;
    _Bool _bInterruptBySystem;
    WXAudioNative *_wxaudionative;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_playBackDelegates;
    NSMutableSet *_playingAudioEngineSet;
    NSMutableDictionary *_sessionIdDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sessionIdDict; // @synthesize sessionIdDict=_sessionIdDict;
@property _Bool bInterruptBySystem; // @synthesize bInterruptBySystem=_bInterruptBySystem;
@property _Bool bInterruptByInnerApp; // @synthesize bInterruptByInnerApp=_bInterruptByInnerApp;
@property _Bool bInterruptNow; // @synthesize bInterruptNow=_bInterruptNow;
@property(retain, nonatomic) NSMutableSet *playingAudioEngineSet; // @synthesize playingAudioEngineSet=_playingAudioEngineSet;
@property _Bool isAudioModuleActiveNow; // @synthesize isAudioModuleActiveNow=_isAudioModuleActiveNow;
@property(retain, nonatomic) NSMutableDictionary *playBackDelegates; // @synthesize playBackDelegates=_playBackDelegates;
@property(nonatomic) _Bool muteOnBg; // @synthesize muteOnBg=_muteOnBg;
@property(nonatomic) _Bool useWXAUDIO; // @synthesize useWXAUDIO=_useWXAUDIO;
@property(nonatomic) _Bool speakerOn; // @synthesize speakerOn=_speakerOn;
@property(nonatomic) _Bool mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(readonly, nonatomic) WXAudioNative *wxaudionative; // @synthesize wxaudionative=_wxaudionative;
- (void)checkIfSendInterruptionEvent;
- (void)setJSContextOwner:(id)arg1;
- (void)innerAppAudioInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (id)getIdentifier;
- (void)setActiveAsync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mixList;
- (id)mixListForAudioModule:(id)arg1;
- (void)onCustomLoadingDestory:(id)arg1;
- (void)onCustomLoadingCreate:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onWXAudioState:(int)arg1 audioId:(unsigned long long)arg2;
- (void)canPlayNowAndAutoActive:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)shouldForceUseBuiltinMic;
- (void)onPcmOutputSessionId:(id)arg1 data:(char *)arg2 size:(unsigned int)arg3 channels:(unsigned int)arg4 samplerate:(unsigned int)arg5 fmt:(int)arg6;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)resumeMusicIfNeed:(_Bool)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (_Bool)existPlayerWaiting;
- (_Bool)existPlayerPlaying;
- (void)forcePauseAllPlayer:(_Bool)arg1;
- (void)forcePauseAllPlayer;
- (void)forceResumeAllPlayer;
- (void)activeAudioSession;
- (void)removeObserver;
- (void)addObserver;
@property(readonly, nonatomic) WAAppTask *task;
- (void)setPlayBackDelegate:(unsigned int)arg1 delegate:(id)arg2;
- (void)setInnerAudioSession:(_Bool)arg1 mixWithOthers:(_Bool)arg2 speakerOn:(_Bool)arg3;
- (_Bool)isPlayingAudio;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
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

