//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KSSongInfo, NSMutableDictionary, NSString;
@protocol KSAudioPlayerProtocol;

@interface MMKSMusicPlayer
{
    id <KSAudioPlayerProtocol> m_audioPlayer;
    _Bool m_isQQMusicWifiPlay;
    _Bool m_isCyclePlay;
    NSString *m_clientInfo;
    _Bool m_isQQMusicPlay;
    _Bool m_isPlayerResuming;
    _Bool m_shouldRecevingRemoteControl;
    unsigned long long m_skippingMusicCount;
    KSSongInfo *m_curSongInfo;
    unsigned long long m_state;
    _Bool _useCronetDownloader;
    _Bool _isInBackground;
    CDUnknownBlockType _cacheCleanHandlerWithCacheId;
    NSMutableDictionary *_referrerDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *referrerDict; // @synthesize referrerDict=_referrerDict;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) _Bool useCronetDownloader; // @synthesize useCronetDownloader=_useCronetDownloader;
@property(copy, nonatomic) CDUnknownBlockType cacheCleanHandlerWithCacheId; // @synthesize cacheCleanHandlerWithCacheId=_cacheCleanHandlerWithCacheId;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (_Bool)canResumeWhenInterruptionEnd;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (_Bool)isAudioMonoServiceWorkingInCurrentAppScene;
- (void)reportHLSPlayFailEvent;
- (void)reportDownloadFailed;
- (void)reportPlaySystemError;
- (void)reportPlayFileError;
- (void)reportPlayerErrStop;
- (void)reportHLSPlayEvent;
- (void)reportPlayEvent;
- (id)bcdStringFromUrl_WechatMusicUrl:(id)arg1;
- (id)bcdStringFromUrl_QQMusic:(id)arg1;
- (id)bcdStringHanding:(id)arg1;
- (unsigned long long)playerStateByInnerStatus:(unsigned long long)arg1 params:(id)arg2;
- (void)handleState:(unsigned long long)arg1;
- (void)setPlayerState:(unsigned long long)arg1 errInfo:(id)arg2;
- (id)limitNetParam;
- (unsigned int)downloadRetryCnt;
- (id)createAudioDownloader;
- (_Bool)isNetOk;
- (void)delayEndRecevingRemoteControl;
- (void)endRecevingRemoteControl;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
@property(nonatomic) float volume;
- (void)cleanUpCache;
- (id)getReferrerWithUrlStr:(id)arg1;
- (double)getCurrentPlaybackRate;
- (double)getBufferTime;
- (double)getBufferProgress;
- (double)getDuration;
- (double)getCurTime;
- (_Bool)isQQMusicWifiPlay;
- (_Bool)isMusicCachedForId:(id)arg1;
- (_Bool)isMusicCachedForUrl:(id)arg1;
- (unsigned long long)innerState;
- (unsigned long long)state;
- (_Bool)isResuming;
- (_Bool)isIdle;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isWaiting;
- (void)resume;
- (_Bool)pausePlayAndDownloadData;
- (_Bool)pause;
- (void)seekToTime:(double)arg1 playAuto:(_Bool)arg2;
- (void)forceStopMusic;
- (void)stop;
- (void)configPlayerWithPlaybackRate:(double)arg1;
- (void)configPlayerWithIsHLS:(_Bool)arg1;
- (void)playWithMusicTask:(id)arg1;
- (void)ignoreCurrentMusicItem;
- (void)destroyStreamer;
- (void)dealloc;
- (void)onServiceInit;
- (id)cachePathForMusicFromUrl:(id)arg1;
- (id)getUrlPathExt:(id)arg1;
- (id)hashForUrl:(id)arg1;
- (id)cacheRootPath;
- (id)createUserAudioProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

