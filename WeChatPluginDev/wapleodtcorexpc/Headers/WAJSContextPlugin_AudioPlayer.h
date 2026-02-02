//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, WAAppTask, WANewUniversalAudioEngine;
@protocol IJSContextPluginDelegate, OS_dispatch_queue;

@interface WAJSContextPlugin_AudioPlayer
{
    struct ALCcontext_struct *_alcContext;
    _Bool _isNeedResumeWXMusic;
    _Bool _obeyMuteSwitch;
    _Bool _mixWithOthers;
    _Bool _speakerOn;
    _Bool _existPlayerPlayingOrWaiting;
    _Bool _existWxAudio;
    _Bool _isPhoneCalling;
    _Bool _isNeedSeekWhenPlay;
    _Bool _bStayPause;
    float _seekTime;
    id <IJSContextPluginDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_playerDic;
    NSMutableDictionary *_playBackDelegates;
    NSMutableArray *_needResumePlayerArr;
    WANewUniversalAudioEngine *_waAudioEngine;
    NSMutableArray *_arrPlay;
    NSMutableArray *_stayPausePlayers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stayPausePlayers; // @synthesize stayPausePlayers=_stayPausePlayers;
@property(nonatomic) _Bool bStayPause; // @synthesize bStayPause=_bStayPause;
@property(retain, nonatomic) NSMutableArray *arrPlay; // @synthesize arrPlay=_arrPlay;
@property(nonatomic) float seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) _Bool isNeedSeekWhenPlay; // @synthesize isNeedSeekWhenPlay=_isNeedSeekWhenPlay;
@property(retain, nonatomic) WANewUniversalAudioEngine *waAudioEngine; // @synthesize waAudioEngine=_waAudioEngine;
@property(nonatomic) _Bool isPhoneCalling; // @synthesize isPhoneCalling=_isPhoneCalling;
@property(nonatomic) _Bool existWxAudio; // @synthesize existWxAudio=_existWxAudio;
@property(nonatomic) _Bool existPlayerPlayingOrWaiting; // @synthesize existPlayerPlayingOrWaiting=_existPlayerPlayingOrWaiting;
@property(retain, nonatomic) NSMutableArray *needResumePlayerArr; // @synthesize needResumePlayerArr=_needResumePlayerArr;
@property(nonatomic) _Bool speakerOn; // @synthesize speakerOn=_speakerOn;
@property(nonatomic) _Bool mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(retain, nonatomic) NSMutableDictionary *playBackDelegates; // @synthesize playBackDelegates=_playBackDelegates;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)sendRealPlayEventIfNoErrWithAudioId:(id)arg1;
- (_Bool)shouldForceUseBuiltinMic;
- (void)handleEngineWhenVoIPStart;
- (void)handleEngineWhenWillResignActive;
- (void)handleEngineWhenEnterBackground;
- (void)handleEngineWhenServiceRelease;
- (void)handleCreateAudioEnginePlayer:(id)arg1;
- (void)handleSetAudioEnginePlayerState:(id)arg1 src:(id)arg2 url:(id)arg3 startTime:(double)arg4 autoPlay:(_Bool)arg5 loop:(_Bool)arg6 obeyMuteSwitch:(_Bool)arg7 volume:(double)arg8;
- (void)setPlayBackDelegate:(unsigned int)arg1 delegate:(id)arg2;
- (void)stopCapture;
- (void)startCapture;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)resumeMusicIfNeed:(_Bool)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)getIdentifierWith:(id)arg1;
- (void)asyncClearAudioCache;
- (void)resumeAudioContext;
- (void)recoverGameAppAudioSession;
- (void)forcePauseAllEnginePlayer;
- (void)resumePlayerIfNeed;
- (void)forcePauseAllPlayer:(_Bool)arg1;
- (void)activeAudioSession;
- (void)removeObserver;
- (void)addObserver;
@property(readonly, nonatomic) WAAppTask *task;
- (id)mixListForAudioModule:(id)arg1;
- (void)onCustomLoadingDestory:(id)arg1;
- (void)onCustomLoadingCreate:(id)arg1;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)onDownloadAudioData:(id)arg1 src:(id)arg2;
- (void)setCurrentContext;
- (void)onPlayerStateChange:(long long)arg1 audioId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (_Bool)isPlayingAudio;
- (double)getPlayerPlaybackRate:(id)arg1;
- (id)getPlayerWithAudioId:(id)arg1;
- (double)getPlayerVolume:(id)arg1;
- (double)getPlayerBufferTime:(id)arg1;
- (double)getPlayerStartTime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (double)getPlayerCurtime:(id)arg1;
- (double)getPlayerDuration:(id)arg1;
- (_Bool)isPlayerIdle:(id)arg1;
- (_Bool)isPlayerWaiting:(id)arg1;
- (_Bool)isPlayerPlaying:(id)arg1;
- (_Bool)isPlayerPaused:(id)arg1;
- (_Bool)isPlayerSet:(id)arg1;
- (void)destoryAudioEnginePlayer:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)stopAudioEnginePlayer:(id)arg1;
- (void)stopPlayer:(id)arg1;
- (void)seekAudioEnginePlayer:(id)arg1 seekTime:(float)arg2;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)pauseAudioEnginePlayer:(id)arg1;
- (void)pausePlayer:(id)arg1;
- (void)playAudioEnginePlayer:(id)arg1;
- (_Bool)playPlayer:(id)arg1 bResume:(_Bool)arg2;
- (_Bool)playPlayer:(id)arg1;
- (id)generateUrlFromSrc:(id)arg1 fileData:(id *)arg2;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 playbackRate:(double)arg8 referrerPolicyTypeStr:(id)arg9;
- (_Bool)setActive:(_Bool)arg1 audioId:(id)arg2;
- (_Bool)isAudioPlayerExist:(id)arg1;
- (id)createAudioInstance;
- (void)setInnerAudioSession:(_Bool)arg1 mixWithOthers:(_Bool)arg2 speakerOn:(_Bool)arg3;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (_Bool)checkIfExistWxAudio;
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

