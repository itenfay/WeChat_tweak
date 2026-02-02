//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMLiveMusicDataItem, NSString, TXAudioEffectManager;
@protocol MMLiveMusicPlayLogicDelegate;

@interface MMLiveMusicPlayLogic : NSObject
{
    _Bool _isPlaying;
    _Bool _hasCreatedTXAudioEffectMgr;
    int _volumn;
    id <MMLiveMusicPlayLogicDelegate> _logicDelegate;
    unsigned long long _lastAdjustTimestamp;
    MMLiveMusicDataItem *_currentMusicItem;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _lastSyncVolumeTime;
    TXAudioEffectManager *_audioEffectMgr;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TXAudioEffectManager *audioEffectMgr; // @synthesize audioEffectMgr=_audioEffectMgr;
@property(nonatomic) _Bool hasCreatedTXAudioEffectMgr; // @synthesize hasCreatedTXAudioEffectMgr=_hasCreatedTXAudioEffectMgr;
@property(nonatomic) unsigned long long lastSyncVolumeTime; // @synthesize lastSyncVolumeTime=_lastSyncVolumeTime;
@property(nonatomic) int volumn; // @synthesize volumn=_volumn;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveMusicDataItem *currentMusicItem; // @synthesize currentMusicItem=_currentMusicItem;
@property(nonatomic) unsigned long long lastAdjustTimestamp; // @synthesize lastAdjustTimestamp=_lastAdjustTimestamp;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <MMLiveMusicPlayLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)onMMLiveFinishedForNotifyOuter;
- (id)getAudioMgrInternal;
- (void)resumePlayMusic:(id)arg1;
- (void)pausePlayMusic:(id)arg1;
- (void)stopPlayMusic:(id)arg1;
- (void)internalPlayMusic:(id)arg1 publish:(_Bool)arg2 startBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)playMusic:(id)arg1 publish:(_Bool)arg2 startBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)clearPlayingState;
- (void)handlePlayMusicItem:(id)arg1 completed:(long long)arg2;
- (void)handlePlayMusicItem:(id)arg1 progress:(long long)arg2 allDuration:(long long)arg3;
- (void)handlePlayMusicItem:(id)arg1 started:(long long)arg2;
- (void)handlePlayMusicItemWillStart:(id)arg1;
- (unsigned int)playStatus;
- (_Bool)requirmentToUpdateVolume:(int)arg1;
- (_Bool)requirmentToUpdateStatus:(unsigned int)arg1;
- (_Bool)requirmentToUpdateSong:(id)arg1;
- (_Bool)checkIfRequiredUpdateWithSongOptVersion:(unsigned long long)arg1;
- (void)syncBGMOnStartWithsuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)syncBGMWithsuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 action:(int)arg3;
- (void)setCurrentMusicAllVolumnWithoutSync:(int)arg1;
- (void)setCurrentMusicAllVolumn:(int)arg1 forceUpdate:(_Bool)arg2;
- (void)setCurrentMusicAllVolumn:(int)arg1;
- (void)updateStateAfterResume;
- (void)resumePlayCurrentMusic;
- (id)currentLiveTask;
- (void)updateStateAfterPause;
- (void)pausePlayCurrentMusic;
- (void)syncBGMInfoForMiniGame:(_Bool)arg1;
- (void)stopPlayCurrentMusic;
- (void)updateStateBeforePlayWithItem:(id)arg1;
- (void)playMusic:(id)arg1 isPublish:(_Bool)arg2;
- (void)playMusic:(id)arg1;
- (void)dealloc;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

