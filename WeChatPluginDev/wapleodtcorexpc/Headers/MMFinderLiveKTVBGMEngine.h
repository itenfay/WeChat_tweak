//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BGMAudioInfo, MMLiveTask, MMLiveTaskId;
@protocol MMFinderLiveKTVBGMEngineDelegate;

@interface MMFinderLiveKTVBGMEngine : NSObject
{
    _Bool _isPlaying;
    _Bool _isStart;
    _Bool _isPlayToSingingEndPosition;
    _Bool _isEnd;
    _Bool _voiceEarEnable;
    _Bool _voiceEarUsable;
    _Bool _isBGMMuted;
    _Bool _isVoiceMuted;
    _Bool _isStartPlaySucc;
    int _volumeBGM;
    int _volumeVoice;
    int _pitchBGM;
    id <MMFinderLiveKTVBGMEngineDelegate> _logicDelegate;
    unsigned long long _lastAdjustTimestamp;
    MMLiveTaskId *_taskId;
    BGMAudioInfo *_bgmAudioInfo;
    long long _bgmChnlId;
    long long _audioRoute;
}

+ (double)preferVolumeVoiceRatio;
+ (double)preferVolumeBGMRatio;
+ (_Bool)checkVoiceEarUsabled:(long long)arg1;
+ (double)transferPitchValueToPitch:(int)arg1;
+ (void)notifyAudioRouteChanged:(long long)arg1 fromRoute:(long long)arg2;
+ (void)setVoiceEarMonitorEnabled:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isStartPlaySucc; // @synthesize isStartPlaySucc=_isStartPlaySucc;
@property(nonatomic) _Bool isVoiceMuted; // @synthesize isVoiceMuted=_isVoiceMuted;
@property(nonatomic) _Bool isBGMMuted; // @synthesize isBGMMuted=_isBGMMuted;
@property(nonatomic) long long audioRoute; // @synthesize audioRoute=_audioRoute;
@property(nonatomic) _Bool voiceEarUsable; // @synthesize voiceEarUsable=_voiceEarUsable;
@property(nonatomic) _Bool voiceEarEnable; // @synthesize voiceEarEnable=_voiceEarEnable;
@property(nonatomic) long long bgmChnlId; // @synthesize bgmChnlId=_bgmChnlId;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool isPlayToSingingEndPosition; // @synthesize isPlayToSingingEndPosition=_isPlayToSingingEndPosition;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
@property(nonatomic) int pitchBGM; // @synthesize pitchBGM=_pitchBGM;
@property(nonatomic) int volumeVoice; // @synthesize volumeVoice=_volumeVoice;
@property(nonatomic) int volumeBGM; // @synthesize volumeBGM=_volumeBGM;
@property(retain, nonatomic) BGMAudioInfo *bgmAudioInfo; // @synthesize bgmAudioInfo=_bgmAudioInfo;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned long long lastAdjustTimestamp; // @synthesize lastAdjustTimestamp=_lastAdjustTimestamp;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <MMFinderLiveKTVBGMEngineDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (int)volumeVoiceSum;
- (int)volumeBGMSum;
- (double)volumeVoiceRatio;
- (double)volumeBGMRatio;
- (double)autoEndDuration;
- (int)actualEarMonitorVolumeVoice;
@property(readonly, nonatomic) int actualVolumeVoice;
@property(readonly, nonatomic) int actualVolumeBGM;
- (id)audioSettingCache;
- (long long)currAudioRoute;
@property(readonly, nonatomic) MMLiveTask *liveTask;
- (void)cancelPlayResultAutoCheck;
- (void)autoCheckPlayResult;
- (void)finishPlayResultAutoCheck;
- (void)startPlayResultAutoCheck;
- (void)recoverAudioSetting:(id)arg1;
- (void)updateAudioRoute;
- (void)checkAudioRouteIsChanged;
- (id)getAudioMgrInternal;
- (id)currentLiveTask;
- (unsigned int)playStatus;
- (void)setVoiceEarMonitorVolume:(int)arg1;
- (void)updateVoiceEarUsable:(_Bool)arg1;
- (void)updateStateAfterStop;
- (void)updateStateAfterResume;
- (void)updateStateAfterPause;
- (void)endMusicPlay;
- (void)handlePlayMusicEnd:(long long)arg1 channel:(long long)arg2;
- (void)onPlayToSingEndPosition;
- (void)checkIsPlayToSingEndPosition:(long long)arg1;
- (void)handlePlayMusicProgress:(long long)arg1 allDuration:(long long)arg2 channel:(long long)arg3;
- (void)handlePlayMusicStart:(long long)arg1 channel:(long long)arg2;
- (void)resetBGMVolumnForMuteChanged;
- (void)clearPlayingState;
- (void)continueCurrSettings;
- (void)updateVoiceMute:(_Bool)arg1;
- (void)handleForAudioRouteChanged;
- (void)playBGM:(int)arg1 path:(id)arg2 isPublish:(_Bool)arg3 startBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (_Bool)isHeadHeadsetUsabled;
- (_Bool)isVoiceEarMonitorUsabled;
- (_Bool)isVoiceEarMonitorEnabled;
- (void)enableVoiceEarMonitor:(_Bool)arg1;
- (int)maxBgmPitch;
- (int)minBgmPitch;
- (int)bgmPitch;
- (void)setBgmPitch:(int)arg1;
- (int)humanVoiceAbsVomlue;
- (void)setHumanVoiceAbsVomlue:(int)arg1;
- (int)bgmAbsVomlue;
- (void)setBGMAbsVomlue:(int)arg1;
- (void)setMusicChannel:(long long)arg1 cache:(_Bool)arg2;
- (long long)getSettingMusicChannel;
- (long long)getMusicChannel;
- (void)updateBGMMute:(_Bool)arg1;
- (_Bool)finish;
- (_Bool)stop;
- (_Bool)resume;
- (_Bool)pause;
- (_Bool)start;
- (_Bool)prepareWithAudioInfo:(id)arg1;
- (void)dealloc;
- (void)configAudioParamCacheSettings;
- (void)initDefaultDatas;
- (id)initWithTaskId:(id)arg1;

@end

